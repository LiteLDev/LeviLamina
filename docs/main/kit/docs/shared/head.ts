// <head> generation for prerendered pages + the root-only language redirect script.
import type { RouteMeta, SiteData } from './types.ts';
import { PREFS_CORE_JS } from '../../components/prefs.ts';
import { KIT_GENERATOR } from '../../components/version.ts';

const esc = (s: string) => s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;');

export function pageTitle(site: SiteData, route: RouteMeta | undefined, fallback?: string): string {
  // replacement functions: a title may contain `$&`-style patterns
  const fill = (title: string) => site.titleTemplate.replace(':title', () => title).replace(':site', () => site.title);
  if (!route) return fallback ? fill(fallback) : site.title;
  // MkDocs (directory URLs) titles the site root page with the bare site name (Material's `page.is_homepage`),
  // i.e. the title template without its ':title' part: ':title - LeviLamina Docs' → 'LeviLamina Docs'.
  if (site.urlStyle === 'directory' && route.path === '') return siteName(site);
  if (route.layout === 'home' || route.title === site.title) return site.title;
  return fill(route.title);
}

/** The title template without its ':title' part (':title - :site' → site.title). */
function siteName(site: SiteData): string {
  const rest = site.titleTemplate.replace(/^\s*:title\s*[-|·:–—]?\s*/, '').replace(/\s*[-|·:–—]?\s*:title\s*$/, '');
  return (rest.includes(':title') || !rest.trim() ? ':site' : rest).replace(':site', () => site.title);
}

export function absoluteUrl(site: SiteData, path: string): string {
  return (site.hostname ?? '') + site.base + path;
}

/**
 * Language auto-redirect, inlined in <head>. Runs only when the URL is exactly the site root (base or
 * base + index.html) — never on deep links, so visiting an explicit locale URL never changes anything.
 *  1. The visitor's stored language (the cross-site `levimc_lang` preference, see components/prefs.ts) always
 *     wins: it is mapped to the nearest locale (zh-* → the site's zh variant, else the base language, else
 *     English / the default) — also when the visitor followed an in-site link to the root.
 *  2. Without a preference: not when the visitor came from a page of this site (an in-site link to the root,
 *     e.g. "[English](/)" on a translated home, is followed as written); otherwise the first navigator.languages
 *     entry that matches a locale.
 * Kit 1.0 stored a per-site choice in localStorage `levimc-locale-<site>`; it is migrated into the preference once.
 */
export function localeRedirectScript(site: Pick<SiteData, 'base' | 'siteKey' | 'locales' | 'defaultLocale'>): string {
  if (site.locales.length < 2) return '';
  const L = site.locales.map((l) => ({ c: l.code, l: l.lang, p: l.prefix }));
  // a preference no locale matches → English, else the default locale
  const en = site.locales.findIndex((l) => l.lang.toLowerCase().split('-')[0] === 'en');
  const fallback = en >= 0 ? en : Math.max(0, site.locales.findIndex((l) => l.code === site.defaultLocale));
  return (
    `(function(){try{${PREFS_CORE_JS}var b=${JSON.stringify(site.base)},p=location.pathname;if(p!==b&&p!==b+"index.html")return;` +
    `var L=${JSON.stringify(L)},k=${JSON.stringify('levimc-locale-' + site.siteKey)},s=pls(),g=rp("lang"),o=null,i,j,x=-1;` +
    `try{o=s&&s.getItem(k)}catch(e){}` +
    `if(o!==null){if(!g)for(i=0;i<L.length;i++)if(L[i].c===o){g=L[i].l;wp("lang",g)}try{s.removeItem(k)}catch(e){}}` +
    `if(g){x=ml(g,L);if(x<0)x=${fallback}}` +
    `else{try{var r=new URL(document.referrer);if(r.origin===location.origin&&r.pathname.indexOf(b)===0)return}catch(e){}` +
    `var N=navigator.languages&&navigator.languages.length?navigator.languages:[navigator.language||""];` +
    `for(j=0;j<N.length&&x<0;j++)x=ml(N[j],L)}` +
    `if(x>=0&&L[x].p)location.replace(b+L[x].p+location.search+location.hash)}catch(e){}})();`
  );
}

export interface HeadOptions {
  title: string;
  description?: string;
  canonical?: string;
  alternates?: { lang: string; href: string }[];
  xDefault?: string;
  locale?: string;
  image?: string;
  noindex?: boolean;
  siteName: string;
}

export function headTags(o: HeadOptions): string {
  const t: string[] = [];
  t.push(`<title>${esc(o.title)}</title>`);
  t.push(`<meta name="generator" content="${KIT_GENERATOR}">`);
  if (o.description) t.push(`<meta name="description" content="${esc(o.description)}">`);
  if (o.noindex) t.push('<meta name="robots" content="noindex">');
  if (o.canonical) t.push(`<link rel="canonical" href="${esc(o.canonical)}">`);
  for (const a of o.alternates ?? []) t.push(`<link rel="alternate" hreflang="${esc(a.lang)}" href="${esc(a.href)}">`);
  if (o.xDefault) t.push(`<link rel="alternate" hreflang="x-default" href="${esc(o.xDefault)}">`);
  t.push(`<meta property="og:type" content="website">`);
  t.push(`<meta property="og:site_name" content="${esc(o.siteName)}">`);
  t.push(`<meta property="og:title" content="${esc(o.title)}">`);
  if (o.description) t.push(`<meta property="og:description" content="${esc(o.description)}">`);
  if (o.canonical) t.push(`<meta property="og:url" content="${esc(o.canonical)}">`);
  if (o.locale) t.push(`<meta property="og:locale" content="${esc(o.locale.replace('-', '_'))}">`);
  if (o.image) t.push(`<meta property="og:image" content="${esc(o.image)}">`);
  t.push(`<meta name="twitter:card" content="summary">`);
  return t.join('\n    ');
}

export function routeHead(site: SiteData, route: RouteMeta | undefined, notFoundTitle?: string): string {
  if (!route) return headTags({ title: pageTitle(site, undefined, notFoundTitle ?? '404'), siteName: site.title, noindex: true, description: site.description });
  const alternates = Object.entries(route.alternates)
    .map(([code, path]) => ({ lang: site.locales.find((l) => l.code === code)?.lang ?? code, href: absoluteUrl(site, path) }))
    .filter(() => Object.keys(route.alternates).length > 1);
  const def = route.alternates[site.defaultLocale];
  return headTags({
    title: pageTitle(site, route),
    description: route.description,
    canonical: site.hostname ? absoluteUrl(site, route.path) : undefined,
    alternates: site.hostname ? alternates : undefined,
    xDefault: site.hostname && def !== undefined && alternates.length ? absoluteUrl(site, def) : undefined,
    locale: site.locales.find((l) => l.code === route.locale)?.lang,
    image: site.hostname && site.logo ? (/^https?:/.test(site.logo.src) ? site.logo.src : site.hostname + site.logo.src) : undefined,
    siteName: site.title,
  });
}
