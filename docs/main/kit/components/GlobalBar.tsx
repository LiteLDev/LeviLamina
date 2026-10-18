import { useRef, type ComponentType, type ReactNode } from 'react';
import { PixelIcon, BrandIcon } from './PixelIcon';
import { useDismissableDetails } from './menu';
import { UI_LOCALES, UI_LOCALE_NAMES, resolveUiLocale, uiStrings, type UiStrings } from './i18n';
import { DOCS_PROJECTS, LINKS, globalNav, sameSitePath, type DocsProjectId, type SiteId } from './projects';
import { LocaleSwitcher, type LinkLikeProps, type LocaleOption } from './LocaleSwitcher';
import { ThemeSwitcher } from './ThemeToggle';

/** The language menu of the bar: the site's own locales (docs: every option links to the equivalent page). */
export interface GlobalBarLanguages {
  options: LocaleOption[];
  /** `code` of the current option. */
  current: string;
  /** Called after the choice was stored as the cross-site preference (link options then navigate). */
  onSelect?: (code: string, option: LocaleOption) => void;
  /** Router-aware link component for options with an `href`. */
  linkComponent?: ComponentType<LinkLikeProps>;
}

export interface GlobalBarProps {
  /** Which LeviMC site this is (highlights its tab). */
  current?: SiteId;
  /** On docs.levimc.org: which project's docs are open (highlighted in the Docs menu). */
  currentDocs?: DocsProjectId | string;
  /** UI locale of the chrome (any BCP-47 tag). */
  locale?: string;
  strings?: Partial<UiStrings>;
  /**
   * The language menu. Omit it on single-language sites: the bar then offers the chrome languages, stores the
   * choice as the cross-site preference and calls `onLanguageChange` (default: reload the page).
   */
  languages?: GlobalBarLanguages;
  /** With the default language menu: apply a newly chosen BCP-47 language (default: location.reload()). */
  onLanguageChange?: (lang: string) => void;
  /** GitHub button target (default: the LiteLDev organisation; docs sites pass their repository). */
  github?: string;
  /** Replaces the grass sprite in front of "LeviMC" (e.g. the LeviMC logo on levimc.org). */
  brandIcon?: ReactNode;
  /**
   * Origin of the current site (e.g. 'https://levimc.org'): bar links on this origin are rendered with
   * `linkComponent` as root-relative paths, so they navigate inside the app.
   */
  siteOrigin?: string;
  /** Router-aware link component for same-site links (see `siteOrigin`). */
  linkComponent?: ComponentType<LinkLikeProps>;
  /**
   * Which same-site paths the router renders (default: all). Paths it does not (e.g. static pages such as
   * levimc.org/blog/) stay plain links, so they load from the server.
   */
  isAppPath?: (path: string) => boolean;
  /**
   * The bar's own phone menu (the tabs and the Docs list folded behind one button). Pass false when the site
   * provides one menu button that opens a drawer with the same links (docs sites: {@link GlobalNavList}).
   */
  menu?: boolean;
  /** Keep the bar at the top while scrolling (sites where it is the only header). Docs headers scroll it away. */
  sticky?: boolean;
  className?: string;
  /** @deprecated kit 1.0: extra controls. The bar's controls are fixed in 1.1 (language, theme, GitHub); ignored. */
  end?: ReactNode;
}

interface LinkCtx {
  siteOrigin?: string;
  linkComponent?: ComponentType<LinkLikeProps>;
  isAppPath?: (path: string) => boolean;
}

/** An <a>, or the router link for same-site URLs. */
function BarLink({ url, ctx, className, current, children }: { url: string; ctx: LinkCtx; className: string; current?: boolean; children: ReactNode }) {
  let path = ctx.linkComponent ? sameSitePath(url, ctx.siteOrigin) : undefined;
  if (path !== undefined && ctx.isAppPath && !ctx.isAppPath(path)) path = undefined;
  const RouterLink = ctx.linkComponent;
  if (RouterLink && path !== undefined)
    return (
      <RouterLink href={path} className={className} aria-current={current ? 'page' : undefined}>
        {children}
      </RouterLink>
    );
  return (
    <a className={className} href={url} aria-current={current ? 'page' : undefined}>
      {children}
    </a>
  );
}

function DocsMenuPanel({ t, currentDocs, ctx }: { t: UiStrings; currentDocs?: string; ctx: LinkCtx }) {
  return (
    <div className="kit-gbar-docs-grid">
      {DOCS_PROJECTS.map((p) => (
        <BarLink key={p.id} url={p.url} ctx={ctx} className="kit-gbar-docs-item" current={p.id === currentDocs}>
          <span className="kit-slot kit-gbar-docs-slot" aria-hidden="true">
            <PixelIcon name={p.icon} size={16} />
          </span>
          <span className="kit-gbar-docs-text">
            <span className="kit-gbar-docs-name">{p.name}</span>
            <span className="kit-gbar-docs-blurb" data-kit-t={`projectBlurbs.${p.id}`}>
              {t.projectBlurbs[p.id]}
            </span>
          </span>
        </BarLink>
      ))}
    </div>
  );
}

export interface GlobalNavListProps {
  current?: SiteId;
  currentDocs?: string;
  locale?: string;
  strings?: Partial<UiStrings>;
  siteOrigin?: string;
  linkComponent?: ComponentType<LinkLikeProps>;
  isAppPath?: (path: string) => boolean;
  /** Called after a link is followed (e.g. close a drawer). */
  onNavigate?: () => void;
  /** Heading above the list (default: none). */
  heading?: ReactNode;
  className?: string;
}

