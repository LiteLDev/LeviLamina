// Public API for custom page layouts (config.layouts → frontmatter `layout: <name>`).
import type { PageData, RouteMeta, SiteData } from '../shared/types';
import type { UiStrings } from '../../components/i18n';

export interface CustomLayoutProps {
  route: RouteMeta;
  page: PageData;
  site: SiteData;
  t: UiStrings;
}

export { KitLink } from './components/KitLink';
export { useContentEnhancements } from './enhance';
export { href, site } from './data';
