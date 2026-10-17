import type { ComponentType, ReactNode } from 'react';
import { PixelIcon, type PixelIconName } from './PixelIcon';
import type { LinkLikeProps } from './LocaleSwitcher';

export interface CardProps {
  title: ReactNode;
  description?: ReactNode;
  /** Pixel sprite name (rendered in an inventory slot) or any node (e.g. a project logo <img>). */
  icon?: PixelIconName | ReactNode;
  /** Small Latin label above the title (Silkscreen). */
  eyebrow?: string;
  href?: string;
  /** Opens in a new tab (defaults to true for absolute http(s) hrefs). */
  external?: boolean;
  footer?: ReactNode;
  children?: ReactNode;
  linkComponent?: ComponentType<LinkLikeProps>;
  className?: string;
}

/** Stepped-corner card on a calm surface; lifts one pixel on hover when it is a link. */
export function Card({ title, description, icon, eyebrow, href, external, footer, children, linkComponent, className }: CardProps) {
  const body = (
    <>
      {icon ? <span className="kit-card-icon kit-slot">{typeof icon === 'string' ? <PixelIcon name={icon as PixelIconName} size={32} /> : icon}</span> : null}
      <span className="kit-card-body">
        {eyebrow ? <span className="kit-card-eyebrow kit-pixel-label">{eyebrow}</span> : null}
        <span className="kit-card-title">{title}</span>
        {description ? <span className="kit-card-desc">{description}</span> : null}
        {children}
      </span>
      {footer ? <span className="kit-card-footer">{footer}</span> : null}
    </>
  );
  const cls = className ? `px-card kit-card ${className}` : 'px-card kit-card';
  if (!href) return <div className={cls}>{body}</div>;
  const ext = external ?? /^https?:\/\//.test(href);
  if (ext)
    return (
      <a className={cls} href={href} target="_blank" rel="noopener">
        {body}
      </a>
    );
  const Link = (linkComponent ?? 'a') as ComponentType<LinkLikeProps>;
  return (
    <Link className={cls} href={href}>
      {body}
    </Link>
  );
}
