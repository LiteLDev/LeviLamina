// Vite plugin for levimc-kit docs sites.
//
//   // vite.config.ts
//   import { defineConfig } from 'vite';
//   import { kitDocs } from './kit/docs/node/vite';
//   import docs from './docs.config';
//   export default defineConfig({ plugins: [kitDocs(docs)] });
//
// It compiles all markdown at build start, exposes the site through virtual modules (one lazily loaded
// chunk per page), serves the SPA in dev, and emits search indexes, sitemap.xml, .nojekyll and content
// assets for the client build. `node kit/docs/build.mjs` runs client build → SSR build → prerender.

import { copyFileSync, existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { dirname, extname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import type { Plugin, PluginOption, ViteDevServer } from 'vite';
import react from '@vitejs/plugin-react';
import tailwindcss from '@tailwindcss/vite';
import { resolveConfig, type DocsConfig, type ResolvedConfig } from './config.ts';
import { buildSite, type BuiltSite } from './site.ts';
import { localeRedirectScript } from '../shared/head.ts';
import { themeInitScript } from '../../components/theme.ts';
import { GOOGLE_FONTS_HREF } from '../../components/fonts.ts';

const SITE_ID = 'virtual:kit-docs/site';
const PAGE_PREFIX = 'virtual:kit-docs/page/';
const TOKENS_ID = 'virtual:kit-docs/tokens.css';
const LAYOUTS_ID = 'virtual:kit-docs/layouts';
const R_LAYOUTS = '\0kit-docs:layouts';
const R_SITE = '\0kit-docs:site';
const R_PAGE = '\0kit-docs:page:';
const R_TOKENS = '/__kit-docs-tokens.css';

export interface KitDocsPluginOptions {
  /** Include @vitejs/plugin-react (default true). */
  react?: boolean;
  /** Include @tailwindcss/vite (default true). */
  tailwind?: boolean;
}

const here = dirname(fileURLToPath(import.meta.url));
export const KIT_DOCS_APP_DIR = resolve(here, '../app');

function hash8(s: string) {
  return createHash('sha256').update(s).digest('hex').slice(0, 8);
}

export function kitDocs(userConfig: DocsConfig, options: KitDocsPluginOptions = {}): PluginOption[] {
  let root = process.cwd();
  let cfg: ResolvedConfig;
  let built: BuiltSite | null = null;
  let building: Promise<BuiltSite> | null = null;
  let isSsr = false;
  let isBuild = false;
  let searchFiles = new Map<string, { file: string; json: string }>();

  const appHtml = join(KIT_DOCS_APP_DIR, 'index.html');
  const entryServer = join(KIT_DOCS_APP_DIR, 'entry-server.tsx');

  const rebuild = async (changed?: Set<string>) => {
    building = buildSite(cfg, { changed }).then((b) => {
      built = b;
      searchFiles = new Map(
        [...b.searchIndexes].map(([code, json]) => [code, { file: `assets/search-${code.replace(/[^\w-]/g, '_')}.${hash8(json)}.json`, json }]),
      );
      b.site.search = Object.fromEntries([...searchFiles].map(([code, f]) => [code, cfg.base + f.file]));
      return b;
    });
    return building;
  };
  const ensure = async () => built ?? (await (building ?? rebuild()));

  const reportWarnings = (b: BuiltSite, log: (m: string) => void) => {
    if (!b.warnings.length) return;
    log(`[kit-docs] ${b.warnings.length} warning(s):`);
    for (const w of b.warnings.slice(0, 200)) log(`  - ${w}`);
    if (b.warnings.length > 200) log(`  … and ${b.warnings.length - 200} more (see .kit/warnings.txt)`);
  };

  const plugin: Plugin = {
    name: 'levimc-kit-docs',
    enforce: 'pre',
    config(vc, env) {
      root = vc.root ? resolve(vc.root) : process.cwd();
      cfg = resolveConfig(userConfig, root);
      isSsr = !!env.isSsrBuild;
      isBuild = env.command === 'build';
      return {
        base: cfg.base,
        appType: 'custom',
        publicDir: cfg.publicRoot ?? false,
        resolve: { dedupe: ['react', 'react-dom', 'react-router'] },
        server: { fs: { allow: [root, cfg.contentRoot, KIT_DOCS_APP_DIR, resolve(KIT_DOCS_APP_DIR, '../..')] } },
        build: isSsr
          ? {
              outDir: join(root, '.kit/ssr'),
              emptyOutDir: true,
              ssr: entryServer,
              copyPublicDir: false,
              rollupOptions: { input: entryServer, output: { entryFileNames: 'entry-server.js', format: 'es' } },
            }
          : {
              outDir: cfg.outRoot,
              emptyOutDir: true,
              assetsDir: 'assets',
              rollupOptions: {
                input: { app: appHtml },
                output: {
                  chunkFileNames: (chunk) => (chunk.facadeModuleId?.startsWith(R_PAGE) ? 'assets/pages/[name].[hash].js' : 'assets/[name].[hash].js'),
                },
              },
            },
        ssr: { noExternal: [] },
      };
    },
    async buildStart() {
      const b = await rebuild();
      if (isBuild && !isSsr) {
        reportWarnings(b, (m) => this.warn(m));
        mkdirSync(join(root, '.kit'), { recursive: true });
        writeFileSync(join(root, '.kit/warnings.txt'), b.warnings.join('\n') + '\n');
      }
    },
    resolveId(id) {
      if (id === SITE_ID) return R_SITE;
      if (id.startsWith(PAGE_PREFIX)) return R_PAGE + id.slice(PAGE_PREFIX.length);
      if (id === TOKENS_ID) return R_TOKENS;
      if (id === LAYOUTS_ID) return R_LAYOUTS;
      return null;
    },
    async load(id) {
      if (id === R_SITE) {
        const b = await ensure();
        const pages = b.routes
          .map((r) => `${JSON.stringify(r.page)}: () => import(${JSON.stringify(PAGE_PREFIX + r.page)})`)
          .filter((v, i, a) => a.indexOf(v) === i)
          .join(',\n  ');
        return (
          `export const site = ${JSON.stringify(b.site)};\n` +
          `export const routes = ${JSON.stringify(b.routes)};\n` +
          `export const pages = {\n  ${pages}\n};\n`
        );
      }
      if (id.startsWith(R_PAGE)) {
        const b = await ensure();
        const pageId = id.slice(R_PAGE.length);
        const page = [...b.pages.values()].find((p) => p.route.page === pageId);
        if (!page) return 'export default { html: "", toc: [] }';
        const data = { html: page.html, toc: page.toc, hero: page.hero, features: page.features, frontmatter: page.frontmatter };
        return `export default ${JSON.stringify(data)};`;
      }
      if (id === R_TOKENS) {
        const b = await ensure();
        return b.tokenCss;
      }
      if (id === R_LAYOUTS) {
        const entries = Object.entries(cfg.layouts ?? {});
        return (
          entries.map(([, file], i) => `import L${i} from ${JSON.stringify(file.split('\\').join('/'))};`).join('\n') +
          `\nexport const layouts = { ${entries.map(([name], i) => `${JSON.stringify(name)}: L${i}`).join(', ')} };\n`
        );
      }
      return null;
    },
    transformIndexHtml: {
      order: 'pre',
      async handler(html) {
        const b = await ensure();
        const redirect = localeRedirectScript(b.site);
        const favicon = b.site.favicon ?? b.site.logo?.src;
        const headExtra = (cfg.head ?? [])
          .map(([tag, attrs, content]) => {
            const a = Object.entries(attrs)
              .map(([k, v]) => (v === true ? k : v === false ? '' : `${k}="${String(v).replace(/"/g, '&quot;')}"`))
              .filter(Boolean)
              .join(' ');
            return ['meta', 'link', 'base'].includes(tag) ? `<${tag} ${a}>` : `<${tag}${a ? ' ' + a : ''}>${content ?? ''}</${tag}>`;
          })
          .join('\n    ');
        const entryClient = '/' + relative(root, join(KIT_DOCS_APP_DIR, 'entry-client.tsx')).split('\\').join('/');
        return html
          .replace('src="./entry-client.tsx"', `src="${entryClient}"`)
          .replace('<!--kit-theme-->', `<script>${themeInitScript}</script>${redirect ? `\n    <script>${redirect}</script>` : ''}`)
          .replace(
            '<!--kit-fonts-->',
            `<link rel="preconnect" href="https://fonts.googleapis.com">\n    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>\n    <link rel="stylesheet" href="${GOOGLE_FONTS_HREF}">`,
          )
          .replace('<!--kit-favicon-->', favicon ? `<link rel="icon" href="${favicon}">` : '')
          .replace('<!--kit-head-extra-->', headExtra);
      },
    },
    configureServer(server: ViteDevServer) {
      server.watcher.add(cfg.contentRoot);
      const onChange = async (file: string) => {
        if (!resolve(file).startsWith(cfg.contentRoot)) return;
        await rebuild(new Set([resolve(file)]));
        for (const id of [R_SITE, R_TOKENS]) {
          const m = server.moduleGraph.getModuleById(id);
          if (m) server.moduleGraph.invalidateModule(m);
        }
        for (const m of server.moduleGraph.idToModuleMap.values()) if (m.id?.startsWith(R_PAGE)) server.moduleGraph.invalidateModule(m);
        server.ws.send({ type: 'full-reload' });
      };
      server.watcher.on('change', onChange);
      server.watcher.on('add', onChange);
      server.watcher.on('unlink', onChange);
      return () => {
        server.middlewares.use(async (req, res, next) => {
          // Vite's base middleware strips the base from req.url; use the original URL.
          const url = ((req as { originalUrl?: string }).originalUrl ?? req.url ?? '/').split('?')[0]!;
          if (req.method !== 'GET' && req.method !== 'HEAD') return next();
          if (!url.startsWith(cfg.base)) return next();
          const rel = decodeURIComponent(url.slice(cfg.base.length));
          await ensure();
          for (const f of searchFiles.values()) {
            if (f.file === rel) {
              res.setHeader('content-type', 'application/json');
              res.end(f.json);
              return;
            }
          }
          // content assets (MkDocs: images next to markdown)
          if (rel && extname(rel) && !rel.endsWith('.html')) {
            const p = join(cfg.contentRoot, rel);
            if (existsSync(p) && statSync(p).isFile()) {
              res.end(readFileSync(p));
              return;
            }
            return next();
          }
          const template = readFileSync(appHtml, 'utf8');
          // Transform as if requested at the template's own location so ./entry-client.tsx resolves.
          const html = await server.transformIndexHtml('/' + relative(root, appHtml).split('\\').join('/'), template);
          res.setHeader('content-type', 'text/html; charset=utf-8');
          res.end(html);
        });
      };
    },
    generateBundle(_opts, bundle) {
      if (isSsr || !built) return;
      const b = built;
      for (const f of searchFiles.values()) this.emitFile({ type: 'asset', fileName: f.file, source: f.json });
      this.emitFile({ type: 'asset', fileName: '.nojekyll', source: '' });
      // page module → chunk (+ its static imports) for <link rel=modulepreload> during prerender
      const pages: Record<string, string[]> = {};
      for (const out of Object.values(bundle)) {
        if (out.type === 'chunk' && out.facadeModuleId?.startsWith(R_PAGE)) {
          pages[out.facadeModuleId.slice(R_PAGE.length)] = [out.fileName, ...out.imports];
        }
      }
      mkdirSync(join(root, '.kit'), { recursive: true });
      writeFileSync(join(root, '.kit/client-pages.json'), JSON.stringify({ pages, appHtml: relative(root, appHtml).split('\\').join('/'), outDir: cfg.outRoot }, null, 2));
      // sitemap
      if (cfg.sitemap && cfg.hostname) {
        const urls = b.routes
          .map((r) => {
            const alts = Object.entries(r.alternates);
            const links =
              alts.length > 1
                ? alts
                    .map(([code, p]) => `    <xhtml:link rel="alternate" hreflang="${b.site.locales.find((l) => l.code === code)?.lang ?? code}" href="${cfg.hostname}${cfg.base}${encodeURI(p)}"/>`)
                    .join('\n') + '\n'
                : '';
            const lastmod = r.lastUpdated ? `    <lastmod>${new Date(r.lastUpdated).toISOString().slice(0, 10)}</lastmod>\n` : '';
            return `  <url>\n    <loc>${cfg.hostname}${cfg.base}${encodeURI(r.path)}</loc>\n${lastmod}${links}  </url>`;
          })
          .join('\n');
        this.emitFile({
          type: 'asset',
          fileName: 'sitemap.xml',
          source: `<?xml version="1.0" encoding="UTF-8"?>\n<urlset xmlns="http://www.sitemaps.org/schemas/sitemap/0.9" xmlns:xhtml="http://www.w3.org/1999/xhtml">\n${urls}\n</urlset>\n`,
        });
      }
    },
    writeBundle() {
      if (isSsr || !built) return;
      const b = built;
      // MkDocs: every non-markdown file in the content dir is copied verbatim (logo.svg, favicon.ico, img/…)
      if (cfg.copyContentAssets) {
        for (const rel of b.scan.assets) {
          const to = join(cfg.outRoot, rel);
          mkdirSync(dirname(to), { recursive: true });
          copyFileSync(join(cfg.contentRoot, rel), to);
        }
      }
      for (const a of b.assets.values()) {
        const to = join(cfg.outRoot, a.out);
        mkdirSync(dirname(to), { recursive: true });
        copyFileSync(a.abs, to);
      }
    },
  };

  const plugins: PluginOption[] = [plugin];
  if (options.react !== false) plugins.push(react());
  if (options.tailwind !== false) plugins.push(tailwindcss());
  return plugins;
}

export { defineDocsConfig } from './config.ts';
export type { DocsConfig } from './config.ts';
