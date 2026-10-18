import type { ComponentType, ReactNode } from 'react';
import { PixelIcon, BrandIcon } from './PixelIcon';
import { uiStrings, type UiStrings } from './i18n';
import { DOCS_PROJECTS, LINKS, SOCIAL, COPYRIGHT_HOLDER, sameSitePath } from './projects';
import type { LinkLikeProps } from './LocaleSwitcher';

export interface SiteFooterProps {
  locale?: string;
  /** Override any chrome string, e.g. `{ packages: t.nav.mods, about: t.nav.about }` to match a site's own labels. */
  strings?: Partial<UiStrings>;
  /** Site-specific line(s) shown above the legal row (e.g. a project's own footer message). */
  extra?: ReactNode;
  /** The site's own copyright notice; replaces the default "© <year> LeviMC" in the legal row. */
  copyright?: ReactNode;
  /** Copyright year (defaults to the build year). */
  year?: number;
  /** Origin of the current site: footer links on it are rendered with `linkComponent` (in-app navigation). */
  siteOrigin?: string;
  /** Router-aware link component for same-site links (see `siteOrigin`). */
  linkComponent?: ComponentType<LinkLikeProps>;
  /** Which same-site paths the router renders (default: all); others stay plain links (see GlobalBar). */
  isAppPath?: (path: string) => boolean;
  className?: string;
}

const BUILD_YEAR = new Date().getFullYear();

interface NavCtx {
  siteOrigin?: string;
  linkComponent?: ComponentType<LinkLikeProps>;
  isAppPath?: (path: string) => boolean;
}

/** An <a>, or the router link for same-site URLs (module level, so its type is stable across renders). */
function FooterLink({ nav, url, className, children }: { nav: NavCtx; url: string; className?: string; children: ReactNode }) {
  const RouterLink = nav.linkComponent;
  let path = RouterLink ? sameSitePath(url, nav.siteOrigin) : undefined;
  if (path !== undefined && nav.isAppPath && !nav.isAppPath(path)) path = undefined;
  return RouterLink && path !== undefined ? (
    <RouterLink href={path} className={className}>
      {children}
    </RouterLink>
  ) : (
    <a href={url} className={className}>
      {children}
    </a>
  );
}

/** Shared footer: grass horizon on top, "soil" below. Same links on every LeviMC site. */
export function SiteFooter({ locale, strings, extra, copyright, year = BUILD_YEAR, siteOrigin, linkComponent, isAppPath, className }: SiteFooterProps) {
  const t = uiStrings(locale, strings);
  const nav: NavCtx = { siteOrigin, linkComponent, isAppPath };
  return (
    <footer className={className ? `kit-footer ${className}` : 'kit-footer'} data-kit-footer="" lang={locale}>
      <div className="grass-divider" aria-hidden="true" />
      <div className="kit-footer-soil">
        <div className="kit-footer-inner">
          <div className="kit-footer-brand">
            <FooterLink nav={nav} url={LINKS.home} className="kit-footer-logo">
              <PixelIcon name="grass" size={32} />
              <span>LeviMC</span>
            </FooterLink>
            <p className="kit-footer-tagline" data-kit-t="tagline">
              {t.tagline}
            </p>
            <ul className="kit-footer-social" aria-label={t.footerConnect} data-kit-t-aria="footerConnect">
              {SOCIAL.map((s) => (
                <li key={s.id}>
                  <a href={s.url} className="kit-footer-social-link" aria-label={s.id === 'email' ? `${t.email}: ${s.label}` : s.label} title={s.label}>
                    <BrandIcon name={s.id} size={18} />
                  </a>
                </li>
              ))}
              <li>
                <a href={LINKS.github} className="kit-footer-social-link" aria-label="GitHub" title="GitHub">
                  <BrandIcon name="github" size={18} />
                </a>
              </li>
            </ul>
          </div>
          <nav className="kit-footer-col" aria-label={t.footerDocs} data-kit-t-aria="footerDocs">
            <h2 className="kit-footer-heading" data-kit-t="footerDocs">
              {t.footerDocs}
            </h2>
            <ul>
              {DOCS_PROJECTS.map((p) => (
                <li key={p.id}>
                  <FooterLink nav={nav} url={p.url}>{p.name}</FooterLink>
                </li>
              ))}
            </ul>
          </nav>
          <nav className="kit-footer-col" aria-label={t.footerEcosystem} data-kit-t-aria="footerEcosystem">
            <h2 className="kit-footer-heading" data-kit-t="footerEcosystem">
              {t.footerEcosystem}
            </h2>
            <ul>
              <li>
                <FooterLink nav={nav} url={LINKS.home}>
                  <span data-kit-t="home">{t.home}</span>
                </FooterLink>
              </li>
              <li>
                <FooterLink nav={nav} url={LINKS.projects}>
                  <span data-kit-t="projects">{t.projects}</span>
                </FooterLink>
              </li>
              <li>
                <FooterLink nav={nav} url={LINKS.packages}>
                  <span data-kit-t="packages">{t.packages}</span>
                </FooterLink>
              </li>
              <li>
                <FooterLink nav={nav} url={LINKS.blog}>
                  <span data-kit-t="blog">{t.blog}</span>
                </FooterLink>
              </li>
              <li>
                <FooterLink nav={nav} url={LINKS.about}>
                  <span data-kit-t="about">{t.about}</span>
                </FooterLink>
              </li>
            </ul>
          </nav>
          <nav className="kit-footer-col" aria-label={t.footerConnect} data-kit-t-aria="footerConnect">
            <h2 className="kit-footer-heading" data-kit-t="footerConnect">
              {t.footerConnect}
            </h2>
            <ul>
              <li>
                <FooterLink nav={nav} url={LINKS.community}>
                  <span data-kit-t="community">{t.community}</span>
                </FooterLink>
              </li>
              {SOCIAL.map((s) => (
                <li key={s.id}>
                  <a href={s.url}>{s.id === 'email' ? <span data-kit-t="email">{t.email}</span> : s.label}</a>
                </li>
              ))}
              <li>
                <a href={LINKS.github}>GitHub</a>
              </li>
            </ul>
          </nav>
        </div>
        <div className="kit-footer-legal">
          <div className="kit-footer-inner kit-footer-legal-inner">
            {extra ? <div className="kit-footer-extra">{extra}</div> : null}
            <p>
              {copyright ? (
                <span>{copyright}</span>
              ) : (
                <span suppressHydrationWarning>
                  © <span data-kit-year="">{year}</span> {COPYRIGHT_HOLDER}
                </span>
              )}
              <span className="kit-footer-sep" aria-hidden="true">
                ·
              </span>
              <span lang="en">Not affiliated with Mojang Studios.</span>
            </p>
          </div>
        </div>
      </div>
    </footer>
  );
}