/**
 * The bar's tabs as a vertical list (Home … About, with the docs projects under "Docs"): the phone menu of
 * the bar, and the "LeviMC" section of a site's own drawer when the bar's menu is off (`menu={false}`).
 */
export function GlobalNavList({ current, currentDocs, locale, strings, siteOrigin, linkComponent, isAppPath, onNavigate, heading, className }: GlobalNavListProps) {
  const t = uiStrings(locale, strings);
  const ctx: LinkCtx = { siteOrigin, linkComponent, isAppPath };
  return (
    <div className={className ? `kit-gbar-list ${className}` : 'kit-gbar-list'} onClick={(e) => ((e.target as Element).closest('a') ? onNavigate?.() : undefined)}>
      {heading}
      {globalNav(t)
        .filter((i) => i.id !== 'docs')
        .map((item) => (
          <BarLink key={item.id} url={item.url} ctx={ctx} className="kit-gbar-more-link" current={item.id === current}>
            <span data-kit-t={item.id}>{item.label}</span>
          </BarLink>
        ))}
      <p className="kit-gbar-more-heading" data-kit-t="docs">
        {t.docs}
      </p>
      <DocsMenuPanel t={t} currentDocs={currentDocs} ctx={ctx} />
    </div>
  );
}

/** Chrome languages offered by the bar on sites without their own locales. */
function chromeLanguageOptions(): LocaleOption[] {
  return UI_LOCALES.map((code) => ({ code, label: UI_LOCALE_NAMES[code], lang: code }));
}

/**
 * The bar at the very top of every LeviMC site (levimc.org, pkg.levimc.org, docs.levimc.org/*, the Doxygen API
 * pages and the static pages): the same tabs (Home · Projects · Docs ▾ · Mods · Blog · Community · About) and,
 * on the right, the same controls (language, theme, GitHub) everywhere. Menus are <details>, so the bar works
 * without JavaScript.
 */
export function GlobalBar({
  current,
  currentDocs,
  locale,
  strings,
  languages,
  onLanguageChange,
  github = LINKS.github,
  brandIcon,
  siteOrigin,
  linkComponent,
  isAppPath,
  menu = true,
  sticky = false,
  className,
}: GlobalBarProps) {
  const t = uiStrings(locale, strings);
  const docsRef = useRef<HTMLDetailsElement>(null);
  const moreRef = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(docsRef);
  useDismissableDetails(moreRef);
  const ctx: LinkCtx = { siteOrigin, linkComponent, isAppPath };
  const items = globalNav(t);
  const cls = ['kit-gbar', sticky ? 'kit-gbar-sticky' : '', menu ? '' : 'kit-gbar-no-menu', className ?? ''].filter(Boolean).join(' ');

  const lang = languages ?? {
    options: chromeLanguageOptions(),
    current: resolveUiLocale(locale),
    onSelect: (_code: string, o: LocaleOption) => (onLanguageChange ? onLanguageChange(o.lang) : typeof location !== 'undefined' && location.reload()),
  };

  return (
    <div className={cls} data-kit-globalbar="" role="region" aria-label="LeviMC" lang={locale}>
      <div className="kit-gbar-inner">
        <BarLink url={LINKS.home} ctx={ctx} className="kit-gbar-brand">
          {brandIcon ?? <PixelIcon name="grass" size={16} />}
          <span className="kit-gbar-brand-text">LeviMC</span>
        </BarLink>
        <nav className="kit-gbar-nav" aria-label={t.network} data-kit-t-aria="network">
          <ul>
            {items.map((item) =>
              item.id === 'docs' ? (
                <li key={item.id}>
                  <details ref={docsRef} className="kit-menu kit-gbar-docs">
                    <summary className="kit-gbar-link" aria-current={current === 'docs' ? 'page' : undefined}>
                      <span data-kit-t="docs">{item.label}</span>
                      <PixelIcon name="chevronDown" className="kit-menu-chevron" />
                    </summary>
                    <div className="kit-menu-panel kit-gbar-docs-panel">
                      <DocsMenuPanel t={t} currentDocs={currentDocs} ctx={ctx} />
                    </div>
                  </details>
                </li>
              ) : (
                <li key={item.id}>
                  <BarLink url={item.url} ctx={ctx} className="kit-gbar-link" current={item.id === current}>
                    <span data-kit-t={item.id}>{item.label}</span>
                  </BarLink>
                </li>
              ),
            )}
          </ul>
        </nav>
        <div className="kit-gbar-end">
          <LocaleSwitcher
            options={lang.options}
            current={lang.current}
            onSelect={lang.onSelect}
            linkComponent={languages?.linkComponent}
            strings={strings}
            className="kit-gbar-locale"
          />
          <ThemeSwitcher locale={locale} strings={strings} className="kit-gbar-theme" />
          <a className="kit-gbar-icon kit-gbar-github" href={github} aria-label="GitHub" title="GitHub">
            <BrandIcon name="github" size={16} />
          </a>
          {menu ? (
            <details ref={moreRef} className="kit-menu kit-gbar-more">
              <summary className="kit-gbar-icon" aria-label={t.menu} title={t.menu} data-kit-gbar-menu="" data-kit-t-aria="menu" data-kit-t-title="menu">
                <PixelIcon name="menu" />
              </summary>
              <div className="kit-menu-panel kit-gbar-more-panel">
                <nav aria-label={t.network} data-kit-t-aria="network">
                  <GlobalNavList current={current} currentDocs={currentDocs} locale={locale} strings={strings} siteOrigin={siteOrigin} linkComponent={linkComponent} isAppPath={isAppPath} />
                </nav>
              </div>
            </details>
          ) : null}
        </div>
      </div>
    </div>
  );
}
