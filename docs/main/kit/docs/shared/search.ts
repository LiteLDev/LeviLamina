// Search tokenisation shared by the build-time indexer and the browser (MiniSearch needs identical options
// for indexing and querying). CJK runs are indexed as overlapping character bigrams (single characters for
// one-character runs) so Chinese/Japanese/Korean text is searchable without a dictionary.

const TOKEN_RE = /([\p{Script=Han}\p{Script=Hiragana}\p{Script=Katakana}\p{Script=Hangul}]+)|([\p{L}\p{N}_]+)/gu;

export function tokenize(text: string): string[] {
  const out: string[] = [];
  for (const m of text.matchAll(TOKEN_RE)) {
    const cjk = m[1];
    if (cjk) {
      if (cjk.length === 1) out.push(cjk);
      else for (let i = 0; i < cjk.length - 1; i++) out.push(cjk.slice(i, i + 2));
    } else if (m[2]) {
      out.push(m[2]);
      // also index camelCase / PascalCase parts: getPosition → get, position
      const parts = m[2].split(/(?<=[a-z0-9])(?=[A-Z])|_/).filter((p) => p && p.length > 1);
      if (parts.length > 1) out.push(...parts);
    }
  }
  return out;
}

export function processTerm(term: string): string {
  return term.toLowerCase();
}

export const SEARCH_FIELDS = ['title', 'page', 'crumbs', 'text'] as const;
export const SEARCH_STORE_FIELDS = ['title', 'page', 'crumbs', 'path', 'text'] as const;
export const SNIPPET_STORE_CHARS = 700;

export const searchOptions = {
  fields: [...SEARCH_FIELDS],
  storeFields: [...SEARCH_STORE_FIELDS],
  tokenize,
  processTerm,
};

/** Query-time tokenizer: like tokenize(), without the camelCase expansion. */
export function tokenizeQuery(text: string): string[] {
  const out: string[] = [];
  for (const m of text.matchAll(TOKEN_RE)) {
    const cjk = m[1];
    if (cjk) {
      if (cjk.length === 1) out.push(cjk);
      else for (let i = 0; i < cjk.length - 1; i++) out.push(cjk.slice(i, i + 2));
    } else if (m[2]) out.push(m[2]);
  }
  return out;
}
