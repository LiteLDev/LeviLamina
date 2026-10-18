#!/usr/bin/env node
// URL parity between the live site and a local build: every URL that exists today must still answer
// 200 — with zero redirects — on the new build.
//
//   node url-parity.mjs --live https://docs.levimc.org/LeviLamina/ --local http://127.0.0.1:4173/LeviLamina/
//        [--paths a/,b/c/ | --paths-file list.txt] [--extra https://docs.levimc.org/LeviLamina/x/ ...]
//        [--no-sitemap] [--max 1500] [--anchors] [--json report.json]
//
// --anchors also compares the heading ids of every page (old deep links like page/#some-heading must keep
// working): ids present on the live page but missing locally are failures.
// URL sources: <live>sitemap.xml (falls back to crawling same-site links from the live root, capped by
// --max), plus --paths/--paths-file (relative to the live base) and --extra absolute URLs. Live pages are
// fetched with curl (honours HTTP(S)_PROXY); local URLs are requested without following redirects.
import { readFileSync, writeFileSync } from 'node:fs';
import { spawn } from 'node:child_process';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const many = (n) => args.flatMap((a, i) => (args[i - 1] === n ? a.split(',') : []));
const live = opt('--live');
const local = opt('--local');
if (!live || !local) {
  console.error('Usage: node url-parity.mjs --live <https://site/base/> --local <http://127.0.0.1:PORT/base/> [--paths a/,b/] [--paths-file f] [--extra url] [--max 1500] [--json out]');
  process.exit(2);
}
const liveBase = live.endsWith('/') ? live : live + '/';
const localBase = local.endsWith('/') ? local : local + '/';
const max = Number(opt('--max', '1500'));

function curl(url, { body = false } = {}) {
  return new Promise((res) => {
    const a = ['-sS', '--max-time', '30', '-A', 'Mozilla/5.0 (levimc-kit url-parity)', '-w', '\n%{http_code} %{redirect_url}'];
    if (!body) a.push('-o', '/dev/null');
    const p = spawn('curl', [...a, url]);
    const chunks = [];
    p.stdout.on('data', (d) => chunks.push(d));
    p.on('close', () => {
      // decode once: multi-byte UTF-8 characters may straddle chunk boundaries
      const out = Buffer.concat(chunks).toString('utf8');
      const nl = out.lastIndexOf('\n');
      const [code, ...rest] = out.slice(nl + 1).trim().split(' ');
      res({ status: Number(code) || 0, location: rest.join(' ') || null, body: body ? out.slice(0, nl) : '' });
    });
  });
}

const urls = new Set();
let source = 'none';
if (!args.includes('--no-sitemap')) {
  const sm = await curl(liveBase + 'sitemap.xml', { body: true });
  if (sm.status === 200 && sm.body.includes('<loc>')) {
    for (const m of sm.body.matchAll(/<loc>\s*([^<\s]+)\s*<\/loc>/g)) if (m[1].startsWith(liveBase)) urls.add(m[1]);
    for (const m of sm.body.matchAll(/hreflang="[^"]+"\s+href="([^"]+)"/g)) if (m[1].startsWith(liveBase)) urls.add(m[1]);
    source = 'sitemap';
  } else {
    // crawl
    source = 'crawl';
    const queue = [liveBase];
    const seen = new Set(queue);
    while (queue.length && urls.size < max) {
      const u = queue.shift();
      const r = await curl(u, { body: true });
      if (r.status !== 200) continue;
      urls.add(u);
      for (const m of r.body.matchAll(/href="([^"#?]+)/g)) {
        let next;
        try {
          next = new URL(m[1].replace(/&amp;/g, '&'), u).href;
        } catch {
          continue;
        }
        if (!next.startsWith(liveBase) || seen.has(next)) continue;
        if (/\.(png|jpe?g|gif|svg|ico|css|js|json|xml|txt|zip|woff2?|webp|pdf)$/i.test(next)) continue;
        seen.add(next);
        queue.push(next);
      }
    }
  }
}
for (const p of many('--paths')) urls.add(liveBase + p.replace(/^\//, ''));
const pf = opt('--paths-file');
if (pf) for (const line of readFileSync(pf, 'utf8').split('\n')) if (line.trim()) urls.add(liveBase + line.trim().replace(/^\//, ''));
for (const e of many('--extra')) urls.add(e);

const headingIds = (html) => {
  const start = ['<article', 'class="vp-doc', 'data-doc-content'].map((m) => html.indexOf(m)).filter((i) => i >= 0)[0] ?? 0;
  return [...html.slice(start).matchAll(/<h[1-6][^>]*\sid="([^"]+)"/g)].map((m) => m[1]).filter((id) => id !== 'footnote-label' && id !== '__comments');
};
const anchors = args.includes('--anchors');
const results = [];
for (const u of [...urls].slice(0, max).sort()) {
  const loc = localBase + u.slice(liveBase.length);
  let status = 0;
  let location = null;
  let body = '';
  try {
    const r = await fetch(loc, { redirect: 'manual' });
    status = r.status;
    location = r.headers.get('location');
    if (anchors && status === 200) body = await r.text();
  } catch (e) {
    status = 0;
    location = String(e);
  }
  let missingAnchors = [];
  if (anchors && status === 200) {
    const liveHtml = (await curl(u, { body: true })).body;
    const have = new Set(headingIds(body));
    missingAnchors = headingIds(liveHtml).filter((id) => !have.has(id));
  }
  results.push({ live: u, local: loc, status, location, missingAnchors, ok: status === 200 && !missingAnchors.length });
}
const failed = results.filter((r) => !r.ok);
const report = { live: liveBase, local: localBase, source, total: results.length, ok: results.length - failed.length, failed };
const out = opt('--json');
if (out) writeFileSync(out, JSON.stringify({ ...report, results }, null, 2));
console.log(`url-parity: ${results.length} live URLs (${source}${many('--paths').length || pf ? ' + paths' : ''}) → ${report.ok} OK (200, no redirect), ${failed.length} failing`);
for (const f of failed.slice(0, 80))
  console.log(`  ${f.status}${f.location ? ` → ${f.location}` : ''}  ${f.local}${f.missingAnchors?.length ? `  missing #${f.missingAnchors.slice(0, 6).join(' #')}` : ''}`);
if (anchors) console.log(`  heading anchors compared on ${results.filter((r) => r.status === 200).length} pages`);
if (failed.length) process.exitCode = 1;
