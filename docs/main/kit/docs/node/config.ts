// levimc-kit docs engine — configuration API.
//
//   // docs.config.ts
//   import { defineDocsConfig } from './kit/docs/node/config';
//   export default defineDocsConfig({ base: '/LeviLamina/', title: 'LeviLamina', contentDir: 'docs/main/contents', … });
//
// See README.md ("Site config API") for every option with MkDocs / VitePress equivalents.

import { existsSync } from 'node:fs';
import { isAbsolute, join, resolve } from 'node:path';
import type { UiStrings } from '../../components/i18n.ts';

export type I18nMode = 'suffix' | 'folder';

export interface LocaleConfig {
  /** Locale code used in config maps (nav per locale…), e.g. 'en', 'zh', 'zh-CN'. */
  code: string;
  /** Native display name, e.g. 'English', '中文', '简体中文'. */
  label: string;
  /** BCP-47 tag for <html lang> and hreflang, e.g. 'en', 'zh-CN'. Defaults to `code`. */
  lang?: string;
  /** URL prefix relative to base ('' for the default locale; 'zh/' …). Defaults to '' / `${code}/`. */
  prefix?: string;
  /** suffix mode: file suffix (x.<suffix>.md). Defaults to `code`. folder mode: folder name (defaults to prefix without '/'). */
  suffix?: string;
  folder?: string;
}

/**
 * Navigation entry. Accepts MkDocs nav semantics and VitePress objects:
 *   'user_guides/install.md'                     page, title = the page's H1 in each locale
 *   { 'Install': 'user_guides/install.md' }      titled page (MkDocs)
 *   { 'User Guides': [ … ] }                     group (MkDocs)
 *   { text: 'Guide', link: '/guide/quick-start' } (VitePress), external links allowed
 *   { text: 'Developer', items: [ … ], collapsed?: boolean }
 */
export type NavEntry =
  | string
  | { text?: string; link: string; activeMatch?: string }
  | { text: string; items: NavEntry[]; link?: string; collapsed?: boolean }
  | { [title: string]: string | NavEntry[] };

/** VitePress-style sidebar: one list, or a map of path prefix → list (multi-sidebar). */
export type SidebarConfig = NavEntry[] | Record<string, NavEntry[]>;

export type HeadTag = [tag: string, attrs: Record<string, string | boolean>, content?: string];

