// Theme (Auto / Light / Dark) shared by every LeviMC site.
//
// - Auto (follow prefers-color-scheme, live) is the default. The choice is stored for every levimc.org /
//   *.levimc.org site in the `levimc_theme` cookie (see prefs.ts), mirrored in localStorage["levimc-theme"].
// - `themeInitScript` must be inlined in <head> before any stylesheet paints (no flash): it sets
//   <html class="dark">, <html data-theme-pref="auto|light|dark"> and color-scheme.
// - Components never read window/cookies during render (SSR-safe). Anything that depends on the preference
//   for its first paint is driven by CSS selectors on html[data-theme-pref] instead.

import { createContext, createElement, useCallback, useContext, useEffect, useMemo, useState, type ReactNode } from 'react';
import { createPrefsInitScript, readThemeChoice, writePref, PREF_COOKIES, PREF_STORAGE_KEYS, type ThemeChoice } from './prefs.ts';

/** 'auto' follows the system. ('system' is accepted as an alias of 'auto' everywhere for kit 1.0 callers.) */
export type ThemePreference = ThemeChoice;
export type ResolvedTheme = 'light' | 'dark';

/** localStorage mirror key (unchanged from kit 1.0, so 1.0 choices carry over). */
export const THEME_STORAGE_KEY = PREF_STORAGE_KEYS.theme;
/** Cross-site cookie (Domain=levimc.org). */
export const THEME_COOKIE = PREF_COOKIES.theme;
const THEME_EVENT = 'levimc-theme-change';

const norm = (p: ThemePreference | 'system' | null | undefined): ThemePreference => (p === 'light' || p === 'dark' ? p : 'auto');

/**
 * Inline <head> script. `{ doxygen: true }` also toggles doxygen-awesome's dark-mode / light-mode classes;
 * `legacyTheme` / `legacyLang` migrate a site's old localStorage keys once (see createPrefsInitScript).
 */
export function createThemeInitScript(opts: Parameters<typeof createPrefsInitScript>[0] = {}): string {
  return createPrefsInitScript(opts);
}

export const themeInitScript = createThemeInitScript();

export function readThemePreference(): ThemePreference {
  if (typeof window === 'undefined') return 'auto';
  return readThemeChoice();
}

export function systemPrefersDark(): boolean {
  return typeof window !== 'undefined' && !!window.matchMedia?.('(prefers-color-scheme: dark)').matches;
}

export function resolveTheme(pref: ThemePreference | 'system'): ResolvedTheme {
  const p = norm(pref);
  if (p === 'auto') return systemPrefersDark() ? 'dark' : 'light';
  return p;
}

/** Apply a preference to <html> (and store it for every LeviMC site). Safe to call from vanilla scripts. */
export function applyThemePreference(pref: ThemePreference | 'system', opts: { persist?: boolean; doxygen?: boolean } = {}): ResolvedTheme {
  const p = norm(pref);
  const resolved = resolveTheme(p);
  if (typeof document === 'undefined') return resolved;
  const root = document.documentElement;
  root.classList.add('kit-no-transition');
  root.classList.toggle('dark', resolved === 'dark');
  if (opts.doxygen || root.classList.contains('dark-mode') || root.classList.contains('light-mode')) {
    root.classList.toggle('dark-mode', resolved === 'dark');
    root.classList.toggle('light-mode', resolved !== 'dark');
  }
  root.setAttribute('data-theme-pref', p);
  root.style.colorScheme = resolved;
  if (opts.persist !== false) writePref('theme', p);
  // Re-enable transitions after the theme has painted.
  requestAnimationFrame(() => requestAnimationFrame(() => root.classList.remove('kit-no-transition')));
  window.dispatchEvent(new CustomEvent(THEME_EVENT, { detail: p }));
  return resolved;
}

/**
 * Kit 1.0's one-button cycle (kept for custom toggles): the first click always flips what you see:
 * auto → (opposite of the system theme) → the other explicit theme → auto.
 */
export function nextThemePreference(pref: ThemePreference | 'system'): ThemePreference {
  const p = norm(pref);
  const sys: ResolvedTheme = systemPrefersDark() ? 'dark' : 'light';
  if (p === 'auto') return sys === 'dark' ? 'light' : 'dark';
  if (p === 'light') return sys === 'light' ? 'dark' : 'auto';
  return sys === 'dark' ? 'light' : 'auto';
}

interface ThemeContextValue {
  /** `null` until mounted (SSR and first client render). */
  preference: ThemePreference | null;
  resolved: ResolvedTheme | null;
  setPreference: (pref: ThemePreference | 'system') => void;
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
    // Auto follows the system live.
    const onSystem = () => {
      if (readThemePreference() === 'auto') applyThemePreference('auto', { persist: false });
      sync();
    };
    // Another tab of this site changed it (localStorage mirror), or the tab regains focus after the visitor
    // changed it on another LeviMC site (cookie).
    const resync = () => {
      const p = readThemePreference();
      if (document.documentElement.getAttribute('data-theme-pref') !== p) applyThemePreference(p, { persist: false });
      sync();
    };
    const onStorage = (e: StorageEvent) => {
      if (e.key === THEME_STORAGE_KEY) resync();
    };
    const onVisible = () => {
      if (document.visibilityState === 'visible') resync();
    };
    mq?.addEventListener('change', onSystem);
    window.addEventListener('storage', onStorage);
    document.addEventListener('visibilitychange', onVisible);
    window.addEventListener(THEME_EVENT, sync);
    return () => {
      mq?.removeEventListener('change', onSystem);
      window.removeEventListener('storage', onStorage);
      document.removeEventListener('visibilitychange', onVisible);
      window.removeEventListener(THEME_EVENT, sync);
    };
  }, []);

  const setPreference = useCallback((p: ThemePreference | 'system') => {
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
