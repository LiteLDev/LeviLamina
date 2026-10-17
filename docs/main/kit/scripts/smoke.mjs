#!/usr/bin/env node
// Browser smoke test for a levimc-kit docs site (served by serve-pages.mjs).
//
//   node smoke.mjs --url http://127.0.0.1:4173/Demo/ [--search-term hook] [--pages a/,b/,c/] [--tabs-page x/]
//                  [--copy-page x/] [--headed]
//
// Checks: no console errors / hydration errors on home + 3 pages; SPA navigation without reload;
// theme toggle flips and persists across reload; Ctrl+K opens search and a known term returns results;
// locale switch lands on the equivalent page; content tabs switch; copy button copies; 390px mobile nav
// drawer opens (focus trapped) and closes with Escape; 404 page renders. Exit code 1 on any failure.
import { createRequire } from 'node:module';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const root = opt('--url');
if (!root) {
  console.error('Usage: node smoke.mjs --url http://127.0.0.1:4173/<Project>/ [--search-term term] [--pages a/,b/,c/] [--tabs-page p/] [--copy-page p/]');
  process.exit(2);
}
const base = root.endsWith('/') ? root : root + '/';
const require = createRequire(process.env.LEVIMC_PW_DIR ? process.env.LEVIMC_PW_DIR + '/' : import.meta.url);
const { chromium } = require('playwright');

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
const ctx = await browser.newContext({ viewport: { width: 1440, height: 900 }, colorScheme: 'light' });
await ctx.grantPermissions(['clipboard-read', 'clipboard-write'], { origin: new URL(base).origin });
const errorsOf = (page) => {
  const errs = [];
  page.on('pageerror', (e) => errs.push(`pageerror: ${e.message}`));
  page.on('console', (m) => {
    if (m.type() === 'error' && !/fonts\.(googleapis|gstatic)\.com/.test(m.text())) errs.push(`console: ${m.text()}`);
  });
  return errs;
};

console.log(`smoke: ${base}`);
const page = await ctx.newPage();
const errs = errorsOf(page);
await page.goto(base, { waitUntil: 'networkidle' });

