// Compiles the whole site: content scan → markdown render (per route) → navigation → route metadata,
// search indexes and diagnostics. Used by the Vite plugin (dev + build) and the prerenderer.

import { readFileSync } from 'node:fs';
import MiniSearch from 'minisearch';
import picomatch from 'picomatch';
import type { ResolvedConfig } from './config.ts';
import { scanContent, type ContentScan, type PageRoute } from './content.ts';
import { createLinkResolver, type AssetRef } from './links.ts';
import { renderMarkdown, type RenderResult } from './markdown/render.ts';
import { TokenStyles } from './markdown/shiki.ts';
import { buildNavigation } from './nav.ts';
import { gitLastUpdated } from './git.ts';
import { uiStrings } from '../../components/i18n.ts';
import { searchOptions, SNIPPET_STORE_CHARS } from '../shared/search.ts';
import type { FeatureData, HeroData, PageData, RouteMeta, SearchDoc, SiteData } from '../shared/types.ts';

export interface BuiltPage extends PageData {
  route: RouteMeta;
  render: RenderResult;
}

export interface BuiltSite {
  cfg: ResolvedConfig;
  scan: ContentScan;
  site: SiteData;
  routes: RouteMeta[];
  pages: Map<string, BuiltPage>;
  /** locale → serialised MiniSearch index */
  searchIndexes: Map<string, string>;
  assets: Map<string, AssetRef>;
  warnings: string[];
  tokenCss: string;
}

export const pageModuleId = (r: Pick<PageRoute, 'id'>) =>
  r.id.replace(/[^A-Za-z0-9_\-/]/g, (c) => (c === ':' ? '/' : '_')).replace(/\/+/g, '/').replace(/\/$/, '') || 'index';

const cache = new Map<string, { mtime: string; result: RenderResult }>();
// One token-class registry per process: class names stay stable across incremental (dev) rebuilds.
const styles = new TokenStyles();

