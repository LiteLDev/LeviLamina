// Navigation: MkDocs nav trees (untitled entries take the page H1 per locale, group titles translated via
// nav_translations, external links allowed) and VitePress nav/sidebar objects (single or multi-sidebar).

import { posix } from 'node:path';
import type { NavEntry, ResolvedConfig, SidebarConfig } from './config.ts';
import type { ContentScan, PageRoute } from './content.ts';
import { findSource } from './links.ts';
import type { NavItem, SidebarData } from '../shared/types.ts';

type Node =
  | { kind: 'page'; key: string; locale?: string; text?: string; external?: false }
  | { kind: 'link'; text: string; href: string }
  | { kind: 'group'; text: string; children: Node[]; collapsed?: boolean };

const isExternal = (s: string) => /^[a-z][a-z0-9+.-]*:|^\/\//i.test(s);

function findSourceForNav(scan: ContentScan, cfg: ResolvedConfig, link: string): { key: string; locale?: string } | null {
  let p = link.split('#')[0]!.split('?')[0]!;
  if (p.startsWith(cfg.base)) p = p.slice(cfg.base.length);
  p = posix.normalize(p.replace(/^\/+/, '') || '.').replace(/^\.$/, '');
  const found = findSource({ cfg, scan }, p);
  if (found) return { key: found.src.key, locale: found.explicit ? found.src.locale : undefined };
  const direct = scan.byPath.get(p) ?? scan.byPath.get(p + '/');
  if (direct) return { key: direct.key, locale: direct.locale };
  return null;
}

export function parseNav(entries: NavEntry[], scan: ContentScan, cfg: ResolvedConfig, warn: (m: string) => void): Node[] {
  const out: Node[] = [];
  const asTarget = (text: string | undefined, link: string): Node | null => {
    if (isExternal(link)) {
      // own-site absolute URL pointing into this build → internal page
      if (cfg.hostname && link.startsWith(cfg.hostname + cfg.base)) {
        const t = findSourceForNav(scan, cfg, link.slice(cfg.hostname.length));
        if (t) return { kind: 'page', key: t.key, locale: t.locale, text };
      }
      return { kind: 'link', text: text ?? link, href: link };
    }
    const t = findSourceForNav(scan, cfg, link);
    if (!t) {
      warn(`nav: cannot resolve '${link}'`);
      return null;
    }
    return { kind: 'page', key: t.key, locale: t.locale, text };
  };
  for (const e of entries) {
    if (typeof e === 'string') {
      const n = asTarget(undefined, e);
      if (n) out.push(n);
    } else if ('items' in e && Array.isArray(e.items)) {
      const children = parseNav(e.items as NavEntry[], scan, cfg, warn);
      if (typeof e.link === 'string' && e.link) {
        const head = asTarget(String(e.text), e.link);
        if (head) children.unshift(head);
      }
      out.push({ kind: 'group', text: String(e.text), children, collapsed: (e as { collapsed?: boolean }).collapsed });
    } else if ('link' in e && typeof e.link === 'string') {
      const n = asTarget(typeof e.text === 'string' ? e.text : undefined, e.link);
      if (n) out.push(n);
    } else {
      for (const [title, v] of Object.entries(e as Record<string, string | NavEntry[]>)) {
        if (typeof v === 'string') {
          const n = asTarget(title, v);
          if (n) out.push(n);
        } else if (Array.isArray(v)) out.push({ kind: 'group', text: title, children: parseNav(v, scan, cfg, warn) });
      }
    }
  }
  return out;
}

export interface NavBuildInput {
  cfg: ResolvedConfig;
  scan: ContentScan;
  /** route id → page title in that locale */
  titles: Map<string, string>;
  warn: (m: string) => void;
}

export interface NavBuildResult {
  nav: Record<string, NavItem[]>;
  sidebars: Record<string, SidebarData>;
  /** route id → { sidebar id, nav index, prev, next } */
  placement: Map<string, { sidebar?: string; nav?: number; prev?: { text: string; path: string }; next?: { text: string; path: string } }>;
  /** `${locale}:${key}` → explicit (translated) nav title, for pages listed with a title in the nav. */
  navTitles: Map<string, string>;
}

