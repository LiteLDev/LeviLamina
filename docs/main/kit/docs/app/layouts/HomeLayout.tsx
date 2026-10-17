import { useRef } from 'react';
import type { PageData, RouteMeta } from '../../shared/types';
import { langOf, site } from '../data';
import { KitLink } from '../components/KitLink';
import { useContentEnhancements } from '../enhance';
import { PaintedHero } from '../../../components/PaintedHero';
import { Card } from '../../../components/Card';
import { PIXEL_ICONS, type PixelIconName } from '../../../components/pixel-icons';
import type { UiStrings } from '../../../components/i18n';

const FEATURE_ICONS: PixelIconName[] = ['map', 'chest', 'emerald', 'pickaxe', 'compass', 'diamond', 'bookQuill', 'torch', 'grass'];

export function HomeLayout({ route, page }: { route: RouteMeta; page: PageData; t: UiStrings }) {
  const contentRef = useRef<HTMLDivElement>(null);
  useContentEnhancements(contentRef, route.page);
  const hero = page.hero ?? {};
  const features = page.features ?? [];
  return (
    <main id="kit-main" className="kit-home" tabIndex={-1}>
      <PaintedHero
        eyebrow={site.project && /^[\x00-\x7f]+$/.test(site.project) ? `LeviMC · Docs` : undefined}
        name={hero.name ?? site.title}
        text={hero.text}
        tagline={hero.tagline}
        image={hero.image ? { src: hero.image.src, alt: hero.image.alt ?? '' } : undefined}
        actions={hero.actions ?? []}
        linkComponent={KitLink}
      />
      {features.length ? (
        <section className="kit-home-features" aria-label={hero.name ?? site.title}>
          <div className="kit-home-features-grid">
            {features.map((f, i) => {
              const icon = (f.icon && f.icon in PIXEL_ICONS ? f.icon : FEATURE_ICONS[i % FEATURE_ICONS.length]) as PixelIconName;
              return (
                <Card
                  key={i}
                  icon={f.icon && !(f.icon in PIXEL_ICONS) ? <span className="kit-feature-emoji">{f.icon}</span> : icon}
                  title={f.title}
                  description={f.details}
                  href={f.link}
                  external={f.external}
                  linkComponent={KitLink}
                />
              );
            })}
          </div>
        </section>
      ) : null}
      {page.html.trim() ? (
        <div className="kit-home-content">
          <article lang={route.fallback ? langOf(site.defaultLocale) : langOf(route.locale)}>
            <div ref={contentRef} className="kit-prose" data-doc-content="" dangerouslySetInnerHTML={{ __html: page.html }} />
          </article>
        </div>
      ) : (
        <div ref={contentRef} data-doc-content="" hidden />
      )}
    </main>
  );
}
