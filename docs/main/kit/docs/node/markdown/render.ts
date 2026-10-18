// Markdown → HTML at build time: unified/remark/rehype + Shiki. No markdown is parsed at runtime.

import { unified } from 'unified';
import remarkParse from 'remark-parse';
import remarkGfm from 'remark-gfm';
import remarkRehype from 'remark-rehype';
import rehypeRaw from 'rehype-raw';
import { toHtml } from 'hast-util-to-html';
import { visit, SKIP } from 'unist-util-visit';
import { parse as parseYaml } from 'yaml';
import type { Root as MdRoot, Html, Blockquote, Paragraph, Text, FootnoteDefinition } from 'mdast';
import type { Element, ElementContent, Root as HastRoot, RootContent, Properties } from 'hast';
import { preprocess, escAttr } from './preprocess.ts';
import { createSlugger, type SlugMode } from './slug.ts';
import { highlightToHast, type TokenStyles } from './shiki.ts';
import { HTML_TAGS } from './html-tags.ts';

export interface LinkResolution {
  href: string;
  /** Absolute external URL (gets target=_blank). */
  external?: boolean;
  /** Internal page target for anchor validation. */
  target?: { route: string; anchor: string };
}

export interface RenderOptions {
  compat: 'python-markdown' | 'commonmark';
  slug: SlugMode;
  lineNumbers: boolean;
  codeTitle: 'pygments' | 'lang' | 'none';
  languageAlias: Record<string, string>;
  admonitionTitles: 'mkdocs' | 'vitepress';
  containers?: { mkdocs?: boolean; vitepress?: boolean };
  literalBackslashes?: boolean;
  outline: [number, number];
  styles: TokenStyles;
  strings: { copyCode: string; copied: string; footnotes: string; backToRef: string };
  /** Rewrite a link/src found in the page. Return null to leave it unchanged (and report it). */
  resolveLink: (href: string, kind: 'a' | 'img') => LinkResolution | null;
  /** Called for every link that could not be resolved. */
  onWarning?: (message: string) => void;
}

export interface Section {
  id: string;
  title: string;
  level: number;
  text: string;
}

export interface RenderResult {
  html: string;
  frontmatter: Record<string, unknown>;
  title: string;
  /** Whether the markdown contains its own H1. */
  hasH1: boolean;
  description: string;
  toc: { level: number; id: string; text: string }[];
  ids: string[];
  sections: Section[];
  anchors: { route: string; anchor: string; href: string }[];
}

const VP_DEFAULT_TITLES: Record<string, string> = { tip: 'TIP', info: 'INFO', warning: 'WARNING', danger: 'DANGER', details: 'Details', note: 'NOTE', important: 'IMPORTANT', caution: 'CAUTION' };

/** Admonition type → canonical style kind (Material for MkDocs aliases + VitePress + GitHub alerts). */
const KIND: Record<string, string> = {
  note: 'note',
  seealso: 'note',
  abstract: 'abstract',
  summary: 'abstract',
  tldr: 'abstract',
  info: 'info',
  todo: 'info',
  tip: 'tip',
  hint: 'tip',
  important: 'tip',
  success: 'success',
  check: 'success',
  done: 'success',
  question: 'question',
  help: 'question',
  faq: 'question',
  warning: 'warning',
  caution: 'warning',
  attention: 'warning',
  failure: 'failure',
  fail: 'failure',
  missing: 'failure',
  danger: 'danger',
  error: 'danger',
  bug: 'bug',
  example: 'example',
  quote: 'quote',
  cite: 'quote',
  details: 'details',
};

export function splitFrontmatter(src: string): { data: Record<string, unknown>; body: string } {
  const m = /^﻿?---[ \t]*\r?\n([\s\S]*?)\r?\n---[ \t]*(?:\r?\n|$)/.exec(src);
  if (!m) return { data: {}, body: src.replace(/^﻿/, '') };
  let data: Record<string, unknown> = {};
  try {
    data = (parseYaml(m[1]!) as Record<string, unknown>) ?? {};
  } catch {
    data = {};
  }
  return { data, body: src.slice(m[0].length) };
}

// ------------------------------------------------------------------------------------- mdast helpers

