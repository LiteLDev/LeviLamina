// Keep the current entry visible inside a scrolling column (sidebar, drawer, table of contents).
/**
 * Scroll `el` into view inside its scroll container only (never the page), instantly: `nearest` moves it just
 * inside the edges (keeping `margin` px clear of the container's fade masks), `center` centres it when hidden.
 */
export function revealIn(scroller: HTMLElement | null, el: HTMLElement | null, block: 'nearest' | 'center' = 'nearest', margin = 48): void {
  if (!scroller || !el) return;
  const s = scroller.getBoundingClientRect();
  const r = el.getBoundingClientRect();
  if (!s.height || !r.height) return; // not rendered (closed drawer, hidden column, collapsed group)
  const above = r.top < s.top + margin;
  const below = r.bottom > s.bottom - margin;
  if (!above && !below) return;
  if (block === 'center') scroller.scrollTop += r.top + r.height / 2 - (s.top + s.height / 2);
  else scroller.scrollTop += above ? r.top - s.top - margin : r.bottom - s.bottom + margin;
}

/** Run `fn` after the next paint (state updates such as a sidebar group opening have rendered). Returns a cancel function for effect cleanup. */
export function afterPaint(fn: () => void): () => void {
  let raf = requestAnimationFrame(() => {
    raf = requestAnimationFrame(fn);
  });
  return () => cancelAnimationFrame(raf);
}
