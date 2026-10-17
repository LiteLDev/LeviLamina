import { useId, useMemo, type ComponentType, type ReactNode } from 'react';
import { harborSunrise, lilyPond, type Scene, type Shape } from './paint';
import type { LinkLikeProps } from './LocaleSwitcher';

export interface HeroAction {
  theme?: 'brand' | 'alt';
  text: string;
  link: string;
  /** Force new-tab behaviour (defaults to true for absolute http(s) links). */
  external?: boolean;
}

export interface PaintedHeroProps {
  /** Small Latin label above the title (rendered in Silkscreen). */
  eyebrow?: string;
  /** Big display title (Fraunces). */
  name: ReactNode;
  /** Second line of the title. */
  text?: ReactNode;
  tagline?: ReactNode;
  actions?: HeroAction[];
  /** Project logo / app icon, shown in a Minecraft item frame above the title. */
  image?: { src: string; alt?: string; width?: number; height?: number };
  /** Draw the pixel bridge (light) and pixel boats (dark). */
  pixelProps?: boolean;
  /** Pixel grass strip along the bottom edge. */
  horizon?: boolean;
  /** Scene seed — change for a different arrangement of strokes. */
  seed?: number;
  /** Router-aware link component for internal actions. */
  linkComponent?: ComponentType<LinkLikeProps>;
  children?: ReactNode;
  className?: string;
}

function ShapeEl({ s }: { s: Shape }) {
  const { tag, attrs } = s;
  const props: Record<string, string | number> = {};
  for (const [k, v] of Object.entries(attrs)) {
    if (v === '') continue;
    // SVG presentation attributes are camelCase in React (stroke-width → strokeWidth)
    props[k.includes('-') && !k.startsWith('data-') && !k.startsWith('aria-') ? k.replace(/-([a-z])/g, (_m, c: string) => c.toUpperCase()) : k] = v;
  }
  if (tag === 'g') {
    return (
      <g {...props}>
        {s.children?.map((c, i) => (
          <ShapeEl key={i} s={c} />
        ))}
      </g>
    );
  }
  const Tag = tag;
  return <Tag {...props} />;
}

function SceneSvg({ scene, className }: { scene: Scene; className: string }) {
  return (
    <svg className={className} viewBox={`0 0 ${scene.width} ${scene.height}`} preserveAspectRatio="xMidYMid slice" aria-hidden="true" focusable="false">
      <defs dangerouslySetInnerHTML={{ __html: scene.defs }} />
      {scene.layers.map((l) => (
        <g key={l.id} filter={l.filter} shapeRendering={l.crisp ? 'crispEdges' : undefined} className={l.className}>
          {l.shapes.map((s, i) => (
            <ShapeEl key={i} s={s} />
          ))}
        </g>
      ))}
    </svg>
  );
}

const isExternal = (href: string) => /^https?:\/\//i.test(href);

/**
 * Painted hero banner: Monet's Giverny pond with a block-built Japanese bridge (light) / Le Havre harbour
 * at sunrise with pixel rowboats (dark), a scrim that keeps text at AA contrast, and a pixel grass horizon.
 * Both scenes are rendered and CSS shows the one matching the theme (no hydration mismatch).
 */
export function PaintedHero({
  eyebrow,
  name,
  text,
  tagline,
  actions = [],
  image,
  pixelProps = true,
  horizon = true,
  seed,
  linkComponent,
  children,
  className,
}: PaintedHeroProps) {
  const rawId = useId();
  const prefix = 'h' + rawId.replace(/[^a-zA-Z0-9]/g, '');
  const light = useMemo(() => lilyPond({ seed, bridge: pixelProps, prefix: `${prefix}l` }), [seed, pixelProps, prefix]);
  const dark = useMemo(() => harborSunrise({ seed, boats: pixelProps, prefix: `${prefix}d` }), [seed, pixelProps, prefix]);
  const Link = (linkComponent ?? 'a') as ComponentType<LinkLikeProps>;

  return (
    <section className={className ? `kit-hero ${className}` : 'kit-hero'} data-kit-hero="">
      <div className="kit-hero-art" aria-hidden="true">
        <SceneSvg scene={light} className="kit-scene-light" />
        <SceneSvg scene={dark} className="kit-scene-dark" />
      </div>
      <div className="kit-hero-brush" aria-hidden="true" />
      <div className="kit-hero-scrim" aria-hidden="true" />
      <div className="kit-hero-inner">
        <div className="kit-hero-copy">
          {image || eyebrow ? (
            <div className="kit-hero-badge">
              {image ? (
                <span className="kit-item-frame kit-hero-icon">
                  <img src={image.src} alt={image.alt ?? ''} width={image.width ?? 56} height={image.height ?? 56} />
                </span>
              ) : null}
              {eyebrow ? <p className="kit-hero-eyebrow kit-pixel-label">{eyebrow}</p> : null}
            </div>
          ) : null}
          <h1 className="kit-hero-title">
            <span className="kit-hero-name">{name}</span>
            {text ? <span className="kit-hero-text">{text}</span> : null}
          </h1>
          {tagline ? <p className="kit-hero-tagline">{tagline}</p> : null}
          {actions.length ? (
            <div className="kit-hero-actions">
              {actions.map((a) => {
                const ext = a.external ?? isExternal(a.link);
                const cls = a.theme === 'alt' ? 'mc-btn mc-btn-lg' : 'mc-btn mc-btn-primary mc-btn-lg';
                return ext ? (
                  <a key={a.text + a.link} className={cls} href={a.link} target="_blank" rel="noopener">
                    {a.text}
                  </a>
                ) : (
                  <Link key={a.text + a.link} className={cls} href={a.link}>
                    {a.text}
                  </Link>
                );
              })}
            </div>
          ) : null}
          {children}
        </div>
      </div>
      {horizon ? <div className="grass-divider kit-hero-horizon" aria-hidden="true" /> : null}
    </section>
  );
}
