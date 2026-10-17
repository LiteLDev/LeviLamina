import { useRef } from 'react';
import type { NavItem, RouteMeta, SidebarData } from '../../shared/types';
import { href, site } from '../data';
import { KitLink } from './KitLink';
import { Sidebar } from './Sidebar';
import { useFocusTrap } from './focus';
import { PixelIcon } from '../../../components/PixelIcon';
import type { UiStrings } from '../../../components/i18n';

export function MobileDrawer({
  open,
  onClose,
  route,
  locale,
  sidebar,
  path,
  t,
}: {
  open: boolean;
  onClose: () => void;
  route?: RouteMeta;
  locale: string;
  sidebar?: SidebarData;
  path: string;
  t: UiStrings;
}) {
  const ref = useRef<HTMLDivElement>(null);
  useFocusTrap(ref, open, onClose);
  const items: NavItem[] = site.nav[locale] ?? [];
  return (
    <div className="kit-drawer-root" data-open={open ? '' : undefined} hidden={!open}>
      <div className="kit-drawer-scrim" onClick={onClose} aria-hidden="true" />
      <div ref={ref} id="kit-drawer" className="kit-drawer" role="dialog" aria-modal="true" aria-label={t.menu}>
        <div className="kit-drawer-head">
          <span className="kit-drawer-title">{site.title}</span>
          <button type="button" className="mc-icon-btn" onClick={onClose} aria-label={t.close} data-autofocus="">
            <PixelIcon name="close" />
          </button>
        </div>
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
                              </a>
                            ) : (
                              <KitLink href={href(c.link)} className="kit-drawer-link" onClick={onClose}>
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
                    <KitLink href={href(it.link)} className={active ? 'kit-drawer-link is-active' : 'kit-drawer-link'} onClick={onClose}>
                      {it.text}
                    </KitLink>
                  )}
                </li>
              );
            })}
          </ul>
        </nav>
        {sidebar ? (
          <div className="kit-drawer-sidebar">
            <Sidebar data={sidebar} path={path} label={t.sidebarNav} onNavigate={onClose} />
          </div>
        ) : null}
      </div>
    </div>
  );
}
