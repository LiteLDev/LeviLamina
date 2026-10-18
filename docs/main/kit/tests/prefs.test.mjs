// Unit tests for the cross-site preferences (components/prefs.ts) and the inline scripts built from them
// (pre-paint script, docs root language redirect). Run: node --test "kit/tests/*.test.mjs" (Node ≥ 22.18).
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import vm from 'node:vm';
import {
  prefCookieDomain,
  serializePrefCookie,
  readCookie,
  matchLocale,
  pickLocale,
  PREFS_CORE_JS,
  createPrefsInitScript,
} from '../components/prefs.ts';
import { localeRedirectScript } from '../docs/shared/head.ts';
import { KIT_VERSION } from '../components/version.ts';

// ------------------------------------------------------------------ a tiny browser for the inline scripts
/** Cookie jar with Domain / host-only semantics, as document.cookie exposes it to one host. */
function browserEnv({ url = 'https://docs.levimc.org/', cookies = [], storage = {}, languages = ['en-US'], referrer = '', dark = false } = {}) {
  const u = new URL(url);
  const jar = cookies.map((c) => ({ ...c }));
  const visible = () => jar.filter((c) => (c.domain ? u.hostname === c.domain || u.hostname.endsWith('.' + c.domain) : c.host === u.hostname) && (!c.secure || u.protocol === 'https:'));
  const classes = new Set();
  const attrs = {};
  const ls = { ...storage };
  const env = {
    replaced: null,
    jar,
    ls,
    classes,
    attrs,
    document: {
      referrer,
      get cookie() {
        return visible()
          .map((c) => `${c.name}=${c.value}`)
          .join('; ');
      },
      set cookie(s) {
        const [pair, ...parts] = s.split(';').map((x) => x.trim());
        const [name, value] = [pair.slice(0, pair.indexOf('=')), pair.slice(pair.indexOf('=') + 1)];
        const c = { name, value, host: u.hostname };
        for (const p of parts) {
          const [k, v] = p.split('=');
          if (/^domain$/i.test(k)) c.domain = v.replace(/^\./, '');
          if (/^secure$/i.test(k)) c.secure = true;
          if (/^max-age$/i.test(k)) c.maxAge = +v;
          if (/^samesite$/i.test(k)) c.sameSite = v;
          if (/^path$/i.test(k)) c.path = v;
        }
        // a Domain attribute must cover the current host, and Secure needs https (browser rules)
        if (c.domain && !(u.hostname === c.domain || u.hostname.endsWith('.' + c.domain))) return;
        if (c.secure && u.protocol !== 'https:') return;
        const i = jar.findIndex((x) => x.name === name && (x.domain ?? x.host) === (c.domain ?? c.host));
        if (i >= 0) jar.splice(i, 1, c);
        else jar.push(c);
      },
      documentElement: {
        lang: 'en',
        classList: { toggle: (k, on) => (on ? classes.add(k) : classes.delete(k)), add: (k) => classes.add(k), contains: (k) => classes.has(k) },
        setAttribute: (k, v) => (attrs[k] = v),
        removeAttribute: (k) => delete attrs[k],
        style: {},
      },
    },
    location: {
      hostname: u.hostname,
      protocol: u.protocol,
      pathname: u.pathname,
      search: u.search,
      hash: u.hash,
      origin: u.origin,
      replace: (to) => (env.replaced = to),
    },
    navigator: { languages, language: languages[0] },
  };
  env.window = {
    localStorage: { getItem: (k) => (k in ls ? ls[k] : null), setItem: (k, v) => (ls[k] = String(v)), removeItem: (k) => delete ls[k] },
    matchMedia: () => ({ matches: dark }),
  };
  return env;
}
function run(code, env) {
  const ctx = vm.createContext({ document: env.document, location: env.location, navigator: env.navigator, window: env.window, URL });
  vm.runInContext(code, ctx);
  return env;
}

// ------------------------------------------------------------------ cookie attributes
test('cookie domain: the parent domain on levimc.org and every subdomain, host-only elsewhere', () => {
  assert.equal(prefCookieDomain('levimc.org'), 'levimc.org');
  assert.equal(prefCookieDomain('docs.levimc.org'), 'levimc.org');
  assert.equal(prefCookieDomain('pkg.levimc.org'), 'levimc.org');
  assert.equal(prefCookieDomain('LEVIMC.ORG.'), 'levimc.org');
  assert.equal(prefCookieDomain('notlevimc.org'), undefined);
  assert.equal(prefCookieDomain('levimc.org.evil.com'), undefined);
  assert.equal(prefCookieDomain('localhost'), undefined);
  assert.equal(prefCookieDomain('127.0.0.1'), undefined);
});

