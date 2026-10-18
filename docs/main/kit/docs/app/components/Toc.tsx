import { useEffect, useRef, useState } from 'react';
import type { TocEntry } from '../../shared/types';
import { revealIn } from './reveal';

/** Scroll-spy: the last heading above 30% of the viewport is active. */
export function useActiveHeading(ids: string[]): string | null {
  const [active, setActive] = useState<string | null>(null);
  useEffect(() => {
    if (!ids.length) return;
    let raf = 0;
    const compute = () => {
      raf = 0;
      const line = window.innerHeight * 0.3;
      let cur: string | null = null;
      for (const id of ids) {
        const el = document.getElementById(id);
        if (!el) continue;
        if (el.getBoundingClientRect().top - line <= 0) cur = id;
        else break;
      }
      if (window.innerHeight + window.scrollY >= document.documentElement.scrollHeight - 4) cur = ids[ids.length - 1] ?? cur;
      setActive(cur);
    };
    const onScroll = () => {
      if (!raf) raf = requestAnimationFrame(compute);
    };
    compute();
    window.addEventListener('scroll', onScroll, { passive: true });
    window.addEventListener('resize', onScroll);
    return () => {
      window.removeEventListener('scroll', onScroll);
      window.removeEventListener('resize', onScroll);
      if (raf) cancelAnimationFrame(raf);
    };
  }, [ids.join('|')]);
  return active;
}

export function TocList({ toc, active, onNavigate }: { toc: TocEntry[]; active: string | null; onNavigate?: () => void }) {
  const min = Math.min(...toc.map((t) => t.level));
  return (
    <ul className="kit-toc-list">
      {toc.map((t) => (
        <li key={t.id} data-level={t.level - min}>
          <a href={`#${t.id}`} className={t.id === active ? 'is-active' : undefined} aria-current={t.id === active ? 'location' : undefined} onClick={onNavigate}>
            {t.text}
          </a>
        </li>
      ))}
    </ul>
  );
}

export function Toc({ toc, title }: { toc: TocEntry[]; title: string }) {
  const active = useActiveHeading(toc.map((t) => t.id));
  const ref = useRef<HTMLElement>(null);
  // long outlines: keep the highlighted entry visible in the sticky column
  useEffect(() => {
    const nav = ref.current;
    if (active) revealIn(nav?.closest<HTMLElement>('.kit-doc-toc') ?? null, nav?.querySelector<HTMLElement>('a.is-active') ?? null);
  }, [active]);
  if (!toc.length) return null;
  return (
    <nav ref={ref} className="kit-toc" aria-label={title}>
      <p className="kit-toc-title">{title}</p>
      <TocList toc={toc} active={active} />
    </nav>
  );
}
