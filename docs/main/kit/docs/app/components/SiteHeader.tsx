import { useRef } from 'react';
import type { NavItem, RouteMeta } from '../../shared/types';
import { href, site } from '../data';
import { KitLink } from './KitLink';
import { PixelIcon, BrandIcon, type BrandIconName } from '../../../components/PixelIcon';
import { ThemeToggle } from '../../../components/ThemeToggle';
import { LocaleSwitcher, type LocaleOption } from '../../../components/LocaleSwitcher';
import { useDismissableDetails } from '../../../components/menu';
import type { UiStrings } from '../../../components/i18n';

function NavDropdown({ item, active }: { item: NavItem; active: boolean }) {
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
            <KitLink key={i} className="kit-menu-item" href={href(c.link)}>
              <span>{c.text}</span>
            </KitLink>
          ) : null,
        )}
      </div>
    </details>
  );
}

// [kit patch: tabs row] `header.tabsRow` in docs.config.ts moves the header nav to a second "tabs" row below the
// brand and the actions (MkDocs Material navigation.tabs) for navs too wide to share one row with them. It is
// static site data, so server and client render the same markup and switching language keeps the layout.
const TABS_ROW = !!site.header?.tabsRow;

export interface SiteHeaderProps {
  route?: RouteMeta;
  locale: string;
  lang: string;
  t: UiStrings;
  localeOptions: LocaleOption[];
  onLocaleSelect: (code: string) => void;
  onOpenSearch: () => void;
  onOpenDrawer: () => void;
  drawerOpen: boolean;
  hasDrawer: boolean;
}

export function SiteHeader({ route, locale, lang, t, localeOptions, onLocaleSelect, onOpenSearch, onOpenDrawer, drawerOpen, hasDrawer }: SiteHeaderProps) {
  const items = site.nav[locale] ?? [];
  const home = href(site.homePaths[locale] ?? '');
  return (
    <header className={TABS_ROW ? 'kit-site-header has-tabs-row' : 'kit-site-header'}>
      <div className="kit-site-header-inner">
        {hasDrawer ? (
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
        ) : null}
        <KitLink className="kit-site-brand" href={home}>
          {site.logo ? (
            <img className="kit-site-logo" src={site.logo.src} alt="" width={28} height={28} />
          ) : (
            <PixelIcon name="grass" size={32} className="kit-site-logo" />
          )}
          <span className="kit-site-title">{site.title}</span>
        </KitLink>
        <nav className="kit-site-nav" aria-label={t.mainNav}>
          <ul>
            {items.map((it, i) => {
              const active = route?.nav === i;
              return (
                <li key={i}>
                  {it.items ? (
                    <NavDropdown item={it} active={active} />
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
        <div className="kit-site-actions">
          <button type="button" className="kit-search-trigger" data-kit-search-trigger="" onClick={onOpenSearch} aria-label={t.search} aria-keyshortcuts="Control+K Meta+K /">
            <PixelIcon name="search" />
            <span className="kit-search-trigger-label">{t.search}</span>
            <span className="kit-search-trigger-keys" aria-hidden="true">
              <kbd className="mc-kbd">Ctrl</kbd>
              <kbd className="mc-kbd">K</kbd>
            </span>
          </button>
          <LocaleSwitcher options={localeOptions} current={locale} onSelect={onLocaleSelect} linkComponent={KitLink} className="kit-site-locale" />
          <ThemeToggle locale={lang} />
          {site.social.map((s) => (
            <a key={s.link} className="mc-icon-btn kit-site-social" href={s.link} target="_blank" rel="noopener" aria-label={s.label ?? s.icon} title={s.label ?? s.icon}>
              <BrandIcon name={(s.icon as BrandIconName) ?? 'github'} size={18} />
            </a>
          ))}
        </div>
      </div>
    </header>
  );
}
