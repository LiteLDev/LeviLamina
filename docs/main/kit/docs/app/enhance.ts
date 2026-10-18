// Progressive enhancement of rendered markdown (event delegation on the [data-doc-content] element):
// copy buttons, hotbar tabs (WAI-ARIA keyboard pattern), client-side navigation for internal links and
// keyboard access to tables that scroll horizontally.
import { useEffect, type RefObject } from 'react';
import { useNavigate } from 'react-router';
import { internalTarget, isPlainLeftClick } from './components/KitLink';

async function copyText(text: string): Promise<boolean> {
  try {
    await navigator.clipboard.writeText(text);
    return true;
  } catch {
    const ta = document.createElement('textarea');
    ta.value = text;
    ta.setAttribute('readonly', '');
    ta.style.position = 'fixed';
    ta.style.opacity = '0';
    document.body.appendChild(ta);
    ta.select();
    let ok = false;
    try {
      ok = document.execCommand('copy');
    } catch {
      ok = false;
    }
    ta.remove();
    return ok;
  }
}

function selectTab(tab: HTMLElement, focus = false) {
  const set = tab.closest('[data-kit-tabs]');
  if (!set) return;
  const tabs = [...set.querySelectorAll<HTMLElement>(':scope > [role="tablist"] > [role="tab"]')];
  for (const t of tabs) {
    const on = t === tab;
    t.setAttribute('aria-selected', String(on));
    t.tabIndex = on ? 0 : -1;
    const panel = document.getElementById(t.getAttribute('aria-controls') ?? '');
    if (panel) panel.hidden = !on;
  }
  if (focus) tab.focus();
}

/** Attach interactions to the content element. Re-run when the page changes. */
export function useContentEnhancements(ref: RefObject<HTMLElement | null>, key: string) {
  const navigate = useNavigate();
  useEffect(() => {
    const root = ref.current;
    if (!root) return;
    const onClick = (e: MouseEvent) => {
      const target = e.target as Element | null;
      if (!target) return;
      const copy = target.closest<HTMLElement>('[data-kit-copy]');
      if (copy && root.contains(copy)) {
        const code = copy.closest('.kit-code')?.querySelector('pre code');
        const text = (code as HTMLElement | null)?.innerText ?? code?.textContent ?? '';
        void copyText(text.replace(/\n$/, '')).then((ok) => {
          if (!ok) return;
          copy.setAttribute('data-copied', copy.getAttribute('data-copied-label') ?? 'Copied!');
          window.setTimeout(() => copy.removeAttribute('data-copied'), 1600);
        });
        return;
      }
      const tab = target.closest<HTMLElement>('[role="tab"]');
      if (tab && root.contains(tab) && tab.closest('[data-kit-tabs]')) {
        selectTab(tab);
        return;
      }
      const a = target.closest('a');
      if (a && root.contains(a) && !e.defaultPrevented && isPlainLeftClick(e) && !a.target && !a.hasAttribute('download')) {
        const raw = a.getAttribute('href') ?? '';
        if (raw.startsWith('#')) return;
        const to = internalTarget(a.href);
        if (!to) return;
        e.preventDefault();
        navigate(to);
      }
    };
    const onKey = (e: KeyboardEvent) => {
      const tab = (e.target as Element | null)?.closest<HTMLElement>('[role="tab"]');
      if (!tab || !root.contains(tab)) return;
      const tabs = [...(tab.parentElement?.querySelectorAll<HTMLElement>('[role="tab"]') ?? [])];
      const i = tabs.indexOf(tab);
      let n = -1;
      if (e.key === 'ArrowRight') n = (i + 1) % tabs.length;
      else if (e.key === 'ArrowLeft') n = (i - 1 + tabs.length) % tabs.length;
      else if (e.key === 'Home') n = 0;
      else if (e.key === 'End') n = tabs.length - 1;
      if (n < 0) return;
      e.preventDefault();
      selectTab(tabs[n]!, true);
    };
    root.addEventListener('click', onClick);
    root.addEventListener('keydown', onKey);
    // Open the details/tab that contains the URL hash target.
    const revealHash = () => {
      const id = decodeURIComponent(window.location.hash.slice(1));
      if (!id) return;
      const el = document.getElementById(id);
      if (!el || !root.contains(el)) return;
      // a hash naming a tab (#__tabbed_1_2) selects it
      if (el.getAttribute('role') === 'tab' && el.closest('[data-kit-tabs]')) selectTab(el);
      for (let p: HTMLElement | null = el; p && p !== root; p = p.parentElement) {
        if (p instanceof HTMLDetailsElement) p.open = true;
        if (p.getAttribute('role') === 'tabpanel' && p.hidden) {
          const t = document.getElementById(p.getAttribute('aria-labelledby') ?? '');
          if (t) selectTab(t);
        }
      }
    };
    revealHash();
    window.addEventListener('hashchange', revealHash);
    // Tables that overflow horizontally must be scrollable from the keyboard (WCAG 2.1.1).
    const tableWraps = [...root.querySelectorAll<HTMLElement>('.kit-table-wrap')];
    const syncScrollable = () => {
      for (const w of tableWraps) {
        if (w.scrollWidth > w.clientWidth + 1) w.tabIndex = 0;
        else if (w !== document.activeElement) w.removeAttribute('tabindex'); // never pull focus from under the user
      }
    };
    syncScrollable();
    const resizeObserver = tableWraps.length && typeof ResizeObserver !== 'undefined' ? new ResizeObserver(syncScrollable) : undefined;
    // Watch the table too: web fonts loading later change its width without resizing the wrapper.
    for (const w of tableWraps) for (const el of [w, w.firstElementChild]) if (el) resizeObserver?.observe(el);
    return () => {
      root.removeEventListener('click', onClick);
      root.removeEventListener('keydown', onKey);
      window.removeEventListener('hashchange', revealHash);
      resizeObserver?.disconnect();
    };
  }, [key, navigate]);
}
