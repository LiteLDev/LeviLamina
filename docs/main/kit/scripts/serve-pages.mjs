#!/usr/bin/env node
// Serve a built site exactly like GitHub Pages would:
//   existing file                     → 200
//   /x  where x.html exists           → 200 (x.html)
//   /x  where x/ is a dir with index  → 301 → /x/
//   /x/ (directory)                   → 200 (x/index.html)
//   anything else                     → the site's 404.html with status 404
// Usage: node serve-pages.mjs <dist> --base /<Project>/ [--port 4173] [--host 127.0.0.1] [--quiet]
// Also importable: `import { createPagesServer, resolvePagesPath } from './serve-pages.mjs'`.
import { createServer } from 'node:http';
import { createReadStream, existsSync, statSync } from 'node:fs';
import { extname, join, resolve, sep } from 'node:path';
import { pathToFileURL } from 'node:url';

export const CONTENT_TYPES = {
  '.html': 'text/html; charset=utf-8',
  '.htm': 'text/html; charset=utf-8',
  '.js': 'text/javascript; charset=utf-8',
  '.mjs': 'text/javascript; charset=utf-8',
  '.css': 'text/css; charset=utf-8',
  '.json': 'application/json; charset=utf-8',
  '.map': 'application/json; charset=utf-8',
  '.xml': 'application/xml; charset=utf-8',
  '.txt': 'text/plain; charset=utf-8',
  '.md': 'text/markdown; charset=utf-8',
  '.svg': 'image/svg+xml',
  '.png': 'image/png',
  '.jpg': 'image/jpeg',
  '.jpeg': 'image/jpeg',
  '.gif': 'image/gif',
  '.webp': 'image/webp',
  '.avif': 'image/avif',
  '.ico': 'image/x-icon',
  '.woff': 'font/woff',
  '.woff2': 'font/woff2',
  '.ttf': 'font/ttf',
  '.wasm': 'application/wasm',
  '.pdf': 'application/pdf',
  '.zip': 'application/zip',
};

const isFile = (p) => {
  try {
    return statSync(p).isFile();
  } catch {
    return false;
  }
};
const isDir = (p) => {
  try {
    return statSync(p).isDirectory();
  } catch {
    return false;
  }
};

/**
 * Resolve a request pathname with GitHub Pages semantics.
 * @returns {{ status: 200, file: string } | { status: 301, location: string } | { status: 404, file: string | null }}
 */
export function resolvePagesPath(dist, base, pathname) {
  const root = resolve(dist);
  const notFound = () => ({ status: 404, file: isFile(join(root, '404.html')) ? join(root, '404.html') : null });
  let p;
  try {
    p = decodeURIComponent(pathname);
  } catch {
    return notFound();
  }
  // The site lives under `base` (e.g. /LeviLamina/); /LeviLamina → /LeviLamina/
  if (p + '/' === base) return { status: 301, location: base };
  if (!p.startsWith(base)) return notFound();
  const rel = p.slice(base.length);
  const target = resolve(root, '.' + sep + rel);
  if (target !== root && !target.startsWith(root + sep)) return notFound();
  if (rel === '' || rel.endsWith('/')) {
    const index = join(target, 'index.html');
    return isFile(index) ? { status: 200, file: index } : notFound();
  }
  if (isFile(target)) return { status: 200, file: target };
  if (isFile(target + '.html')) return { status: 200, file: target + '.html' };
  if (isDir(target) && isFile(join(target, 'index.html'))) return { status: 301, location: p + '/' };
  return notFound();
}

export function createPagesServer({ dist, base = '/', log = true }) {
  if (!base.startsWith('/')) base = '/' + base;
  if (!base.endsWith('/')) base += '/';
  return createServer((req, res) => {
    const url = new URL(req.url ?? '/', 'http://localhost');
    const r = resolvePagesPath(dist, base, url.pathname);
    if (r.status === 301) {
      if (log) console.log(`301 ${url.pathname} → ${r.location}`);
      res.writeHead(301, { location: r.location + url.search, 'content-type': 'text/html; charset=utf-8' });
      res.end(`<html><body>Moved to <a href="${r.location}">${r.location}</a></body></html>`);
      return;
    }
    if (!r.file) {
      res.writeHead(404, { 'content-type': 'text/plain; charset=utf-8' });
      res.end('404 Not Found');
      if (log) console.log(`404 ${url.pathname}`);
      return;
    }
    const type = CONTENT_TYPES[extname(r.file).toLowerCase()] ?? 'application/octet-stream';
    res.writeHead(r.status, { 'content-type': type, 'cache-control': 'no-cache' });
    if (req.method === 'HEAD') return res.end();
    createReadStream(r.file).pipe(res);
    if (log && r.status === 404) console.log(`404 ${url.pathname}`);
  });
}

if (import.meta.url === pathToFileURL(process.argv[1] ?? '').href) {
  const args = process.argv.slice(2);
  const opt = (name, def) => (args.includes(name) ? args[args.indexOf(name) + 1] : def);
  const dist = args.find((a, i) => !a.startsWith('--') && !(i > 0 && args[i - 1].startsWith('--') && !['--quiet'].includes(args[i - 1])));
  if (!dist || !existsSync(dist)) {
    console.error('Usage: node serve-pages.mjs <dist> --base /<Project>/ [--port 4173] [--host 127.0.0.1] [--quiet]');
    process.exit(1);
  }
  const base = opt('--base', '/');
  const port = Number(opt('--port', '4173'));
  const host = opt('--host', '127.0.0.1');
  const server = createPagesServer({ dist, base, log: !args.includes('--quiet') });
  server.listen(port, host, () => console.log(`GitHub Pages emulation: http://${host}:${port}${base.startsWith('/') ? base : '/' + base} (dist: ${dist})`));
}