/** Escape raw-HTML "tags" that are not HTML (e.g. Array<NBT object>) so they render literally. */
function escapePseudoTags(value: string, report: (tag: string) => void): string {
  return value.replace(/<(\/?)([A-Za-z][A-Za-z0-9-]*)((?:\s[^<>]*)?)(\/?)>/g, (all, _slash: string, name: string) => {
    const n = name.toLowerCase();
    if (HTML_TAGS.has(n) || n.includes('-')) return all;
    report(all);
    return all.replace(/</g, '&lt;').replace(/>/g, '&gt;');
  });
}

function remarkKit(opts: { onPseudo: (t: string) => void; titles: 'mkdocs' | 'vitepress' }) {
  return (tree: MdRoot) => {
    visit(tree, 'html', (node: Html) => {
      node.value = escapePseudoTags(node.value, opts.onPseudo);
    });
    // GitHub alerts:  > [!NOTE]  →  admonition
    visit(tree, 'blockquote', (node: Blockquote, index, parent) => {
      const first = node.children[0] as Paragraph | undefined;
      if (!first || first.type !== 'paragraph') return;
      const t = first.children[0] as Text | undefined;
      if (!t || t.type !== 'text') return;
      const m = /^\[!(NOTE|TIP|IMPORTANT|WARNING|CAUTION)\][ \t]*(?:\n|$)/i.exec(t.value);
      if (!m || !parent || index === undefined) return;
      const type = m[1]!.toLowerCase();
      t.value = t.value.slice(m[0].length);
      if (!t.value) first.children.shift();
      if (!first.children.length) node.children.shift();
      const kind = type === 'caution' ? 'danger' : type === 'important' ? 'example' : type;
      // VitePress prints GitHub alert titles in capitals ("TIP"); MkDocs-style sites capitalise ("Tip").
      const title = opts.titles === 'vitepress' ? type.toUpperCase() : type.charAt(0).toUpperCase() + type.slice(1);
      parent.children.splice(index, 1, {
        type: 'html',
        value: `<div data-kit-container="adm" data-type="${type}" data-kind-override="${kind}" data-classes="${type}" data-title="${escAttr(title)}" data-collapse="none">`,
      } as Html, ...(node.children as MdRoot['children']), { type: 'html', value: '</div>' } as Html);
      return [SKIP, index];
    });
  };
}

// ------------------------------------------------------------------------------------- hast helpers

const h = (tagName: string, properties: Properties, children: ElementContent[] = []): Element => ({ type: 'element', tagName, properties, children });
const text = (value: string) => ({ type: 'text' as const, value });
const isEl = (n: unknown, tag?: string): n is Element => !!n && (n as Element).type === 'element' && (!tag || (n as Element).tagName === tag);
const classes = (el: Element): string[] => {
  const c = el.properties.className;
  if (Array.isArray(c)) return c.map(String);
  return c === undefined || c === null || c === false ? [] : String(c).split(' ');
};

/** Text content of a heading for slugging (skips footnote refs and permalinks). */
function headingText(node: Element | RootContent): string {
  if (node.type === 'text') return node.value;
  if (node.type !== 'element') return '';
  if (node.tagName === 'sup' && node.children.some((c) => isEl(c, 'a') && 'dataFootnoteRef' in c.properties)) return '';
  if (classes(node).includes('kit-anchor')) return '';
  return node.children.map((c) => headingText(c as Element)).join('');
}

function plainText(node: RootContent | Element, skip?: (el: Element) => boolean): string {
  if (node.type === 'text') return node.value;
  if (node.type !== 'element') return '';
  if (skip?.(node)) return '';
  const block = /^(p|div|li|tr|h[1-6]|pre|blockquote|table|ul|ol|section|details|summary|dd|dt)$/.test(node.tagName);
  const inner = node.children.map((c) => plainText(c as Element, skip)).join('');
  if (node.tagName === 'br') return '\n';
  if (node.tagName === 'td' || node.tagName === 'th') return inner + ' ';
  return block ? `\n${inner}\n` : inner;
}

