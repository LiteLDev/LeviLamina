import { StrictMode } from 'react';
import { createRoot, hydrateRoot } from 'react-dom/client';
import { BrowserRouter } from 'react-router';
import { App } from './App';
import { primePage, site } from './data';
import type { EmbeddedPageData } from '../shared/types';
import './styles.css';
import 'virtual:kit-docs/tokens.css';

const container = document.getElementById('app')!;
const dataEl = document.getElementById('kit-page-data');
const embedded = dataEl ? (JSON.parse(dataEl.textContent || 'null') as EmbeddedPageData | null) : null;

if (embedded?.page) {
  // Hydrate from the prerendered DOM: reuse the content HTML instead of downloading it again.
  const content = container.querySelector('[data-doc-content]');
  primePage(embedded.page, { ...embedded, html: content?.innerHTML ?? '' });
}

const app = (
  <StrictMode>
    <BrowserRouter basename={site.base}>
      <App />
    </BrowserRouter>
  </StrictMode>
);

if (container.firstElementChild) {
  hydrateRoot(container, app, {
    onRecoverableError(error, info) {
      console.error('[kit-docs] hydration error:', error, info?.componentStack ?? '');
    },
  });
} else {
  createRoot(container).render(app);
}
