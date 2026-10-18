// Runtime access to the compiled site (virtual modules) + a small page cache compatible with React's use().
import * as virtualSite from 'virtual:kit-docs/site';
import type { PageData, RouteMeta, SiteData } from '../shared/types';
import { createRouteMatcher, localeFromPath, stripBase } from '../shared/routing';
import { uiStrings, type UiStrings } from '../../components/i18n';

export const site = virtualSite.site as SiteData;
export const routes = virtualSite.routes as RouteMeta[];
const pages = virtualSite.pages as Record<string, () => Promise<{ default: PageData }>>;

const matcher = createRouteMatcher(routes);

export function matchPathname(pathname: string): RouteMeta | undefined {
  return matcher(stripBase(pathname, site.base));
}

/** Router-relative path (react-router basename = base without trailing slash). */
export function relFromRouter(pathname: string): string {
  return pathname.replace(/^\//, '');
}

export function localeOf(pathname: string): string {
  return localeFromPath(site, stripBase(pathname, site.base) ?? relFromRouter(pathname));
}

export function langOf(code: string): string {
  return site.locales.find((l) => l.code === code)?.lang ?? code;
}

export function stringsFor(code: string): UiStrings {
  return uiStrings(langOf(code), site.ui[code] as Partial<UiStrings> | undefined);
}

/** Absolute href (with base) for a route path. */
export function href(path: string): string {
  return site.base + path;
}

// ------------------------------------------------------------------------------------- page cache
type Thenable<T> = Promise<T> & { status?: 'pending' | 'fulfilled' | 'rejected'; value?: T; reason?: unknown };
const cache = new Map<string, Thenable<PageData>>();

/** Seed the cache synchronously (hydration: data embedded in the HTML; SSR: preloaded). */
export function primePage(id: string, data: PageData) {
  const p = Promise.resolve(data) as Thenable<PageData>;
  p.status = 'fulfilled';
  p.value = data;
  cache.set(id, p);
}

export function loadPage(id: string): Thenable<PageData> {
  let p = cache.get(id);
  if (!p) {
    const loader = pages[id];
    const raw = (loader ? loader().then((m) => m.default) : Promise.resolve({ html: '', toc: [] } as PageData)) as Thenable<PageData>;
    raw.status = 'pending';
    raw.then(
      (v) => {
        raw.status = 'fulfilled';
        raw.value = v;
      },
      (e) => {
        raw.status = 'rejected';
        raw.reason = e;
        cache.delete(id);
      },
    );
    p = raw;
    cache.set(id, p);
  }
  return p;
}

export function preloadPage(id: string) {
  void loadPage(id).catch(() => undefined);
}