const PERMALINK_ICON = '<svg viewBox="0 0 16 16" width="16" height="16" shape-rendering="crispEdges" aria-hidden="true" fill="currentColor"><path d="M5 2h2v2h3V2h2v2h2v2h-2v3h2v2h-2v2h-2v-2H7v2H5v-2H3V9h2V6H3V4h2zm2 4v3h3V6z"/></svg>';

export async function renderMarkdown(source: string, o: RenderOptions): Promise<RenderResult> {
  const { data: frontmatter, body } = splitFrontmatter(source);
  const pre = preprocess(body, { compat: o.compat, mkdocs: o.containers?.mkdocs, vitepress: o.containers?.vitepress, literalBackslashes: o.literalBackslashes });

  const pseudo: string[] = [];
  const processor = unified()
    .use(remarkParse)
    .use(remarkGfm, { singleTilde: false })
    .use(remarkKit, { onPseudo: (t: string) => pseudo.push(t), titles: o.admonitionTitles })
    .use(remarkRehype, {
      allowDangerousHtml: true,
      clobberPrefix: '',
      footnoteLabel: o.strings.footnotes,
      footnoteBackLabel: (n: number) => `${o.strings.backToRef} ${n + 1}`,
    })
    // fence meta (title="…", {1,3}, [file]) lives in node.data, which rehype-raw drops: keep it as a property
    .use(() => (tree: HastRoot) => {
      visit(tree, 'element', (el: Element) => {
        const meta = (el.data as { meta?: string } | undefined)?.meta;
        if (el.tagName === 'code' && meta) el.properties.dataMeta = meta;
      });
    })
    .use(rehypeRaw);
  const mdast = processor.parse(pre);
  // footnote labels as written, keyed like mdast-util-to-hast's ids (upper- then lower-cased, URI-normalised)
  const footnoteLabels = new Map<string, string>();
  visit(mdast, 'footnoteDefinition', (n: FootnoteDefinition) => {
    const safe = n.identifier
      .toUpperCase()
      .toLowerCase()
      .replace(/[^A-Za-z0-9!#$&'()*+,\-./:;=?@_~%]/g, (c) => encodeURIComponent(c));
    footnoteLabels.set(safe, n.label ?? n.identifier);
  });
  const tree = (await processor.run(mdast)) as HastRoot;

  // ---- code blocks (Shiki)
  const codeJobs: { parent: Element | HastRoot; index: number; lang: string; meta: string; code: string }[] = [];
  visit(tree, 'element', (node: Element, index, parent) => {
    if (node.tagName !== 'pre' || index === undefined || !parent) return;
    const code = node.children.find((c): c is Element => isEl(c, 'code'));
    if (!code) return;
    const langClass = classes(code).find((c) => c.startsWith('language-'));
    const lang = langClass ? langClass.slice('language-'.length) : '';
    const meta = String((code.data as { meta?: string } | undefined)?.meta ?? code.properties.dataMeta ?? '');
    codeJobs.push({ parent: parent as Element, index, lang, meta, code: plainText(code) });
    return SKIP;
  });
  for (const job of codeJobs) {
    job.parent.children[job.index] = await highlightToHast({
      lang: job.lang,
      meta: job.meta,
      code: job.code,
      lineNumbers: o.lineNumbers,
      codeTitle: o.codeTitle,
      aliases: o.languageAlias,
      copyLabel: o.strings.copyCode,
      copiedLabel: o.strings.copied,
      styles: o.styles,
    });
  }

  // ---- containers (admonitions, tabs, code groups)
  let tabSet = 0;
  // python-markdown compat: the tab buttons take pymdownx.tabbed's ids (__tabbed_<set>_<n>,
  // sets numbered in document order) so old #__tabbed_1_2 deep links still reach and select that tab.
  const pyTabSets = new Map<Element, number>();
  if (o.compat === 'python-markdown') {
    visit(tree, 'element', (el: Element) => {
      if (el.properties.dataKitContainer === 'tabs') pyTabSets.set(el, pyTabSets.size + 1);
    });
  }
  const containerPass = (parent: HastRoot | Element) => {
    for (let i = 0; i < parent.children.length; i++) {
      const node = parent.children[i];
      if (!isEl(node)) continue;
      containerPass(node);
      const kind = node.properties.dataKitContainer as string | undefined;
      if (!kind) continue;
      if (kind === 'adm') {
        const type = String(node.properties.dataType ?? 'note');
        const styleKind = String(node.properties.dataKindOverride ?? KIND[type] ?? 'note');
        let title = String(node.properties.dataTitle ?? '');
        if (node.properties.dataDefaultTitle === '1') {
          title = o.admonitionTitles === 'vitepress' ? (VP_DEFAULT_TITLES[type] ?? type.toUpperCase()) : type.charAt(0).toUpperCase() + type.slice(1);
        }
        const collapse = String(node.properties.dataCollapse ?? 'none');
        const bodyEl = h('div', { className: ['kit-adm-body'] }, node.children.filter((c) => !(c.type === 'text' && !c.value.trim())));
        // wrap the inline title in one span so the flex row is [icon][text…][chevron], never one column per inline node
        const titleChildren: ElementContent[] = title ? [h('span', { className: ['kit-adm-title-text'] }, inlineMarkdown(title))] : [];
        const extra = String(node.properties.dataClasses ?? '').split(' ').filter((c) => c && c !== type);
        const props: Properties = { className: ['kit-adm', ...extra.map((c) => `is-${c}`)], dataType: type, dataKind: styleKind };
        if (collapse === 'none') {
          parent.children[i] = h('div', props, [...(title ? [h('p', { className: ['kit-adm-title'] }, titleChildren)] : []), bodyEl]);
        } else {
          parent.children[i] = h('details', { ...props, ...(collapse === 'open' ? { open: true } : {}) }, [
            h(
              'summary',
              { className: ['kit-adm-title'] },
              titleChildren.length ? titleChildren : [h('span', { className: ['kit-adm-title-text'] }, [text(type.charAt(0).toUpperCase() + type.slice(1))])],
            ),
            bodyEl,
          ]);
        }
      } else if (kind === 'tabs' || kind === 'code-group') {
        tabSet++;
        const tabs: { label: string; content: ElementContent[]; selected: boolean }[] = [];
        if (kind === 'tabs') {
          for (const c of node.children) {
            if (isEl(c) && c.properties.dataKitContainer === 'tab') {
              tabs.push({
                label: String(c.properties.dataLabel ?? ''),
                selected: c.properties.dataSelected === '1',
                content: c.children.filter((x) => !(x.type === 'text' && !x.value.trim())),
              });
            }
          }
        } else {
          for (const c of node.children) {
            if (isEl(c) && classes(c).includes('kit-code')) {
              const title = c.children.find((x) => isEl(x) && classes(x).includes('kit-code-head'));
              const label = title ? plainText(title as Element).trim() : `Tab ${tabs.length + 1}`;
              tabs.push({ label, selected: false, content: [c] });
            }
          }
        }
        if (!tabs.length) continue;
        let sel = tabs.findIndex((t) => t.selected);
        if (sel < 0) sel = 0;
        const id = `kit-tabs-${tabSet}`;
        const pySet = pyTabSets.get(node);
        const tabId = (n: number) => (pySet ? `__tabbed_${pySet}_${n + 1}` : `${id}-t${n + 1}`);
        parent.children[i] = h('div', { className: ['kit-tabs'], dataKitTabs: '' }, [
          h(
            'div',
            { className: ['hotbar', 'kit-tabs-bar'], role: 'tablist' },
            tabs.map((t, n) =>
              h(
                'button',
                {
                  type: 'button',
                  role: 'tab',
                  id: tabId(n),
                  ariaSelected: n === sel ? 'true' : 'false',
                  ariaControls: [`${id}-p${n + 1}`],
                  tabIndex: n === sel ? 0 : -1,
                },
                [text(t.label)],
              ),
            ),
          ),
          ...tabs.map((t, n) =>
            h(
              'div',
              {
                className: ['kit-tab-panel'],
                role: 'tabpanel',
                id: `${id}-p${n + 1}`,
                ariaLabelledBy: [tabId(n)],
                tabIndex: 0,
                ...(n === sel ? {} : { hidden: true }),
              },
              t.content,
            ),
          ),
        ]);
      }
    }
  };
  containerPass(tree);

  // ---- Python-Markdown footnote ids (fn:1, fnref:1, fnref2:1) so old #fn: deep links keep working.
  // remark lower-cases the label in its ids (fn-note); Python-Markdown keeps the author's case (fn:Note).
  if (o.compat === 'python-markdown') {
    const notes: Element[] = [];
    const refs: Element[] = [];
    visit(tree, 'element', (el: Element) => {
      if ('dataFootnotes' in el.properties) {
        for (const ol of el.children) if (isEl(ol, 'ol')) notes.push(...ol.children.filter((li): li is Element => isEl(li, 'li')));
      } else if (el.tagName === 'a' && ('dataFootnoteRef' in el.properties || 'dataFootnoteBackref' in el.properties)) refs.push(el);
    });
    const labels = new Set(notes.map((li) => String(li.properties.id ?? '')).filter((id) => id.startsWith('fn-')).map((id) => id.slice(3)));
    const label = (safe: string) => footnoteLabels.get(safe) ?? safe;
    const pyId = (id: string): string => {
      if (id.startsWith('fn-') && labels.has(id.slice(3))) return 'fn:' + label(id.slice(3));
      if (!id.startsWith('fnref-')) return id;
      const r = id.slice(6);
      if (labels.has(r)) return 'fnref:' + label(r);
      const m = /^(.*)-(\d+)$/.exec(r);
      return m && labels.has(m[1]!) ? `fnref${m[2]}:${label(m[1]!)}` : id;
    };
    for (const li of notes) if (li.properties.id !== undefined) li.properties.id = pyId(String(li.properties.id));
    for (const a of refs) {
      if (a.properties.id !== undefined) a.properties.id = pyId(String(a.properties.id));
      if (typeof a.properties.href === 'string' && a.properties.href.startsWith('#')) a.properties.href = '#' + pyId(a.properties.href.slice(1));
    }
  }

  // ---- heading ids, permalinks, toc
  const slugger = createSlugger(o.slug);
  visit(tree, 'element', (node: Element) => {
    if (node.properties.id !== undefined && !/^h[1-6]$/.test(node.tagName)) slugger.reserve(String(node.properties.id));
  });
  const toc: RenderResult['toc'] = [];
  let title = typeof frontmatter.title === 'string' ? frontmatter.title : '';
  let h1Seen = false;
  visit(tree, 'element', (node: Element) => {
    const m = /^h([1-6])$/.exec(node.tagName);
    if (!m) return;
    const level = Number(m[1]);
    // custom ids: "Title {#id}" (VitePress / attr_list)
    const last = node.children[node.children.length - 1];
    if (last && last.type === 'text') {
      const cm = /\s*\{:?\s*#([\w-]+)\s*\}\s*$/.exec(last.value);
      if (cm) {
        last.value = last.value.slice(0, cm.index);
        node.properties.id = cm[1];
        slugger.reserve(cm[1]!);
      }
    }
    const raw = headingText(node);
    const id = node.properties.id ? String(node.properties.id) : slugger.slug(raw);
    node.properties.id = id;
    const label = raw.replace(/\s+/g, ' ').trim();
    if (level === 1 && !h1Seen) {
      h1Seen = true;
      if (!title) title = label;
    }
    if (level >= o.outline[0] && level <= o.outline[1]) toc.push({ level, id, text: label });
    node.children.push(h('a', { className: ['kit-anchor'], href: `#${id}`, ariaHidden: 'true', tabIndex: -1 }, [{ type: 'raw', value: PERMALINK_ICON } as unknown as ElementContent]));
    return SKIP;
  });

  // ---- links & images
  const anchors: RenderResult['anchors'] = [];
  const ids = new Set<string>();
  visit(tree, 'element', (node: Element) => {
    if (node.properties.id !== undefined) ids.add(String(node.properties.id));
  });
  visit(tree, 'element', (node: Element) => {
    if (node.tagName === 'a' && typeof node.properties.href === 'string') {
      if (classes(node).includes('kit-anchor')) return;
      const href = node.properties.href;
      if (href.startsWith('#')) {
        const a = decodeURIComponent(href.slice(1));
        if (a && !ids.has(a)) o.onWarning?.(`missing anchor ${href}`);
        return;
      }
      const r = o.resolveLink(href, 'a');
      if (!r) {
        o.onWarning?.(`unresolved link ${href}`);
        return;
      }
      node.properties.href = r.href;
      if (r.external) {
        node.properties.target = '_blank';
        node.properties.rel = ['noopener'];
      }
      if (r.target?.anchor) anchors.push({ route: r.target.route, anchor: r.target.anchor, href });
    } else if (node.tagName === 'img' && typeof node.properties.src === 'string') {
      const r = o.resolveLink(node.properties.src, 'img');
      if (r) node.properties.src = r.href;
      else o.onWarning?.(`unresolved image ${node.properties.src}`);
      if (node.properties.loading === undefined) node.properties.loading = 'lazy';
      if (node.properties.decoding === undefined) node.properties.decoding = 'async';
    }
  });

  // ---- Python-Markdown strips whitespace inside code spans (`IntPos `/ → IntPos/)
  if (o.compat === 'python-markdown') {
    visit(tree, 'element', (node: Element, _i, parent) => {
      if (node.tagName !== 'code' || (parent && isEl(parent, 'pre'))) return;
      const first = node.children[0];
      const last = node.children[node.children.length - 1];
      if (first?.type === 'text') first.value = first.value.replace(/^\s+/, '');
      if (last?.type === 'text') last.value = last.value.replace(/\s+$/, '');
    });
  }

  // ---- GFM task list checkboxes: give them an accessible name
  visit(tree, 'element', (node: Element) => {
    if (node.tagName === 'input' && node.properties.type === 'checkbox' && node.properties.ariaLabel === undefined) {
      node.properties.ariaLabel = node.properties.checked ? 'Completed' : 'Not completed';
    }
  });

  // ---- tables: horizontal scroll wrapper
  const wrapTables = (parent: HastRoot | Element) => {
    parent.children.forEach((c, i) => {
      if (!isEl(c)) return;
      if (c.tagName === 'table') parent.children[i] = h('div', { className: ['kit-table-wrap'] }, [c]);
      else wrapTables(c);
    });
  };
  wrapTables(tree);

  // ---- search sections (top-level walk, split at h1–h3)
  const sections: Section[] = [];
  let cur: Section = { id: '', title, level: 1, text: '' };
  const skipForSearch = (el: Element) => classes(el).includes('kit-anchor') || classes(el).includes('kit-code-head') || el.tagName === 'pre' || el.tagName === 'button';
  const flush = () => {
    cur.text = cur.text.replace(/\s+/g, ' ').trim();
    if (cur.text || cur.id) sections.push(cur);
  };
  for (const node of tree.children) {
    if (isEl(node) && /^h[1-3]$/.test(node.tagName)) {
      flush();
      const lvl = Number(node.tagName[1]);
      cur = { id: lvl === 1 ? '' : String(node.properties.id), title: headingText(node).replace(/\s+/g, ' ').trim(), level: lvl, text: '' };
    } else {
      cur.text += ' ' + plainText(node as Element, skipForSearch);
    }
  }
  flush();

  if (pseudo.length) o.onWarning?.(`escaped non-HTML tags: ${[...new Set(pseudo)].join(' ')}`);

  let description = typeof frontmatter.description === 'string' ? frontmatter.description : '';
  if (!description) {
    const firstP = tree.children.find((c) => isEl(c, 'p'));
    if (firstP) description = plainText(firstP).replace(/\s+/g, ' ').trim().slice(0, 200);
  }

  const html = toHtml(tree, { allowDangerousHtml: true });
  return { html, frontmatter, title, hasH1: h1Seen, description, toc, ids: [...ids], sections, anchors };
}

/** Render a short inline markdown string (admonition/tab titles) to hast phrasing content. */
function inlineMarkdown(src: string): ElementContent[] {
  const proc = unified().use(remarkParse).use(remarkRehype);
  const tree = proc.runSync(proc.parse(src)) as HastRoot;
  const p = tree.children.find((c): c is Element => isEl(c, 'p'));
  return p ? p.children : [text(src)];
}
