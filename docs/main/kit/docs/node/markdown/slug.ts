// Heading id algorithms, byte-compatible with the generators the live sites used.

/**
 * Python-Markdown toc + pymdownx.slugs.slugify(case='lower'), as configured by LeviLamina / LSE mkdocs.yml.
 * Input is the heading's text content (Python-Markdown: strip_tags(inner HTML) then html.unescape()).
 *   1. trim (inner whitespace is kept: "A  / B" → "a---b", as on the live sites)
 *   2. strip <…> tag-like sequences (RE_TAGS = </?[^>]*>)
 *   3. Unicode NFC, lowercase
 *   4. delete chars not in [\w\- ] (Python's Unicode \w: letters, digits/numerics, underscore)
 *   5. spaces → '-'   (no trimming: "🔑 SQL数据库" → "-sql数据库")
 */
export function slugPymdownx(text: string): string {
  let s = text.trim();
  s = s.replace(/<\/?[^>]*>/g, '');
  s = s.normalize('NFC').toLowerCase();
  s = s.replace(/[^\p{L}\p{N}_\- ]/gu, '');
  return s.replace(/ /g, '-');
}

/** Python-Markdown toc `unique()`: foo, foo_1, foo_2 … (also used for empty slugs → _1). */
export function uniquePymdownx(id: string, used: Set<string>): string {
  let out = id;
  while (used.has(out) || !out) {
    const m = /^(.*)_([0-9]+)$/.exec(out);
    out = m ? `${m[1]}_${Number(m[2]) + 1}` : `${out}_1`;
  }
  used.add(out);
  return out;
}

// @mdit-vue/shared slugify (VitePress default).
const rControl = /[\u0000-\u001f]/g;
const rSpecial = /[\s~`!@#$%^&*()\-_+=[\]{}|\\;:"'“”‘’<>,.?/]+/g;
const rCombining = /[̀-ͯ]/g;

export function slugVitepress(text: string): string {
  return text
    .normalize('NFKD')
    .replace(rCombining, '')
    .replace(rControl, '')
    .replace(rSpecial, '-')
    .replace(/-{2,}/g, '-')
    .replace(/^-+|-+$/g, '')
    .replace(/^(\d)/, '_$1')
    .toLowerCase();
}

/** markdown-it-anchor uniqueSlug: foo, foo-1, foo-2 … */
export function uniqueVitepress(id: string, used: Set<string>): string {
  let out = id;
  let i = 1;
  while (used.has(out)) out = `${id}-${i++}`;
  used.add(out);
  return out;
}

export type SlugMode = 'pymdownx' | 'vitepress';

export function createSlugger(mode: SlugMode) {
  const used = new Set<string>();
  return {
    used,
    reserve(id: string) {
      used.add(id);
    },
    slug(text: string): string {
      return mode === 'pymdownx' ? uniquePymdownx(slugPymdownx(text), used) : uniqueVitepress(slugVitepress(text), used);
    },
  };
}
