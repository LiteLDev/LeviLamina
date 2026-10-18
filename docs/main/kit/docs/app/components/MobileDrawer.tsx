import { useEffect, useRef } from 'react';
import type { NavItem, RouteMeta, SidebarData } from '../../shared/types';
import { href, site } from '../data';
import { KitLink } from './KitLink';
import { Sidebar } from './Sidebar';
import { useFocusTrap } from './focus';
import { afterPaint, revealIn } from './reveal';
import { PixelIcon } from '../../../components/PixelIcon';
import { GlobalNavList } from '../../../components/GlobalBar';
import type { UiStrings } from '../../../components/i18n';

/**
 * The docs' one menu (phones, or when the section tabs do not fit): the site's sections, the current section's
 * sidebar, then the LeviMC network links of the top bar (Home … About, the docs projects) — the top bar's own
 * menu is off on docs sites, so there is a single menu button.
 */
export function MobileDrawer({
  open,
  onClose,
  route,
  locale,
  sidebar,
  path,
  t,
  chromeLang,
  chromeT,
}: {
  open: boolean;
  onClose: () => void;
  route?: RouteMeta;
  locale: string;
  sidebar?: SidebarData;
  path: string;
  t: UiStrings;
  /** Language and strings of the LeviMC chrome — the same the bar gets, so its links read the same here. */
  chromeLang: string;
  chromeT: UiStrings;
}) {
  const ref = useRef<HTMLDivElement>(null);
  useFocusTrap(ref, open, onClose);
  // open the drawer with the current page's link in view
  useEffect(() => {
    if (!open) return;
    return afterPaint(() => {
      const d = ref.current;
      revealIn(d, d?.querySelector<HTMLElement>('.kit-sb-link.is-active') ?? d?.querySelector<HTMLElement>('.kit-drawer-link.is-active') ?? null, 'center');
    });
  }, [open, path]);
  const items: NavItem[] = site.nav[locale] ?? [];
  return (
    <div className="kit-drawer-root" data-open={open ? '' : undefined} hidden={!open}>
      <div className="kit-drawer-scrim" onClick={onClose} aria-hidden="true" />
      <div ref={ref} id="kit-drawer" className="kit-drawer" role="dialog" aria-modal="true" aria-label={t.menu}>
        <div className="kit-drawer-head">
          <span className="kit-drawer-brand">
            {site.logo ? <img className="kit-site-logo" src={site.logo.src} alt="" width={24} height={24} /> : <PixelIcon name="grass" size={24} className="kit-site-logo" />}
            <span className="kit-drawer-title">{site.title}</span>
          </span>
          <button type="button" className="mc-icon-btn" onClick={onClose} aria-label={t.close} data-autofocus="">
            <PixelIcon name="close" />
          </button>
        </div>
        {items.length ? (
          <nav className="kit-drawer-nav" aria-label={t.mainNav}>
            <ul>
              {items.map((it, i) => {
                const active = route?.nav === i;
                if (it.items)
                  return (
                    <li key={i} className="kit-drawer-group">
                      <span className="kit-drawer-group-title">{it.text}</span>
                      <ul>
                        {it.items.map((c, j) =>
                          c.link ? (
                            <li key={j}>
                              {c.external ? (
                                <a href={c.link} target="_blank" rel="noopener" className="kit-drawer-link">
                                  {c.text}
                                  <PixelIcon name="external" />
                                </a>
                              ) : (
                                <KitLink
                                  href={href(c.link)}
                                  className={c.link === path ? 'kit-drawer-link is-active' : 'kit-drawer-link'}
                                  aria-current={c.link === path ? 'page' : undefined}
                                  onClick={onClose}
                                >
                                  {c.text}
                                </KitLink>
                              )}
                            </li>
                          ) : null,
                        )}
                      </ul>
                    </li>
                  );
                if (it.link === undefined) return null;
                return (
                  <li key={i}>
                    {it.external ? (
                      <a href={it.link} target="_blank" rel="noopener" className="kit-drawer-link">
                        {it.text}
                        <PixelIcon name="external" />
                      </a>
                    ) : (
                      <KitLink href={href(it.link)} className={active ? 'kit-drawer-link is-active' : 'kit-drawer-link'} aria-current={active ? 'true' : undefined} onClick={onClose}>
                        {it.text}
                      </KitLink>
                    )}
                  </li>
                );
              })}
            </ul>
          </nav>
        ) : null}
        {sidebar ? (
          <div className="kit-drawer-sidebar">
            <Sidebar data={sidebar} path={path} label={t.sidebarNav} onNavigate={onClose} />
          </div>
        ) : null}
        <nav className="kit-drawer-network" aria-label={chromeT.network} lang={chromeLang}>
          <GlobalNavList
            current="docs"
            currentDocs={site.project}
            locale={chromeLang}
            strings={chromeT}
            heading={
              <p className="kit-drawer-network-title">
                <PixelIcon name="grass" size={16} />
                <span>LeviMC</span>
              </p>
            }
          />
        </nav>
      </div>
    </div>
  );
}
