// Generic static prerendering for plain Vite + React apps (levimc.org, pkg.levimc.org).
//
//   // prerender.mjs (in the app)
//   import { prerenderRoutes } from './kit/ssg/prerender.mjs';
//   await prerenderRoutes({
//     routes: ['/', '/projects/', '/community/', '/about/', '/features/', '/support/'],
//     notFound: '/404',            // rendered to 404.html (GitHub Pages serves it for missing paths)
//   });
//
// Requirements:
//   1. `vite build` (client) → dist/index.html containing the placeholders <!--app-head--> and <!--app-html-->
//      (inside <div id="root">), and optionally <html lang="…"> (rewritten per page).
//   2. `vite build --ssr src/entry-server.tsx --outDir .kit/ssr` → module exporting
//        render(url: string): { html: string; head?: string; lang?: string; status?: number } | Promise<…>
//      (use <StaticRouter location={url}> and keep the client's <BrowserRouter> markup identical).
//   3. entry-client.tsx hydrates with hydrateRoot(document.getElementById('root'), <App/>).
//
// Each route is written in directory style ('/about/' → about/index.html) unless it ends in '.html'.
// Routes are full paths including the Vite base (e.g. '/' for levimc.org, or '/Demo/x/').
import { mkdirSync, readFileSync, writeFileSync, existsSync, realpathSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { pathToFileURL, fileURLToPath } from 'node:url';

// <meta name="generator"> on every page, so a deployment's kit version is verifiable
const KIT_VERSION = readFileSync(new URL('../VERSION', import.meta.url), 'utf8').trim();
const GENERATOR_META = `<meta name="generator" content="levimc-kit ${KIT_VERSION}">`;

/**
 * @param {object} o
 * @param {string} [o.root]        app root (default: cwd)
 * @param {string} [o.distDir]     client build output (default: dist)
 * @param {string} [o.ssrEntry]    built SSR module (default: .kit/ssr/entry-server.js)
 * @param {string} [o.template]    HTML template inside distDir (default: index.html)
 * @param {string} [o.base]        Vite base (default: '/'), stripped when mapping routes to files
 * @param {string[] | (() => string[] | Promise<string[]>)} o.routes
 * @param {string} [o.notFound]    route rendered into 404.html
 * @param {number} [o.concurrency] parallel renders (default 8)
 * @param {(route: string) => string} [o.outFile] custom route → file mapping (relative to distDir)
 * @returns {Promise<{ files: string[] }>}
 */
export async function prerenderRoutes(o) {
  const root = resolve(o.root ?? process.cwd());
  const dist = resolve(root, o.distDir ?? 'dist');
  const ssr = resolve(root, o.ssrEntry ?? '.kit/ssr/entry-server.js');
  const base = o.base ?? '/';
  const templatePath = join(dist, o.template ?? 'index.html');
  if (!existsSync(ssr)) throw new Error(`prerenderRoutes: SSR bundle not found: ${ssr}`);
  const template = readFileSync(templatePath, 'utf8');
  const mod = await import(pathToFileURL(ssr).href);
  if (typeof mod.render !== 'function') throw new Error('prerenderRoutes: the SSR entry must export render(url)');
  const routes = typeof o.routes === 'function' ? await o.routes() : o.routes;

  const toFile =
    o.outFile ??
    ((route) => {
      let p = route.startsWith(base) ? route.slice(base.length) : route.replace(/^\//, '');
      p = p.split('?')[0].split('#')[0];
      if (p.endsWith('.html')) return p;
      if (p === '' || p.endsWith('/')) return p + 'index.html';
      return p + '/index.html';
    });
  const fill = (r) => {
    let html = template;
    if (r.lang) html = html.replace(/<html([^>]*?)\slang="[^"]*"/, `<html$1 lang="${r.lang}"`);
    // Replacement functions, not strings: rendered content may contain `$&`, `$'`, `` $` `` or `$$`,
    // which String.prototype.replace would expand as patterns.
    html = html.includes('<!--app-head-->') ? html.replace('<!--app-head-->', () => r.head ?? '') : html.replace('</head>', () => `${r.head ?? ''}\n</head>`);
    if (!/<meta name="generator"/.test(html)) html = html.replace('</head>', () => `${GENERATOR_META}\n</head>`);
    if (!html.includes('<!--app-html-->')) throw new Error('prerenderRoutes: template is missing <!--app-html-->');
    return html.replace('<!--app-html-->', () => r.html);
  };

  const files = [];
  const queue = [...routes];
  const worker = async () => {
    for (let route = queue.shift(); route !== undefined; route = queue.shift()) {
      const r = await mod.render(route);
      const file = join(dist, toFile(route));
      mkdirSync(dirname(file), { recursive: true });
      writeFileSync(file, fill(r));
      files.push(file);
    }
  };
  await Promise.all(Array.from({ length: o.concurrency ?? 8 }, worker));
  if (o.notFound) {
    const r = await mod.render(o.notFound);
    writeFileSync(join(dist, '404.html'), fill(r));
    files.push(join(dist, '404.html'));
  }
  writeFileSync(join(dist, '.nojekyll'), '');
  return { files };
}

// run as a CLI (compares real paths, so a symlinked or relative script path still counts)
if (process.argv[1] && realpathSync(process.argv[1]) === fileURLToPath(import.meta.url)) {
  // CLI: node kit/ssg/prerender.mjs /route/ /other/ [--not-found /404] [--base /]
  const args = process.argv.slice(2);
  const nf = args.includes('--not-found') ? args[args.indexOf('--not-found') + 1] : undefined;
  const base = args.includes('--base') ? args[args.indexOf('--base') + 1] : '/';
  const routes = args.filter((a, i) => !a.startsWith('--') && !['--not-found', '--base'].includes(args[i - 1]));
  const { files } = await prerenderRoutes({ routes, notFound: nf, base });
  console.log(`prerendered ${files.length} files`);
}
