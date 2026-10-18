// Content discovery: markdown pages (with locale detection for mkdocs-static-i18n "suffix" mode and
// VitePress "folder" mode), routes (MkDocs directory URLs or VitePress .html URLs) and static assets.

import { readdirSync, statSync } from 'node:fs';
import { dirname, join, posix, relative, resolve, sep } from 'node:path';
import { fileURLToPath } from 'node:url';
import picomatch from 'picomatch';
import type { ResolvedConfig, ResolvedLocale } from './config.ts';

export interface SourceFile {
  /** Path relative to contentDir (posix). */
  rel: string;
  abs: string;
  /** Page key: rel without .md and without locale suffix/folder. */
  key: string;
  /** Locale whose content this file holds. */
  locale: string;
  /** True when the locale was written explicitly (x.zh.md / zh-CN/x.md / x.en.md). */
  explicitLocale: boolean;
}

export interface PageRoute {
  /** Unique id = `${locale}:${key}` */
  id: string;
  key: string;
  locale: string;
  /** Canonical URL path relative to base ('' = root). */
  path: string;
  /** Output file relative to outDir. */
  file: string;
  source: SourceFile;
  fallback: boolean;
}

const ALWAYS_EXCLUDE = ['**/node_modules/**', '**/.*/**', '**/.*', '.vitepress/**', 'public/**'];
/** The vendored kit folder (…/kit), wherever it is. */
const KIT_ROOT = resolve(dirname(fileURLToPath(import.meta.url)), '../..');

/** Folders inside contentDir that are never content: the vendored kit and the build output. */
function implicitExcludes(cfg: ResolvedConfig): string[] {
  const out: string[] = [];
  for (const dir of [KIT_ROOT, cfg.outRoot, join(cfg.root, '.kit')]) {
    const rel = relative(cfg.contentRoot, dir);
    if (rel && !rel.startsWith('..') && !rel.startsWith(sep) && !rel.includes(':')) out.push(rel.split(sep).join('/') + '/**');
  }
  return out;
}

export function walk(dir: string, base = dir, out: string[] = []): string[] {
  let entries: string[];
  try {
    entries = readdirSync(dir);
  } catch {
    return out;
  }
  for (const name of entries.sort()) {
    const abs = join(dir, name);
    const st = statSync(abs);
    if (st.isDirectory()) walk(abs, base, out);
    else out.push(posix.normalize(abs.slice(base.length + 1).split('\\').join('/')));
  }
  return out;
}

export interface ContentScan {
  sources: SourceFile[];
  /** rel path → source (for link resolution). */
  bySource: Map<string, SourceFile>;
  /** Non-markdown files (rel paths). */
  assets: string[];
  routes: PageRoute[];
  /** key → locale → route */
  byKey: Map<string, Map<string, PageRoute>>;
  /** canonical path → route */
  byPath: Map<string, PageRoute>;
}

