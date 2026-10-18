// Cross-site registry for LeviMC. Every URL here is the exact, redirect-free canonical form
// (trailing slash on directory URLs, https, no www unless the host requires it). Verified by
// scripts/linkcheck.mjs --external. Do not "simplify" these.

import type { PixelIconName } from './pixel-icons';
import type { UiStrings } from './i18n';

export const LINKS = {
  home: 'https://levimc.org/',
  projects: 'https://levimc.org/projects/',
  community: 'https://levimc.org/community/',
  about: 'https://levimc.org/about/',
  /** LeviMC Mods (pkg.levimc.org) — the id stays `packages`. */
  packages: 'https://pkg.levimc.org/',
  /** The blog moved into levimc.org (blog.levimc.org no longer resolves). */
  blog: 'https://levimc.org/blog/',
  github: 'https://github.com/LiteLDev',
} as const;

export type SiteId = 'home' | 'projects' | 'community' | 'about' | 'packages' | 'blog' | 'docs';

export type DocsProjectId = 'LeviLamina' | 'LegacyScriptEngine' | 'lip' | 'LeviLauncher' | 'LeviLaunchroid';

export interface DocsProject {
  id: DocsProjectId;
  name: string;
  url: string;
  repo: string;
  icon: PixelIconName;
}

export const DOCS_PROJECTS: readonly DocsProject[] = [
  { id: 'LeviLamina', name: 'LeviLamina', url: 'https://docs.levimc.org/LeviLamina/', repo: 'https://github.com/LiteLDev/LeviLamina', icon: 'grass' },
  {
    id: 'LegacyScriptEngine',
    name: 'LegacyScriptEngine',
    url: 'https://docs.levimc.org/LegacyScriptEngine/',
    repo: 'https://github.com/LiteLDev/LegacyScriptEngine',
    icon: 'bookQuill',
  },
  { id: 'lip', name: 'lip', url: 'https://docs.levimc.org/lip/', repo: 'https://github.com/LiteLDev/lip', icon: 'chest' },
  { id: 'LeviLauncher', name: 'LeviLauncher', url: 'https://docs.levimc.org/LeviLauncher/', repo: 'https://github.com/LiteLDev/LeviLauncher', icon: 'map' },
  {
    id: 'LeviLaunchroid',
    name: 'LeviLaunchroid',
    url: 'https://docs.levimc.org/LeviLaunchroid/',
    repo: 'https://github.com/LiteLDev/LeviLaunchroid',
    icon: 'pickaxe',
  },
];

export type SocialId = 'discord' | 'telegram' | 'x' | 'youtube' | 'email' | 'github';

export interface SocialLink {
  id: SocialId;
  label: string;
  url: string;
}

export const SOCIAL: readonly SocialLink[] = [
  { id: 'discord', label: 'Discord', url: 'https://discord.gg/v5R5P4vRZk' },
  { id: 'telegram', label: 'Telegram', url: 'https://t.me/LiteLoader' },
  { id: 'x', label: 'X', url: 'https://x.com/levimc_org' },
  { id: 'youtube', label: 'YouTube', url: 'https://www.youtube.com/@LeviLamina' },
  { id: 'email', label: 'contact@levimc.org', url: 'mailto:contact@levimc.org' },
];

export const NOT_AFFILIATED = 'Not affiliated with Mojang Studios.';
export const COPYRIGHT_HOLDER = 'LeviMC';

/** pkg.levimc.org ("LeviMC Mods"): display name and one-line description come from i18n (`modsName`, `modsBlurb`). */
export const MODS_SITE: { id: 'packages'; url: string; icon: PixelIconName } = { id: 'packages', url: LINKS.packages, icon: 'chest' };

export interface GlobalNavEntry {
  id: SiteId;
  label: string;
  url: string;
}

/**
 * The canonical tabs of the GlobalBar, identical on every LeviMC site (kit ≥ 1.1):
 * Home · Projects · Docs ▾ · Mods · Blog · Community · About.
 */
export function globalNav(t: UiStrings): GlobalNavEntry[] {
  return [
    { id: 'home', label: t.home, url: LINKS.home },
    { id: 'projects', label: t.projects, url: LINKS.projects },
    { id: 'docs', label: t.docs, url: DOCS_PROJECTS[0]!.url },
    { id: 'packages', label: t.packages, url: LINKS.packages },
    { id: 'blog', label: t.blog, url: LINKS.blog },
    { id: 'community', label: t.community, url: LINKS.community },
    { id: 'about', label: t.about, url: LINKS.about },
  ];
}

/** Origin of an absolute http(s) URL, lower-cased ('' for anything else). */
export function originOf(url: string): string {
  const m = /^(https?:\/\/[^/?#]+)/i.exec(url);
  return m ? m[1]!.toLowerCase() : '';
}

/**
 * For links rendered by a router: the root-relative path of `url` when it belongs to `siteOrigin`
 * (e.g. 'https://levimc.org/about/' on levimc.org → '/about/'), else undefined (an ordinary cross-site link).
 */
export function sameSitePath(url: string, siteOrigin: string | undefined): string | undefined {
  if (!siteOrigin) return undefined;
  const o = originOf(url);
  if (!o || o !== siteOrigin.replace(/\/+$/, '').toLowerCase()) return undefined;
  return url.slice(o.length) || '/';
}

