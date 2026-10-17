import { defineConfig } from 'vite';
import { kitDocs } from './kit/docs/node/vite.ts';
import docs from './docs.config.ts';

export default defineConfig({
  plugins: [kitDocs(docs)],
});
