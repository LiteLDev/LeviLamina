// Theme (light / dark / system) shared by every LeviMC site.
//
// - Preference is persisted in localStorage["levimc-theme"] as "light" | "dark" (absent = "system").
// - `themeInitScript` must be inlined in <head> before any stylesheet paints (no flash): it sets
//   <html class="dark"> and <html data-theme-pref="light|dark|system">.
// - Components never read window/localStorage during render (SSR-safe). Anything that depends on the
//   preference for its first paint is driven by CSS selectors on html[data-theme-pref] instead.

import { createContext, createElement, useCallback, useContext, useEffect, useMemo, useState, type ReactNode } from 'react';

export type ThemePreference = 'light' | 'dark' | 'system';
export type ResolvedTheme = 'light' | 'dark';

export const THEME_STORAGE_KEY = 'levimc-theme';
const THEME_EVENT = 'levimc-theme-change';

/**
 * Inline <head> script. Pass `{ doxygen: true }` on Doxygen pages to also toggle doxygen-awesome's
 * `dark-mode` / `light-mode` classes.
 */
export function createThemeInitScript(opts: { doxygen?: boolean } = {}): string {
  return (
    `(function(){try{var d=document.documentElement,p=null;try{p=localStorage.getItem(${JSON.stringify(THEME_STORAGE_KEY)})}catch(e){}` +
    `if(p!=="light"&&p!=="dark")p="system";` +
    `var m=!!(window.matchMedia&&window.matchMedia("(prefers-color-scheme: dark)").matches);` +
    `var k=p==="dark"||(p==="system"&&m);d.classList.toggle("dark",k);` +
    (opts.doxygen ? `d.classList.toggle("dark-mode",k);d.classList.toggle("light-mode",!k);` : '') +
    `d.setAttribute("data-theme-pref",p);d.style.colorScheme=k?"dark":"light"}catch(e){}})();`
  );
}

export const themeInitScript = createThemeInitScript();

export function readThemePreference(): ThemePreference {
  if (typeof window === 'undefined') return 'system';
  try {
    const v = window.localStorage.getItem(THEME_STORAGE_KEY);
    return v === 'light' || v === 'dark' ? v : 'system';
  } catch {
    return 'system';
  }
}

export function systemPrefersDark(): boolean {
  return typeof window !== 'undefined' && !!window.matchMedia?.('(prefers-color-scheme: dark)').matches;
}

export function resolveTheme(pref: ThemePreference): ResolvedTheme {
  if (pref === 'system') return systemPrefersDark() ? 'dark' : 'light';
  return pref;
}

/** Apply a preference to <html> (and persist it). Safe to call from vanilla scripts. */
export function applyThemePreference(pref: ThemePreference, opts: { persist?: boolean; doxygen?: boolean } = {}): ResolvedTheme {
  const resolved = resolveTheme(pref);
  if (typeof document === 'undefined') return resolved;
  const root = document.documentElement;
  root.classList.add('kit-no-transition');
  root.classList.toggle('dark', resolved === 'dark');
  if (opts.doxygen || root.classList.contains('dark-mode') || root.classList.contains('light-mode')) {
    root.classList.toggle('dark-mode', resolved === 'dark');
    root.classList.toggle('light-mode', resolved !== 'dark');
  }
  root.setAttribute('data-theme-pref', pref);
  root.style.colorScheme = resolved;
  if (opts.persist !== false) {
    try {
      if (pref === 'system') window.localStorage.removeItem(THEME_STORAGE_KEY);
      else window.localStorage.setItem(THEME_STORAGE_KEY, pref);
    } catch {
      /* storage may be unavailable (private mode); the choice still applies to this page */
    }
  }
  // Re-enable transitions after the theme has painted.
  requestAnimationFrame(() => requestAnimationFrame(() => root.classList.remove('kit-no-transition')));
  window.dispatchEvent(new CustomEvent(THEME_EVENT, { detail: pref }));
  return resolved;
}

/**
 * The toggle cycles so the first click always flips what you see:
 * system → (opposite of the system theme) → the other explicit theme → system.
 */
export function nextThemePreference(pref: ThemePreference): ThemePreference {
  const sys: ResolvedTheme = systemPrefersDark() ? 'dark' : 'light';
  if (pref === 'system') return sys === 'dark' ? 'light' : 'dark';
  if (pref === 'light') return sys === 'light' ? 'dark' : 'system';
  return sys === 'dark' ? 'light' : 'system';
}

interface ThemeContextValue {
  /** `null` until mounted (SSR and first client render). */
  preference: ThemePreference | null;
  resolved: ResolvedTheme | null;
  setPreference: (pref: ThemePreference) => void;
  cycle: () => void;
}

const ThemeContext = createContext<ThemeContextValue>({
  preference: null,
  resolved: null,
  setPreference: (p) => {
    applyThemePreference(p);
  },
  cycle: () => {
    applyThemePreference(nextThemePreference(readThemePreference()));
  },
});

export function ThemeProvider({ children }: { children?: ReactNode }) {
  const [preference, setPref] = useState<ThemePreference | null>(null);
  const [resolved, setResolved] = useState<ResolvedTheme | null>(null);

  useEffect(() => {
    const sync = () => {
      const p = readThemePreference();
      setPref(p);
      setResolved(resolveTheme(p));
    };
    sync();
    const mq = window.matchMedia?.('(prefers-color-scheme: dark)');
    const onSystem = () => {
      if (readThemePreference() === 'system') applyThemePreference('system', { persist: false });
      sync();
    };
    const onStorage = (e: StorageEvent) => {
      if (e.key === THEME_STORAGE_KEY) {
        applyThemePreference(readThemePreference(), { persist: false });
        sync();
      }
    };
    mq?.addEventListener('change', onSystem);
    window.addEventListener('storage', onStorage);
    window.addEventListener(THEME_EVENT, sync);
    return () => {
      mq?.removeEventListener('change', onSystem);
      window.removeEventListener('storage', onStorage);
      window.removeEventListener(THEME_EVENT, sync);
    };
  }, []);

  const setPreference = useCallback((p: ThemePreference) => {
    applyThemePreference(p);
  }, []);
  const cycle = useCallback(() => {
    applyThemePreference(nextThemePreference(readThemePreference()));
  }, []);

  const value = useMemo(() => ({ preference, resolved, setPreference, cycle }), [preference, resolved, setPreference, cycle]);
  return createElement(ThemeContext.Provider, { value }, children);
}

export function useTheme(): ThemeContextValue {
  return useContext(ThemeContext);
}

/** true after hydration — use to gate UI that must not render on the server. */
export function useMounted(): boolean {
  const [m, setM] = useState(false);
  useEffect(() => setM(true), []);
  return m;
}
