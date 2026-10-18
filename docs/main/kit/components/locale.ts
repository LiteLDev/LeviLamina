// Locale state for apps whose language is not part of the URL (pkg.levimc.org, levimc.org): follows the
// visitor's cross-site language preference (cookie levimc_lang, see prefs.ts), else the browser languages.
import { useCallback, useEffect, useLayoutEffect, useRef, useState } from 'react';
import { pickLocale, preferredLanguages, readLanguagePreference, writePref } from './prefs.ts';

const useIsoLayoutEffect = typeof window !== 'undefined' ? useLayoutEffect : useEffect;

/**
 * Remove the pre-paint "language pending" classes (html.kit-chrome-pending / kit-content-pending, see
 * `createPrefsInitScript`'s `chromeLocales` / `appLocales`) once the page has re-rendered in the visitor's
 * language. Call it from a layout effect that runs after that render was committed (before the next paint).
 */
export function revealPendingChrome(): void {
  if (typeof document === 'undefined') return;
  document.documentElement.classList.remove('kit-chrome-pending', 'kit-content-pending');
}

export interface AppLocale {
  /** The app's own code, e.g. "en", "zh-CN". */
  code: string;
  /** BCP-47 tag (stored as the preference when chosen). */
  lang: string;
}

/**
 * The app's locale: `fallback` during SSR and the first client render (so hydration matches the prerendered
 * HTML), then — right after hydration, before the next paint — the nearest of `locales` to the stored
 * preference (or navigator.languages). Pass the same locales to the pre-paint script
 * (`createThemeInitScript({ appLocales: { locales, prerendered: fallback.code } })`) so visitors whose language
 * differs never see the prerendered one first. It follows
 * preference changes made in another tab or on another LeviMC site (on focus). `setLocale` stores the choice
 * for every LeviMC site (unless the GlobalBar's language menu already stored it) — pass it as the bar's
 * `languages.onSelect`. `locales` may be a new array on every render; the hook compares codes, not identity.
 */
export function usePreferredLocale<T extends AppLocale>(locales: readonly T[], fallback: T): [T, (code: string) => void] {
  const [code, setCode] = useState<string>(fallback.code);
  const [synced, setSynced] = useState(false);
  const latest = useRef({ locales, fallback });
  latest.current = { locales, fallback };
  const key = locales.map((l) => `${l.code}=${l.lang}`).join(',');
  // A layout effect: the switch from the prerendered locale happens right after hydration, before the
  // browser paints again; the pre-paint script (`appLocales`) hid the page until then.
  useIsoLayoutEffect(() => {
    const sync = () => {
      const { locales: L, fallback: F } = latest.current;
      setCode((pickLocale(preferredLanguages(), L, F) ?? F).code);
      setSynced(true);
    };
    sync();
    const onPref = (e: Event) => {
      if ((e as CustomEvent<{ kind: string }>).detail?.kind === 'lang') sync();
    };
    const onVisible = () => {
      if (document.visibilityState === 'visible') sync();
    };
    window.addEventListener('levimc-pref-change', onPref);
    document.addEventListener('visibilitychange', onVisible);
    return () => {
      window.removeEventListener('levimc-pref-change', onPref);
      document.removeEventListener('visibilitychange', onVisible);
    };
  }, [key]);
  // runs after the render in the synced locale was committed: show the page again
  useIsoLayoutEffect(() => {
    if (synced) revealPendingChrome();
  }, [synced, code]);
  const setLocale = useCallback((next: string) => {
    const l = latest.current.locales.find((x) => x.code === next);
    if (!l) return;
    if (readLanguagePreference() !== l.lang) writePref('lang', l.lang);
    setCode(l.code);
  }, []);
  const locale = locales.find((l) => l.code === code) ?? fallback;
  return [locale, setLocale];
}
