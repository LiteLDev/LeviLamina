// Build-time link rewriting. Every internal link is resolved to the target page's canonical URL
// (base-prefixed, no redirect needed on GitHub Pages) in the current page's locale when that translation
// exists (mkdocs-static-i18n semantics), otherwise in the default locale.

import { existsSync, readFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { basename, extname, join, posix } from 'node:path';
import type { ResolvedConfig } from './config.ts';
import type { ContentScan, PageRoute, SourceFile } from './content.ts';
import type { LinkResolution } from './markdown/render.ts';

export interface AssetRef {
  /** Absolute source path. */
  abs: string;
  /** Output path relative to outDir. */
  out: string;
}

export interface LinkContext {
  cfg: ResolvedConfig;
  scan: ContentScan;
  /** Hashed assets collected during the build (out path → source). */
  assets: Map<string, AssetRef>;
}

const SCHEME = /^[a-z][a-z0-9+.-]*:/i;

function splitHref(href: string): { path: string; query: string; hash: string } {
  let path = href;
  let hash = '';
  let query = '';
  const hi = path.indexOf('#');
  if (hi >= 0) {
    hash = path.slice(hi);
    path = path.slice(0, hi);
  }
  const qi = path.indexOf('?');
  if (qi >= 0) {
    query = path.slice(qi);
    path = path.slice(0, qi);
  }
  return { path, query, hash };
}

function safeDecode(s: string): string {
  try {
    return decodeURI(s);
  } catch {
    return s;
  }
}

/**
 * Find the source file for a content-relative path (with or without .md / locale suffix).
 * `explicit` is true when the link itself names a locale (x.zh.md, zh-CN/x.md); a plain x.md that only
 * exists as x.en.md / x.zh.md (mkdocs-static-i18n) resolves to that page without pinning the locale.
 */
export function findSource(ctx: Pick<LinkContext, 'cfg' | 'scan'>, p: string): { src: SourceFile; explicit: boolean } | undefined {
  const { bySource } = ctx.scan;
  const tryRel = (r: string) => bySource.get(r.replace(/^\.\//, ''));
  const clean = p.replace(/^\/+/, '');
  const candidates: string[] = [];
  if (clean.endsWith('.md')) candidates.push(clean);
  else if (clean === '' || clean.endsWith('/')) candidates.push(clean + 'index.md', clean + 'README.md');
  else if (clean.endsWith('.html')) {
    const b = clean.slice(0, -5);
    candidates.push(b + '.md', b.endsWith('index') ? b + '.md' : b + '/index.md');
  } else candidates.push(clean + '.md', clean + '/index.md', clean + '/README.md');
  for (const c of candidates) {
    const s = tryRel(c);
    if (s) return { src: s, explicit: s.explicitLocale };
  }
  if (ctx.cfg.i18nMode === 'suffix') {
    // x.md → x.<suffix>.md (default locale first)
    for (const c of candidates) {
      for (const loc of ctx.cfg.locales) {
        const s = tryRel(c.replace(/\.md$/, `.${loc.suffix}.md`));
        if (s) return { src: s, explicit: false };
      }
    }
  }
  return undefined;
}

export function createLinkResolver(ctx: LinkContext, page: PageRoute) {
  const { cfg, scan } = ctx;
  const origin = cfg.hostname;
  const ownPrefix = origin ? origin + cfg.base : null;
  const curDir = posix.dirname(page.source.rel);

  const routeUrl = (r: PageRoute) => cfg.base + r.path;

  const resolveContentPath = (contentPath: string, kind: 'a' | 'img'): { url: string; route?: PageRoute } | null => {
    const p = posix.normalize(contentPath || '.').replace(/^\.$/, '');
    if (p.startsWith('..')) return null;
    if (kind === 'a') {
      const found = findSource(ctx, p);
      if (found) {
        const src = found.src;
        const routes = scan.byKey.get(src.key);
        if (!routes) return null;
        // folder mode (VitePress): a link names one file, so `/` from zh-CN/index.md is the English home
        const want = found.explicit || (cfg.i18nMode === 'folder' && !page.fallback) ? src.locale : page.locale;
        const r = routes.get(want) ?? routes.get(cfg.defaultLocale) ?? [...routes.values()][0]!;
        return { url: routeUrl(r), route: r };
      }
      // a canonical route path written directly (e.g. '/zh-CN/guide/x' in folder mode, or 'a/b/')
      const direct = scan.byPath.get(p) ?? scan.byPath.get(p + '/') ?? scan.byPath.get(p.replace(/\/index\.html$/, '/')) ?? scan.byPath.get(p.replace(/\.html$/, ''));
      if (direct) return { url: routeUrl(direct), route: direct };
    }
    // static asset: content dir (MkDocs) or public dir (VitePress)
    const decoded = safeDecode(p);
    const inContent = join(cfg.contentRoot, decoded);
    const inPublic = cfg.publicRoot ? join(cfg.publicRoot, decoded) : null;
    if (decoded && existsSync(inContent) && !decoded.endsWith('/')) {
      if (cfg.assets === 'hashed' && kind === 'img') {
        const buf = readFileSync(inContent);
        const hash = createHash('sha256').update(buf).digest('hex').slice(0, 8);
        const ext = extname(decoded);
        const out = `assets/${basename(decoded, ext).replace(/[^\w.-]/g, '_')}.${hash}${ext}`;
        ctx.assets.set(out, { abs: inContent, out });
        return { url: cfg.base + out };
      }
      if (!cfg.copyContentAssets) ctx.assets.set(decoded, { abs: inContent, out: decoded });
      return { url: cfg.base + p };
    }
    if (inPublic && decoded && existsSync(inPublic)) return { url: cfg.base + p };
    return null;
  };

  return (href: string, kind: 'a' | 'img'): LinkResolution | null => {
    const raw = href.trim();
    if (!raw) return null;
    let h = raw;
    // own-site absolute URL → treat as root-absolute internal link
    if (ownPrefix && h.toLowerCase().startsWith(ownPrefix.toLowerCase())) {
      h = '/' + h.slice(ownPrefix.length).replace(/^\/*/, '');
      const { path, query, hash } = splitHref(h.slice(1));
      const res = resolveContentPath(safeDecode(path), kind);
      if (res) return { href: res.url + query + hash, target: res.route && hash ? { route: res.route.id, anchor: safeDecode(hash.slice(1)) } : undefined };
      return { href: raw, external: true };
    }
    if (SCHEME.test(h) || h.startsWith('//')) {
      return /^(https?:)?\/\//i.test(h) ? { href: raw, external: true } : { href: raw };
    }
    const { path, query, hash } = splitHref(h);
    let contentPath: string;
    if (path.startsWith('/')) {
      // root-absolute: '/LeviLamina/x' (with base) or '/guide/x' (VitePress, relative to srcDir)
      contentPath = path.startsWith(cfg.base) ? path.slice(cfg.base.length) : path.slice(1);
    } else if (path === '') {
      return { href: raw };
    } else {
      contentPath = posix.join(curDir === '.' ? '' : curDir, path);
      if (path.endsWith('/') && !contentPath.endsWith('/')) contentPath += '/';
    }
    const res = resolveContentPath(safeDecode(contentPath), kind);
    if (!res) return null;
    return {
      href: res.url + query + hash,
      target: res.route && hash ? { route: res.route.id, anchor: safeDecode(hash.slice(1)) } : undefined,
    };
  };
}