export function buildNavigation({ cfg, scan, titles, warn }: NavBuildInput): NavBuildResult {
  const nav: Record<string, NavItem[]> = {};
  const sidebars: Record<string, SidebarData> = {};
  const placement: NavBuildResult['placement'] = new Map();
  const navTitles = new Map<string, string>();
  const perLocale = <T,>(v: T[] | Record<string, T[]> | undefined, code: string): T[] | undefined => {
    if (!v) return undefined;
    if (Array.isArray(v)) return v;
    return v[code] ?? v[cfg.defaultLocale];
  };
  const tr = (code: string, text: string) => cfg.navTranslations?.[code]?.[text] ?? text;

  const routeOf = (key: string, locale: string | undefined, code: string): PageRoute | undefined => {
    const m = scan.byKey.get(key);
    if (!m) return undefined;
    return m.get(locale ?? code) ?? m.get(cfg.defaultLocale) ?? [...m.values()][0];
  };

  const materialize = (nodes: Node[], code: string): NavItem[] =>
    nodes
      .map((n): NavItem | null => {
        if (n.kind === 'link') return { text: tr(code, n.text), link: n.href, external: true };
        if (n.kind === 'page') {
          const r = routeOf(n.key, n.locale, code);
          if (!r) return null;
          if (n.text && !navTitles.has(`${code}:${n.key}`)) navTitles.set(`${code}:${n.key}`, tr(code, n.text));
          return { text: n.text ? tr(code, n.text) : (titles.get(r.id) ?? n.key), link: r.path, key: r.key };
        }
        return { text: tr(code, n.text), items: materialize(n.children, code), collapsed: n.collapsed };
      })
      .filter((x): x is NavItem => !!x);

  const firstLink = (items: NavItem[]): NavItem | undefined => {
    for (const it of items) {
      if (it.link && !it.external) return it;
      if (it.items) {
        const f = firstLink(it.items);
        if (f) return f;
      }
    }
    return undefined;
  };
  const flatten = (items: NavItem[], acc: NavItem[] = []): NavItem[] => {
    for (const it of items) {
      if (it.link && !it.external && !acc.some((a) => a.link === it.link)) acc.push(it);
      if (it.items) flatten(it.items, acc);
    }
    return acc;
  };
  const contains = (it: NavItem, key: string): boolean => it.key === key || !!it.items?.some((c) => contains(c, key));

  const mode = cfg.sidebar === undefined ? 'tabs' : cfg.sidebar;
  const isMkdocsMode = mode === 'tabs' || mode === 'tree';

  for (const loc of cfg.locales) {
    const code = loc.code;
    const navEntries = perLocale<NavEntry>(cfg.nav as NavEntry[] | Record<string, NavEntry[]> | undefined, code) ?? [];
    const tree = materialize(parseNav(navEntries, scan, cfg, warn), code);

    if (isMkdocsMode) {
      // header: top-level entries; groups link to their first page
      nav[code] = tree.map((it) => {
        if (!it.items) return { ...it, activePrefix: undefined };
        const f = firstLink(it.items);
        return { text: it.text, link: f?.link, key: f?.key, items: undefined };
      });
      if (mode === 'tree') sidebars[`${code}:tree`] = { items: tree };
      tree.forEach((it, i) => {
        if (mode === 'tabs' && it.items) sidebars[`${code}:tab${i}`] = { title: it.text, items: it.items };
      });
      const flat = flatten(tree);
      for (const r of scan.routes.filter((x) => x.locale === code)) {
        const idx = tree.findIndex((it) => contains(it, r.key));
        const pos = flat.findIndex((it) => it.key === r.key);
        const sidebar = mode === 'tree' ? `${code}:tree` : idx >= 0 && tree[idx]!.items ? `${code}:tab${idx}` : undefined;
        placement.set(r.id, {
          sidebar,
          nav: idx >= 0 ? idx : undefined,
          prev: pos > 0 ? { text: flat[pos - 1]!.text, path: flat[pos - 1]!.link! } : undefined,
          next: pos >= 0 && pos < flat.length - 1 ? { text: flat[pos + 1]!.text, path: flat[pos + 1]!.link! } : undefined,
        });
      }
    } else {
      // VitePress: explicit nav + sidebar(s)
      nav[code] = tree.map((it) => ({ ...it, activePrefix: it.link && !it.external ? posix.dirname('/' + it.link).replace(/^\/$/, '') + '/' : undefined }));
      let sb: SidebarConfig | undefined;
      if (mode && typeof mode === 'object') {
        const rec = mode as Record<string, SidebarConfig> | SidebarConfig;
        if (Array.isArray(rec)) sb = rec;
        else {
          const keys = Object.keys(rec);
          const looksLikeLocales = keys.every((k) => cfg.locales.some((l) => l.code === k));
          sb = looksLikeLocales ? (rec as Record<string, SidebarConfig>)[code] : (rec as SidebarConfig);
        }
      }
      const groups: { prefix: string; id: string; items: NavItem[] }[] = [];
      if (Array.isArray(sb)) {
        const id = `${code}:main`;
        const items = materialize(parseNav(sb, scan, cfg, warn), code);
        sidebars[id] = { items, expand: true };
        groups.push({ prefix: '/', id, items });
      } else if (sb) {
        Object.entries(sb).forEach(([prefix, entries], i) => {
          const id = `${code}:sb${i}`;
          const items = materialize(parseNav(entries, scan, cfg, warn), code);
          sidebars[id] = { items, expand: true };
          groups.push({ prefix: prefix.startsWith('/') ? prefix : '/' + prefix, id, items });
        });
      }
      for (const r of scan.routes.filter((x) => x.locale === code)) {
        const url = '/' + r.path;
        const g = groups.filter((x) => url.startsWith(x.prefix) || ('/' + r.source.rel).startsWith(x.prefix)).sort((a, b) => b.prefix.length - a.prefix.length)[0];
        const flat = g ? flatten(g.items) : [];
        const pos = flat.findIndex((it) => it.key === r.key);
        // header item: exact match first, else longest active prefix
        const items = nav[code]!;
        let navIdx = items.findIndex((it) => it.key === r.key);
        if (navIdx < 0) {
          let best = -1;
          let bestLen = 1;
          items.forEach((it, i) => {
            if (it.activePrefix && it.activePrefix.length > bestLen && url.startsWith(it.activePrefix)) {
              best = i;
              bestLen = it.activePrefix.length;
            }
          });
          navIdx = best;
        }
        placement.set(r.id, {
          sidebar: g?.id,
          nav: navIdx >= 0 ? navIdx : undefined,
          prev: pos > 0 ? { text: flat[pos - 1]!.text, path: flat[pos - 1]!.link! } : undefined,
          next: pos >= 0 && pos < flat.length - 1 ? { text: flat[pos + 1]!.text, path: flat[pos + 1]!.link! } : undefined,
        });
      }
    }
  }
  return { nav, sidebars, placement, navTitles };
}
