// Rendered by build-static.mjs with react-dom/server into plain HTML snippets for non-React pages.
import { renderToStaticMarkup } from 'react-dom/server';
import { GlobalBar } from '../components/GlobalBar';
import { SiteFooter } from '../components/SiteFooter';
import { ThemeToggle } from '../components/ThemeToggle';
import type { DocsProjectId, SiteId } from '../components/projects';

export function globalBarHtml(opts: { locale?: string; current?: SiteId; currentDocs?: DocsProjectId | string } = {}): string {
  return renderToStaticMarkup(<GlobalBar locale={opts.locale} current={opts.current} currentDocs={opts.currentDocs} end={<ThemeToggle locale={opts.locale} />} />);
}

export function footerHtml(opts: { locale?: string; extra?: string } = {}): string {
  return renderToStaticMarkup(<SiteFooter locale={opts.locale} extra={opts.extra} />);
}
