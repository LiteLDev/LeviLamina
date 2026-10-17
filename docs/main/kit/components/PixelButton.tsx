import type { AnchorHTMLAttributes, ButtonHTMLAttributes, ReactNode } from 'react';
import { PixelIcon, type PixelIconName } from './PixelIcon';

interface Common {
  variant?: 'default' | 'primary' | 'ghost';
  size?: 'sm' | 'md' | 'lg';
  /** Pixel sprite shown before the label. */
  icon?: PixelIconName;
  /** Pixel sprite shown after the label (e.g. arrowRight). */
  iconRight?: PixelIconName;
  children?: ReactNode;
}

export type PixelButtonProps =
  | (Common & { href: string; external?: boolean } & Omit<AnchorHTMLAttributes<HTMLAnchorElement>, 'href'>)
  | (Common & { href?: undefined } & ButtonHTMLAttributes<HTMLButtonElement>);

export function pixelButtonClass(variant: Common['variant'] = 'default', size: Common['size'] = 'md', extra?: string) {
  return ['mc-btn', variant === 'primary' && 'mc-btn-primary', variant === 'ghost' && 'mc-btn-ghost', size === 'sm' && 'mc-btn-sm', size === 'lg' && 'mc-btn-lg', extra]
    .filter(Boolean)
    .join(' ');
}

/** Minecraft bevel button (light top edge, dark bottom edge, pressed state, stepped corners). */
export function PixelButton(props: PixelButtonProps) {
  const { variant, size, icon, iconRight, children, className, ...rest } = props as Common & { className?: string; href?: string; external?: boolean };
  const cls = pixelButtonClass(variant, size, className);
  const inner = (
    <>
      {icon ? <PixelIcon name={icon} /> : null}
      {children}
      {iconRight ? <PixelIcon name={iconRight} /> : null}
    </>
  );
  if (typeof props.href === 'string') {
    const { external, href, ...a } = rest as { external?: boolean; href: string } & AnchorHTMLAttributes<HTMLAnchorElement>;
    const ext = external ?? /^https?:\/\//.test(href);
    return (
      <a className={cls} href={href} {...(ext ? { target: '_blank', rel: 'noopener' } : {})} {...a}>
        {inner}
      </a>
    );
  }
  const b = rest as ButtonHTMLAttributes<HTMLButtonElement>;
  return (
    <button type="button" className={cls} {...b}>
      {inner}
    </button>
  );
}