// Collect pages to visit from the site's own navigation.
let pages = (opt('--pages', '') || '').split(',').filter(Boolean).map((p) => base + p.replace(/^\//, ''));
if (!pages.length) {
  pages = await page.$$eval('[data-kit-hero] a[href], .kit-site-nav a[href], [data-doc-content] a[href]', (as) => {
    const out = [];
    for (const a of as) {
      const h = a.href;
      if (h.startsWith(location.origin) && !h.includes('#') && h !== location.href && !out.includes(h)) out.push(h);
    }
    return out.slice(0, 3);
  });
}

await check('home renders without console errors', async () => {
  await page.waitForSelector('[data-doc-content], [data-kit-hero], main');
  assert(!errs.length, errs.join(' | '));
  return await page.title();
});
await check(`3 pages render without console/hydration errors`, async () => {
  const seen = [];
  for (const u of pages.slice(0, 3)) {
    const p = await ctx.newPage();
    const e = errorsOf(p);
    const r = await p.goto(u, { waitUntil: 'networkidle' });
    assert(r && r.status() === 200, `${u} → ${r?.status()}`);
    await p.waitForSelector('[data-doc-content]');
    await p.waitForTimeout(200);
    assert(!e.length, `${u}: ${e.join(' | ')}`);
    seen.push(new URL(u).pathname);
    await p.close();
  }
  return seen.join(', ');
});
await check('client-side navigation (no full reload)', async () => {
  await page.goto(base, { waitUntil: 'networkidle' });
  await page.evaluate(() => (window.__kitSmokeMarker = 1));
  const cur = new URL(page.url()).pathname;
  const candidates = page.locator('.kit-site-nav a[href]:not([target]), .kit-hero a[href]:not([target]), [data-doc-content] a[href^="/"]:not([target])');
  let link = null;
  for (let i = 0; i < (await candidates.count()); i++) {
    const h = await candidates.nth(i).getAttribute('href');
    if (h && h.split('#')[0] !== cur) {
      link = candidates.nth(i);
      break;
    }
  }
  assert(link, 'no internal link to another page');
  const href = await link.getAttribute('href');
  await link.click();
  await page.waitForURL((u) => u.pathname === href?.split('#')[0], { timeout: 10000 });
  await page.waitForSelector('[data-doc-content]');
  const marker = await page.evaluate(() => window.__kitSmokeMarker);
  assert(marker === 1, 'page was fully reloaded');
  assert(!errs.length, errs.join(' | '));
  return href;
});
await check('theme toggle flips and persists across reload', async () => {
  await page.goto(base, { waitUntil: 'networkidle' });
  const before = await page.evaluate(() => document.documentElement.classList.contains('dark'));
  await page.click('[data-kit-theme-toggle]');
  const after = await page.evaluate(() => document.documentElement.classList.contains('dark'));
  assert(before !== after, 'html.dark did not change');
  const stored = await page.evaluate(() => localStorage.getItem('levimc-theme'));
  assert(stored === (after ? 'dark' : 'light'), `localStorage levimc-theme = ${stored}`);
  await page.reload({ waitUntil: 'networkidle' });
  const persisted = await page.evaluate(() => document.documentElement.classList.contains('dark'));
  assert(persisted === after, 'theme not persisted after reload');
  await page.evaluate(() => localStorage.removeItem('levimc-theme'));
  return `${before ? 'dark' : 'light'} → ${after ? 'dark' : 'light'} (persisted)`;
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
await check('locale switch lands on the equivalent page', async () => {
  const start = pages[0] ?? base;
  await page.goto(start, { waitUntil: 'networkidle' });
  const trigger = page.locator('[data-kit-locale-switcher]').first();
  assert((await trigger.count()) > 0, 'no locale switcher (single-locale site?)');
  const curLang = await page.evaluate(() => document.documentElement.lang);
  await trigger.click();
  const item = page.locator('.kit-locale [role="menuitemradio"][aria-checked="false"]').first();
  const lang = await item.getAttribute('hreflang');
  const expected = await page.evaluate((l) => {
    const alt = document.querySelector(`link[rel="alternate"][hreflang="${l}"]`);
    return alt ? new URL(alt.getAttribute('href')).pathname : null;
  }, lang);
  await item.click();
  await page.waitForFunction((l) => document.documentElement.lang === l, lang, { timeout: 10000 });
  const now = new URL(page.url()).pathname;
  if (expected) assert(now === expected, `landed on ${now}, expected ${expected}`);
  await page.evaluate((k) => Object.keys(localStorage).filter((x) => x.startsWith(k)).forEach((x) => localStorage.removeItem(x)), 'levimc-locale-');
  return `${curLang} → ${lang}: ${now}`;
});
await check('language auto-redirect only on the site root', async () => {
  // Pick a non-default locale from the hreflang alternates of a doc page (or --redirect-lang).
  await page.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  const info = await page.evaluate(() => ({
    langs: [...document.querySelectorAll('link[rel="alternate"][hreflang]')].map((l) => l.getAttribute('hreflang')).filter((l) => l && l !== 'x-default'),
    cur: document.documentElement.lang,
  }));
  const other = opt('--redirect-lang') ?? info.langs.find((l) => l !== info.cur);
  assert(other, 'site has a single locale');
  const c = await browser.newContext({ locale: other, viewport: { width: 1280, height: 800 } });
  const p = await c.newPage();
  const rootPath = new URL(base).pathname;
  await p.goto(base, { waitUntil: 'networkidle' });
  const landed = new URL(p.url()).pathname;
  const lang = await p.evaluate(() => document.documentElement.lang);
  assert(landed !== rootPath && lang.toLowerCase().split('-')[0] === other.toLowerCase().split('-')[0], `root did not redirect for ${other} (at ${landed}, lang ${lang})`);
  const deep = pages[0] ?? base;
  await p.goto(deep, { waitUntil: 'networkidle' });
  assert(p.url() === deep, `deep link redirected to ${p.url()}`);
  // a stored choice (the default locale here) wins over navigator.languages
  const siteKey = rootPath.replace(/^\/|\/$/g, '') || 'root';
  const defaultCode = opt('--default-locale', 'en');
  await p.evaluate(([k, v]) => localStorage.setItem(k, v), [`levimc-locale-${siteKey}`, defaultCode]);
  await p.goto(base, { waitUntil: 'networkidle' });
  const stayed = new URL(p.url()).pathname === rootPath;
  await c.close();
  assert(stayed, 'stored default-locale preference did not prevent the redirect');
  return `${other}: ${rootPath} → ${landed}; deep link untouched; stored choice respected`;
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
await check('mobile (390px) nav drawer opens, traps focus, closes', async () => {
  const m = await browser.newContext({ viewport: { width: 390, height: 844 }, deviceScaleFactor: 2, isMobile: true, hasTouch: true });
  const p = await m.newPage();
  const e = errorsOf(p);
  await p.goto(pages[0] ?? base, { waitUntil: 'networkidle' });
  const toggle = p.locator('[data-kit-nav-toggle]');
  assert(await toggle.isVisible(), 'nav toggle not visible at 390px');
  await toggle.click();
  await p.waitForSelector('#kit-drawer', { state: 'visible' });
  assert((await toggle.getAttribute('aria-expanded')) === 'true', 'aria-expanded not true');
  for (let i = 0; i < 40; i++) await p.keyboard.press('Tab');
  const inside = await p.evaluate(() => !!document.activeElement?.closest('#kit-drawer'));
  assert(inside, 'focus escaped the drawer');
  await p.keyboard.press('Escape');
  await p.waitForSelector('#kit-drawer', { state: 'hidden' });
  const sideways = await p.evaluate(() => document.documentElement.scrollWidth > window.innerWidth + 1);
  assert(!sideways, 'horizontal page scroll at 390px');
  assert(!e.length, e.join(' | '));
  await m.close();
  return 'ok';
});
await check('404 page is themed and returns 404', async () => {
  const p = await ctx.newPage();
  const r = await p.goto(base + 'this/page/does-not-exist/', { waitUntil: 'networkidle' });
  assert(r && r.status() === 404, `status ${r?.status()}`);
  await p.waitForSelector('.kit-notfound');
  await p.close();
  return 'ok';
});

await browser.close();
const failed = results.filter((r) => !r.ok);
console.log(`\nsmoke: ${results.length - failed.length}/${results.length} passed`);
if (failed.length) process.exitCode = 1;
