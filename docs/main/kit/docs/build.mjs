#!/usr/bin/env node
// One-shot production build for a levimc-kit docs site:
//   1. client build   (vite build)                → dist/
//   2. SSR build      (vite build --ssr)          → .kit/ssr/entry-server.js
//   3. prerender      (react-dom/server)          → dist/**/index.html, 404.html (+ sitemap.xml, .nojekyll, search indexes from step 1)
// Usage: node kit/docs/build.mjs [--config vite.config.ts]
import { resolve } from 'node:path';
import { build } from 'vite';
import { prerenderDocs } from './prerender.mjs';

const args = process.argv.slice(2);
const configFile = args.includes('--config') ? resolve(args[args.indexOf('--config') + 1]) : undefined;
const root = process.cwd();
const t0 = Date.now();

await build({ configFile, root, logLevel: 'warn' });
await build({ configFile, root, logLevel: 'warn', build: { ssr: true } });
const { count } = await prerenderDocs({ root });
console.log(`[kit-docs] built ${count} pages in ${((Date.now() - t0) / 1000).toFixed(1)} s`);
