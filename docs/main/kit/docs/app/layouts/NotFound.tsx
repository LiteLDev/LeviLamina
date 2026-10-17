import { href, site } from '../data';
import { KitLink } from '../components/KitLink';
import { PixelIcon } from '../../../components/PixelIcon';
import type { UiStrings } from '../../../components/i18n';

export function NotFound({ locale, t, onSearch }: { locale: string; t: UiStrings; onSearch: () => void }) {
  return (
    <main id="kit-main" className="kit-notfound" tabIndex={-1}>
      <div className="kit-notfound-card px-card kit-painted">
        <div className="kit-notfound-compass kit-slot" aria-hidden="true">
          <PixelIcon name="compass" size={64} className="kit-notfound-spin" />
        </div>
        <p className="kit-notfound-code kit-pixel-label">Error 404</p>
        <h1 className="kit-notfound-title">{t.notFoundTitle}</h1>
        <p className="kit-notfound-text">{t.notFoundText}</p>
        <div className="kit-notfound-actions">
          <KitLink className="mc-btn mc-btn-primary" href={href(site.homePaths[locale] ?? '')}>
            <PixelIcon name="grass" />
            {t.goHome}
          </KitLink>
          <button type="button" className="mc-btn" onClick={onSearch} data-kit-search-trigger="">
            <PixelIcon name="search" />
            {t.search}
          </button>
        </div>
      </div>
    </main>
  );
}
