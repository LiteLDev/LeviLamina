import { StrictMode } from 'react';
import { renderToString } from 'react-dom/server';
import { StaticRouter } from 'react-router';
import { App } from './App';
import { langOf, loadPage, matchPathname, primePage, routes, site, stringsFor } from './data';
import { routeHead } from '../shared/head';
import { outFileFor } from '../shared/routing';
import type { EmbeddedPageData } from '../shared/types';

export { site, routes };

export interface RenderedPage {
  html: string;
  head: string;
  lang: string;
  pageData: EmbeddedPageData | null;
  page?: string;
  file: string;
}

/** Render one URL (full pathname including base) to static HTML. */
export async function render(url: string): Promise<RenderedPage> {
  const route = matchPathname(url);
  let pageData: EmbeddedPageData | null = null;
  if (route) {
    const data = await loadPage(route.page);
    primePage(route.page, data);
    pageData = { page: route.page, toc: data.toc, hero: data.hero, features: data.features, frontmatter: data.frontmatter };
  }
  const html = renderToString(
    <StrictMode>
      <StaticRouter location={url} basename={site.base}>
        <App />
      </StaticRouter>
    </StrictMode>,
  );
  const locale = route?.locale ?? site.defaultLocale;
  return {
    html,
    head: routeHead(site, route, stringsFor(locale).notFoundTitle),
    lang: langOf(locale),
    pageData,
    page: route?.page,
    file: route ? outFileFor(route.path) : '404.html',
  };
}
