#!/usr/bin/env node
// End-to-end check that theme + language preferences are shared across levimc.org and *.levimc.org, under
// the browser's real cookie rules for those origins: Chromium loads https://levimc.org/ (a plain app build)
// and https://docs.levimc.org/<base>/ (a docs build) and every request for those hosts is answered from the
// local builds with GitHub Pages semantics (Playwright request routing — no DNS, TLS or server needed;
// anything else, e.g. Google Fonts, is blocked).
//
//   node kit/tests/cross-site.e2e.mjs --app <app dist> --docs <docs dist> [--docs-base /Demo/]
//
// Needs Playwright (LEVIMC_PW_DIR or the app's node_modules). Exit code 1 on failure.
import { readFileSync } from 'node:fs';
import { extname } from 'node:path';
import { createRequire } from 'node:module';
import { resolvePagesPath, CONTENT_TYPES } from '../scripts/serve-pages.mjs';

const args = process.argv.slice(2);
const opt = (n, d) => (args.includes(n) ? args[args.indexOf(n) + 1] : d);
const appDist = opt('--app');
const docsDist = opt('--docs');
const docsBase = opt('--docs-base', '/Demo/');
if (!appDist || !docsDist) {
  console.error('Usage: node cross-site.e2e.mjs --app <app dist> --docs <docs dist> [--docs-base /Demo/]');
  process.exit(2);
}
const require = createRequire(process.env.LEVIMC_PW_DIR ? process.env.LEVIMC_PW_DIR + '/' : import.meta.url);
const { chromium } = require('playwright');

const SITES = { 'levimc.org': [appDist, '/'], 'docs.levimc.org': [docsDist, docsBase] };
const APP = 'https://levimc.org/';
const DOCS = `https://docs.levimc.org${docsBase}`;

const browser = await chromium.launch();
const ctx = await browser.newContext({ colorScheme: 'light', locale: 'en-US', viewport: { width: 1280, height: 800 } });
await ctx.route('**/*', async (route) => {
  const url = new URL(route.request().url());
  const site = SITES[url.hostname];
  if (!site) return route.abort();
  const r = resolvePagesPath(site[0], site[1], url.pathname);
  if (r.status === 301) return route.fulfill({ status: 301, headers: { location: r.location } });
  if (!r.file) return route.fulfill({ status: 404, body: '404' });
  return route.fulfill({ status: r.status, contentType: CONTENT_TYPES[extname(r.file)] ?? 'application/octet-stream', body: readFileSync(r.file) });
});

const results = [];
const check = async (name, fn) => {
  try {
    results.push([true, name, await fn()]);
    console.log(`  ✔ ${name}`);
  } catch (e) {
    results.push([false, name, e.message]);
    console.log(`  ✘ ${name} — ${e.message.split('\n')[0]}`);
  }
};
const assert = (c, m) => {
  if (!c) throw new Error(m);
};
const page = await ctx.newPage();
const load = (u) => page.goto(u, { waitUntil: 'load' }).then(() => page.waitForTimeout(300));

await check('levimc.org: Dark + 繁體中文 are stored on the parent domain (Domain=levimc.org; Secure; SameSite=Lax; ~1 year)', async () => {
  await load(APP);
  await page.click('[data-kit-theme-toggle]');
  await page.click('[data-kit-theme-value="dark"]');
  await page.click('[data-kit-locale-switcher]');
  await page.click('.kit-gbar [data-kit-lang-value="zh-HK"]');
  const cookies = await ctx.cookies(APP);
  for (const [name, value] of [
    ['levimc_theme', 'dark'],
    ['levimc_lang', 'zh-HK'],
  ]) {
    const c = cookies.find((x) => x.name === name);
    assert(c, `${name} missing`);
    assert(c.value === value && c.domain === '.levimc.org' && c.secure && c.sameSite === 'Lax' && c.path === '/', `${name}: ${JSON.stringify(c)}`);
    const days = (c.expires - Date.now() / 1000) / 86400;
    assert(days > 360 && days < 370, `${name} expires in ${days.toFixed(1)} days`);
  }
});
await check('docs.levimc.org: the next load is dark and the root redirects to the zh locale', async () => {
  await load(DOCS);
  const s = await page.evaluate(() => ({ dark: document.documentElement.classList.contains('dark'), pref: document.documentElement.dataset.themePref, lang: document.documentElement.lang, path: location.pathname }));
  assert(s.dark && s.pref === 'dark', `theme ${JSON.stringify(s)}`);
  assert(s.lang.startsWith('zh') && s.path !== new URL(DOCS).pathname, `language ${JSON.stringify(s)}`);
});
await check('docs.levimc.org: choosing English + Light there applies on levimc.org after reload', async () => {
  await page.click('[data-kit-locale-switcher]');
  await page.click('.kit-gbar [role="menuitemradio"][hreflang^="en"]');
  await page.waitForFunction(() => document.documentElement.lang.startsWith('en'));
  await page.click('[data-kit-theme-toggle]');
  await page.click('[data-kit-theme-value="light"]');
  await load(APP);
  await page.waitForFunction(() => document.querySelector('.kit-gbar [data-kit-lang-value="en"]')?.getAttribute('aria-checked') === 'true', null, { timeout: 5000 });
  assert(!(await page.evaluate(() => document.documentElement.classList.contains('dark'))), 'levimc.org still dark');
});
await check('visiting an explicit locale URL does not change the stored language', async () => {
  await load(DOCS + 'zh/');
  const v = (await ctx.cookies(APP)).find((c) => c.name === 'levimc_lang')?.value;
  assert(v === 'en', `levimc_lang = ${v}`);
});
await check('a site outside levimc.org cannot see the preferences', async () => {
  const other = (await ctx.cookies('https://example.org/')).filter((c) => c.name.startsWith('levimc_'));
  assert(!other.length, JSON.stringify(other));
});

await browser.close();
const failed = results.filter((r) => !r[0]).length;
console.log(`\ncross-site: ${results.length - failed}/${results.length} passed`);
if (failed) process.exitCode = 1;
