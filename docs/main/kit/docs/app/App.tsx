import { Suspense, use, useCallback, useEffect, useLayoutEffect, useMemo, useRef, useState } from 'react';
import { useLocation, useNavigationType } from 'react-router';
import type { PageData, RouteMeta } from '../shared/types';
import { href, langOf, loadPage, localeOf, matchPathname, site, stringsFor } from './data';
import { pageTitle } from '../shared/head';
import { SiteHeader } from './components/SiteHeader';
import { KitLink } from './components/KitLink';
import { MobileDrawer } from './components/MobileDrawer';
import { SearchModal } from './components/SearchModal';
import { DocLayout } from './layouts/DocLayout';
import { HomeLayout } from './layouts/HomeLayout';
import { NotFound } from './layouts/NotFound';
import { layouts as virtualLayouts } from 'virtual:kit-docs/layouts';
import type { ComponentType } from 'react';
import type { CustomLayoutProps } from './layout-api';

const customLayouts = virtualLayouts as Record<string, ComponentType<CustomLayoutProps>>;
import { GlobalBar } from '../../components/GlobalBar';
import { SiteFooter } from '../../components/SiteFooter';
import { PaintedBackdrop } from '../../components/PaintedBackdrop';
import { ThemeProvider } from '../../components/theme';
import { readLanguagePreference } from '../../components/prefs';
import { revealPendingChrome } from '../../components/locale';
import type { LocaleOption } from '../../components/LocaleSwitcher';
import { resolveUiLocale, uiStrings, type UiStrings } from '../../components/i18n';

const isBrowser = typeof window !== 'undefined';
const useIsoLayoutEffect = isBrowser ? useLayoutEffect : useEffect;

function RoutePage({ route, t, onSearch, locale }: { route?: RouteMeta; t: UiStrings; onSearch: () => void; locale: string }) {
  if (!route) return <NotFound locale={locale} t={t} onSearch={onSearch} />;
  const page = use(loadPage(route.page) as Promise<PageData>);
  const Custom = customLayouts[route.layout];
  if (Custom) return <Custom route={route} page={page} site={site} t={t} />;
  return route.layout === 'home' ? <HomeLayout route={route} page={page} t={t} /> : <DocLayout route={route} page={page} t={t} />;
}

/** Keep <head> in sync after client-side navigation (SSR writes the initial head). */
function useHead(route: RouteMeta | undefined, locale: string, t: UiStrings) {
  useEffect(() => {
    document.title = pageTitle(site, route, t.notFoundTitle);
    document.documentElement.lang = langOf(locale);
    if (!route) return;
    const setMeta = (sel: string, attr: string, value: string | undefined) => {
      const el = document.head.querySelector<HTMLElement>(sel);
      if (el && value !== undefined) el.setAttribute(attr, value);
    };
    setMeta('meta[name="description"]', 'content', route.description);
    if (site.hostname) {
      setMeta('link[rel="canonical"]', 'href', site.hostname + site.base + route.path);
      document.head.querySelectorAll('link[rel="alternate"][hreflang]').forEach((n) => n.remove());
      const alts = Object.entries(route.alternates);
      if (alts.length > 1) {
        for (const [code, p] of alts) {
          const l = document.createElement('link');
          l.rel = 'alternate';
          l.hreflang = langOf(code);
          l.href = site.hostname + site.base + p;
          document.head.appendChild(l);
        }
      }
    }
  }, [route, locale, t]);
}

/**
 * Sites with a single locale: the chrome (LeviMC bar, footer, the drawer's LeviMC links) follows the visitor's
 * stored language preference, like the static pages' kit.js — the content stays in the site's language.
 * Returns the chrome's UI locale once known (undefined: the site's own). The pre-paint script hid the chrome
 * (html.kit-chrome-pending) when the preference differs; it is shown again once the chrome was re-rendered.
 */
function useChromeLocale(enabled: boolean): string | undefined {
  const [ui, setUi] = useState<string>();
  const [synced, setSynced] = useState(false);
  useIsoLayoutEffect(() => {
    if (!enabled) return;
    const sync = () => {
      const p = readLanguagePreference();
      setUi(p ? resolveUiLocale(p) : undefined);
      setSynced(true);
    };
    sync();
    const onPref = (e: Event) => {
      if ((e as CustomEvent<{ kind: string }>).detail?.kind === 'lang') sync();
    };
    const onVisible = () => {
      if (document.visibilityState === 'visible') sync();
    };
    window.addEventListener('levimc-pref-change', onPref);
    document.addEventListener('visibilitychange', onVisible);
    return () => {
      window.removeEventListener('levimc-pref-change', onPref);
      document.removeEventListener('visibilitychange', onVisible);
    };
  }, [enabled]);
  useIsoLayoutEffect(() => {
    if (synced) revealPendingChrome();
  }, [synced, ui]);
  return ui;
}

