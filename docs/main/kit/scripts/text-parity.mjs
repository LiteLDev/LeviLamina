#!/usr/bin/env node
// Text parity: proves the new renderer reproduces the live page text. For each page, extracts the text of
// the main content on both sides with Playwright (handles JS-rendered pages), strips UI chrome (permalink
// glyphs, line-number gutters, copy buttons, code title bars, tab label bars, footnote back-links),
// normalises whitespace and runs a word-level diff (CJK is compared per character).
//
//   node text-parity.mjs --live https://docs.levimc.org/LeviLamina/ --local http://127.0.0.1:4173/Demo/
//        [--paths a/,b/ | --paths-file list.txt] [--live-selector 'article.md-content__inner' | '.vp-doc']
//        [--local-selector '[data-doc-content]'] [--json report.json] [--max-hunks 12]
//
// A path may map different URLs on both sides with "=>": --paths daemon/overview.html=>daemon/overview/
//
// Without --paths the live sitemap.xml is used. Requires Playwright (resolved from $LEVIMC_PW_DIR or the
// app's node_modules).
import { createRequire } from 'node:module';
import { readFileSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const many = (n) => args.flatMap((a, i) => (args[i - 1] === n ? a.split(',') : []));
const live = opt('--live');
const local = opt('--local');
if (!live || !local) {
  console.error("Usage: node text-parity.mjs --live <url> --local <url> [--paths a/,b/] [--paths-file f] [--live-selector s] [--local-selector s] [--json out]");
  process.exit(2);
}
const liveBase = live.endsWith('/') ? live : live + '/';
const localBase = local.endsWith('/') ? local : local + '/';
const maxHunks = Number(opt('--max-hunks', '12'));

const require = createRequire(process.env.LEVIMC_PW_DIR ? process.env.LEVIMC_PW_DIR + '/' : import.meta.url);
const { chromium } = require('playwright');

let paths = [...many('--paths')];
const pf = opt('--paths-file');
if (pf) paths.push(...readFileSync(pf, 'utf8').split('\n').map((s) => s.trim()).filter(Boolean));
if (!paths.length) {
  const r = spawnSync('curl', ['-sS', '--max-time', '30', liveBase + 'sitemap.xml'], { encoding: 'utf8' });
  for (const m of (r.stdout || '').matchAll(/<loc>\s*([^<\s]+)\s*<\/loc>/g)) if (m[1].startsWith(liveBase)) paths.push(m[1].slice(liveBase.length));
}
paths = [...new Set(paths.map((p) => p.replace(/^\//, '')))];

// Elements that are UI chrome, not content (MkDocs Material, VitePress, levimc-kit).
const STRIP = [
  'script',
  'style',
  'noscript',
  'template',
  'svg',
  'button',
  'input',
  // MkDocs Material
  '.headerlink',
  'td.linenos',
  '.linenodiv',
  '.linenos',
  '.md-clipboard',
  'th.filename',
  '.highlighttable th',
  '.tabbed-labels',
  '.footnote-backref',
  '.md-source-file',
  '.md-content__button',
  '.md-tags',
  // VitePress
  '.header-anchor',
  'span.lang',
  '.line-numbers-wrapper',
  '.vp-code-group .tabs',
  '.vp-doc .copy',
  // levimc-kit
  '.kit-anchor',
  '.kit-code-head',
  '.kit-tabs-bar',
  '[data-footnote-backref]',
  '.footnotes > h2',
  'section[data-footnotes] > h2',
  '.kit-sr-only',
  '.sr-only',
];

function extract({ sel, strip }) {
  const root = document.querySelector(sel);
  if (!root) return null;
  const clone = root.cloneNode(true);
  for (const s of strip) clone.querySelectorAll(s).forEach((n) => n.remove());
  const BLOCK = new Set(
    'address article aside blockquote details dialog dd div dl dt fieldset figcaption figure footer form h1 h2 h3 h4 h5 h6 header hr li main nav ol p pre section summary table tbody thead tfoot tr td th ul'.split(' '),
  );
  let out = '';
  const walk = (n) => {
    if (n.nodeType === 3) {
      out += n.nodeValue;
      return;
    }
    if (n.nodeType !== 1) return;
    const tag = n.tagName.toLowerCase();
    if (tag === 'br') {
      out += '\n';
      return;
    }
    const block = BLOCK.has(tag);
    if (block) out += '\n';
    for (const c of n.childNodes) walk(c);
    if (block) out += '\n';
  };
  walk(clone);
  return out;
}

const CJK = /[\p{Script=Han}\p{Script=Hiragana}\p{Script=Katakana}\p{Script=Hangul}　-〿＀-￯]/u;
function tokens(text) {
  const out = [];
  for (const w of text.replace(/[​­]/g, '').split(/\s+/)) {
    if (!w) continue;
    if (!CJK.test(w)) {
      out.push(w);
      continue;
    }
    let buf = '';
    for (const ch of w) {
      if (CJK.test(ch)) {
        if (buf) out.push(buf);
        buf = '';
        out.push(ch);
      } else buf += ch;
    }
    if (buf) out.push(buf);
  }
  return out;
}

/** Myers O(ND) diff → list of ['=', '-', '+', token]. */
function diff(a, b) {
  const n = a.length;
  const m = b.length;
  const max = n + m;
  const v = new Int32Array(2 * max + 2);
  const trace = [];
  const off = max + 1;
  const cap = Math.min(max, 4000);
  outer: for (let d = 0; d <= cap; d++) {
    if (d === cap) return null; // too different for an edit script
    trace.push(v.slice());
    for (let k = -d; k <= d; k += 2) {
      let x = k === -d || (k !== d && v[off + k - 1] < v[off + k + 1]) ? v[off + k + 1] : v[off + k - 1] + 1;
      let y = x - k;
      while (x < n && y < m && a[x] === b[y]) {
        x++;
        y++;
      }
      v[off + k] = x;
      if (x >= n && y >= m) break outer;
    }
  }
  const ops = [];
  let x = n;
  let y = m;
  for (let d = trace.length - 1; d >= 0; d--) {
    const vv = trace[d];
    const k = x - y;
    const prevK = k === -d || (k !== d && vv[off + k - 1] < vv[off + k + 1]) ? k + 1 : k - 1;
    const px = vv[off + prevK];
    const py = px - prevK;
    while (x > px && y > py) {
      ops.push(['=', a[x - 1]]);
      x--;
      y--;
    }
    if (d > 0) {
      if (x === px) ops.push(['+', b[y - 1]]);
      else ops.push(['-', a[x - 1]]);
    }
    x = px;
    y = py;
  }
  return ops.reverse();
}

function hunks(ops) {
  const out = [];
  let i = 0;
  while (i < ops.length) {
    if (ops[i][0] === '=') {
      i++;
      continue;
    }
    const start = i;
    const del = [];
    const add = [];
    while (i < ops.length && ops[i][0] !== '=') {
      (ops[i][0] === '-' ? del : add).push(ops[i][1]);
      i++;
    }
    const ctxBefore = ops
      .slice(Math.max(0, start - 6), start)
      .map((o) => o[1])
      .join(' ');
    const ctxAfter = ops
      .slice(i, i + 6)
      .filter((o) => o[0] === '=')
      .map((o) => o[1])
      .join(' ');
    out.push({ live: del.join(' '), local: add.join(' '), context: `${ctxBefore} ▮ ${ctxAfter}` });
  }
  return out;
}

const browser = await chromium.launch({ proxy: { server: process.env.HTTPS_PROXY || process.env.https_proxy || 'http://127.0.0.1:1080', bypass: 'localhost,127.0.0.1' } });
const ctx = await browser.newContext({ viewport: { width: 1280, height: 900 } });
async function grab(url, selectors) {
  const page = await ctx.newPage();
  try {
    const res = await page.goto(url, { waitUntil: 'load', timeout: 60000 });
    await page.waitForTimeout(400);
    for (const sel of selectors) {
      const t = await page.evaluate(extract, { sel, strip: STRIP });
      if (t !== null) return { status: res?.status() ?? 0, text: t, selector: sel };
    }
    return { status: res?.status() ?? 0, text: null, selector: null };
  } finally {
    await page.close();
  }
}

const liveSel = opt('--live-selector') ? [opt('--live-selector')] : ['article.md-content__inner', '.vp-doc', 'main article', 'main'];
const localSel = opt('--local-selector') ? [opt('--local-selector')] : ['[data-doc-content]'];
const pages = [];
for (const p of paths) {
  const [lp, np = lp] = p.split('=>');
  const L = await grab(liveBase + lp, liveSel);
  const N = await grab(localBase + np, localSel);
  const a = tokens(L.text ?? '');
  const b = tokens(N.text ?? '');
  let ops = diff(a, b);
  if (!ops) {
    // fall back to a bag-of-words comparison
    const bag = new Map();
    for (const t of a) bag.set(t, (bag.get(t) ?? 0) + 1);
    ops = [];
    for (const t of b) {
      if ((bag.get(t) ?? 0) > 0) {
        bag.set(t, bag.get(t) - 1);
        ops.push(['=', t]);
      } else ops.push(['+', t]);
    }
    for (const [t, c] of bag) for (let i = 0; i < c; i++) ops.push(['-', t]);
  }
  const eq = ops.filter((o) => o[0] === '=').length;
  const removed = ops.filter((o) => o[0] === '-').length;
  const added = ops.filter((o) => o[0] === '+').length;
  const sim = a.length + b.length ? (2 * eq) / (a.length + b.length) : 1;
  const hs = hunks(ops);
  pages.push({ path: p, liveStatus: L.status, localStatus: N.status, liveWords: a.length, localWords: b.length, equal: eq, removed, added, similarity: Number(sim.toFixed(5)), hunks: hs });
  console.log(
    `${(sim * 100).toFixed(2).padStart(6)}%  ${String(a.length).padStart(5)} live / ${String(b.length).padStart(5)} local words  −${removed} +${added}  ${p}${L.text === null ? '  [live content not found]' : ''}${N.text === null ? '  [local content not found]' : ''}`,
  );
  for (const hk of hs.slice(0, maxHunks)) console.log(`         − ${hk.live || '∅'}\n         + ${hk.local || '∅'}\n           ↳ ${hk.context.slice(0, 160)}`);
  if (hs.length > maxHunks) console.log(`         … ${hs.length - maxHunks} more hunks`);
}
await browser.close();

const tot = pages.reduce((s, p) => ({ live: s.live + p.liveWords, local: s.local + p.localWords, eq: s.eq + p.equal, rm: s.rm + p.removed, add: s.add + p.added }), { live: 0, local: 0, eq: 0, rm: 0, add: 0 });
const overall = tot.live + tot.local ? (2 * tot.eq) / (tot.live + tot.local) : 1;
const summary = { pages: pages.length, liveWords: tot.live, localWords: tot.local, equalWords: tot.eq, removed: tot.rm, added: tot.add, similarity: Number(overall.toFixed(5)), identicalPages: pages.filter((p) => p.removed + p.added === 0).length };
console.log(`\ntext-parity: ${summary.pages} pages, ${summary.identicalPages} identical; words live ${tot.live} / local ${tot.local}; −${tot.rm} +${tot.add}; similarity ${(overall * 100).toFixed(3)}%`);
const out = opt('--json');
if (out) writeFileSync(out, JSON.stringify({ live: liveBase, local: localBase, summary, pages }, null, 2));
