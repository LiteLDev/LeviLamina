// Usage: node shot.mjs <url> <out.png> [light|dark] [width] [height] [--full]
// Screenshots a page with headless Chromium. Remote assets (Google Fonts etc.) go through the local proxy.
import { createRequire } from 'node:module';
const require = createRequire(process.env.LEVIMC_PW_DIR + '/');
const { chromium } = require('playwright');
const args = process.argv.slice(2);
const full = args.includes('--full');
const [url, out, scheme = 'light', w = '1440', h = '900'] = args.filter(a => a !== '--full');
const browser = await chromium.launch({ proxy: { server: 'http://127.0.0.1:1080', bypass: 'localhost,127.0.0.1' } });
const page = await browser.newPage({ viewport: { width: +w, height: +h }, colorScheme: scheme, deviceScaleFactor: 1 });
const errors = [];
page.on('pageerror', e => errors.push(String(e)));
page.on('console', m => { if (m.type() === 'error') errors.push(m.text()); });
const res = await page.goto(url, { waitUntil: 'networkidle', timeout: 60000 });
await page.waitForTimeout(500);
await page.screenshot({ path: out, fullPage: full });
console.log(JSON.stringify({ status: res && res.status(), finalUrl: page.url(), title: await page.title(), errors }));
await browser.close();
