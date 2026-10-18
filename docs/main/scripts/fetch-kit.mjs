#!/usr/bin/env node
// Installs levimc-kit into a LeviMC site: downloads the kit levimc.org publishes (scripts/publish-kit.mjs) into
// <site>/kit/, which is git-ignored — levimc.org is the one source of the shared chrome (bar, footer, theme) and
// the docs engine, so a change there reaches every site with its next build. Each site keeps a copy of this file
// as scripts/fetch-kit.mjs and runs it from `postinstall` (so `npm ci` installs the kit) and `npm run kit`.
//
//   node scripts/fetch-kit.mjs [--dest kit] [--source <url or kit folder>] [--force]
//
// Source: --source, else $LEVIMC_KIT_SOURCE, else https://levimc.org/kit/v2/. A URL is the published kit (its
// manifest.json + kit.json, checked against the manifest's sha256); a local folder is a kit checkout
// (e.g. ../levimc.org/kit, to try kit changes before they are published). An up-to-date kit is left alone.
// Without network access an existing kit is kept (with a warning), except in CI ($CI), where it fails.
import { createHash } from 'node:crypto';
import { cpSync, existsSync, mkdirSync, readdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';

const DEFAULT_SOURCE = 'https://levimc.org/kit/v2/';
const args = process.argv.slice(2);
const opt = (name) => (args.includes(name) ? args[args.indexOf(name) + 1] : undefined);
const dest = resolve(opt('--dest') ?? 'kit');
const source = opt('--source') ?? process.env.LEVIMC_KIT_SOURCE ?? DEFAULT_SOURCE;
const force = args.includes('--force');
const stampFile = join(dest, '.vendored');

const installed = () => (existsSync(stampFile) ? readFileSync(stampFile, 'utf8').split('\n')[0] : '');
function stamp(line) {
  writeFileSync(stampFile, `${line}\nfetched ${new Date().toISOString()} from ${source}\nDo not edit files in this folder: it is replaced by every install. The kit lives in LiteLDev/levimc.org (kit/).\n`);
}

if (!/^https?:\/\//.test(source)) {
  // a kit checkout: copy it like vendor.mjs does
  const root = resolve(source);
  const version = readFileSync(join(root, 'VERSION'), 'utf8').trim();
  const SKIP = new Set(['demo', 'screens', 'node_modules', '.git', 'dist', '.kit']);
  rmSync(dest, { recursive: true, force: true });
  mkdirSync(dest, { recursive: true });
  for (const entry of readdirSync(root)) if (!SKIP.has(entry) && !entry.startsWith('.')) cpSync(join(root, entry), join(dest, entry), { recursive: true });
  stamp(`levimc-kit ${version}+local`);
  console.log(`levimc-kit ${version} (local copy of ${root}) → ${dest}`);
  process.exit(0);
}

const base = source.endsWith('/') ? source : source + '/';
async function get(url) {
  const res = await fetch(url, { headers: { 'cache-control': 'no-cache' } });
  if (!res.ok) throw new Error(`${url}: HTTP ${res.status}`);
  return res;
}
try {
  const manifest = await (await get(base + 'manifest.json')).json();
  const want = `levimc-kit ${manifest.version}+${manifest.build}`;
  if (!force && installed() === want) {
    console.log(`${want} is up to date (${dest})`);
    process.exit(0);
  }
  const body = await (await get(base + 'kit.json')).text();
  const sha = createHash('sha256').update(body).digest('hex');
  if (sha !== manifest.sha256) throw new Error(`kit.json does not match manifest.json (sha256 ${sha} ≠ ${manifest.sha256}); retry in a minute`);
  const kit = JSON.parse(body);
  rmSync(dest, { recursive: true, force: true });
  for (const [file, src] of Object.entries(kit.files)) {
    if (file.split('/').includes('..')) throw new Error(`unsafe path in kit.json: ${file}`);
    mkdirSync(dirname(join(dest, file)), { recursive: true });
    writeFileSync(join(dest, file), src);
  }
  stamp(want);
  console.log(`${want} → ${dest} (${Object.keys(kit.files).length} files)`);
} catch (e) {
  if (existsSync(stampFile) && !process.env.CI) {
    console.warn(`fetch-kit: ${e.message}${e.cause ? ` (${e.cause.message ?? e.cause})` : ''}\nfetch-kit: keeping the installed ${installed()}`);
  } else {
    console.error(`fetch-kit: ${e.message}${e.cause ? ` (${e.cause.message ?? e.cause})` : ''}`);
    process.exit(1);
  }
}