export interface DocsConfig {
  /** Public base path with leading and trailing slash, e.g. '/LeviLamina/'. */
  base: string;
  /** Site title (header, <title> suffix). */
  title: string;
  description?: string;
  /** Project logo (path relative to base, e.g. '/logo.svg' or 'img/logo.png'). Each project keeps its own. */
  logo?: string | { src: string; alt?: string; dark?: string };
  favicon?: string;
  /** Which docs project this is (highlights it in the GlobalBar). Defaults to the base segment. */
  project?: string;
  /** Repository URL (GitHub link in the header). */
  repo?: string;
  /**
   * Edit link: a pattern with :path (path relative to contentDir), e.g.
   * 'https://github.com/LiteLDev/LeviLamina/edit/develop/docs/main/contents/:path', or a function
   * (source path) → URL | undefined (evaluated at build time). `text` overrides the label per locale.
   */
  editLink?: string | { pattern: string | ((source: string) => string | undefined); text?: Record<string, string> };
  /** Markdown root, relative to the config file (MkDocs docs_dir / VitePress srcDir). */
  contentDir: string;
  /** Static files copied verbatim (VitePress public/). Default: '<contentDir>/public' if it exists. */
  publicDir?: string | false;
  /** Copy every non-markdown file of contentDir verbatim (MkDocs behaviour). Default: true for urlStyle 'directory'. */
  copyContentAssets?: boolean;
  i18n?: {
    mode: I18nMode;
    defaultLocale: string;
    locales: LocaleConfig[];
    /** Build default-locale content at localized URLs when a translation is missing. Default: true (suffix), false (folder). */
    fallback?: boolean;
  };
  /** 'directory' (MkDocs: a/b.md → a/b/) or 'html' (VitePress: a/b.md → a/b.html). */
  urlStyle?: 'directory' | 'html';
  /** html style only: link to a/b instead of a/b.html (VitePress cleanUrls). */
  cleanUrls?: boolean;
  /** Heading id algorithm. */
  slug?: 'pymdownx' | 'vitepress';
  markdown?: {
    /** 'python-markdown' reproduces Python-Markdown block rules (4-space list nesting, raw HTML blocks…). */
    compat?: 'python-markdown' | 'commonmark';
    /** Show line numbers on multi-line code blocks (default true). */
    lineNumbers?: boolean;
    /** Code title bar label: Pygments lexer names like pymdownx auto_title ('pygments'), the raw language ('lang') or none. */
    codeTitle?: 'pygments' | 'lang' | 'none';
    /** Extra language aliases, e.g. { xmake: 'lua' }. */
    languageAlias?: Record<string, string>;
    /** Default admonition titles: MkDocs capitalised type ('Note') or VitePress labels ('TIP'). */
    admonitionTitles?: 'mkdocs' | 'vitepress';
    /** MkDocs Material: pages without an H1 get one from their nav title (or file name). Default: true for python-markdown. */
    autoTitle?: boolean;
    /**
     * python-markdown compat only: reproduce Python-Markdown's limited escape set literally (`\<T\>` → "\<T>",
     * as the live MkDocs sites print it). Default false: CommonMark escapes, i.e. the author's intent ("<T>").
     */
    literalBackslashes?: boolean;
    /** Which container syntaxes are recognised. Default: MkDocs (!!! ??? ===) for python-markdown, VitePress (:::) for commonmark. */
    containers?: { mkdocs?: boolean; vitepress?: boolean };
  };
  /** Custom page layouts: frontmatter `layout: <name>` renders the default export of the module (React component). */
  layouts?: Record<string, string>;
  /** Header navigation (MkDocs `nav` or VitePress `themeConfig.nav`), shared or per locale code. */
  nav?: NavEntry[] | Record<string, NavEntry[]>;
  /** MkDocs nav_translations: locale code → { 'User Guides': '用户指南' }. */
  navTranslations?: Record<string, Record<string, string>>;
  /**
   * Sidebar: 'tabs' (MkDocs Material navigation.tabs: header shows top-level sections, sidebar shows the
   * active section), 'tree' (whole nav), false, or explicit VitePress sidebars (shared or per locale code).
   */
  sidebar?: 'tabs' | 'tree' | false | SidebarConfig | Record<string, SidebarConfig>;
  /**
   * MkDocs Material `navigation.expand` for the 'tabs' sidebar: open every group. Default false (Material's
   * default): only the group holding the current page starts open, plus groups marked `collapsed: false`.
   */
  sidebarExpand?: boolean;
  /**
   * Docs header layout. `tabsRow`: 'auto' (default) keeps brand, section tabs and search in one row and, only
   * when the tabs do not fit, first shortens search to its icon, then moves the tabs to a second row below,
   * then into the drawer; true always uses the second row above 960px; false never does (icon search, then drawer).
   */
  header?: { tabsRow?: boolean | 'auto' };
  /** Globs (relative to contentDir) excluded from the build. */
  exclude?: string[];
  /** Image/asset handling for files referenced from markdown: 'verbatim' (keep path) or 'hashed' (assets/x.hash.ext). */
  assets?: 'verbatim' | 'hashed';
  /** "Last updated" from `git log -1 --format=%ct -- <file>`. Default true. */
  lastUpdated?: boolean;
  /** Emit sitemap.xml (with hreflang alternates). */
  sitemap?: { hostname: string } | false;
  /** Canonical origin for <link rel=canonical> / og:url. Defaults to sitemap.hostname. */
  hostname?: string;
  /** Extra <head> tags: [tag, attrs, content?]. */
  head?: HeadTag[];
  /** Heading levels shown in "On this page" (default [2, 3]). */
  outline?: number | [number, number];
  social?: { icon: 'github' | 'discord' | 'telegram' | 'x' | 'youtube' | 'email'; link: string; label?: string }[];
  footer?: { message?: string; copyright?: string };
  /** Override chrome strings per locale code. */
  ui?: Record<string, Partial<UiStrings>>;
  /** <title> template; ':title' and ':site' are replaced. Default ':title | :site'. */
  titleTemplate?: string;
  /** Output directory (default 'dist'). */
  outDir?: string;
  /** Exclude pages from the search index (globs on page keys). */
  searchExclude?: string[];
}

export function defineDocsConfig(config: DocsConfig): DocsConfig {
  return config;
}

// ---------------------------------------------------------------------------------------------- resolved

export interface ResolvedLocale {
  code: string;
  label: string;
  lang: string;
  prefix: string;
  suffix: string;
  folder: string;
  isDefault: boolean;
}

export interface ResolvedConfig extends Omit<DocsConfig, 'i18n' | 'outline' | 'logo' | 'editLink' | 'markdown'> {
  root: string;
  contentRoot: string;
  publicRoot: string | null;
  outRoot: string;
  base: string;
  siteKey: string;
  project: string;
  i18nMode: I18nMode;
  fallback: boolean;
  defaultLocale: string;
  locales: ResolvedLocale[];
  urlStyle: 'directory' | 'html';
  cleanUrls: boolean;
  slug: 'pymdownx' | 'vitepress';
  markdown: Required<NonNullable<DocsConfig['markdown']>>;
  copyContentAssets: boolean;
  assets: 'verbatim' | 'hashed';
  lastUpdated: boolean;
  outline: [number, number];
  logo?: { src: string; alt: string; dark?: string };
  editLink?: { pattern: string | ((source: string) => string | undefined); text?: Record<string, string> };
  titleTemplate: string;
  hostname?: string;
}