test('cookie string: Domain + Secure on https levimc.org, neither on http localhost', () => {
  assert.equal(
    serializePrefCookie('theme', 'dark', { hostname: 'pkg.levimc.org', protocol: 'https:' }),
    'levimc_theme=dark; Path=/; Max-Age=31536000; SameSite=Lax; Domain=levimc.org; Secure',
  );
  assert.equal(serializePrefCookie('lang', 'zh-CN', { hostname: 'localhost', protocol: 'http:' }), 'levimc_lang=zh-CN; Path=/; Max-Age=31536000; SameSite=Lax');
  assert.equal(readCookie('levimc_lang', 'a=1; levimc_lang=zh-HK; b=2'), 'zh-HK');
  assert.equal(readCookie('levimc_lang', 'xlevimc_lang=zh'), null);
  assert.equal(readCookie('levimc_theme', ''), null);
});

// ------------------------------------------------------------------ locale mapping (TS and inline JS agree)
const inlineMl = vm.runInNewContext(`${PREFS_CORE_JS};ml`, { location: {}, document: {}, window: {} });
const SITES = {
  'en+zh': [
    { code: 'en', lang: 'en' },
    { code: 'zh', lang: 'zh' },
  ],
  'root+zh-CN': [
    { code: 'root', lang: 'en-US' },
    { code: 'zh-CN', lang: 'zh-CN' },
  ],
  launcher: ['en-US', 'zh-CN', 'zh-HK', 'ja-JP', 'ko-KR', 'es-ES', 'fr-FR', 'de-DE', 'ru-RU'].map((l, i) => ({ code: i ? l : 'root', lang: l })),
  ui: ['en', 'zh-CN', 'zh-HK', 'es', 'ru', 'de', 'ja', 'ko', 'fr'].map((l) => ({ code: l, lang: l })),
};
const CASES = [
  ['en+zh', 'zh-CN', 'zh'],
  ['en+zh', 'zh-TW', 'zh'],
  ['en+zh', 'zh-Hant-HK', 'zh'],
  ['en+zh', 'en-GB', 'en'],
  ['en+zh', 'fr', undefined],
  ['root+zh-CN', 'zh-HK', 'zh-CN'],
  ['root+zh-CN', 'en', 'root'],
  ['launcher', 'zh-TW', 'zh-HK'],
  ['launcher', 'zh-MO', 'zh-HK'],
  ['launcher', 'zh-Hant', 'zh-HK'],
  ['launcher', 'zh', 'zh-CN'],
  ['launcher', 'zh-SG', 'zh-CN'],
  ['launcher', 'ja', 'ja-JP'],
  ['launcher', 'es-MX', 'es-ES'],
  ['launcher', 'pt-BR', undefined],
  ['launcher', 'ZH_cn', 'zh-CN'],
  ['ui', 'zh-TW', 'zh-HK'],
  ['ui', 'de-AT', 'de'],
  ['ui', 'en-US', 'en'],
];
test('matchLocale: nearest locale (zh variants, base language) — TS and inline script agree', () => {
  for (const [site, tag, want] of CASES) {
    const L = SITES[site];
    assert.equal(matchLocale(tag, L)?.code, want, `${site} ${tag}`);
    const i = inlineMl(tag, L.map((l) => ({ c: l.code, l: l.lang })));
    assert.equal(i < 0 ? undefined : L[i].code, want, `inline ${site} ${tag}`);
  }
  assert.equal(pickLocale(['pt-BR', 'zh-TW'], SITES.launcher)?.code, 'zh-HK');
  assert.equal(pickLocale(['pt-BR'], SITES.launcher)?.code, 'root', 'no match → English');
  assert.equal(pickLocale([], SITES['en+zh'])?.code, 'en');
});

