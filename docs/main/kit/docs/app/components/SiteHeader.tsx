import { useEffect, useLayoutEffect, useRef, type RefObject } from 'react';
import type { NavItem, RouteMeta } from '../../shared/types';
import { href, site } from '../data';
import { KitLink } from './KitLink';
import { PixelIcon, BrandIcon, type BrandIconName } from '../../../components/PixelIcon';
import { useDismissableDetails } from '../../../components/menu';
import type { UiStrings } from '../../../components/i18n';

function NavDropdown({ item, active, path }: { item: NavItem; active: boolean; path?: string }) {
  const ref = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(ref);
  return (
    <details ref={ref} className="kit-menu kit-site-nav-menu">
      <summary className={active ? 'kit-site-nav-link is-active' : 'kit-site-nav-link'}>
        {item.text}
        <PixelIcon name="chevronDown" className="kit-menu-chevron" />
      </summary>
      <div className="kit-menu-panel">
        {item.items!.map((c, i) =>
          c.external ? (
            <a key={i} className="kit-menu-item" href={c.link} target="_blank" rel="noopener">
              <span>{c.text}</span>
              <PixelIcon name="external" />
            </a>
          ) : c.link ? (
            <KitLink
              key={i}
              className={c.link === path ? 'kit-menu-item is-active' : 'kit-menu-item'}
              href={href(c.link)}
              aria-current={c.link === path ? 'page' : undefined}
            >
              <span>{c.text}</span>
            </KitLink>
          ) : null,
        )}
      </div>
    </details>
  );
}

const useIsoLayoutEffect = typeof window !== 'undefined' ? useLayoutEffect : useEffect;

/**
 * Header states tried in order until the section tabs fit (html[data-kit-nav-fit], see docs.css):
 * "search" (icon-only search), "tabs" (the tabs get their own row below brand + search), "drawer" (the tabs
 * move into the drawer, as below 960px). `header.tabsRow`: 'auto' uses all three, false skips "tabs",
 * true shows the tabs row from the start.
 */
function fitSteps(): string[] {
  const t = site.header?.tabsRow ?? 'auto';
  return t === 'auto' ? ['search', 'tabs', 'drawer'] : ['search', 'drawer'];
}

/**
 * Pre-paint copy of the fit loop, inlined right after the header: the first paint (and visitors without
 * JavaScript) already gets the right state, so nothing is clipped before hydration and nothing shifts after.
 */
function navFitScript(): string {
  return (
    `(function(){try{var d=document.documentElement,s=document.currentScript,h=s&&s.previousElementSibling,` +
    `u=h&&h.querySelector(".kit-site-nav > ul"),S=${JSON.stringify(fitSteps())},i;if(!u)return;d.removeAttribute("data-kit-nav-fit");` +
    `for(i=0;i<S.length;i++){if(u.scrollWidth<=u.clientWidth)return;d.setAttribute("data-kit-nav-fit",S[i])}}catch(e){}})();`
  );
}

/** Keeps the section tabs from being cut off: re-measured on resize, web-font load and locale / active-tab changes. */
function useNavFit(ref: RefObject<HTMLElement | null>, locale: string, active: number | undefined) {
  useIsoLayoutEffect(() => {
    const header = ref.current;
    const list = header?.querySelector<HTMLElement>('.kit-site-nav > ul');
    const root = document.documentElement;
    if (!header || !list) return;
    const steps = fitSteps();
    const fit = () => {
      const before = root.getAttribute('data-kit-nav-fit');
      root.removeAttribute('data-kit-nav-fit');
      // stops as soon as the tabs fit (or are hidden by the phone breakpoint: both widths are then 0)
      for (const step of steps) {
        if (list.scrollWidth <= list.clientWidth) break;
        root.setAttribute('data-kit-nav-fit', step);
      }
      if (before !== root.getAttribute('data-kit-nav-fit')) window.dispatchEvent(new Event('kit-nav-fit'));
    };
    fit();
    const ro = typeof ResizeObserver === 'undefined' ? undefined : new ResizeObserver(fit);
    ro?.observe(header);
    document.fonts?.addEventListener('loadingdone', fit);
    return () => {
      ro?.disconnect();
      document.fonts?.removeEventListener('loadingdone', fit);
    };
  }, [ref, locale, active]);
}

