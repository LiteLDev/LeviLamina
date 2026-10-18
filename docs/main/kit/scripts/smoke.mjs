#!/usr/bin/env node
// Browser smoke test for a levimc-kit site (served by serve-pages.mjs or any static server).
//
//   docs sites:  node smoke.mjs --url http://127.0.0.1:4173/Demo/ [--search-term hook] [--pages a/,b/,c/]
//                               [--tabs-page x/] [--copy-page x/] [--redirect-lang zh-CN] [--headed]
//   plain apps:  node smoke.mjs --app --url http://127.0.0.1:4173/ [--pages about/,projects/] [--current home]
//                               [--not-found missing/] [--headed]
//
// Both modes check the unified chrome contract (kit ≥ 1.1): the GlobalBar's canonical tabs in order, its
// controls (language, theme, GitHub) in order, Auto as the default theme, theme + language choices stored in
// the cross-site cookies (levimc_theme / levimc_lang) and applied again after a reload, no console or hydration
// errors, the phone layout (one menu with the bar's links, no sideways scroll) and the themed 404.
// Docs mode adds: SPA navigation, Ctrl+K search, the language menu landing on the equivalent page, the
// root-only language redirect (the stored preference wins), content tabs, copy buttons, no duplicated controls
// in the docs header and its sticky behaviour. Exit code 1 on any failure.
import { createRequire } from 'node:module';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const root = opt('--url');
const APP = args.includes('--app');
if (!root) {
  console.error('Usage: node smoke.mjs [--app] --url http://127.0.0.1:4173/<base>/ [--pages a/,b/] …');
  process.exit(2);
}
const base = root.endsWith('/') ? root : root + '/';
const require = createRequire(process.env.LEVIMC_PW_DIR ? process.env.LEVIMC_PW_DIR + '/' : import.meta.url);
const { chromium } = require('playwright');

const CANONICAL_TABS = [
  ['home', 'https://levimc.org/'],
  ['projects', 'https://levimc.org/projects/'],
  ['docs', null],
  ['packages', 'https://pkg.levimc.org/'],
  ['blog', 'https://levimc.org/blog/'],
  ['community', 'https://levimc.org/community/'],
  ['about', 'https://levimc.org/about/'],
];

const results = [];
const check = async (name, fn) => {
  const t0 = Date.now();
  try {
    const detail = await fn();
    results.push({ name, ok: true, detail, ms: Date.now() - t0 });
    console.log(`  ✔ ${name}${detail ? ` — ${detail}` : ''}`);
  } catch (e) {
    results.push({ name, ok: false, detail: String(e?.message ?? e), ms: Date.now() - t0 });
    console.log(`  ✘ ${name} — ${String(e?.message ?? e).split('\n')[0]}`);
  }
};
const assert = (c, msg) => {
  if (!c) throw new Error(msg);
};

const browser = await chromium.launch({ headless: !args.includes('--headed'), proxy: { server: 'http://127.0.0.1:1080', bypass: 'localhost,127.0.0.1' } });
const newCtx = (o = {}) => browser.newContext({ viewport: { width: 1440, height: 900 }, colorScheme: 'light', ...o });
const ctx = await newCtx();
await ctx.grantPermissions(['clipboard-read', 'clipboard-write'], { origin: new URL(base).origin });
const errorsOf = (page) => {
  const errs = [];
  page.on('pageerror', (e) => errs.push(`pageerror: ${e.message}`));
  page.on('console', (m) => {
    // the 404 page's own status is reported as a failed resource
    if (m.type() === 'error' && !/fonts\.(googleapis|gstatic)\.com/.test(m.text()) && !/status of 404/.test(m.text())) errs.push(`console: ${m.text()}`);
  });
  return errs;
};
const cookie = async (c, name) => (await c.cookies(base)).find((x) => x.name === name)?.value;
const contentSel = APP ? 'main' : '[data-doc-content]';

console.log(`smoke (${APP ? 'app' : 'docs'}): ${base}`);
const page = await ctx.newPage();
const errs = errorsOf(page);
await page.goto(base, { waitUntil: 'networkidle' });

