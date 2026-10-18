import { useEffect, type RefObject } from 'react';

/**
 * Dropdowns in the kit are <details class="kit-menu"><summary>…</summary><div class="kit-menu-panel">…</div></details>:
 * they work without JavaScript (static Doxygen pages) and are announced as expanded/collapsed natively.
 * This hook adds the expected desktop behaviour: close on outside click, on Escape (returning focus to
 * the summary) and after following a link inside the panel.
 */
export function useDismissableDetails(ref: RefObject<HTMLDetailsElement | null>) {
  useEffect(() => {
    const el = ref.current;
    if (!el) return;
    const onPointer = (e: PointerEvent) => {
      if (el.open && !el.contains(e.target as Node)) el.open = false;
    };
    const onKey = (e: KeyboardEvent) => {
      if (e.key === 'Escape' && el.open) {
        el.open = false;
        el.querySelector('summary')?.focus();
      }
    };
    const onClick = (e: MouseEvent) => {
      const a = (e.target as Element | null)?.closest('a');
      if (a && el.contains(a)) el.open = false;
    };
    const onToggle = () => {
      if (!el.open) return;
      // Only one menu open at a time.
      document.querySelectorAll<HTMLDetailsElement>('details.kit-menu[open]').forEach((d) => {
        if (d !== el) d.open = false;
      });
    };
    document.addEventListener('pointerdown', onPointer);
    document.addEventListener('keydown', onKey);
    el.addEventListener('click', onClick);
    el.addEventListener('toggle', onToggle);
    return () => {
      document.removeEventListener('pointerdown', onPointer);
      document.removeEventListener('keydown', onKey);
      el.removeEventListener('click', onClick);
      el.removeEventListener('toggle', onToggle);
    };
  }, [ref]);
}