/** Scroll to top / hash target after navigation; restore positions on back/forward. */
function useScrollManagement(key: string, hash: string) {
  const navType = useNavigationType();
  const positions = useRef(new Map<string, number>());
  const first = useRef(true);
  useEffect(() => {
    if ('scrollRestoration' in history) history.scrollRestoration = 'manual';
    const save = () => positions.current.set(history.state?.key ?? location.pathname, window.scrollY);
    window.addEventListener('scroll', save, { passive: true });
    return () => window.removeEventListener('scroll', save);
  }, []);
  useIsoLayoutEffect(() => {
    if (first.current) {
      first.current = false;
      if (hash) document.getElementById(decodeURIComponent(hash.slice(1)))?.scrollIntoView();
      return;
    }
    if (navType === 'POP') {
      const y = positions.current.get(history.state?.key ?? location.pathname);
      if (y !== undefined) {
        window.scrollTo(0, y);
        return;
      }
    }
    if (hash) {
      const el = document.getElementById(decodeURIComponent(hash.slice(1)));
      if (el) {
        el.scrollIntoView();
        return;
      }
    }
    window.scrollTo(0, 0);
  }, [key, hash]);
}

export function App() {
  const location = useLocation();
  const fullPath = site.base + location.pathname.replace(/^\//, '');
  const route = useMemo(() => matchPathname(fullPath), [fullPath]);
  // On the static 404 page the locale is taken from the URL after hydration (SSR renders the default).
  const [notFoundLocale, setNotFoundLocale] = useState(site.defaultLocale);
  useEffect(() => {
    if (!route) setNotFoundLocale(localeOf(fullPath));
  }, [route, fullPath]);
  const locale = route?.locale ?? notFoundLocale;
  const lang = langOf(locale);
  const t = useMemo(() => stringsFor(locale), [locale]);
  const [searchOpen, setSearchOpen] = useState(false);
  const [drawerOpen, setDrawerOpen] = useState(false);

  useHead(route, locale, t);
  useScrollManagement(route ? route.page : fullPath, location.hash);
  useEffect(() => setDrawerOpen(false), [fullPath]);
  useEffect(() => {
    document.documentElement.classList.toggle('kit-scroll-lock', searchOpen || drawerOpen);
  }, [searchOpen, drawerOpen]);

  const openSearch = useCallback(() => {
    setDrawerOpen(false);
    setSearchOpen(true);
  }, []);
  useEffect(() => {
    const onKey = (e: KeyboardEvent) => {
      const typing = (e.target as HTMLElement | null)?.closest('input, textarea, select, [contenteditable="true"]');
      if ((e.key === 'k' || e.key === 'K') && (e.metaKey || e.ctrlKey)) {
        e.preventDefault();
        openSearch();
      } else if (e.key === '/' && !typing && !e.metaKey && !e.ctrlKey && !e.altKey) {
        e.preventDefault();
        openSearch();
      }
    };
    window.addEventListener('keydown', onKey);
    return () => window.removeEventListener('keydown', onKey);
  }, [openSearch]);

  const localeOptions: LocaleOption[] = site.locales.map((l) => ({
    code: l.code,
    label: l.label,
    lang: l.lang,
    href: href(route?.alternates[l.code] ?? site.homePaths[l.code] ?? l.prefix),
  }));
  // The language menu of the top bar is this site's locale switcher: choosing one stores it as the visitor's
  // cross-site language preference (LocaleSwitcher) and opens the equivalent page.
  const single = site.locales.length < 2;
  const languages = single ? undefined : { options: localeOptions, current: locale, linkComponent: KitLink };
  // single-locale sites: the bar offers the 9 chrome languages; a choice re-renders the chrome in place
  // (useChromeLocale hears the stored preference change) instead of reloading the page
  const chromeUi = useChromeLocale(single);
  const chromeLang = chromeUi && chromeUi !== resolveUiLocale(lang) ? chromeUi : lang;
  const chromeT = useMemo(() => (chromeLang === lang ? t : uiStrings(chromeLang)), [chromeLang, lang, t]);
  const sidebar = route?.sidebar ? site.sidebars[route.sidebar] : undefined;

  return (
    <ThemeProvider>
      <a className="kit-skip-link" href="#kit-main">
        {t.skipToContent}
      </a>
      <PaintedBackdrop scene={route?.layout !== 'home'} />
      <div className="kit-shell kit-above-backdrop" data-layout={route?.layout ?? '404'}>
        <GlobalBar
          current="docs"
          currentDocs={site.project}
          locale={chromeLang}
          strings={chromeT}
          languages={languages}
          onLanguageChange={single ? () => undefined : undefined}
          github={site.github}
          menu={false}
        />
        <SiteHeader route={route} locale={locale} t={t} onOpenSearch={openSearch} onOpenDrawer={() => setDrawerOpen(true)} drawerOpen={drawerOpen} />
        <Suspense fallback={<main id="kit-main" className="kit-loading" aria-busy="true" />}>
          <RoutePage route={route} t={t} onSearch={openSearch} locale={locale} />
        </Suspense>
        <SiteFooter locale={chromeLang} strings={chromeT} extra={site.footer?.message} copyright={site.footer?.copyright} />
      </div>
      <MobileDrawer
        open={drawerOpen}
        onClose={() => setDrawerOpen(false)}
        route={route}
        locale={locale}
        sidebar={sidebar}
        path={route?.path ?? ''}
        t={t}
        chromeLang={chromeLang}
        chromeT={chromeT}
      />
      <SearchModal open={searchOpen} onClose={() => setSearchOpen(false)} locale={locale} t={t} />
    </ThemeProvider>
  );
}
