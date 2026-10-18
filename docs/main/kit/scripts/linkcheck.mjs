#!/usr/bin/env node
// Link checker for a built static site, with GitHub Pages semantics.
//
//   node linkcheck.mjs <dist> --base /<Project>/ --site-origin https://docs.levimc.org
//        [--external] [--allow-redirect-hosts aka.ms,discord.gg,qm.qq.com]
//        [--ignore-paths /LeviLamina/api/,/other/] [--json report.json] [--concurrency 8] [--quiet]
//
// Internal links (relative, root-relative and absolute links to <site-origin><base>) are resolved against
// the dist folder exactly like GitHub Pages serves it (see serve-pages.mjs): broken targets, targets that
// only work through a redirect (e.g. missing trailing slash) and missing #anchors are errors.
// With --external every external URL is fetched once with curl (honours HTTP(S)_PROXY), following
// redirects manually; redirects are reported unless the URL ends in /releases/latest or the host is
// allow-listed. Exit code is 1 when there are internal errors (external problems are reported only,
// unless --strict-external).
import { readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, relative, resolve, sep } from 'node:path';
import { spawn } from 'node:child_process';
import { pathToFileURL } from 'node:url';
import { resolvePagesPath } from './serve-pages.mjs';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const flag = (n) => args.includes(n);
const VALUE_OPTS = new Set(['--base', '--site-origin', '--allow-redirect-hosts', '--ignore-paths', '--json', '--concurrency']);
const positional = args.filter((a, i) => !a.startsWith('--') && !VALUE_OPTS.has(args[i - 1]));
const dist = resolve(positional[0] ?? 'dist');
let base = opt('--base', '/');
if (!base.startsWith('/')) base = '/' + base;
if (!base.endsWith('/')) base += '/';
const origin = (opt('--site-origin', '') || '').replace(/\/$/, '');
const allowHosts = (opt('--allow-redirect-hosts', 'aka.ms,discord.gg,qm.qq.com,t.me,x.com,twitter.com,youtu.be,bit.ly,go.microsoft.com') || '')
  .split(',')
  .map((s) => s.trim().toLowerCase())
  .filter(Boolean);
const ignorePaths = (opt('--ignore-paths', '') || '').split(',').filter(Boolean);
const quiet = flag('--quiet');
const concurrency = Number(opt('--concurrency', '8'));

// ------------------------------------------------------------------------------------------ html parsing
function walk(dir, out = []) {
  for (const n of readdirSync(dir)) {
    const p = join(dir, n);
    if (statSync(p).isDirectory()) walk(p, out);
    else if (n.endsWith('.html')) out.push(p);
  }
  return out;
}
const ENT = { amp: '&', lt: '<', gt: '>', quot: '"', apos: "'", '#39': "'", nbsp: ' ' };
const decodeEntities = (s) =>
  s.replace(/&(#x[0-9a-f]+|#\d+|[a-z]+\d*);/gi, (m, e) => {
    if (e[0] === '#') return String.fromCodePoint(e[1] === 'x' || e[1] === 'X' ? parseInt(e.slice(2), 16) : Number(e.slice(1)));
    return ENT[e.toLowerCase()] ?? m;
  });