export function scanContent(cfg: ResolvedConfig): ContentScan {
  const isExcluded = picomatch([...ALWAYS_EXCLUDE, ...implicitExcludes(cfg), ...(cfg.exclude ?? [])], { dot: true });
  const files = walk(cfg.contentRoot).filter((f) => !isExcluded(f));
  const md = files.filter((f) => f.toLowerCase().endsWith('.md'));
  const assets = files.filter((f) => !f.toLowerCase().endsWith('.md'));
  const def = cfg.locales.find((l) => l.isDefault)!;

  const sources: SourceFile[] = [];
  for (const rel of md) {
    let key = rel.slice(0, -3);
    let locale = def.code;
    let explicit = false;
    if (cfg.i18nMode === 'suffix') {
      const m = /^(.*)\.([A-Za-z]{2,3}(?:[-_][A-Za-z0-9]+)?)$/.exec(key);
      const loc = m ? cfg.locales.find((l) => l.suffix === m[2]) : undefined;
      if (m && loc) {
        key = m[1]!;
        locale = loc.code;
        explicit = true;
      }
    } else {
      const first = key.split('/')[0]!;
      const loc = cfg.locales.find((l) => !l.isDefault && l.folder === first);
      if (loc && key.includes('/')) {
        key = key.slice(first.length + 1);
        locale = loc.code;
        explicit = true;
      }
    }
    // MkDocs: README.md is the directory index (index.md wins when both exist).
    if (cfg.urlStyle === 'directory' && /(^|\/)README$/.test(key)) key = key.replace(/README$/, 'index');
    sources.push({ rel, abs: join(cfg.contentRoot, rel), key, locale, explicitLocale: explicit });
  }

  const byKeyLoc = new Map<string, SourceFile>();
  for (const s of sources) {
    const id = `${s.locale}:${s.key}`;
    const prev = byKeyLoc.get(id);
    if (prev) {
      // prefer index.md over README.md, and x.md over x.en.md for the default locale
      const sIsReadme = /(^|\/)README(\.[^/]+)?\.md$/.test(s.rel);
      const prevIsReadme = /(^|\/)README(\.[^/]+)?\.md$/.test(prev.rel);
      const prefer = (prevIsReadme && !sIsReadme) || (!s.explicitLocale && prev.explicitLocale && sIsReadme === prevIsReadme);
      if (!prefer) continue;
    }
    byKeyLoc.set(id, s);
  }
  const unique = [...byKeyLoc.values()];
  const bySource = new Map<string, SourceFile>();
  for (const s of sources) bySource.set(s.rel, byKeyLoc.get(`${s.locale}:${s.key}`) ?? s);

  const routes: PageRoute[] = [];
  const byKey = new Map<string, Map<string, PageRoute>>();
  const byPath = new Map<string, PageRoute>();
  const add = (r: PageRoute) => {
    if (byPath.has(r.path)) return;
    routes.push(r);
    byPath.set(r.path, r);
    if (!byKey.has(r.key)) byKey.set(r.key, new Map());
    byKey.get(r.key)!.set(r.locale, r);
  };
  const keys = [...new Set(unique.map((s) => s.key))].sort();
  for (const key of keys) {
    for (const loc of cfg.locales) {
      const own = byKeyLoc.get(`${loc.code}:${key}`);
      const fallbackSrc = loc.isDefault ? undefined : byKeyLoc.get(`${def.code}:${key}`);
      const src = own ?? (cfg.fallback ? fallbackSrc : undefined);
      if (!src) continue;
      const { path, file } = routeFor(cfg, key, loc);
      add({ id: `${loc.code}:${key}`, key, locale: loc.code, path, file, source: src, fallback: !own });
    }
  }
  return { sources, bySource, assets, routes, byKey, byPath };
}

export function routeFor(cfg: ResolvedConfig, key: string, loc: ResolvedLocale): { path: string; file: string } {
  let rel: string;
  let file: string;
  const isIndex = /(^|\/)index$/.test(key) || (cfg.urlStyle === 'directory' && /(^|\/)README$/.test(key));
  const dir = key.replace(/(^|\/)(index|README)$/, '$1');
  if (isIndex) {
    rel = dir;
    file = dir + 'index.html';
  } else if (cfg.urlStyle === 'directory') {
    rel = key + '/';
    file = key + '/index.html';
  } else {
    rel = cfg.cleanUrls ? key : key + '.html';
    file = key + '.html';
  }
  return { path: loc.prefix + rel, file: loc.prefix + file };
}

/** Normalise a pathname (relative to base) to the canonical route path it would be served for. */
export function normalizeRoutePath(p: string, cfg: Pick<ResolvedConfig, 'urlStyle' | 'cleanUrls'>): string[] {
  const out = new Set<string>([p]);
  if (p.endsWith('index.html')) out.add(p.slice(0, -'index.html'.length));
  if (p.endsWith('.html')) out.add(p.slice(0, -5));
  if (!p.endsWith('/') && !p.endsWith('.html')) {
    out.add(p + '/');
    out.add(p + '.html');
  }
  void cfg;
  return [...out];
}
