import type { ReactNode } from 'react';

export type BadgeTone = 'grass' | 'diamond' | 'gold' | 'redstone' | 'enchant' | 'stone' | 'pond';

export interface BadgeProps {
  tone?: BadgeTone;
  /** Silkscreen micro-label (Latin only: versions, "NEW", "BETA"). */
  pixel?: boolean;
  children: ReactNode;
  className?: string;
  title?: string;
}

export function Badge({ tone = 'stone', pixel = false, children, className, title }: BadgeProps) {
  return (
    <span className={['kit-badge', `kit-badge-${tone}`, pixel && 'kit-badge-pixel', className].filter(Boolean).join(' ')} title={title}>
      {children}
    </span>
  );
}