// ------------------------------------------------------------------ pre-paint script
const init = createPrefsInitScript();
test('pre-paint: Auto by default (follows the system)', () => {
  const light = run(init, browserEnv());
  assert.equal(light.attrs['data-theme-pref'], 'auto');
  assert.ok(!light.classes.has('dark'));
  const dark = run(init, browserEnv({ dark: true }));
  assert.equal(dark.attrs['data-theme-pref'], 'auto');
  assert.ok(dark.classes.has('dark'));
});
test('pre-paint: the cookie wins over localStorage', () => {
  const env = run(
    init,
    browserEnv({ cookies: [{ name: 'levimc_theme', value: 'light', domain: 'levimc.org' }], storage: { 'levimc-theme': 'dark' }, dark: true }),
  );
  assert.equal(env.attrs['data-theme-pref'], 'light');
  assert.ok(!env.classes.has('dark'));
});
test('pre-paint: a localStorage-only choice (kit 1.0) moves into the parent-domain cookie once', () => {
  const env = run(init, browserEnv({ url: 'https://docs.levimc.org/lip/', storage: { 'levimc-theme': 'dark', 'levimc-lang': 'zh-CN' } }));
  assert.equal(env.attrs['data-theme-pref'], 'dark');
  const theme = env.jar.find((c) => c.name === 'levimc_theme');
  assert.deepEqual([theme.value, theme.domain, theme.secure, theme.sameSite, theme.maxAge], ['dark', 'levimc.org', true, 'Lax', 31536000]);
  assert.equal(env.jar.find((c) => c.name === 'levimc_lang')?.value, 'zh-CN');
  assert.equal(env.attrs['data-kit-lang-pref'], 'zh-CN');
  // another LeviMC site now sees both preferences
  const other = run(init, browserEnv({ url: 'https://pkg.levimc.org/', cookies: env.jar }));
  assert.equal(other.attrs['data-theme-pref'], 'dark');
  assert.equal(other.attrs['data-kit-lang-pref'], 'zh-CN');
});
test('pre-paint: host-only cookie on localhost (no Domain, no Secure on http)', () => {
  const env = run(init, browserEnv({ url: 'http://localhost:5173/', storage: { 'levimc-theme': 'light' } }));
  const c = env.jar.find((x) => x.name === 'levimc_theme');
  assert.deepEqual([c.value, c.domain, c.secure, c.host], ['light', undefined, undefined, 'localhost']);
});
test('pre-paint: legacy keys are migrated once and removed', () => {
  const script = createPrefsInitScript({ legacyTheme: ['theme'], legacyLang: [{ key: 'locale', map: { zh: 'zh-CN' } }] });
  const env = run(script, browserEnv({ url: 'https://levimc.org/', storage: { theme: 'dark', locale: 'zh' } }));
  assert.equal(env.attrs['data-theme-pref'], 'dark');
  assert.equal(env.jar.find((c) => c.name === 'levimc_lang')?.value, 'zh-CN');
  assert.ok(!('theme' in env.ls) && !('locale' in env.ls));
  // an existing cross-site choice is not overwritten by a site's old key
  const kept = run(script, browserEnv({ url: 'https://levimc.org/', cookies: [{ name: 'levimc_theme', value: 'light', domain: 'levimc.org' }], storage: { theme: 'dark' } }));
  assert.equal(kept.attrs['data-theme-pref'], 'light');
});
test('pre-paint (static pages): chrome waits for kit.js when the stored language differs from the page', () => {
  const script = createPrefsInitScript({ chromeLocales: ['en', 'zh-CN', 'zh-HK'] });
  assert.ok(run(script, browserEnv({ cookies: [{ name: 'levimc_lang', value: 'zh-TW', domain: 'levimc.org' }] })).classes.has('kit-chrome-pending'));
  assert.ok(!run(script, browserEnv({ cookies: [{ name: 'levimc_lang', value: 'en-GB', domain: 'levimc.org' }] })).classes.has('kit-chrome-pending'));
  assert.ok(!run(script, browserEnv()).classes.has('kit-chrome-pending'));
});
test('pre-paint (plain apps): the page waits for usePreferredLocale exactly when it will pick another locale', () => {
  const locales = [
    { code: 'en', lang: 'en' },
    { code: 'zh-CN', lang: 'zh-CN' },
    { code: 'zh-HK', lang: 'zh-HK' },
  ];
  const script = createPrefsInitScript({ appLocales: { locales, prerendered: 'en' } });
  const pending = (opts) => {
    const c = run(script, browserEnv({ url: 'https://pkg.levimc.org/', ...opts })).classes;
    assert.equal(c.has('kit-chrome-pending'), c.has('kit-content-pending'));
    return c.has('kit-content-pending');
  };
  const lang = (value) => [{ name: 'levimc_lang', value, domain: 'levimc.org' }];
  // the stored preference decides (mapped like pickLocale: zh-TW → zh-HK, fr → English)
  assert.equal(pending({ cookies: lang('zh-TW') }), true);
  assert.equal(pending({ cookies: lang('zh') }), true);
  assert.equal(pending({ cookies: lang('en-GB') }), false);
  assert.equal(pending({ cookies: lang('fr'), languages: ['zh-CN'] }), false, 'a stored preference wins over the browser');
  // without one, the browser languages (what usePreferredLocale falls back to)
  assert.equal(pending({ languages: ['zh-CN', 'en'] }), true);
  assert.equal(pending({ languages: ['de-DE', 'zh-CN'] }), true, 'first matching browser language');
  assert.equal(pending({ languages: ['de-DE'] }), false);
  assert.equal(pending({ languages: [] }), false);
  // an app prerendered in another locale
  const zhFirst = createPrefsInitScript({ appLocales: { locales, prerendered: 'zh-CN' } });
  assert.equal(run(zhFirst, browserEnv({ cookies: lang('zh-CN') })).classes.has('kit-content-pending'), false);
  assert.equal(run(zhFirst, browserEnv({ languages: ['fr'] })).classes.has('kit-content-pending'), true, 'no match → English');
});