export async function buildSite(cfg: ResolvedConfig, opts: { changed?: Set<string> } = {}): Promise<BuiltSite> {
  const warnings: string[] = [];
  const scan = scanContent(cfg);
  const lastUpdated = cfg.lastUpdated ? gitLastUpdated(cfg.contentRoot) : new Map<string, number>();
  const assets = new Map<string, AssetRef>();

  // ---- render every route
  const rendered = new Map<string, RenderResult>();
  const queue = [...scan.routes];
  const worker = async () => {
    for (let r = queue.shift(); r; r = queue.shift()) {
      const route = r;
      const src = readFileSync(route.source.abs, 'utf8');
      const t = uiStrings(cfg.locales.find((l) => l.code === route.locale)?.lang, cfg.ui?.[route.locale]);
      const resolve = createLinkResolver({ cfg, scan, assets }, route);
      const pageWarn = (m: string) => warnings.push(`${route.source.rel}${route.fallback ? ` (as ${route.locale})` : ''}: ${m}`);
      const cacheKey = `${route.id}|${route.source.abs}`;
      const hit = cache.get(cacheKey);
      if (hit && hit.mtime === src && !opts.changed?.has(route.source.abs)) {
        rendered.set(route.id, hit.result);
        continue;
      }
      const result = await renderMarkdown(src, {
        compat: cfg.markdown.compat,
        slug: cfg.slug,
        lineNumbers: cfg.markdown.lineNumbers,
        codeTitle: cfg.markdown.codeTitle,
        languageAlias: cfg.markdown.languageAlias,
        admonitionTitles: cfg.markdown.admonitionTitles,
        containers: cfg.markdown.containers,
        literalBackslashes: cfg.markdown.literalBackslashes,
        outline: cfg.outline,
        styles,
        strings: { copyCode: t.copyCode, copied: t.copied, footnotes: 'Footnotes', backToRef: 'Back to reference' },
        resolveLink: resolve,
        onWarning: pageWarn,
      });
      cache.set(cacheKey, { mtime: src, result });
      rendered.set(route.id, result);
    }
  };
  await Promise.all(Array.from({ length: 6 }, worker));

  // ---- titles & navigation
  const titles = new Map<string, string>();
  for (const r of scan.routes) {
    const res = rendered.get(r.id)!;
    const hero = res.frontmatter.hero as HeroData | undefined;
    titles.set(r.id, res.title || hero?.name || r.key.split('/').pop() || cfg.title);
  }
  const { nav, sidebars, placement, navTitles } = buildNavigation({ cfg, scan, titles, warn: (m) => warnings.push(m) });
  // MkDocs: page.title = nav title > first H1 > prettified file name; Material prints it as the H1 when the
  // markdown has none.
  for (const r of scan.routes) {
    const res = rendered.get(r.id)!;
    const navTitle = navTitles.get(`${r.locale}:${r.key}`);
    if (cfg.markdown.autoTitle) {
      const base = r.key.split('/').filter((x) => x !== 'index').pop() ?? '';
      const pretty = base ? base.replace(/[-_]/g, ' ').replace(/^./, (c) => c.toUpperCase()) : cfg.title;
      const t = navTitle ?? (res.title || pretty);
      if (!res.hasH1 && res.frontmatter.layout !== 'home' && typeof res.frontmatter.layout !== 'string') {
        res.html = `<h1>${t.replace(/&/g, '&amp;').replace(/</g, '&lt;')}</h1>\n` + res.html;
        res.hasH1 = true;
      }
      titles.set(r.id, t);
    }
  }

  // ---- anchors across pages
  const idsByRoute = new Map<string, Set<string>>();
  for (const [id, res] of rendered) idsByRoute.set(id, new Set(res.ids));
  for (const r of scan.routes) {
    for (const a of rendered.get(r.id)!.anchors) {
      const ids = idsByRoute.get(a.route);
      if (ids && a.anchor && !ids.has(a.anchor)) warnings.push(`${r.source.rel}${r.fallback ? ` (as ${r.locale})` : ''}: missing anchor '#${a.anchor}' in ${a.href}`);
    }
  }

  // ---- route metadata + page data
  const pages = new Map<string, BuiltPage>();
  const routes: RouteMeta[] = [];
  const homePaths: Record<string, string> = {};
  for (const loc of cfg.locales) homePaths[loc.code] = scan.byKey.get('index')?.get(loc.code)?.path ?? loc.prefix;

  for (const r of scan.routes) {
    const res = rendered.get(r.id)!;
    const fm = res.frontmatter;
    const layout =
      typeof fm.layout === 'string' && (fm.layout === 'home' || fm.layout === 'page' || fm.layout in (cfg.layouts ?? {})) ? fm.layout : 'doc';
    const alternates: Record<string, string> = {};
    for (const [code, ar] of scan.byKey.get(r.key) ?? []) alternates[code] = ar.path;
    const p = placement.get(r.id) ?? {};
    const resolve = createLinkResolver({ cfg, scan, assets }, r);
    const resolveHref = (href: string) => resolve(href, 'a')?.href ?? href;
    const resolveImg = (href: string) => resolve(href, 'img')?.href ?? href;
    let hero: HeroData | undefined;
    let features: FeatureData[] | undefined;
    if (layout === 'home') {
      const fh = (fm.hero ?? {}) as HeroData & { image?: string | HeroData['image'] };
      const img = typeof fh.image === 'string' ? { src: fh.image } : fh.image;
      hero = {
        name: fh.name,
        text: fh.text,
        tagline: fh.tagline,
        image: img ? { ...img, src: resolveImg(img.src) } : undefined,
        actions: (fh.actions ?? []).map((a) => ({ ...a, external: /^[a-z]+:/i.test(a.link), link: resolveHref(a.link) })),
      };
      features = ((fm.features ?? []) as FeatureData[]).map((f) => ({ ...f, external: f.link ? /^[a-z]+:/i.test(f.link) : undefined, link: f.link ? resolveHref(f.link) : undefined }));
    }
    const meta: RouteMeta = {
      path: r.path,
      locale: r.locale,
      page: pageModuleId(r),
      key: r.key,
      title: layout === 'home' && !res.title ? (hero?.name ?? cfg.title) : titles.get(r.id)!,
      description: (typeof fm.description === 'string' && fm.description) || res.description || cfg.description,
      layout,
      alternates,
      source: r.source.rel,
      lastUpdated: lastUpdated.get(r.source.rel),
      editUrl: cfg.editLink
        ? typeof cfg.editLink.pattern === 'function'
          ? cfg.editLink.pattern(r.source.rel)
          : cfg.editLink.pattern.replace(':path', r.source.rel)
        : undefined,
      fallback: r.fallback || undefined,
      sidebar: fm.sidebar === false ? undefined : p.sidebar,
      nav: p.nav,
      prev: fm.prev === false ? undefined : p.prev,
      next: fm.next === false ? undefined : p.next,
    };
    routes.push(meta);
    const keepFm: Record<string, unknown> = {};
    for (const k of ['layout', 'outline', 'aside', 'sidebar', 'editLink', 'lastUpdated', 'pageClass']) if (k in fm) keepFm[k] = fm[k];
    pages.set(r.id, { route: meta, html: res.html, toc: fm.outline === false ? [] : res.toc, hero, features, frontmatter: keepFm, render: res });
  }

  // ---- search (one MiniSearch index per locale)
  const searchIndexes = new Map<string, string>();
  const excluded = cfg.searchExclude?.length ? picomatch(cfg.searchExclude) : null;
  for (const loc of cfg.locales) {
    const ms = new MiniSearch<SearchDoc>(searchOptions);
    let id = 0;
    for (const r of scan.routes.filter((x) => x.locale === loc.code)) {
      if (excluded?.(r.key)) continue;
      const page = pages.get(r.id)!;
      const pageTitle = page.route.title;
      const crumbs = page.route.sidebar ? (sidebars[page.route.sidebar]?.title ?? '') : '';
      for (const s of page.render.sections) {
        ms.add({
          id: id++,
          title: s.title || pageTitle,
          page: pageTitle,
          crumbs,
          path: r.path + (s.id ? `#${s.id}` : ''),
          text: s.text.slice(0, 4000),
        });
      }
    }
    // keep stored snippet text short; the full text is in the inverted index
    const json = JSON.parse(JSON.stringify(ms)) as { storedFields: Record<string, { text?: string }> };
    for (const v of Object.values(json.storedFields)) if (v.text && v.text.length > SNIPPET_STORE_CHARS) v.text = v.text.slice(0, SNIPPET_STORE_CHARS);
    searchIndexes.set(loc.code, JSON.stringify(json));
  }

  const site: SiteData = {
    base: cfg.base,
    title: cfg.title,
    description: cfg.description ?? '',
    hostname: cfg.hostname,
    logo: cfg.logo ? { ...cfg.logo, src: assetUrl(cfg, cfg.logo.src), dark: cfg.logo.dark ? assetUrl(cfg, cfg.logo.dark) : undefined } : undefined,
    favicon: cfg.favicon ? assetUrl(cfg, cfg.favicon) : undefined,
    project: cfg.project,
    siteKey: cfg.siteKey,
    urlStyle: cfg.urlStyle,
    cleanUrls: cfg.cleanUrls,
    defaultLocale: cfg.defaultLocale,
    locales: cfg.locales.map((l) => ({ code: l.code, label: l.label, lang: l.lang, prefix: l.prefix })),
    nav,
    sidebars,
    social: cfg.social ?? (cfg.repo ? [{ icon: 'github', link: cfg.repo }] : []),
    editLink: cfg.editLink ? { text: cfg.editLink.text } : undefined,
    footer: cfg.footer,
    outline: cfg.outline,
    search: {},
    ui: (cfg.ui ?? {}) as Record<string, Record<string, unknown>>,
    titleTemplate: cfg.titleTemplate,
    lastUpdated: cfg.lastUpdated,
    homePaths,
  };

  return { cfg, scan, site, routes, pages, searchIndexes, assets, warnings, tokenCss: styles.css() };
}

export function assetUrl(cfg: ResolvedConfig, src: string): string {
  if (/^[a-z]+:|^\/\//i.test(src)) return src;
  if (src.startsWith(cfg.base)) return src;
  return cfg.base + src.replace(/^\/+/, '');
}