export function resolveConfig(config: DocsConfig, root: string): ResolvedConfig {
  let base = config.base || '/';
  if (!base.startsWith('/')) base = '/' + base;
  if (!base.endsWith('/')) base += '/';
  const contentRoot = isAbsolute(config.contentDir) ? config.contentDir : resolve(root, config.contentDir);
  const urlStyle = config.urlStyle ?? 'directory';
  const mode: I18nMode = config.i18n?.mode ?? 'suffix';
  const defaultLocale = config.i18n?.defaultLocale ?? config.i18n?.locales[0]?.code ?? 'en';
  const locales: ResolvedLocale[] = (config.i18n?.locales ?? [{ code: defaultLocale, label: 'English', lang: 'en' }]).map((l) => {
    const isDefault = l.code === defaultLocale;
    const prefix = l.prefix ?? (isDefault ? '' : `${l.code}/`);
    return {
      code: l.code,
      label: l.label,
      lang: l.lang ?? l.code,
      prefix: prefix && !prefix.endsWith('/') ? prefix + '/' : prefix,
      suffix: l.suffix ?? l.code,
      folder: l.folder ?? prefix.replace(/\/$/, ''),
      isDefault,
    };
  });
  // default locale first
  locales.sort((a, b) => Number(b.isDefault) - Number(a.isDefault));

  let publicRoot: string | null = null;
  if (config.publicDir !== false) {
    const p = config.publicDir ? resolve(root, config.publicDir) : join(contentRoot, 'public');
    if (existsSync(p)) publicRoot = p;
  }
  // MkDocs Material lists every heading level in its TOC; VitePress defaults to [2, 3].
  const compatEarly = config.markdown?.compat ?? (urlStyle === 'directory' ? 'python-markdown' : 'commonmark');
  const outline =
    config.outline === undefined ? (compatEarly === 'python-markdown' ? [2, 4] : [2, 3]) : typeof config.outline === 'number' ? [config.outline, config.outline] : config.outline;
  const logo = typeof config.logo === 'string' ? { src: config.logo, alt: config.title } : config.logo ? { alt: config.title, ...config.logo } : undefined;
  const editLink = typeof config.editLink === 'string' ? { pattern: config.editLink } : config.editLink;
  const siteKey = base.replace(/^\/|\/$/g, '') || 'root';
  const compat = config.markdown?.compat ?? (urlStyle === 'directory' ? 'python-markdown' : 'commonmark');
  return {
    ...config,
    root,
    contentRoot,
    publicRoot,
    outRoot: resolve(root, config.outDir ?? 'dist'),
    base,
    siteKey,
    project: config.project ?? siteKey,
    i18nMode: mode,
    fallback: config.i18n?.fallback ?? mode === 'suffix',
    defaultLocale,
    locales,
    urlStyle,
    cleanUrls: config.cleanUrls ?? false,
    slug: config.slug ?? (compat === 'python-markdown' ? 'pymdownx' : 'vitepress'),
    markdown: {
      compat,
      lineNumbers: config.markdown?.lineNumbers ?? true,
      codeTitle: config.markdown?.codeTitle ?? (compat === 'python-markdown' ? 'pygments' : 'lang'),
      languageAlias: config.markdown?.languageAlias ?? {},
      admonitionTitles: config.markdown?.admonitionTitles ?? (compat === 'python-markdown' ? 'mkdocs' : 'vitepress'),
      autoTitle: config.markdown?.autoTitle ?? compat === 'python-markdown',
      literalBackslashes: config.markdown?.literalBackslashes ?? false,
      containers: {
        mkdocs: config.markdown?.containers?.mkdocs ?? compat === 'python-markdown',
        vitepress: config.markdown?.containers?.vitepress ?? compat === 'commonmark',
      },
    },
    layouts: Object.fromEntries(Object.entries(config.layouts ?? {}).map(([k, v]) => [k, isAbsolute(v) ? v : resolve(root, v)])),
    copyContentAssets: config.copyContentAssets ?? urlStyle === 'directory',
    assets: config.assets ?? (urlStyle === 'directory' ? 'verbatim' : 'hashed'),
    lastUpdated: config.lastUpdated ?? true,
    outline: outline as [number, number],
    logo,
    editLink,
    titleTemplate: config.titleTemplate ?? ':title | :site',
    hostname: (config.hostname ?? (config.sitemap ? config.sitemap.hostname : undefined))?.replace(/\/$/, ''),
  };
}