// ------------------------------------------------------------------ docs root language redirect
const SITE = {
  base: '/LeviLauncher/',
  siteKey: 'LeviLauncher',
  defaultLocale: 'root',
  locales: [
    { code: 'root', lang: 'en-US', prefix: '' },
    { code: 'zh-CN', lang: 'zh-CN', prefix: 'zh-CN/' },
    { code: 'zh-HK', lang: 'zh-HK', prefix: 'zh-HK/' },
    { code: 'ja-JP', lang: 'ja-JP', prefix: 'ja-JP/' },
  ],
};
const redirect = localeRedirectScript(SITE);
const at = (path, o = {}) => run(redirect, browserEnv({ url: 'https://docs.levimc.org' + path, ...o }));
const pref = (v) => [{ name: 'levimc_lang', value: v, domain: 'levimc.org' }];
test('redirect: only the site root; the stored preference maps to the nearest locale', () => {
  assert.equal(at('/LeviLauncher/', { cookies: pref('zh-TW') }).replaced, '/LeviLauncher/zh-HK/');
  assert.equal(at('/LeviLauncher/index.html', { cookies: pref('zh') }).replaced, '/LeviLauncher/zh-CN/');
  assert.equal(at('/LeviLauncher/guide/', { cookies: pref('zh-TW') }).replaced, null, 'deep links never redirect');
  assert.equal(at('/LeviLauncher/zh-CN/', { cookies: pref('ja') }).replaced, null, 'an explicit locale URL is kept');
  assert.equal(at('/LeviLauncher/', { cookies: pref('en-GB'), languages: ['ja'] }).replaced, null, 'stored English keeps the root');
  assert.equal(at('/LeviLauncher/', { cookies: pref('pt-BR'), languages: ['ja'] }).replaced, null, 'unmatched preference → English, not the browser');
});
test('redirect: the stored preference wins even after an in-site link (LeviLaunchroid patch 7)', () => {
  assert.equal(at('/LeviLauncher/', { cookies: pref('ja-JP'), referrer: 'https://docs.levimc.org/LeviLauncher/zh-CN/' }).replaced, '/LeviLauncher/ja-JP/');
  // without a preference an in-site link to the root is followed as written
  assert.equal(at('/LeviLauncher/', { languages: ['zh-CN'], referrer: 'https://docs.levimc.org/LeviLauncher/zh-CN/' }).replaced, null);
  assert.equal(at('/LeviLauncher/', { languages: ['zh-CN'], referrer: 'https://levimc.org/' }).replaced, '/LeviLauncher/zh-CN/');
});
test('redirect: no preference → the first matching browser language; kit 1.0 per-site key is migrated', () => {
  assert.equal(at('/LeviLauncher/', { languages: ['fr-FR', 'zh-TW', 'en'] }).replaced, '/LeviLauncher/zh-HK/');
  const env = at('/LeviLauncher/', { storage: { 'levimc-locale-LeviLauncher': 'ja-JP' }, languages: ['zh-CN'] });
  assert.equal(env.replaced, '/LeviLauncher/ja-JP/');
  assert.equal(env.jar.find((c) => c.name === 'levimc_lang')?.value, 'ja-JP');
  assert.ok(!('levimc-locale-LeviLauncher' in env.ls));
  const root = at('/LeviLauncher/', { storage: { 'levimc-locale-LeviLauncher': 'root' }, languages: ['zh-CN'] });
  assert.equal(root.replaced, null, 'a stored "root" (English) choice keeps the root');
});

test('version: VERSION file, components/version.ts and the static runtime agree', () => {
  const v = readFileSync(new URL('../VERSION', import.meta.url), 'utf8').trim();
  assert.equal(v, KIT_VERSION);
  assert.match(readFileSync(new URL('../static/kit.js', import.meta.url), 'utf8'), new RegExp(`levimc-kit ${v.replace(/\./g, '\\.')} `));
});
