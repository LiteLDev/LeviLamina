// Route matching shared by SSR, the client router and the prerenderer.
import type { RouteMeta, SiteData } from './types.ts';

export function stripBase(pathname: string, base: string): string | null {
  let p = pathname;
  try {
    p = decodeURI(pathname);
  } catch {
    /* keep raw */
  }
  if (p === base.slice(0, -1)) return '';
  if (!p.startsWith(base)) return null;
  return p.slice(base.length);
}

/** All the request paths GitHub Pages would serve for a canonical route path. */
export function pathVariants(path: string): string[] {
  const out = [path];
  if (path === '' || path.endsWith('/')) out.push(path + 'index.html');
  else if (path.endsWith('.html')) out.push(path.slice(0, -5));
  else out.push(path + '.html', path + '/');
  return out;
}

export function createRouteMatcher(routes: RouteMeta[]) {
  const map = new Map<string, RouteMeta>();
  for (const r of routes) for (const v of pathVariants(r.path)) if (!map.has(v)) map.set(v, r);
  return (relPath: string | null): RouteMeta | undefined => (relPath === null ? undefined : map.get(relPath));
}

/** Output file (relative to outDir) for a canonical route path. */
export function outFileFor(path: string): string {
  if (path === '' || path.endsWith('/')) return path + 'index.html';
  if (path.endsWith('.html')) return path;
  return path + '.html';
}

/** Locale of an arbitrary path (relative to base) from its prefix. */
export function localeFromPath(site: Pick<SiteData, 'locales' | 'defaultLocale'>, relPath: string | null): string {
  if (relPath) {
    const hit = site.locales.filter((l) => l.prefix && relPath.startsWith(l.prefix)).sort((a, b) => b.prefix.length - a.prefix.length)[0];
    if (hit) return hit.code;
  }
  return site.defaultLocale;
}
