// Data shapes shared by the build (docs/node) and the runtime app (docs/app).
// Everything here is plain JSON so it can be serialised into virtual modules and page HTML.

export interface LocaleInfo {
  code: string;
  label: string;
  lang: string;
  /** URL prefix relative to base: '' for the default locale, e.g. 'zh/' or 'zh-CN/'. */
  prefix: string;
}

export interface NavLink {
  text: string;
  /** Path relative to base (internal) or absolute URL (external). */
  link: string;
  external?: boolean;
  /** For internal links: the page key, used for active-state matching. */
  key?: string;
}

export interface NavItem extends Partial<NavLink> {
  text: string;
  items?: NavItem[];
  /** Internal path prefix that marks this item active (relative to base). */
  activePrefix?: string;
  collapsed?: boolean;
}

export interface TocEntry {
  level: number;
  id: string;
  text: string;
}

export interface HeroData {
  name?: string;
  text?: string;
  tagline?: string;
  image?: { src: string; alt?: string; width?: number; height?: number };
  actions?: { theme?: 'brand' | 'alt'; text: string; link: string; external?: boolean }[];
}

export interface FeatureData {
  title: string;
  details?: string;
  icon?: string;
  link?: string;
  linkText?: string;
  external?: boolean;
}

export interface RouteMeta {
  /** Canonical path relative to base ('' = site root). */
  path: string;
  locale: string;
  /** Page module id (stable, URL-safe). */
  page: string;
  /** Page key without locale (e.g. 'api_reference/data'). */
  key: string;
  title: string;
  description?: string;
  /** 'doc' | 'home' | 'page' | a custom layout name from config.layouts */
  layout: string;
  /** Locale code → canonical path of the same page in that locale. */
  alternates: Record<string, string>;
  /** Source path relative to the content dir (for edit links). */
  source: string;
  lastUpdated?: number;
  /** "Edit this page" URL (computed at build time from config.editLink). */
  editUrl?: string;
  /** True when the page shows default-locale content at a localized URL (missing translation). */
  fallback?: boolean;
  sidebar?: string;
  nav?: number;
  prev?: { text: string; path: string };
  next?: { text: string; path: string };
}

export interface SidebarData {
  title?: string;
  items: NavItem[];
  /** VitePress semantics: every group is open unless `collapsed: true`. MkDocs: nested groups open only on the active path. */
  expand?: boolean;
  /** MkDocs 'tabs' sidebar without navigation.expand: every group starts closed unless it holds the current page. */
  collapseGroups?: boolean;
}

export interface SiteData {
  base: string;
  title: string;
  description: string;
  hostname?: string;
  logo?: { src: string; alt: string; dark?: string };
  favicon?: string;
  project?: string;
  siteKey: string;
  urlStyle: 'directory' | 'html';
  cleanUrls: boolean;
  defaultLocale: string;
  locales: LocaleInfo[];
  nav: Record<string, NavItem[]>;
  sidebars: Record<string, SidebarData>;
  social: { icon: string; link: string; label?: string }[];
  editLink?: { text?: Record<string, string> };
  footer?: { message?: string; copyright?: string };
  outline: [number, number];
  search: Record<string, string>;
  ui: Record<string, Record<string, unknown>>;
  titleTemplate: string;
  lastUpdated: boolean;
  homePaths: Record<string, string>;
  /** Docs header layout (config `header`). */
  header: { tabsRow: boolean | 'auto' };
  /** GitHub button target in the top bar (the site's repository, else the LiteLDev organisation). */
  github?: string;
}

export interface PageData {
  html: string;
  toc: TocEntry[];
  hero?: HeroData;
  features?: FeatureData[];
  frontmatter?: Record<string, unknown>;
}

/** Embedded into every prerendered page as <script type="application/json" id="kit-page-data">. */
export interface EmbeddedPageData {
  page: string;
  toc: TocEntry[];
  hero?: HeroData;
  features?: FeatureData[];
  frontmatter?: Record<string, unknown>;
}

export interface SearchDoc {
  id: number;
  /** Section heading (or page title for the intro section). */
  title: string;
  /** Page title. */
  page: string;
  /** Breadcrumb trail (group titles), may be empty. */
  crumbs: string;
  /** Path relative to base, with #anchor. */
  path: string;
  text: string;
}
