import { cloneElement, isValidElement, useId, type ReactElement, type ReactNode } from 'react';

export interface TooltipProps {
  /** Main line (white, like an item name). */
  title?: ReactNode;
  /** Secondary lines (grey "lore"). */
  content?: ReactNode;
  placement?: 'top' | 'bottom';
  /** A single focusable element (button, link…). */
  children: ReactElement<{ 'aria-describedby'?: string }>;
  className?: string;
}

/**
 * Minecraft item tooltip (near-black violet panel, purple gradient frame). Appears on hover and on
 * keyboard focus; the trigger is linked with aria-describedby. CSS-only, SSR-safe (useId).
 */
export function Tooltip({ title, content, placement = 'top', children, className }: TooltipProps) {
  const id = useId();
  const trigger = isValidElement(children) ? cloneElement(children, { 'aria-describedby': id }) : children;
  return (
    <span className={className ? `kit-tooltip-host ${className}` : 'kit-tooltip-host'} data-placement={placement}>
      {trigger}
      <span role="tooltip" id={id} className="mc-tooltip kit-tooltip">
        {title ? <span className="mc-tooltip-title">{title}</span> : null}
        {content ? <span className="mc-tooltip-lore">{content}</span> : null}
      </span>
    </span>
  );
}