const ATTR = /([^\s=/>"']+)\s*(?:=\s*("([^"]*)"|'([^']*)'|([^\s>]+)))?/g;
function parseAttrs(s) {
  const a = {};
  for (const m of s.matchAll(ATTR)) a[m[1].toLowerCase()] = decodeEntities(m[3] ?? m[4] ?? m[5] ?? '');
  return a;
}
function scanHtml(html) {
  // drop comments and inline script/style bodies (keep the opening tags for src attributes)
  const clean = html.replace(/<!--[\s\S]*?-->/g, '').replace(/(<(script|style)\b[^>]*>)[\s\S]*?<\/\2>/gi, '$1');
  const links = [];
  const ids = new Set();
  for (const m of clean.matchAll(/<([a-zA-Z][a-zA-Z0-9-]*)\b([^>]*)>/g)) {
    const tag = m[1].toLowerCase();
    const attrs = parseAttrs(m[2]);
    if (attrs.id) ids.add(attrs.id);
    if (tag === 'a' && attrs.name) ids.add(attrs.name);
    const push = (attr, url) => url !== undefined && url !== '' && links.push({ tag, attr, url, rel: attrs.rel ?? '' });
    if (tag === 'a' || tag === 'area') push('href', attrs.href);
    else if (tag === 'link') {
      // resource hints are not navigable URLs
      if (!/\b(preconnect|dns-prefetch)\b/i.test(attrs.rel ?? '')) push('href', attrs.href);
    }
    else if (['img', 'script', 'iframe', 'source', 'video', 'audio', 'track', 'embed'].includes(tag)) {
      push('src', attrs.src);
      if (attrs.srcset) for (const part of attrs.srcset.split(',')) push('srcset', part.trim().split(/\s+/)[0]);
      if (tag === 'video') push('poster', attrs.poster);
    } else if (tag === 'meta' && /^(og:url|og:image|twitter:image)$/.test(attrs.property ?? attrs.name ?? '')) push('content', attrs.content);
  }
  return { links, ids };
}

// ------------------------------------------------------------------------------------------ internal
const files = walk(dist);
const pageUrlOf = (file) => {
  const rel = relative(dist, file).split(sep).join('/');
  return base + rel.replace(/(^|\/)index\.html$/, '$1');
};
const idCache = new Map();
const idsOf = (file) => {
  if (!idCache.has(file)) idCache.set(file, scanHtml(readFileSync(file, 'utf8')).ids);
  return idCache.get(file);
};

const internal = { checked: 0, broken: [], redirects: [], anchors: [], ignored: 0 };
const external = new Map(); // url → [{ page, url }]
const SKIP_SCHEMES = /^(mailto|tel|javascript|data|blob|about|sms|irc|ftp):/i;

for (const file of files) {
  const html = readFileSync(file, 'utf8');
  const { links } = scanHtml(html);
  const pageRel = relative(dist, file).split(sep).join('/');
  const pagePath = pageRel === '404.html' ? base : pageUrlOf(file);
  const pageUrl = new URL(pagePath, 'http://site.invalid');
  for (const l of links) {
    const raw = l.url.trim();
    if (SKIP_SCHEMES.test(raw) || raw.startsWith('#') && raw.length === 1) continue;
    if (/^#:~:/.test(raw)) continue;
    let u;
    try {
      u = new URL(raw, pageUrl);
    } catch {
      internal.broken.push({ page: pageRel, url: raw, reason: 'invalid URL' });
      continue;
    }
    const isOwn = u.origin === 'http://site.invalid' || (origin && u.origin === origin);
    if (!isOwn || !u.pathname.startsWith(base) || ignorePaths.some((p) => u.pathname.startsWith(p))) {
      if (isOwn && ignorePaths.some((p) => u.pathname.startsWith(p))) {
        internal.ignored++;
        continue;
      }
      const ext = u.origin === 'http://site.invalid' ? (origin ? origin + u.pathname + u.search + u.hash : null) : u.href;
      if (!ext) continue;
      if (!external.has(ext.split('#')[0])) external.set(ext.split('#')[0], []);
      external.get(ext.split('#')[0]).push({ page: pageRel, url: raw });
      continue;
    }
    internal.checked++;
    const r = resolvePagesPath(dist, base, u.pathname);
    if (r.status === 301) {
      internal.redirects.push({ page: pageRel, url: raw, location: r.location });
      continue;
    }
    if (r.status !== 200) {
      internal.broken.push({ page: pageRel, url: raw, reason: `404 (${u.pathname})` });
      continue;
    }
    if (u.hash && u.hash.length > 1 && r.file.endsWith('.html') && l.tag !== 'link') {
      let id = u.hash.slice(1);
      try {
        id = decodeURIComponent(id);
      } catch {
        /* keep */
      }
      if (!idsOf(r.file).has(id)) internal.anchors.push({ page: pageRel, url: raw, anchor: id });
    }
  }
}

// ------------------------------------------------------------------------------------------ external
function curl(url) {
  return new Promise((res) => {
    const p = spawn('curl', ['-sS', '-o', '/dev/null', '--max-time', '25', '-A', 'Mozilla/5.0 (levimc-kit linkcheck)', '-w', '%{http_code} %{redirect_url}', url]);
    let out = '';
    let err = '';
    p.stdout.on('data', (d) => (out += d));
    p.stderr.on('data', (d) => (err += d));
    p.on('close', () => {
      const [code, ...rest] = out.trim().split(' ');
      res({ status: Number(code) || 0, location: rest.join(' ') || null, error: err.trim() || null });
    });
  });
}
async function checkExternal(url) {
  const hops = [];
  let cur = url;
  for (let i = 0; i < 10; i++) {
    const r = await curl(cur);
    hops.push({ url: cur, status: r.status, error: r.error });
    if (r.status >= 300 && r.status < 400 && r.location) {
      cur = new URL(r.location, cur).href;
      continue;
    }
    break;
  }
  const last = hops[hops.length - 1];
  const host = (() => {
    try {
      return new URL(url).hostname.toLowerCase();
    } catch {
      return '';
    }
  })();
  const redirectOk = /\/releases\/latest\/?$/.test(new URL(url).pathname) || allowHosts.some((h) => host === h || host.endsWith('.' + h));
  let verdict = 'ok';
  const finalUrl = (() => {
    try {
      return new URL(last.url);
    } catch {
      return null;
    }
  })();
  const authWall = hops.length > 1 && finalUrl && /(^|\.)github\.com$/.test(finalUrl.hostname) && finalUrl.pathname === '/login';
  if (!last.status) verdict = 'error';
  else if (authWall) verdict = 'ok-auth';
  else if (last.status >= 400) verdict = [401, 403, 429].includes(last.status) ? 'blocked' : 'broken';
  else if (hops.length > 1) verdict = redirectOk ? 'ok-redirect' : 'redirect';
  return { url, final: last.url, status: last.status, hops: hops.length - 1, verdict, error: last.error, chain: hops.map((h) => `${h.status} ${h.url}`) };
}

let externalResults = [];
if (flag('--external')) {
  const urls = [...external.keys()];
  let i = 0;
  const worker = async () => {
    while (i < urls.length) {
      const u = urls[i++];
      externalResults.push(await checkExternal(u));
      if (!quiet) process.stderr.write(`\r  external ${externalResults.length}/${urls.length}`);
    }
  };
  await Promise.all(Array.from({ length: concurrency }, worker));
  if (!quiet) process.stderr.write('\n');
  externalResults.sort((a, b) => a.url.localeCompare(b.url));
}

// ------------------------------------------------------------------------------------------ report
const report = {
  dist,
  base,
  origin,
  pages: files.length,
  internal,
  external: {
    unique: external.size,
    checked: externalResults.length,
    results: externalResults.map((r) => ({ ...r, pages: [...new Set(external.get(r.url).map((x) => x.page))].slice(0, 10) })),
  },
};
const jsonOut = opt('--json');
if (jsonOut) writeFileSync(jsonOut, JSON.stringify(report, null, 2));

const line = (s = '') => console.log(s);
line(`linkcheck: ${files.length} HTML files in ${dist} (base ${base}${origin ? `, origin ${origin}` : ''})`);
line(`  internal links checked: ${internal.checked}${internal.ignored ? ` (+${internal.ignored} ignored)` : ''}`);
line(`  broken: ${internal.broken.length}   redirect-needing: ${internal.redirects.length}   missing anchors: ${internal.anchors.length}`);
const show = (title, list, fmt) => {
  if (!list.length) return;
  line(`\n${title}`);
  for (const x of list.slice(0, 60)) line('  ' + fmt(x));
  if (list.length > 60) line(`  … ${list.length - 60} more (see --json)`);
};
show('Broken internal links:', internal.broken, (x) => `${x.page}: ${x.url} — ${x.reason}`);
show('Internal links that need a redirect:', internal.redirects, (x) => `${x.page}: ${x.url} → ${x.location}`);
show('Missing anchors:', internal.anchors, (x) => `${x.page}: ${x.url}`);
line(`  external URLs (unique): ${external.size}${flag('--external') ? '' : ' (not checked; pass --external)'}`);
if (externalResults.length) {
  const by = (v) => externalResults.filter((r) => r.verdict === v);
  line(
    `  external: ok ${by('ok').length}, ok-redirect ${by('ok-redirect').length}, ok-auth ${by('ok-auth').length} (sign-in wall, e.g. GitHub edit links), redirect ${by('redirect').length}, blocked ${by('blocked').length}, broken ${by('broken').length}, error ${by('error').length}`,
  );
  show('External redirects (update to the final URL):', by('redirect'), (r) => `${r.url} → ${r.final} (${r.hops} hop${r.hops > 1 ? 's' : ''}, ${r.status})`);
  show('External broken:', by('broken'), (r) => `${r.status} ${r.url}${r.hops ? ` (via ${r.hops} redirect)` : ''}`);
  show('External blocked (bot protection, verify manually):', by('blocked'), (r) => `${r.status} ${r.url}`);
  show('External errors:', by('error'), (r) => `${r.url} — ${r.error}`);
  show('Allowed redirects:', by('ok-redirect'), (r) => `${r.url} → ${r.final}`);
}
const internalFail = internal.broken.length + internal.redirects.length + internal.anchors.length;
const externalFail = externalResults.filter((r) => ['broken', 'error', 'redirect'].includes(r.verdict)).length;
if (internalFail || (flag('--strict-external') && externalFail)) process.exitCode = 1;
void pathToFileURL;
