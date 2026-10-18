// Cross-site preferences (theme + language) shared by every levimc.org / *.levimc.org site.
//
// Storage contract (kit ≥ 1.1.0):
//   cookie  levimc_theme = auto | light | dark        Domain=levimc.org; Path=/; SameSite=Lax; Secure; Max-Age ≈ 1 year
//   cookie  levimc_lang  = <BCP-47 tag>, e.g. zh-CN    (same attributes)
//   localStorage levimc-theme / levimc-lang          mirror + fallback (localhost dev, blocked cookies)
// The cookie wins. On a host outside levimc.org (localhost, previews) the cookie is host-only and not Secure
// on plain http. A value found only in localStorage (written by kit 1.0.x or another fallback) is copied into
// the cookie once, so it reaches the other sites on their next load.
//
// Everything here is SSR-safe: functions that touch document/window return null/no-op on the server.
// The same logic exists as a compact inline-script string (PREFS_CORE_JS) for pre-paint <head> scripts,
// the docs root redirect and the static kit.js; tests/prefs.test.mjs checks both behave identically.

export type ThemeChoice = 'auto' | 'light' | 'dark';
export type PrefKind = 'theme' | 'lang';

export const PREF_COOKIES: Record<PrefKind, string> = { theme: 'levimc_theme', lang: 'levimc_lang' };
export const PREF_STORAGE_KEYS: Record<PrefKind, string> = { theme: 'levimc-theme', lang: 'levimc-lang' };
/** The parent domain every LeviMC site shares. */
export const PREF_PARENT_DOMAIN = 'levimc.org';
/** Cookie lifetime: one year. */
export const PREF_MAX_AGE = 31536000;

/** Domain attribute for the preference cookies on `hostname` (undefined = host-only cookie). */
export function prefCookieDomain(hostname: string): string | undefined {
  const h = hostname.toLowerCase().replace(/\.$/, '');
  return h === PREF_PARENT_DOMAIN || h.endsWith('.' + PREF_PARENT_DOMAIN) ? PREF_PARENT_DOMAIN : undefined;
}

/** The full Set-Cookie string (document.cookie form) for a preference. */
export function serializePrefCookie(kind: PrefKind, value: string, where: { hostname: string; protocol: string }): string {
  const domain = prefCookieDomain(where.hostname);
  return (
    `${PREF_COOKIES[kind]}=${encodeURIComponent(value)}; Path=/; Max-Age=${PREF_MAX_AGE}; SameSite=Lax` +
    (domain ? `; Domain=${domain}` : '') +
    (where.protocol === 'https:' ? '; Secure' : '')
  );
}

/** Read one cookie from a `document.cookie`-style string. */
export function readCookie(name: string, cookies: string): string | null {
  for (const part of cookies.split(';')) {
    const i = part.indexOf('=');
    if (i < 0) continue;
    if (part.slice(0, i).trim() === name) {
      try {
        return decodeURIComponent(part.slice(i + 1).trim());
      } catch {
        return null;
      }
    }
  }
  return null;
}

const valid: Record<PrefKind, (v: string) => boolean> = {
  theme: (v) => v === 'auto' || v === 'light' || v === 'dark',
  lang: (v) => /^[A-Za-z]{2,3}(-[A-Za-z0-9]{1,8})*$/.test(v),
};

function storage(): Storage | null {
  try {
    return typeof window === 'undefined' ? null : window.localStorage;
  } catch {
    return null;
  }
}

/** The stored preference (cookie, else localStorage), or null. Migrates a localStorage-only value into the cookie. */
export function readPref(kind: PrefKind): string | null {
  if (typeof document === 'undefined') return null;
  let v: string | null = null;
  try {
    v = readCookie(PREF_COOKIES[kind], document.cookie);
  } catch {
    /* cookies blocked */
  }
  if (v !== null && valid[kind](v)) return v;
  const s = storage();
  let ls: string | null = null;
  try {
    ls = s?.getItem(PREF_STORAGE_KEYS[kind]) ?? null;
  } catch {
    /* ignore */
  }
  if (ls !== null && valid[kind](ls)) {
    writeCookie(kind, ls);
    return ls;
  }
  return null;
}

function writeCookie(kind: PrefKind, value: string) {
  try {
    document.cookie = serializePrefCookie(kind, value, location);
  } catch {
    /* cookies blocked: localStorage still holds it */
  }
}

/** Store a preference for every LeviMC site (cookie on the parent domain + localStorage mirror). */
export function writePref(kind: PrefKind, value: string): void {
  if (typeof document === 'undefined' || !valid[kind](value)) return;
  writeCookie(kind, value);
  try {
    storage()?.setItem(PREF_STORAGE_KEYS[kind], value);
  } catch {
    /* ignore */
  }
  try {
    window.dispatchEvent(new CustomEvent('levimc-pref-change', { detail: { kind, value } }));
  } catch {
    /* ignore */
  }
}

/** Theme preference: 'auto' when nothing is stored. */
export function readThemeChoice(): ThemeChoice {
  const v = readPref('theme');
  return v === 'light' || v === 'dark' ? v : 'auto';
}

