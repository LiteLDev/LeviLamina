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
  packages: 'https://pkg.levimc.org/',
  blog: 'https://blog.levimc.org/',
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

/** Items of the cross-site GlobalBar in display order. */
export function globalNav(t: UiStrings): { id: Exclude<SiteId, 'home'>; label: string; url: string }[] {
  return [
    { id: 'projects', label: t.projects, url: LINKS.projects },
    { id: 'docs', label: t.docs, url: DOCS_PROJECTS[0]!.url },
    { id: 'packages', label: t.packages, url: LINKS.packages },
    { id: 'community', label: t.community, url: LINKS.community },
    { id: 'blog', label: t.blog, url: LINKS.blog },
    { id: 'about', label: t.about, url: LINKS.about },
  ];
}
