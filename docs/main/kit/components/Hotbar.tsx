import { Fragment, useId, useRef, type KeyboardEvent, type MouseEvent, type ReactNode } from 'react';
import { PixelIcon } from './PixelIcon';

export interface HotbarTab {
  id: string;
  label: ReactNode;
}

export interface HotbarTabsProps {
  tabs: HotbarTab[];
  value: string;
  onChange: (id: string) => void;
  /** Accessible name of the tab list. */
  label: string;
  /** Render panel content for the selected tab (panels are linked via aria-controls). */
  children?: ReactNode;
  className?: string;
}

/** Hotbar-style tabs (WAI-ARIA tabs pattern: arrows/Home/End move between tabs). */
export function HotbarTabs({ tabs, value, onChange, label, children, className }: HotbarTabsProps) {
  const base = useId().replace(/[^a-zA-Z0-9]/g, '');
  const listRef = useRef<HTMLDivElement>(null);
  const onKey = (e: KeyboardEvent<HTMLDivElement>) => {
    const i = tabs.findIndex((t) => t.id === value);
    let n = i;
    if (e.key === 'ArrowRight') n = (i + 1) % tabs.length;
    else if (e.key === 'ArrowLeft') n = (i - 1 + tabs.length) % tabs.length;
    else if (e.key === 'Home') n = 0;
    else if (e.key === 'End') n = tabs.length - 1;
    else return;
    e.preventDefault();
    const next = tabs[n];
    if (!next) return;
    onChange(next.id);
    listRef.current?.querySelectorAll<HTMLButtonElement>('[role="tab"]')[n]?.focus();
  };
  return (
    <div className={className ? `kit-tabs ${className}` : 'kit-tabs'} data-kit-tabs="">
      <div ref={listRef} className="hotbar kit-tabs-bar" role="tablist" aria-label={label} onKeyDown={onKey}>
        {tabs.map((t) => (
          <button
            key={t.id}
            type="button"
            role="tab"
            id={`${base}-t-${t.id}`}
            aria-selected={t.id === value}
            aria-controls={`${base}-p`}
            tabIndex={t.id === value ? 0 : -1}
            onClick={() => onChange(t.id)}
          >
            {t.label}
          </button>
        ))}
      </div>
      <div className="kit-tab-panel" role="tabpanel" id={`${base}-p`} aria-labelledby={`${base}-t-${value}`} tabIndex={0}>
        {children}
      </div>
    </div>
  );
}

export interface PaginationProps {
  page: number;
  pageCount: number;
  /** Build the href for a page (links work without JS and are crawlable). */
  hrefFor: (page: number) => string;
  /** Optional client-side handler (call e.preventDefault() to stay in-app). */
  onNavigate?: (page: number, e: MouseEvent<HTMLAnchorElement>) => void;
  label?: string;
  previousLabel?: string;
  nextLabel?: string;
  className?: string;
}

function pageWindow(page: number, count: number): (number | '…')[] {
  if (count <= 7) return Array.from({ length: count }, (_, i) => i + 1);
  const out: (number | '…')[] = [1];
  const start = Math.max(2, page - 1);
  const end = Math.min(count - 1, page + 1);
  if (start > 2) out.push('…');
  for (let i = start; i <= end; i++) out.push(i);
  if (end < count - 1) out.push('…');
  out.push(count);
  return out;
}

/** Hotbar pagination: numbered slots in Silkscreen, the current slot gets the bright frame. */
export function Pagination({ page, pageCount, hrefFor, onNavigate, label = 'Pagination', previousLabel = 'Previous', nextLabel = 'Next', className }: PaginationProps) {
  if (pageCount <= 1) return null;
  const link = (p: number, children: ReactNode, extra: Record<string, unknown> = {}) => (
    <a href={hrefFor(p)} onClick={onNavigate ? (e) => onNavigate(p, e) : undefined} {...extra}>
      {children}
    </a>
  );
  return (
    <nav className={className ? `kit-pagination ${className}` : 'kit-pagination'} aria-label={label}>
      <div className="hotbar hotbar-pixel">
        {page > 1 ? link(page - 1, <PixelIcon name="arrowLeft" />, { 'aria-label': previousLabel, rel: 'prev' }) : <span className="hotbar-slot is-disabled" aria-hidden="true"><PixelIcon name="arrowLeft" /></span>}
        {pageWindow(page, pageCount).map((p, i) =>
          p === '…' ? (
            <span key={`gap-${i}`} className="hotbar-slot is-gap" aria-hidden="true">
              …
            </span>
          ) : (
            <Fragment key={p}>{link(p, p, p === page ? { 'aria-current': 'page' } : {})}</Fragment>
          ),
        )}
        {page < pageCount ? link(page + 1, <PixelIcon name="arrowRight" />, { 'aria-label': nextLabel, rel: 'next' }) : <span className="hotbar-slot is-disabled" aria-hidden="true"><PixelIcon name="arrowRight" /></span>}
      </div>
    </nav>
  );
}