/** Language preference (BCP-47) or null when the visitor never chose one. */
export function readLanguagePreference(): string | null {
  return readPref('lang');
}

/**
 * The visitor's languages in priority order: the stored preference alone if there is one, else the browser's
 * navigator.languages.
 */
export function preferredLanguages(): string[] {
  const p = readLanguagePreference();
  if (p) return [p];
  if (typeof navigator === 'undefined') return [];
  return navigator.languages?.length ? [...navigator.languages] : navigator.language ? [navigator.language] : [];
}

const TRAD = /^zh-(tw|hk|mo|hant)\b/;
const isTrad = (tag: string) => TRAD.test(tag);

/**
 * Map a BCP-47 tag to the nearest of a site's locales: an exact tag/code match; Chinese → the site's zh variant
 * (Traditional zh-TW/zh-HK/zh-MO/zh-Hant prefer a Traditional locale, everything else the Simplified one, and
 * either falls back to any zh locale); otherwise the same base language. Returns undefined when nothing
 * matches (callers then use English / their default locale, see {@link pickLocale}).
 */
export function matchLocale<T extends { code: string; lang: string }>(tag: string | null | undefined, locales: readonly T[]): T | undefined {
  if (!tag) return undefined;
  const t = tag.toLowerCase().replace(/_/g, '-');
  const base = t.split('-')[0]!;
  const exact = locales.find((l) => l.lang.toLowerCase() === t || l.code.toLowerCase() === t);
  if (exact) return exact;
  if (base === 'zh') {
    const zh = locales.filter((l) => l.lang.toLowerCase().split('-')[0] === 'zh');
    return zh.find((l) => isTrad(l.lang.toLowerCase()) === isTrad(t)) ?? zh[0];
  }
  return locales.find((l) => l.lang.toLowerCase().split('-')[0] === base);
}

/** {@link matchLocale} over several tags in order; falls back to the English locale, then to `fallback`. */
export function pickLocale<T extends { code: string; lang: string }>(tags: readonly string[], locales: readonly T[], fallback?: T): T | undefined {
  for (const tag of tags) {
    const m = matchLocale(tag, locales);
    if (m) return m;
  }
  return locales.find((l) => l.lang.toLowerCase().split('-')[0] === 'en') ?? fallback ?? locales[0];
}

/**
 * Inline-script core (ES5, no globals) used by the pre-paint scripts, the docs root redirect and kit.js:
 *   rp(kind)      → stored value or null (cookie, else localStorage; migrates LS → cookie)
 *   wp(kind, v)   → store (cookie on the parent domain + localStorage)
 *   ml(tag, L)    → index of the nearest locale in L = [{c: code, l: lang}] or -1
 */
export const PREFS_CORE_JS =
  `var PC={theme:"${PREF_COOKIES.theme}",lang:"${PREF_COOKIES.lang}"},PS={theme:"${PREF_STORAGE_KEYS.theme}",lang:"${PREF_STORAGE_KEYS.lang}"};` +
  `function pv(k,v){return k==="theme"?(v==="auto"||v==="light"||v==="dark"):/^[A-Za-z]{2,3}(-[A-Za-z0-9]{1,8})*$/.test(v||"")}` +
  `function pls(){try{return window.localStorage}catch(e){return null}}` +
  `function wc(k,v){try{var h=location.hostname.toLowerCase().replace(/\\.$/,""),d=h==="${PREF_PARENT_DOMAIN}"||h.slice(-${PREF_PARENT_DOMAIN.length + 1})===".${PREF_PARENT_DOMAIN}";` +
  `document.cookie=PC[k]+"="+encodeURIComponent(v)+"; Path=/; Max-Age=${PREF_MAX_AGE}; SameSite=Lax"+(d?"; Domain=${PREF_PARENT_DOMAIN}":"")+(location.protocol==="https:"?"; Secure":"")}catch(e){}}` +
  `function rp(k){var v=null,s,i,c;try{c=document.cookie.split(";");for(i=0;i<c.length;i++){var j=c[i].indexOf("=");if(j>0&&c[i].slice(0,j).replace(/^\\s+|\\s+$/g,"")===PC[k]){v=decodeURIComponent(c[i].slice(j+1).replace(/^\\s+|\\s+$/g,""));break}}}catch(e){v=null}` +
  `if(v!==null&&pv(k,v))return v;s=pls();try{v=s&&s.getItem(PS[k])}catch(e){v=null}if(v&&pv(k,v)){wc(k,v);return v}return null}` +
  `function wp(k,v){if(!pv(k,v))return;wc(k,v);var s=pls();try{s&&s.setItem(PS[k],v)}catch(e){}}` +
  `function ml(t,L){if(!t)return -1;t=String(t).toLowerCase().replace(/_/g,"-");var b=t.split("-")[0],i,z=-1,tr=/^zh-(tw|hk|mo|hant)\\b/;` +
  `for(i=0;i<L.length;i++)if(L[i].l.toLowerCase()===t||L[i].c.toLowerCase()===t)return i;` +
  `if(b==="zh"){for(i=0;i<L.length;i++){var x=L[i].l.toLowerCase();if(x.split("-")[0]==="zh"){if(z<0)z=i;if(tr.test(x)===tr.test(t))return i}}return z}` +
  `for(i=0;i<L.length;i++)if(L[i].l.toLowerCase().split("-")[0]===b)return i;return -1}`;