export interface SiteHeaderProps {
  route?: RouteMeta;
  locale: string;
  t: UiStrings;
  onOpenSearch: () => void;
  onOpenDrawer: () => void;
  drawerOpen: boolean;
}

/**
 * The docs' own row under the LeviMC bar: project identity (logo + name), the section tabs and search — one
 * compact, light row that reads as the lower half of a single header. Language, theme and GitHub live only in
 * the bar above (which scrolls away; this row sticks). Below 960px (or when the tabs cannot fit) one menu
 * button opens the drawer with the sections, the sidebar and the LeviMC network links.
 */
export function SiteHeader({ route, locale, t, onOpenSearch, onOpenDrawer, drawerOpen }: SiteHeaderProps) {
  const items = site.nav[locale] ?? [];
  const home = href(site.homePaths[locale] ?? '');
  const headerRef = useRef<HTMLElement>(null);
  useNavFit(headerRef, locale, route?.nav);
  const tabsRow = site.header?.tabsRow === true;
  return (
    <>
      <header ref={headerRef} className={tabsRow ? 'kit-site-header has-tabs-row' : 'kit-site-header'} data-kit-subnav="">
        <div className="kit-site-header-inner">
          <button
            type="button"
            className="mc-icon-btn kit-nav-toggle"
            data-kit-nav-toggle=""
            aria-label={t.menu}
            aria-expanded={drawerOpen}
            aria-controls="kit-drawer"
            onClick={onOpenDrawer}
          >
            <PixelIcon name="menu" />
          </button>
          <KitLink className="kit-site-brand" href={home}>
            {site.logo ? (
              <img className="kit-site-logo" src={site.logo.src} alt="" width={24} height={24} />
            ) : (
              <PixelIcon name="grass" size={24} className="kit-site-logo" />
            )}
            <span className="kit-site-title">{site.title}</span>
          </KitLink>
          {items.length ? (
            <nav className="kit-site-nav" aria-label={t.mainNav}>
              <ul>
                {items.map((it, i) => {
                  const active = route?.nav === i;
                  return (
                    <li key={i}>
                      {it.items ? (
                        <NavDropdown item={it} active={active} path={route?.path} />
                      ) : it.external ? (
                        <a className="kit-site-nav-link" href={it.link} target="_blank" rel="noopener">
                          {it.text}
                          <PixelIcon name="external" className="kit-site-nav-ext" />
                        </a>
                      ) : it.link !== undefined ? (
                        <KitLink className={active ? 'kit-site-nav-link is-active' : 'kit-site-nav-link'} href={href(it.link)} aria-current={active ? 'true' : undefined}>
                          {it.text}
                        </KitLink>
                      ) : null}
                    </li>
                  );
                })}
              </ul>
            </nav>
          ) : (
            <span className="kit-site-spacer" />
          )}
          <div className="kit-site-actions">
            {/* the visible "Search" text is the button's name (visually hidden, not removed, when compact) */}
            <button type="button" className="kit-search-trigger" data-kit-search-trigger="" onClick={onOpenSearch} aria-keyshortcuts="Control+K Meta+K /">
              <PixelIcon name="search" />
              <span className="kit-search-trigger-label">{t.search}</span>
              <span className="kit-search-trigger-keys" aria-hidden="true">
                <kbd className="mc-kbd">Ctrl</kbd>
                <kbd className="mc-kbd">K</kbd>
              </span>
            </button>
            {site.social.map((s) => (
              <a key={s.link} className="mc-icon-btn kit-site-social" href={s.link} target="_blank" rel="noopener" aria-label={s.label ?? s.icon} title={s.label ?? s.icon}>
                <BrandIcon name={(s.icon as BrandIconName) ?? 'github'} size={18} />
              </a>
            ))}
          </div>
        </div>
      </header>
      {items.length ? <script dangerouslySetInnerHTML={{ __html: navFitScript() }} /> : null}
    </>
  );
}
