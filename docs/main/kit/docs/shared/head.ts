// <head> generation for prerendered pages + the root-only language redirect script.
import type { RouteMeta, SiteData } from './types.ts';

const esc = (s: string) => s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;');

export function pageTitle(site: SiteData, route: RouteMeta | undefined, fallback?: string): string {
  if (!route) return fallback ? `${fallback} | ${site.title}` : site.title;
  if (route.layout === 'home' || route.title === site.title) return site.title;
  return site.titleTemplate.replace(':title', route.title).replace(':site', site.title);
}

export function absoluteUrl(site: SiteData, path: string): string {
  return (site.hostname ?? '') + site.base + path;
}

/**
 * Language auto-redirect, inlined in <head>. Runs only when the URL is exactly the site root (base or
 * base + index.html) — never on deep links. Stored choice (localStorage `levimc-locale-<site>`) wins,
 * otherwise the first navigator.languages entry that matches a locale.
 */
export function localeRedirectScript(site: Pick<SiteData, 'base' | 'siteKey' | 'locales' | 'defaultLocale'>): string {
  if (site.locales.length < 2) return '';
  const L = site.locales.map((l) => ({ c: l.code, l: l.lang.toLowerCase(), p: l.prefix }));
  return (
    `(function(){try{var b=${JSON.stringify(site.base)},p=location.pathname;if(p!==b&&p!==b+"index.html")return;` +
    `var L=${JSON.stringify(L)},k=${JSON.stringify('levimc-locale-' + site.siteKey)},s=null,pick=null,i,j;` +
    `try{s=localStorage.getItem(k)}catch(e){}` +
    `if(s){for(i=0;i<L.length;i++)if(L[i].c===s)pick=L[i]}` +
    `else{var N=(navigator.languages&&navigator.languages.length?navigator.languages:[navigator.language||""]);` +
    `for(j=0;j<N.length&&!pick;j++){var t=String(N[j]||"").toLowerCase(),q=t.split("-")[0],tw=/^zh-(tw|hk|mo|hant)/.test(t);` +
    `for(i=0;i<L.length;i++)if(L[i].l===t||L[i].c.toLowerCase()===t){pick=L[i];break}` +
    `if(!pick&&q==="zh"){for(i=0;i<L.length;i++){var z=L[i].l;if(z.split("-")[0]==="zh"&&(tw?/^zh-(tw|hk|mo|hant)/.test(z):!/^zh-(tw|hk|mo|hant)/.test(z))){pick=L[i];break}}}` +
    `if(!pick)for(i=0;i<L.length;i++)if(L[i].l.split("-")[0]===q){pick=L[i];break}}}` +
    `if(pick&&pick.p)location.replace(b+pick.p+location.search+location.hash)}catch(e){}})();`
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
