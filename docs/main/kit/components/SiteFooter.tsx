import type { ReactNode } from 'react';
import { PixelIcon, BrandIcon } from './PixelIcon';
import { uiStrings, type UiStrings } from './i18n';
import { DOCS_PROJECTS, LINKS, SOCIAL, COPYRIGHT_HOLDER } from './projects';

export interface SiteFooterProps {
  locale?: string;
  strings?: Partial<UiStrings>;
  /** Site-specific line(s) shown above the legal row (e.g. a project's own copyright message). */
  extra?: ReactNode;
  /** Copyright year (defaults to the build year). */
  year?: number;
  className?: string;
}

const BUILD_YEAR = new Date().getFullYear();

/** Shared footer: grass horizon on top, "soil" below. Same links on every LeviMC site. */
export function SiteFooter({ locale, strings, extra, year = BUILD_YEAR, className }: SiteFooterProps) {
  const t = uiStrings(locale, strings);
  return (
    <footer className={className ? `kit-footer ${className}` : 'kit-footer'} data-kit-footer="">
      <div className="grass-divider" aria-hidden="true" />
      <div className="kit-footer-soil">
        <div className="kit-footer-inner">
          <div className="kit-footer-brand">
            <a href={LINKS.home} className="kit-footer-logo">
              <PixelIcon name="grass" size={32} />
              <span>LeviMC</span>
            </a>
            <p className="kit-footer-tagline">{t.tagline}</p>
            <ul className="kit-footer-social" aria-label={t.footerConnect}>
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
          <nav className="kit-footer-col" aria-label={t.footerDocs}>
            <h2 className="kit-footer-heading">{t.footerDocs}</h2>
            <ul>
              {DOCS_PROJECTS.map((p) => (
                <li key={p.id}>
                  <a href={p.url}>{p.name}</a>
                </li>
              ))}
            </ul>
          </nav>
          <nav className="kit-footer-col" aria-label={t.footerEcosystem}>
            <h2 className="kit-footer-heading">{t.footerEcosystem}</h2>
            <ul>
              <li>
                <a href={LINKS.home}>{t.home}</a>
              </li>
              <li>
                <a href={LINKS.projects}>{t.projects}</a>
              </li>
              <li>
                <a href={LINKS.packages}>{t.packages}</a>
              </li>
              <li>
                <a href={LINKS.blog}>{t.blog}</a>
              </li>
              <li>
                <a href={LINKS.about}>{t.about}</a>
              </li>
            </ul>
          </nav>
          <nav className="kit-footer-col" aria-label={t.footerConnect}>
            <h2 className="kit-footer-heading">{t.footerConnect}</h2>
            <ul>
              <li>
                <a href={LINKS.community}>{t.community}</a>
              </li>
              {SOCIAL.map((s) => (
                <li key={s.id}>
                  <a href={s.url}>{s.id === 'email' ? t.email : s.label}</a>
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
              <span suppressHydrationWarning>
                © {year} {COPYRIGHT_HOLDER}
              </span>
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