// Pages to visit: --pages, else links found on the home page.
let pages = (opt('--pages', '') || '').split(',').filter(Boolean).map((p) => base + p.replace(/^\//, ''));
if (!pages.length) {
  pages = await page.$$eval(APP ? 'main a[href], [data-kit-globalbar] a[href]' : '[data-kit-hero] a[href], .kit-site-nav a[href], [data-doc-content] a[href]', (as, b) => {
    const out = [];
    for (const a of as) {
      const h = a.href.split('#')[0];
      if (h.startsWith(b) && h !== location.href && !out.includes(h)) out.push(h);
    }
    return out.slice(0, 3);
  }, base);
}

await check('home renders without console errors', async () => {
  await page.waitForSelector(APP ? 'main' : '[data-doc-content], [data-kit-hero], main');
  assert(!errs.length, errs.join(' | '));
  return await page.title();
});
await check(`${Math.min(3, pages.length)} pages render without console/hydration errors`, async () => {
  assert(pages.length, 'no pages found (pass --pages)');
  const seen = [];
  for (const u of pages.slice(0, 3)) {
    const p = await ctx.newPage();
    const e = errorsOf(p);
    const r = await p.goto(u, { waitUntil: 'networkidle' });
    assert(r && r.status() === 200, `${u} → ${r?.status()}`);
    await p.waitForSelector(contentSel);
    await p.waitForTimeout(200);
    assert(!e.length, `${u}: ${e.join(' | ')}`);
    seen.push(new URL(u).pathname);
    await p.close();
  }
  return seen.join(', ');
});

// ------------------------------------------------------------------ the unified chrome contract
await check('GlobalBar: canonical tabs in order, controls (language · theme · GitHub) in order', async () => {
  await page.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  const bar = await page.evaluate(() => {
    const g = document.querySelector('[data-kit-globalbar]');
    if (!g) return null;
    const tabs = [...g.querySelectorAll('.kit-gbar-nav > ul > li')].map((li) => {
      const a = li.querySelector(':scope > a');
      const t = li.querySelector('[data-kit-t]');
      return { key: t?.getAttribute('data-kit-t'), href: a?.href ?? null };
    });
    const end = g.querySelector('.kit-gbar-end');
    const order = [...end.children].map((c) =>
      c.matches('.kit-locale') ? 'language' : c.matches('.kit-theme') ? 'theme' : c.matches('.kit-gbar-github') ? 'github' : c.matches('.kit-gbar-more') ? 'menu' : c.className,
    );
    return { tabs, order, current: g.querySelector('.kit-gbar-nav [aria-current="page"]:not(.kit-gbar-docs-item) [data-kit-t], .kit-gbar-nav summary[aria-current="page"] [data-kit-t]')?.getAttribute('data-kit-t') ?? null };
  });
  assert(bar, 'no [data-kit-globalbar]');
  const keys = bar.tabs.map((t) => t.key);
  assert(JSON.stringify(keys) === JSON.stringify(CANONICAL_TABS.map((t) => t[0])), `tabs ${keys.join(',')}`);
  for (const [i, [key, url]] of CANONICAL_TABS.entries()) {
    if (!url) continue;
    const href = bar.tabs[i].href;
    // same-site tabs may be router links (root-relative), so compare the resolved path on this origin too
    assert(href === url || new URL(href).pathname === new URL(url).pathname, `${key} → ${href}`);
  }
  const ctl = bar.order.filter((o) => o !== 'menu');
  assert(JSON.stringify(ctl) === JSON.stringify(['language', 'theme', 'github']), `controls ${bar.order.join(',')}`);
  const want = opt('--current', APP ? null : 'docs');
  if (want) assert(bar.current === want, `current tab ${bar.current}, expected ${want}`);
  return `${keys.join(' · ')} | ${bar.order.join(' · ')}${bar.current ? ` | current: ${bar.current}` : ''}`;
});
await check('theme: Auto by default, follows the system live', async () => {
  const c = await newCtx({ colorScheme: 'dark' });
  const p = await c.newPage();
  await p.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  const s0 = await p.evaluate(() => ({ pref: document.documentElement.getAttribute('data-theme-pref'), dark: document.documentElement.classList.contains('dark') }));
  assert(s0.pref === 'auto' && s0.dark, `default ${JSON.stringify(s0)}`);
  await p.emulateMedia({ colorScheme: 'light' });
  await p.waitForFunction(() => !document.documentElement.classList.contains('dark'), null, { timeout: 3000 });
  const label = await p.locator('[data-kit-theme-toggle]').first().getAttribute('aria-label');
  await c.close();
  return `auto (dark → light live); trigger "${label}"`;
});
await check('theme: Dark is stored in the cross-site cookie and applied after reload', async () => {
  const c = await newCtx();
  const p = await c.newPage();
  await p.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  await p.click('[data-kit-theme-toggle]');
  await p.click('[data-kit-theme-value="dark"]');
  assert(await p.evaluate(() => document.documentElement.classList.contains('dark')), 'html.dark not set');
  const v = await cookie(c, 'levimc_theme');
  assert(v === 'dark', `cookie levimc_theme = ${v}`);
  // the cookie is the source: clear the localStorage mirror and reload
  await p.evaluate(() => localStorage.removeItem('levimc-theme'));
  await p.reload({ waitUntil: 'networkidle' });
  const after = await p.evaluate(() => ({ pref: document.documentElement.getAttribute('data-theme-pref'), dark: document.documentElement.classList.contains('dark') }));
  assert(after.pref === 'dark' && after.dark, `after reload ${JSON.stringify(after)}`);
  const checked = await p.locator('[data-kit-theme-value="dark"]').first().getAttribute('aria-checked');
  assert(checked === 'true', `Dark item aria-checked=${checked}`);
  await p.click('[data-kit-theme-toggle]');
  await p.click('[data-kit-theme-value="auto"]');
  const back = await cookie(c, 'levimc_theme');
  assert(back === 'auto', `cookie after Auto = ${back}`);
  await c.close();
  return 'dark → cookie → reload → dark; Auto stored as "auto"';
});
await check('language: the choice is stored in the cross-site cookie and applied after reload', async () => {
  const c = await newCtx();
  const p = await c.newPage();
  const start = pages[0] ?? base;
  await p.goto(start, { waitUntil: 'networkidle' });
  const trigger = p.locator('[data-kit-locale-switcher]').first();
  assert((await trigger.count()) > 0, 'no language menu');
  await trigger.click();
  const item = p.locator('.kit-gbar [role="menuitemradio"][aria-checked="false"]').first();
  const lang = await item.getAttribute('data-kit-lang-value');
  const isLink = (await item.evaluate((e) => e.tagName)) === 'A';
  const expected = isLink
    ? await p.evaluate((l) => {
        const alt = document.querySelector(`link[rel="alternate"][hreflang="${l}"]`);
        return alt ? new URL(alt.getAttribute('href')).pathname : null;
      }, lang)
    : null;
  await item.click();
  await p.waitForTimeout(400);
  const v = await cookie(c, 'levimc_lang');
  assert(v === lang, `cookie levimc_lang = ${v}, chose ${lang}`);
  let landed = new URL(p.url()).pathname;
  if (isLink) {
    await p.waitForFunction((l) => document.documentElement.lang.toLowerCase().split('-')[0] === l.toLowerCase().split('-')[0], lang, { timeout: 10000 });
    landed = new URL(p.url()).pathname;
    if (expected) assert(landed === expected, `landed on ${landed}, expected ${expected}`);
  }
  await p.evaluate(() => localStorage.removeItem('levimc-lang'));
  await p.reload({ waitUntil: 'networkidle' });
  const shown = await p.locator('[data-kit-locale-switcher]').first().getAttribute('aria-label');
  const checked = await p.locator(`.kit-gbar [data-kit-lang-value="${lang}"]`).first().getAttribute('aria-checked');
  assert(checked === 'true', `after reload the menu checks another language (${shown})`);
  await c.close();
  return `${lang} (${isLink ? `equivalent page ${landed}` : 'in place'}); after reload: "${shown}"`;
});
await check('theme / language menus: Enter focuses the checked item, arrows / Home / End move, Escape returns', async () => {
  const p = await ctx.newPage();
  await p.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  const focused = () => p.evaluate(() => document.activeElement?.getAttribute('data-kit-theme-value') ?? document.activeElement?.getAttribute('data-kit-lang-value') ?? document.activeElement?.tagName);
  await p.locator('[data-kit-theme-toggle]').first().focus();
  await p.keyboard.press('Enter');
  await p.waitForTimeout(100);
  const steps = [await focused()];
  for (const k of ['ArrowDown', 'ArrowDown', 'ArrowDown', 'End', 'Home', 'ArrowUp']) {
    await p.keyboard.press(k);
    steps.push(await focused());
  }
  assert(steps.join(' ') === 'auto light dark auto dark auto dark', `theme menu focus: ${steps.join(' → ')}`);
  await p.keyboard.press('Escape');
  assert(await p.evaluate(() => document.activeElement?.hasAttribute('data-kit-theme-toggle')), 'Escape did not return focus to the trigger');
  // ArrowDown on the closed language trigger opens it on the first language
  await p.locator('[data-kit-locale-switcher]').first().focus();
  await p.keyboard.press('ArrowDown');
  const first = await p.evaluate(() => document.activeElement?.matches('.kit-gbar [data-kit-lang-value]') && document.activeElement === document.querySelector('.kit-gbar [data-kit-lang-value]'));
  assert(first, 'ArrowDown on the language trigger did not open the menu on its first item');
  await p.keyboard.press('Escape');
  await p.close();
  return steps.join(' → ');
});
await check('language: a stored preference never paints the prerendered language first', async () => {
  const c = await newCtx();
  await c.addCookies([{ name: 'levimc_lang', value: 'zh-CN', url: base }]);
  const start = pages[0] ?? base;
  const tab = () => {
    const b = document.querySelector('.kit-gbar-link');
    const m = document.querySelector('main');
    // hidden = the pre-paint script's "language pending" classes (the CSS fail-safe reveals them after 1.5 s, so
    // reading computed visibility would depend on how fast the runner is)
    const c = document.documentElement.classList;
    return {
      text: b?.textContent ?? '',
      bar: !!b && !c.contains('kit-chrome-pending') && getComputedStyle(b).visibility === 'visible',
      main: !!m && !c.contains('kit-content-pending') && getComputedStyle(m).visibility === 'visible',
    };
  };
  // what the page shows once it ran …
  const p = await c.newPage();
  await p.goto(start, { waitUntil: 'networkidle' });
  const after = await p.evaluate(tab);
  // … and what it paints before its scripts (only the inline pre-paint script runs)
  const q = await c.newPage();
  await q.route(/\.m?js(\?|$)/, (r) => r.abort());
  await q.goto(start, { waitUntil: 'domcontentloaded' });
  const before = await q.evaluate(tab);
  await c.close();
  if (before.text === after.text) return `the prerendered chrome already reads "${after.text}"`;
  assert(!before.bar, `the bar painted "${before.text}" before switching to "${after.text}"`);
  if (APP) assert(!before.main, `<main> painted in the prerendered language before switching to "${after.text}"`);
  assert(after.bar && (!APP || after.main), 'the page stayed hidden after its scripts ran');
  return `hidden until it reads "${after.text}" (prerendered "${before.text}")`;
});
await check('phone (390px): bar controls visible, one menu with the bar links, no sideways scroll', async () => {
  const m = await newCtx({ viewport: { width: 390, height: 844 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
  const p = await m.newPage();
  const e = errorsOf(p);
  await p.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  for (const sel of ['[data-kit-locale-switcher]', '[data-kit-theme-toggle]', '.kit-gbar-github']) assert(await p.locator(sel).first().isVisible(), `${sel} hidden at 390px`);
  const docsToggle = p.locator('[data-kit-nav-toggle]');
  const gbarMenu = p.locator('[data-kit-gbar-menu]');
  const toggles = (await docsToggle.isVisible().catch(() => false)) + (await gbarMenu.isVisible().catch(() => false));
  assert(toggles === 1, `${toggles} menu buttons visible`);
  let links;
  if (await docsToggle.isVisible().catch(() => false)) {
    await docsToggle.click();
    await p.waitForSelector('#kit-drawer', { state: 'visible' });
    assert((await docsToggle.getAttribute('aria-expanded')) === 'true', 'aria-expanded not true');
    for (let i = 0; i < 60; i++) await p.keyboard.press('Tab');
    assert(await p.evaluate(() => !!document.activeElement?.closest('#kit-drawer')), 'focus escaped the drawer');
    links = await p.$$eval('#kit-drawer .kit-gbar-list a', (as) => as.map((a) => a.href));
    await p.keyboard.press('Escape');
    await p.waitForSelector('#kit-drawer', { state: 'hidden' });
  } else {
    await gbarMenu.click();
    links = await p.$$eval('.kit-gbar-more-panel a', (as) => as.map((a) => a.href));
    await p.keyboard.press('Escape');
  }
  for (const [key, url] of CANONICAL_TABS) if (url) assert(links.some((h) => h === url || new URL(h).pathname === new URL(url).pathname), `menu lacks ${key}`);
  assert(links.filter((h) => h.startsWith('https://docs.levimc.org/')).length >= 5, 'menu lacks the docs projects');
  const sideways = await p.evaluate(() => document.documentElement.scrollWidth > window.innerWidth + 1);
  assert(!sideways, 'horizontal page scroll at 390px');
  assert(!e.length, e.join(' | '));
  await m.close();
  return `${links.length} links in the menu`;
});
await check('404 page is themed and returns 404', async () => {
  const p = await ctx.newPage();
  const r = await p.goto(base + opt('--not-found', 'this/page/does-not-exist/'), { waitUntil: 'networkidle' });
  assert(r && r.status() === 404, `status ${r?.status()}`);
  await p.waitForSelector('[data-kit-globalbar]');
  if (!APP) await p.waitForSelector('.kit-notfound');
  await p.close();
  return 'ok';
});

if (!APP) {
  await check('client-side navigation (no full reload)', async () => {
    await page.goto(base, { waitUntil: 'networkidle' });
    await page.evaluate(() => (window.__kitSmokeMarker = 1));
    const cur = new URL(page.url()).pathname;
    const candidates = page.locator('.kit-site-nav a[href]:not([target]), .kit-hero a[href]:not([target]), [data-doc-content] a[href^="/"]:not([target])');
    let link = null;
    for (let i = 0; i < (await candidates.count()); i++) {
      const h = await candidates.nth(i).getAttribute('href');
      if (h && h.split('#')[0] !== cur && (await candidates.nth(i).isVisible())) {
        link = candidates.nth(i);
        break;
      }
    }
    assert(link, 'no internal link to another page');
    const href = await link.getAttribute('href');
    await link.click();
    await page.waitForURL((u) => u.pathname === href?.split('#')[0], { timeout: 10000 });
    await page.waitForSelector('[data-doc-content]');
    assert((await page.evaluate(() => window.__kitSmokeMarker)) === 1, 'page was fully reloaded');
    assert(!errs.length, errs.join(' | '));
    return href;
  });
  await check('docs header: one row of identity + sections + search, no duplicated controls, sticky', async () => {
    await page.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
    const dup = await page.evaluate(() => {
      const h = document.querySelector('.kit-site-header');
      // the site's own nav may link GitHub as a section; a GitHub icon button among the actions would duplicate the bar
      return h ? ['[data-kit-theme-toggle]', '[data-kit-locale-switcher]', '.kit-site-actions a[href^="https://github.com/"]'].filter((s) => h.querySelector(s)) : null;
    });
    assert(dup, 'no .kit-site-header');
    assert(!dup.length, `duplicated controls in the docs header: ${dup.join(', ')}`);
    // a short page may not scroll far: make room below the content so the bar can scroll away
    await page.evaluate(() => {
      document.querySelector('.kit-shell')?.style.setProperty('padding-bottom', '150vh');
      window.scrollTo(0, 1200);
    });
    await page.waitForTimeout(150);
    const pos = await page.evaluate(() => ({ header: document.querySelector('.kit-site-header').getBoundingClientRect().top, bar: document.querySelector('[data-kit-globalbar]').getBoundingClientRect().bottom }));
    assert(Math.abs(pos.header) < 1, `header not stuck (top ${pos.header})`);
    assert(pos.bar <= 0, 'the LeviMC bar did not scroll away');
    return `stuck at 0; bar scrolled away; fit=${await page.evaluate(() => document.documentElement.getAttribute('data-kit-nav-fit') ?? 'none')}`;
  });
  const term = opt('--search-term', 'the');
  await check(`search opens with Ctrl+K and finds "${term}"`, async () => {
    await page.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
    await page.keyboard.press('Control+k');
    await page.waitForSelector('.kit-search[role="dialog"] input[type="search"]', { timeout: 5000 });
    await page.keyboard.type(term);
    await page.waitForSelector('[role="option"]', { timeout: 10000 });
    const n = await page.locator('[role="option"]').count();
    assert(n >= 1, 'no results');
    await page.keyboard.press('ArrowDown');
    await page.keyboard.press('Escape');
    await page.waitForSelector('.kit-search[role="dialog"]', { state: 'detached', timeout: 3000 });
    return `${n} results`;
  });
  await check('language redirect: only on the root; the stored preference always wins', async () => {
    await page.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
    const info = await page.evaluate(() => ({
      langs: [...document.querySelectorAll('link[rel="alternate"][hreflang]')].map((l) => l.getAttribute('hreflang')).filter((l) => l && l !== 'x-default'),
      cur: document.documentElement.lang,
    }));
    const other = opt('--redirect-lang') ?? info.langs.find((l) => l !== info.cur);
    if (!other) return 'skipped — single-locale site';
    const rootPath = new URL(base).pathname;
    // 1. no preference: the browser language picks the locale
    const c = await newCtx({ locale: other });
    const p = await c.newPage();
    await p.goto(base, { waitUntil: 'networkidle' });
    const landed = new URL(p.url()).pathname;
    assert(landed !== rootPath, `root did not redirect for browser language ${other}`);
    const deep = pages[0] ?? base;
    await p.goto(deep, { waitUntil: 'networkidle' });
    assert(p.url() === deep, `deep link redirected to ${p.url()}`);
    // 2. a stored preference (English) wins over the browser language
    await c.addCookies([{ name: 'levimc_lang', value: 'en', url: base }]);
    await p.goto(base, { waitUntil: 'networkidle' });
    assert(new URL(p.url()).pathname === rootPath, 'stored "en" did not keep the root');
    await c.close();
    // 3. the stored preference also wins when arriving from a page of the same site (in-site link to the root)
    const c2 = await newCtx();
    await c2.addCookies([{ name: 'levimc_lang', value: other, url: base }]);
    const p2 = await c2.newPage();
    await p2.goto(deep, { waitUntil: 'networkidle' });
    const deepPath = new URL(deep).pathname;
    await Promise.all([p2.waitForURL((u) => u.pathname !== deepPath, { waitUntil: 'load' }), p2.evaluate((u) => (location.href = u), base)]);
    // the root page either stays (wrong) or has already replaced itself with the preferred locale
    await p2.waitForTimeout(500);
    await p2.waitForLoadState('networkidle');
    const fromSite = new URL(p2.url()).pathname;
    await c2.close();
    assert(fromSite !== rootPath && fromSite !== deepPath, `same-site referrer overrode the stored ${other} (at ${fromSite})`);
    return `${other}: ${rootPath} → ${landed}; deep links untouched; stored preference wins (also from an in-site link → ${fromSite})`;
  });
  await check('content tabs switch', async () => {
    const tp = opt('--tabs-page');
    if (tp) await page.goto(base + tp.replace(/^\//, ''), { waitUntil: 'networkidle' });
    else {
      let found = false;
      for (const u of [...pages, base]) {
        await page.goto(u, { waitUntil: 'networkidle' });
        if ((await page.locator('[data-doc-content] [data-kit-tabs]').count()) > 0) {
          found = true;
          break;
        }
      }
      if (!found) return 'skipped — no content tabs on the sampled pages (pass --tabs-page)';
    }
    const set = page.locator('[data-doc-content] [data-kit-tabs]').first();
    const tabs = set.locator('[role="tab"]');
    assert((await tabs.count()) > 1, 'tab set has < 2 tabs');
    await tabs.nth(1).click();
    assert((await tabs.nth(1).getAttribute('aria-selected')) === 'true', 'second tab not selected');
    const p1 = await tabs.nth(0).getAttribute('aria-controls');
    const p2 = await tabs.nth(1).getAttribute('aria-controls');
    assert(await page.locator(`[id="${p2}"]`).isVisible(), 'second panel hidden');
    assert(!(await page.locator(`[id="${p1}"]`).isVisible()), 'first panel still visible');
    await tabs.nth(1).press('ArrowLeft');
    assert((await tabs.nth(0).getAttribute('aria-selected')) === 'true', 'ArrowLeft did not move selection');
    return new URL(page.url()).pathname;
  });
  await check('copy button copies the code', async () => {
    const cp = opt('--copy-page');
    const candidates = cp ? [base + cp.replace(/^\//, '')] : [...pages, base];
    let btn = null;
    for (const u of candidates) {
      await page.goto(u, { waitUntil: 'networkidle' });
      const b = page.locator('[data-doc-content] .kit-code:visible [data-kit-copy]').first();
      if ((await b.count()) > 0) {
        btn = b;
        break;
      }
    }
    if (!btn) return 'skipped — no code block on the sampled pages (pass --copy-page)';
    const code = await btn.evaluate((b) => b.closest('.kit-code').querySelector('pre code').innerText.replace(/\n$/, ''));
    await btn.click();
    await page.waitForFunction((b) => b.hasAttribute('data-copied'), await btn.elementHandle(), { timeout: 3000 });
    const clip = await page.evaluate(() => navigator.clipboard.readText());
    assert(clip === code, 'clipboard content differs from code');
    return `${clip.length} chars`;
  });
}

await browser.close();
const failed = results.filter((r) => !r.ok);
console.log(`\nsmoke: ${results.length - failed.length}/${results.length} passed`);
if (failed.length) process.exitCode = 1;
