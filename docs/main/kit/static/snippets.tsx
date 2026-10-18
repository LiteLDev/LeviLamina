// Rendered by build-static.mjs with react-dom/server into plain HTML snippets for non-React pages.
// kit.js drives their menus (theme, language) and translates the chrome into the visitor's language.
import { renderToStaticMarkup } from 'react-dom/server';
import { GlobalBar, GlobalNavList } from '../components/GlobalBar';
import { SiteFooter } from '../components/SiteFooter';
import type { DocsProjectId, SiteId } from '../components/projects';

export function globalBarHtml(
  opts: { locale?: string; current?: SiteId; currentDocs?: DocsProjectId | string; github?: string; menu?: boolean } = {},
): string {
  return renderToStaticMarkup(<GlobalBar locale={opts.locale} current={opts.current} currentDocs={opts.currentDocs} github={opts.github} menu={opts.menu} />);
}

/** The bar's links as a vertical list (a page's own menu when the bar's menu is off, e.g. Doxygen on phones). */
export function globalNavListHtml(opts: { locale?: string; current?: SiteId; currentDocs?: DocsProjectId | string } = {}): string {
  return renderToStaticMarkup(<GlobalNavList locale={opts.locale} current={opts.current} currentDocs={opts.currentDocs} />);
}

export function footerHtml(opts: { locale?: string; extra?: string } = {}): string {
  return renderToStaticMarkup(<SiteFooter locale={opts.locale} extra={opts.extra} />);
}
