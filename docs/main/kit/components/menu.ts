import { useEffect, type RefObject } from 'react';

/** The items of a `role="menu"` panel (language and theme menus), or [] for plain dropdowns. */
function menuItems(el: HTMLDetailsElement): HTMLElement[] {
  const panel = el.querySelector(':scope > [role="menu"]');
  return panel ? Array.from(panel.querySelectorAll<HTMLElement>('[role^="menuitem"]')) : [];
}

/**
 * WAI-ARIA menu keys for `role="menu"` panels: ArrowDown / ArrowUp on the trigger open the menu on the first /
 * last item; inside it they move between items (wrapping), Home / End jump to the first / last. Returns true
 * when the key was handled. Shared by the React hook below and (as a copy) static/kit.src.js.
 */
export function menuKey(el: HTMLDetailsElement, e: KeyboardEvent): boolean {
  const items = menuItems(el);
  if (!items.length) return false;
  const onTrigger = (e.target as Element | null)?.closest('summary')?.parentElement === el;
  const i = items.indexOf(document.activeElement as HTMLElement);
  const n = items.length;
  let next: number;
  if (e.key === 'ArrowDown') next = i < 0 ? 0 : (i + 1) % n;
  else if (e.key === 'ArrowUp') next = i < 0 ? n - 1 : (i - 1 + n) % n;
  else if ((e.key === 'Home' || e.key === 'End') && el.open && !onTrigger) next = e.key === 'Home' ? 0 : n - 1;
  else return false;
  if (!el.open) {
    if (!onTrigger) return false;
    el.open = true;
  }
  items[next]!.focus();
  return true;
}

/** Opened from the keyboard (focus still on the trigger): move focus to the checked item, else the first. */
export function focusMenuOnOpen(el: HTMLDetailsElement): void {
  const items = menuItems(el);
  if (!el.open || !items.length || document.activeElement !== el.querySelector(':scope > summary')) return;
  (items.find((x) => x.getAttribute('aria-checked') === 'true') ?? items[0])!.focus();
}

/**
 * Dropdowns in the kit are <details class="kit-menu"><summary>…</summary><div class="kit-menu-panel">…</div></details>:
 * they work without JavaScript (static Doxygen pages) and are announced as expanded/collapsed natively.
 * This hook adds the expected desktop behaviour: close on outside click, on Escape (returning focus to
 * the summary), when keyboard focus leaves the menu and after choosing a link or button inside the panel;
 * `role="menu"` panels (language, theme) also get the menu keys (see {@link menuKey}) and, when opened from
 * the keyboard, focus on their checked item.
 */
export function useDismissableDetails(ref: RefObject<HTMLDetailsElement | null>) {
  useEffect(() => {
    const el = ref.current;
    if (!el) return;
    let pointer = false;
    const onPointer = (e: PointerEvent) => {
      if (el.open && !el.contains(e.target as Node)) el.open = false;
      pointer = el.contains(e.target as Node);
    };
    const onKey = (e: KeyboardEvent) => {
      if (e.key === 'Escape' && el.open) {
        el.open = false;
        el.querySelector('summary')?.focus();
      }
    };
    const onMenuKey = (e: KeyboardEvent) => {
      pointer = false;
      if (!e.altKey && !e.ctrlKey && !e.metaKey && menuKey(el, e)) e.preventDefault();
    };
    const onClick = (e: MouseEvent) => {
      const target = e.target as Element | null;
      const panel = target?.closest('.kit-menu-panel');
      const choice = target?.closest('a, button');
      if (choice && panel && el.contains(panel) && panel.closest('details') === el) {
        el.open = false;
        // a button choice keeps the page: put focus back on the trigger
        if (choice.tagName === 'BUTTON') el.querySelector('summary')?.focus();
      }
    };
    // Tabbing out of an open menu closes it (focus moving nowhere, e.g. a window switch, keeps it open).
    const onFocusOut = (e: FocusEvent) => {
      const to = e.relatedTarget as Node | null;
      if (el.open && to && !el.contains(to)) el.open = false;
    };
    const onToggle = () => {
      if (!el.open) return;
      // opened with Enter / Space: focus goes into the menu (a click leaves it on the trigger)
      if (!pointer) focusMenuOnOpen(el);
      pointer = false;
      // Only one menu open at a time.
      document.querySelectorAll<HTMLDetailsElement>('details.kit-menu[open]').forEach((d) => {
        if (d !== el && !d.contains(el)) d.open = false;
      });
    };
    document.addEventListener('pointerdown', onPointer);
    document.addEventListener('keydown', onKey);
    el.addEventListener('click', onClick);
    el.addEventListener('keydown', onMenuKey);
    el.addEventListener('focusout', onFocusOut);
    el.addEventListener('toggle', onToggle);
    return () => {
      document.removeEventListener('pointerdown', onPointer);
      document.removeEventListener('keydown', onKey);
      el.removeEventListener('click', onClick);
      el.removeEventListener('keydown', onMenuKey);
      el.removeEventListener('focusout', onFocusOut);
      el.removeEventListener('toggle', onToggle);
    };
  }, [ref]);
}
