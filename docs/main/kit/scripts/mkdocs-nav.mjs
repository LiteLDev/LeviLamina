#!/usr/bin/env node
// Print a defineDocsConfig() skeleton (nav, navTranslations, i18n, site metadata) from an mkdocs.yml.
// Usage: node kit/scripts/mkdocs-nav.mjs path/to/mkdocs.yml > docs.config.generated.json
// Needs the `yaml` package (part of the kit's dependency set). Python tags (!!python/...) are ignored.
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { dirname, resolve } from 'node:path';

const file = process.argv[2];
if (!file) {
  console.error('Usage: node mkdocs-nav.mjs mkdocs.yml');
  process.exit(2);
}
const require = createRequire(resolve(process.cwd(), 'package.json'));
const YAML = require('yaml');
const src = readFileSync(file, 'utf8');
// Python-specific tags (!!python/object/apply:…) are kept as plain values.
const doc = YAML.parse(src, { logLevel: 'silent' });
const i18n = (doc.plugins ?? []).find((p) => p && typeof p === 'object' && p.i18n)?.i18n;
const locales = (i18n?.languages ?? [{ locale: 'en', default: true, name: 'English' }]).map((l) => ({
  code: l.locale,
  label: l.name,
  lang: l.locale,
  ...(l.default ? {} : {}),
}));
const navTranslations = {};
for (const l of i18n?.languages ?? []) if (l.nav_translations) navTranslations[l.locale] = l.nav_translations;
const siteUrl = doc.site_url ? new URL(doc.site_url) : null;
const out = {
  base: siteUrl ? siteUrl.pathname : '/',
  title: doc.site_name,
  description: doc.site_description,
  repo: doc.repo_url,
  contentDir: resolve(dirname(file), doc.docs_dir ?? 'docs'),
  logo: doc.theme?.logo,
  favicon: doc.theme?.favicon,
  hostname: siteUrl ? siteUrl.origin : undefined,
  sitemap: siteUrl ? { hostname: siteUrl.origin } : false,
  i18n: { mode: 'suffix', defaultLocale: (i18n?.languages ?? []).find((l) => l.default)?.locale ?? 'en', locales },
  urlStyle: 'directory',
  slug: 'pymdownx',
  markdown: { compat: 'python-markdown' },
  sidebar: (doc.theme?.features ?? []).includes('navigation.tabs') ? 'tabs' : 'tree',
  nav: doc.nav,
  navTranslations,
};
console.log(JSON.stringify(out, null, 2));
