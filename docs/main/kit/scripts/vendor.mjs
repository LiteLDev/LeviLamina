#!/usr/bin/env node
// Vendor levimc-kit into an app: copies the kit (minus demo/, screens/, node_modules/) to <app>/kit/.
// Usage: node path/to/levimc-kit/scripts/vendor.mjs <appDir> [--dest kit]
//        node path/to/levimc-kit/scripts/vendor.mjs <appDir>/kit     (the destination itself: a path named like
//        --dest that is not an app, i.e. has no package.json, is taken as the kit folder)
// Re-running replaces <app>/kit/ completely (never edit vendored files; change the kit and re-vendor).
import { cpSync, existsSync, mkdirSync, readdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { basename, dirname, join, relative, resolve, sep } from 'node:path';
import { fileURLToPath } from 'node:url';

const kitRoot = resolve(dirname(fileURLToPath(import.meta.url)), '..');
const args = process.argv.slice(2);
const destName = args.includes('--dest') ? args[args.indexOf('--dest') + 1] : 'kit';
const target = resolve(args.find((a, i) => !a.startsWith('--') && args[i - 1] !== '--dest') ?? '.');
const isKitDir = basename(target) === destName && !existsSync(join(target, 'package.json'));
const dest = isKitDir ? target : join(target, destName);

if (dest === kitRoot || kitRoot.startsWith(dest + sep)) {
  console.error('Refusing to vendor the kit into itself.');
  process.exit(1);
}
const SKIP = new Set(['demo', 'screens', 'node_modules', '.git', 'dist', '.kit']);
if (existsSync(dest)) rmSync(dest, { recursive: true, force: true });
mkdirSync(dest, { recursive: true });
// Copy top-level entries one by one (the demo vendors the kit into a subfolder of the kit itself).
for (const entry of readdirSync(kitRoot)) {
  if (SKIP.has(entry) || entry.startsWith('.')) continue;
  cpSync(join(kitRoot, entry), join(dest, entry), { recursive: true });
}
const version = readFileSync(join(kitRoot, 'VERSION'), 'utf8').trim();
writeFileSync(join(dest, '.vendored'), `levimc-kit ${version}\nvendored ${new Date().toISOString()}\nDo not edit files in this folder; update the kit and re-vendor.\n`);
console.log(`levimc-kit ${version} → ${relative(process.cwd(), dest) || dest}`);
