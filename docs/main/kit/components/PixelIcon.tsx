import type { SVGProps } from 'react';
import { PIXEL_ICONS, type PixelIconName } from './pixel-icons';

export type { PixelIconName } from './pixel-icons';

export interface PixelIconProps extends Omit<SVGProps<SVGSVGElement>, 'name'> {
  name: PixelIconName;
  /** Rendered size in CSS px. Use multiples of 16 (16, 32, 48) for perfectly square pixels. */
  size?: number;
  /** Accessible label. Without it the icon is decorative (aria-hidden). */
  title?: string;
}

/** 16×16 crisp-edge pixel sprite (book & quill, emerald, compass, torch, TNT, diamond, chest, grass…). */
export function PixelIcon({ name, size = 16, title, className, ...rest }: PixelIconProps) {
  const icon = PIXEL_ICONS[name];
  return (
    <svg
      viewBox="0 0 16 16"
      width={size}
      height={size}
      shapeRendering="crispEdges"
      focusable="false"
      className={className ? `kit-pixel-icon ${className}` : 'kit-pixel-icon'}
      {...(title ? { role: 'img', 'aria-label': title } : { 'aria-hidden': true })}
      {...rest}
    >
      {title ? <title>{title}</title> : null}
      {icon.layers.map(([fill, d], i) => (
        <path key={i} fill={fill} d={d} />
      ))}
    </svg>
  );
}

export type BrandIconName = 'github' | 'discord' | 'telegram' | 'x' | 'youtube' | 'email';

// Brand marks stay vector (recognisable, trademark-faithful); they sit inside pixel-framed buttons.
const BRAND_PATHS: Record<BrandIconName, string> = {
  github:
    'M12 .3a12 12 0 0 0-3.8 23.38c.6.12.83-.26.83-.57L9 21.07c-3.34.72-4.04-1.61-4.04-1.61-.55-1.39-1.34-1.76-1.34-1.76-1.08-.74.09-.73.09-.73 1.2.09 1.83 1.24 1.83 1.24 1.07 1.83 2.8 1.3 3.49 1 .1-.78.42-1.31.76-1.61-2.67-.3-5.47-1.33-5.47-5.93 0-1.31.47-2.38 1.24-3.22-.14-.3-.54-1.52.1-3.18 0 0 1-.32 3.3 1.23a11.5 11.5 0 0 1 6 0c2.28-1.55 3.29-1.23 3.29-1.23.64 1.66.24 2.88.12 3.18a4.65 4.65 0 0 1 1.23 3.22c0 4.61-2.8 5.63-5.48 5.92.42.36.81 1.1.81 2.22l-.01 3.29c0 .31.2.69.82.57A12 12 0 0 0 12 .3',
  discord:
    'M20.32 4.37a19.8 19.8 0 0 0-4.89-1.52.07.07 0 0 0-.08.04c-.21.38-.44.87-.61 1.25a18.27 18.27 0 0 0-5.49 0 12.64 12.64 0 0 0-.62-1.25.08.08 0 0 0-.08-.04 19.74 19.74 0 0 0-4.88 1.52.07.07 0 0 0-.03.03C.53 9.05-.32 13.58.1 18.06a.08.08 0 0 0 .03.06 19.9 19.9 0 0 0 5.99 3.03.08.08 0 0 0 .09-.03c.46-.63.87-1.3 1.22-1.99a.08.08 0 0 0-.04-.11 13.1 13.1 0 0 1-1.87-.89.08.08 0 0 1-.01-.13c.13-.09.25-.19.37-.29a.07.07 0 0 1 .08-.01c3.93 1.79 8.18 1.79 12.06 0a.07.07 0 0 1 .08.01c.12.1.25.2.37.29a.08.08 0 0 1-.01.13c-.6.35-1.22.65-1.87.89a.08.08 0 0 0-.04.11c.36.7.77 1.36 1.22 1.99a.08.08 0 0 0 .09.03 19.84 19.84 0 0 0 6-3.03.08.08 0 0 0 .03-.06c.5-5.18-.84-9.67-3.55-13.66a.06.06 0 0 0-.03-.03ZM8.02 15.33c-1.18 0-2.16-1.09-2.16-2.42 0-1.33.96-2.42 2.16-2.42 1.21 0 2.18 1.1 2.16 2.42 0 1.33-.96 2.42-2.16 2.42Zm7.97 0c-1.18 0-2.15-1.09-2.15-2.42 0-1.33.95-2.42 2.15-2.42 1.21 0 2.18 1.1 2.16 2.42 0 1.33-.94 2.42-2.16 2.42Z',
  telegram:
    'M11.94 0A12 12 0 1 0 12 0h-.06Zm4.97 7.22c.1 0 .32.03.46.14.1.08.16.2.17.33.02.09.04.3.02.47-.18 1.9-.96 6.5-1.36 8.63-.17.9-.5 1.2-.82 1.23-.7.06-1.22-.46-1.9-.9-1.06-.7-1.65-1.13-2.68-1.8-1.18-.78-.41-1.21.26-1.91.18-.19 3.25-2.98 3.31-3.23 0-.03.02-.15-.06-.21-.07-.06-.17-.04-.25-.03-.1.03-1.79 1.14-5.06 3.35-.48.33-.91.49-1.3.48-.43-.01-1.25-.24-1.87-.44-.75-.25-1.35-.38-1.3-.79.03-.22.33-.44.9-.66 3.5-1.53 5.83-2.53 7-3.02 3.33-1.38 4.02-1.62 4.48-1.63Z',
  x: 'M18.9 1.15h3.68l-8.04 9.19L24 22.85h-7.41l-5.8-7.59-6.64 7.59H.47l8.6-9.83L0 1.15h7.59l5.24 6.93 6.07-6.93Zm-1.29 19.5h2.04L6.49 3.24H4.3l13.31 17.41Z',
  youtube:
    'M23.5 6.19a3.02 3.02 0 0 0-2.12-2.14C19.5 3.55 12 3.55 12 3.55s-7.5 0-9.38.5A3.02 3.02 0 0 0 .5 6.19C0 8.07 0 12 0 12s0 3.93.5 5.81a3.02 3.02 0 0 0 2.12 2.14c1.88.5 9.38.5 9.38.5s7.5 0 9.38-.5a3.02 3.02 0 0 0 2.12-2.14C24 15.93 24 12 24 12s0-3.93-.5-5.81ZM9.55 15.57V8.43L15.82 12l-6.27 3.57Z',
  email:
    'M2 4h20a2 2 0 0 1 2 2v12a2 2 0 0 1-2 2H2a2 2 0 0 1-2-2V6a2 2 0 0 1 2-2Zm0 2.4v.1l10 6.25L22 6.5v-.1H2Zm20 2.9-10 6.25L2 9.3V17.6h20V9.3Z',
};

export function BrandIcon({ name, size = 18, title, className, ...rest }: Omit<SVGProps<SVGSVGElement>, 'name'> & { name: BrandIconName; size?: number; title?: string }) {
  return (
    <svg
      viewBox="0 0 24 24"
      width={size}
      height={size}
      fill="currentColor"
      focusable="false"
      className={className}
      {...(title ? { role: 'img', 'aria-label': title } : { 'aria-hidden': true })}
      {...rest}
    >
      {title ? <title>{title}</title> : null}
      <path d={BRAND_PATHS[name]} />
    </svg>
  );
}