/**
 * Pre-paint <head> script: applies the theme (html.dark, data-theme-pref, color-scheme) and exposes the language
 * preference as html[data-kit-lang-pref] — before any stylesheet paints. `doxygen` also toggles
 * doxygen-awesome's dark-mode/light-mode classes. `legacyTheme` lists old localStorage keys holding
 * "light"/"dark" to migrate once (kit 1.0 used "levimc-theme", which is the new mirror key and needs no entry).
 * `legacyLang` maps old localStorage keys (value → BCP-47 tag; a value missing from `map` is used as is
 * when it is a valid tag) — each is migrated once and removed.
 */
export function createPrefsInitScript(
  opts: {
    doxygen?: boolean;
    legacyTheme?: string[];
    legacyLang?: { key: string; map?: Record<string, string> }[];
    /**
     * Static pages only (kit.js translates their chrome after load): the UI locales of the chrome. When the
     * stored language maps to another one than the page's <html lang>, html.kit-chrome-pending hides the bar and
     * footer text until kit.js has translated them (at most 1.5 s), so the chrome never flashes in English.
     */
    chromeLocales?: readonly string[];
    /**
     * Plain apps whose language is state (`usePreferredLocale`, locale.ts): the app's locales and the
     * `code` of the one its pages are prerendered in. When the visitor's language (the stored preference, else
     * navigator.languages — exactly what usePreferredLocale picks, see {@link pickLocale}) maps to another
     * locale, html.kit-chrome-pending + html.kit-content-pending hide the bar, <main> and the footer
     * (visibility only: no layout shift) until the app has re-rendered in that language — usePreferredLocale
     * removes both classes right after its first sync, before the next paint (CSS fail-safe: 1.5 s).
     */
    appLocales?: { locales: readonly { code: string; lang: string }[]; prerendered: string };
  } = {},
): string {
  const legacyTheme = opts.legacyTheme ?? [];
  const legacyLang = opts.legacyLang ?? [];
  const chrome = opts.chromeLocales?.length
    ? `if(l){var C=${JSON.stringify(opts.chromeLocales.map((c) => ({ c, l: c })))},a=ml(l,C),z=ml(d.lang||"en",C);if(a<0)a=0;if(z<0)z=0;if(a!==z)d.classList.add("kit-chrome-pending")}`
    : '';
  const app = opts.appLocales?.locales.length
    ? `var A=${JSON.stringify(opts.appLocales.locales.map(({ code, lang }) => ({ c: code, l: lang })))},n=navigator,T=l?[l]:n.languages&&n.languages.length?n.languages:[n.language||""],x=-1;` +
      `for(i=0;i<T.length&&x<0;i++)x=ml(T[i],A);if(x<0)for(i=0;i<A.length&&x<0;i++)if(A[i].l.toLowerCase().split("-")[0]==="en")x=i;` +
      `if(x>=0&&A[x].c!==${JSON.stringify(opts.appLocales.prerendered)}){d.classList.add("kit-chrome-pending");d.classList.add("kit-content-pending")}`
    : '';
  return (
    `(function(){try{${PREFS_CORE_JS}var d=document.documentElement,s=pls(),p=rp("theme"),q,i,o;` +
    (legacyTheme.length
      ? `q=${JSON.stringify(legacyTheme)};for(i=0;i<q.length;i++){try{o=s&&s.getItem(q[i])}catch(e){o=null}if(o!==null){if(!p&&(o==="light"||o==="dark")){wp("theme",o);p=o}try{s.removeItem(q[i])}catch(e){}}}`
      : '') +
    (legacyLang.length
      ? `var g=rp("lang");q=${JSON.stringify(legacyLang)};for(i=0;i<q.length;i++){try{o=s&&s.getItem(q[i].key)}catch(e){o=null}if(o!==null){var m=q[i].map&&q[i].map[o]!==undefined?q[i].map[o]:o;if(!g&&m&&pv("lang",m)){wp("lang",m);g=m}try{s.removeItem(q[i].key)}catch(e){}}}`
      : '') +
    `if(p!=="light"&&p!=="dark")p="auto";var k=p==="dark"||(p==="auto"&&!!(window.matchMedia&&window.matchMedia("(prefers-color-scheme: dark)").matches));` +
    `d.classList.toggle("dark",k);` +
    (opts.doxygen ? `d.classList.toggle("dark-mode",k);d.classList.toggle("light-mode",!k);` : '') +
    `d.setAttribute("data-theme-pref",p);d.style.colorScheme=k?"dark":"light";var l=rp("lang");if(l)d.setAttribute("data-kit-lang-pref",l);${chrome}${app}}catch(e){}})();`
  );
}
