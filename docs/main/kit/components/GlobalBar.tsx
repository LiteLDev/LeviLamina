import { useRef, type ReactNode } from 'react';
import { PixelIcon, BrandIcon } from './PixelIcon';
import { useDismissableDetails } from './menu';
import { uiStrings, type UiStrings } from './i18n';
import { DOCS_PROJECTS, LINKS, globalNav, type DocsProjectId, type SiteId } from './projects';

export interface GlobalBarProps {
  /** Which LeviMC site this is (highlights the matching item). */
  current?: SiteId;
  /** On docs.levimc.org: which project's docs are open. */
  currentDocs?: DocsProjectId | string;
  /** UI locale (any BCP-47 tag). */
  locale?: string;
  strings?: Partial<UiStrings>;
  /** Extra controls rendered at the right end (e.g. ThemeToggle/LocaleSwitcher on non-docs sites). */
  end?: ReactNode;
  className?: string;
}

function DocsMenuPanel({ t, currentDocs }: { t: UiStrings; currentDocs?: string }) {
  return (
    <div className="kit-gbar-docs-grid">
      {DOCS_PROJECTS.map((p) => (
        <a key={p.id} href={p.url} className="kit-gbar-docs-item" aria-current={p.id === currentDocs ? 'page' : undefined}>
          <span className="kit-slot kit-gbar-docs-slot" aria-hidden="true">
            <PixelIcon name={p.icon} size={16} />
          </span>
          <span className="kit-gbar-docs-text">
            <span className="kit-gbar-docs-name">{p.name}</span>
            <span className="kit-gbar-docs-blurb">{t.projectBlurbs[p.id]}</span>
          </span>
        </a>
      ))}
    </div>
  );
}

/**
 * The thin cross-site bar shown at the very top of every LeviMC site (levimc.org, pkg.levimc.org,
 * docs.levimc.org/*, Doxygen API pages). Uses <details> dropdowns so it works without JavaScript.
 */
export function GlobalBar({ current, currentDocs, locale, strings, end, className }: GlobalBarProps) {
  const t = uiStrings(locale, strings);
  const docsRef = useRef<HTMLDetailsElement>(null);
  const moreRef = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(docsRef);
  useDismissableDetails(moreRef);
  const items = globalNav(t);
  const isCurrent = (id: SiteId) => (id === current ? 'page' : undefined);

  return (
    <div className={className ? `kit-gbar ${className}` : 'kit-gbar'} data-kit-globalbar="">
      <div className="kit-gbar-inner">
        <a className="kit-gbar-brand" href={LINKS.home} aria-current={isCurrent('home')}>
          <PixelIcon name="grass" size={16} />
          <span className="kit-gbar-brand-text">LeviMC</span>
        </a>
        <nav className="kit-gbar-nav" aria-label={t.network}>
          <ul>
            {items.map((item) =>
              item.id === 'docs' ? (
                <li key={item.id}>
                  <details ref={docsRef} className="kit-menu kit-gbar-docs">
                    <summary className="kit-gbar-link" aria-current={isCurrent('docs')}>
                      {item.label}
                      <PixelIcon name="chevronDown" className="kit-menu-chevron" />
                    </summary>
                    <div className="kit-menu-panel kit-gbar-docs-panel">
                      <DocsMenuPanel t={t} currentDocs={currentDocs} />
                    </div>
                  </details>
                </li>
              ) : (
                <li key={item.id}>
                  <a className="kit-gbar-link" href={item.url} aria-current={isCurrent(item.id)}>
                    {item.label}
                  </a>
                </li>
              ),
            )}
          </ul>
        </nav>
        <div className="kit-gbar-end">
          {end}
          <a className="kit-gbar-icon" href={LINKS.github} aria-label="GitHub" title="GitHub">
            <BrandIcon name="github" size={16} />
          </a>
          <details ref={moreRef} className="kit-menu kit-gbar-more">
            <summary className="kit-gbar-icon" aria-label={t.network} title={t.network}>
              <PixelIcon name="apps" />
            </summary>
            <div className="kit-menu-panel kit-gbar-more-panel">
              <nav aria-label={t.network}>
                <a className="kit-gbar-more-link" href={LINKS.home} aria-current={isCurrent('home')}>
                  {t.home}
                </a>
                {items
                  .filter((i) => i.id !== 'docs')
                  .map((item) => (
                    <a key={item.id} className="kit-gbar-more-link" href={item.url} aria-current={isCurrent(item.id)}>
                      {item.label}
                    </a>
                  ))}
                <p className="kit-gbar-more-heading">{t.docs}</p>
                <DocsMenuPanel t={t} currentDocs={currentDocs} />
              </nav>
            </div>
          </details>
        </div>
      </div>
    </div>
  );
}
