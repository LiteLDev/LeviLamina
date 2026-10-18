// Source-level preprocessing that turns MkDocs / VitePress block extensions into CommonMark that
// micromark understands, and (in python-markdown compat) rewrites list/HTML-block layout so CommonMark
// produces the same structure Python-Markdown produced on the live sites.
//
// Containers become raw HTML wrappers around ordinary markdown (blank lines keep micromark parsing the
// body as markdown); a rehype pass later turns the wrappers into the final admonition / tab markup:
//
//   <div data-kit-container="adm" data-type="note" data-title="…" data-collapse="none|closed|open">
//
//   …body markdown…
//
//   </div>

export interface PreprocessOptions {
  compat: 'python-markdown' | 'commonmark';
  /** Enable MkDocs extensions (!!!, ???, ===). Default: compat === 'python-markdown'. */
  mkdocs?: boolean;
  /** Enable VitePress ::: containers. Default: compat === 'commonmark'. */
  vitepress?: boolean;
  /**
   * Keep backslashes that Python-Markdown does not treat as escapes (`\<T\>` renders "\<T>" on MkDocs).
   * Off by default: the kit renders the author's intent ("<T>") — the live sites' stray backslash is a quirk.
   */
  literalBackslashes?: boolean;
}

const FENCE_OPEN = /^(\s*)(`{3,}|~{3,})(.*)$/;
// Python-Markdown admonition / pymdownx.details title line
const ADM_RE = /^(!!!|\?\?\?\+?) ?([\w-]+(?: +[\w-]+)*)(?: +"(.*?)")? *$/;
// pymdownx.tabbed
const TAB_RE = /^===(!?\+?|\+?!?) +"(.*?)" *$/;
// VitePress container
const VP_OPEN = /^(:{3,})\s*([\w-]+)\s*(.*?)\s*$/;
const VP_CLOSE = /^(:{3,})\s*$/;
const VP_TYPES = new Set(['tip', 'info', 'warning', 'danger', 'details', 'note', 'important', 'caution', 'code-group']);

// Python-Markdown block-level elements (markdown/util.py BLOCK_LEVEL_ELEMENTS)
const BLOCK_TAGS = new Set(
  (
    'address article aside blockquote details dialog div dl fieldset figcaption figure footer form h1 h2 h3 h4 h5 h6 ' +
    'header hgroup hr main menu nav ol p pre section table ul canvas colgroup dd body dt group html iframe li legend ' +
    'math map noscript output object option progress script style summary tbody td textarea tfoot th thead tr video center'
  ).split(' '),
);
// CommonMark HTML block type 1 tags: blank lines do not end them.
const TYPE1_TAGS = new Set(['pre', 'script', 'style', 'textarea']);

const LIST_RE = /^( *)([*+-]|\d{1,9}[.)])( +|$)(.*)$/;
const HR_RE = /^ {0,3}([-*_])(?: *\1){2,} *$/;

const indentOf = (s: string) => {
  let n = 0;
  for (const ch of s) {
    if (ch === ' ') n++;
    else if (ch === '\t') n += 4 - (n % 4);
    else break;
  }
  return n;
};
const isBlank = (s: string) => /^\s*$/.test(s);
const expandTabs = (s: string) => {
  // Expand leading tabs only (Python-Markdown converts tabs to 4 spaces before parsing).
  const m = /^[ \t]*/.exec(s)![0];
  if (!m.includes('\t')) return s;
  return ' '.repeat(indentOf(m)) + s.slice(m.length);
};
const dedent = (lines: string[], n: number) => lines.map((l) => (isBlank(l) ? '' : l.slice(Math.min(n, indentOf(l)))));
const indent = (lines: string[], n: number) => {
  const pad = ' '.repeat(n);
  return lines.map((l) => (l === '' ? '' : pad + l));
};
export const escAttr = (s: string) => s.replace(/&/g, '&amp;').replace(/"/g, '&quot;').replace(/</g, '&lt;').replace(/>/g, '&gt;');

type Kind = 'blank' | 'para' | 'list' | 'heading' | 'block';

/** Split a line into [isCode, text] segments using CommonMark backtick code-span rules. */
function codeSegments(line: string): [boolean, string][] {
  const out: [boolean, string][] = [];
  let i = 0;
  let last = 0;
  while (i < line.length) {
    if (line[i] === '\\' && line[i + 1] === '`') {
      i += 2;
      continue;
    }
    if (line[i] !== '`') {
      i++;
      continue;
    }
    let n = 0;
    while (line[i + n] === '`') n++;
    const fence = '`'.repeat(n);
    let j = i + n;
    let close = -1;
    while (j < line.length) {
      const k = line.indexOf(fence, j);
      if (k < 0) break;
      let m = 0;
      while (line[k + m] === '`') m++;
      if (m === n) {
        close = k;
        break;
      }
      j = k + m;
    }
    if (close < 0) {
      i += n;
      continue;
    }
    if (i > last) out.push([false, line.slice(last, i)]);
    out.push([true, line.slice(i, close + n)]);
    i = close + n;
    last = i;
  }
  if (last < line.length) out.push([false, line.slice(last)]);
  return out;
}

// Python-Markdown only treats these as backslash escapes (+ '|' from tables, '^' caret, '~' tilde,
// '=' mark). CommonMark escapes every ASCII punctuation character, so "\<" must keep its backslash.
const PY_ESCAPABLE = new Set([...'\\`*_{}[]()>#+-.!|^~=']);
function pythonEscapes(text: string): string {
  return text.replace(/\\([!-/:-@[-`{-~])/g, (m, ch: string) => (PY_ESCAPABLE.has(ch) ? m : '\\\\' + ch));
}
function mapOutsideCode(line: string, fn: (s: string) => string): string {
  return codeSegments(line)
    .map(([code, t]) => (code ? t : fn(t)))
    .join('');
}
/** In GFM table rows, a '|' inside a code span splits the cell; Python-Markdown keeps it. Escape it. */
function escapeTablePipes(line: string): string {
  return codeSegments(line)
    .map(([code, t]) => (code ? t.replace(/(?<!\\)\|/g, '\\|') : t))
    .join('');
}
const TABLE_DELIM = /^\s*\|?\s*:?-{1,}:?\s*(\|\s*:?-{1,}:?\s*)*\|?\s*$/;

export function preprocess(src: string, opts: PreprocessOptions): string {
  const lines = src.replace(/\r\n?/g, '\n').split('\n').map(expandTabs);
  const out = processBlock(lines, {
    literalBackslashes: opts.literalBackslashes ?? false,
    compat: opts.compat,
    mkdocs: opts.mkdocs ?? opts.compat === 'python-markdown',
    vitepress: opts.vitepress ?? opts.compat === 'commonmark',
  });
  return out.join('\n');
}

function processBlock(lines: string[], o: Required<PreprocessOptions>): string[] {
  const out: string[] = [];
  const py = o.compat === 'python-markdown';
  const escText = (t: string) => (o.literalBackslashes ? pythonEscapes(t) : t);
  // `code`: the line may be part of an indented code block, whose backticks are literal.
  const pyEsc = (l: string, code = false) => {
    if (!py) return l;
    const s = code ? l : pyCodeSpans(l);
    return o.literalBackslashes ? mapOutsideCode(s, pythonEscapes) : s;
  };
  let prev: Kind = 'blank';
  // list context (python-markdown compat)
  let inList = false;
  let depth = -1;
  // Python-Markdown: after a blank line, a block indented ≥ 4 inside a list is re-parsed as the last item's
  // content; when that block starts with paragraph text, later list markers in it are literal text.
  let literalMarkers = false;
  let lastBlank = true;
  let tabGroupOpen = false;
  // Python-Markdown: a '>' line makes the rest of its block (up to a blank line) part of the quote
  let quoteOpen = false;

  const emitWrapped = (ind: number, open: string, body: string[], close = '</div>') => {
    const pad = ' '.repeat(ind);
    if (out.length && out[out.length - 1] !== '') out.push('');
    out.push(pad + open, '');
    out.push(...indent(body, ind));
    if (out[out.length - 1] !== '') out.push('');
    out.push(pad + close, '');
  };

  let i = 0;
  while (i < lines.length) {
    const line = lines[i]!;
    const ind = indentOf(line);
    const trimmed = line.slice(ind);

    // ---------------------------------------------------------------- fenced code: copy verbatim
    const fm = FENCE_OPEN.exec(line);
    if (fm && !(fm[2]![0] === '`' && fm[3]!.includes('`'))) {
      const marker = fm[2]!;
      out.push(line);
      i++;
      while (i < lines.length) {
        const l = lines[i]!;
        const close = new RegExp(`^\\s*${marker[0] === '`' ? '`' : '~'}{${marker.length},}\\s*$`);
        out.push(l);
        i++;
        if (close.test(l)) break;
      }
      prev = 'block';
      lastBlank = false;
      quoteOpen = false;
      continue;
    }

    // ---------------------------------------------------------------- blank
    if (isBlank(line)) {
      out.push('');
      i++;
      prev = 'blank';
      lastBlank = true;
      quoteOpen = false;
      continue;
    }

    // ---------------------------------------------------------------- python-markdown: blockquote continuation
    if (py && quoteOpen && !/^ {0,3}>/.test(line)) {
      if (classify(trimmed) === 'heading' || HR_RE.test(line) || /^(=+|-+)\s*$/.test(trimmed) || (o.mkdocs && (ADM_RE.test(trimmed) || TAB_RE.test(trimmed)))) {
        // headings, rules and MkDocs containers split the block before the quote processor sees them
        quoteOpen = false;
      } else {
        // CommonMark ends the quote after an empty '>' line (no lazy continuation); Python-Markdown keeps the line
        // as quote text (its indentation never starts code there)
        out.push(pyEsc('> ' + trimmed));
        i++;
        prev = 'block';
        lastBlank = false;
        continue;
      }
    }

    // ---------------------------------------------------------------- python-markdown: list boundaries
    if (py && inList && lastBlank && ind < 4 && !LIST_RE.test(line)) {
      // un-indented block after a blank line ends the list (CommonMark would keep it inside the item):
      // drop the indentation and re-process the line outside the list
      inList = false;
      depth = -1;
      literalMarkers = false;
      if (ind > 0) {
        lines[i] = line.trimStart();
        continue;
      }
    }
    if (py && inList && lastBlank) literalMarkers = ind >= 4 && !LIST_RE.test(line);

    // ---------------------------------------------------------------- MkDocs containers (!!! ??? ===)
    const containerAllowed = ind === 0 || (inList && ind % 4 === 0 && ind <= (depth + 1) * 4);
    if (o.mkdocs && containerAllowed) {
      const am = ADM_RE.exec(trimmed);
      const tm = !am ? TAB_RE.exec(trimmed) : null;
      if (am || tm) {
        // collect the indented body
        let j = i + 1;
        const body: string[] = [];
        while (j < lines.length) {
          const l = lines[j]!;
          if (isBlank(l) || indentOf(l) >= ind + 4) {
            body.push(l);
            j++;
          } else break;
        }
        while (body.length && isBlank(body[body.length - 1]!)) {
          body.pop();
          j--;
        }
        const inner = processBlock(dedent(body, ind + 4), o);
        if (am) {
          if (tabGroupOpen) {
            out.push(' '.repeat(ind) + '</div>', '');
            tabGroupOpen = false;
          }
          const marker = am[1]!;
          const classes = am[2]!.toLowerCase().replace(/ +/g, ' ');
          const type = classes.split(' ')[0]!;
          const rawTitle = am[3];
          const collapse = marker === '!!!' ? 'none' : marker === '???+' ? 'open' : 'closed';
          const title = rawTitle === undefined ? type.charAt(0).toUpperCase() + type.slice(1) : rawTitle;
          emitWrapped(
            ind,
            `<div data-kit-container="adm" data-type="${escAttr(type)}" data-classes="${escAttr(classes)}" data-title="${escAttr(title)}" data-collapse="${collapse}">`,
            inner,
          );
        } else {
          const flags = tm![1]!;
          const label = tm![2]!;
          if (!tabGroupOpen || flags.includes('!')) {
            if (tabGroupOpen) out.push(' '.repeat(ind) + '</div>', '');
            if (out.length && out[out.length - 1] !== '') out.push('');
            out.push(' '.repeat(ind) + '<div data-kit-container="tabs">', '');
            tabGroupOpen = true;
          }
          emitWrapped(ind, `<div data-kit-container="tab" data-label="${escAttr(label)}"${flags.includes('+') ? ' data-selected="1"' : ''}>`, inner);
          // keep the group open only if the next non-blank line is another tab at the same indent
          let k = j;
          while (k < lines.length && isBlank(lines[k]!)) k++;
          const nxt = k < lines.length ? lines[k]! : '';
          const nm = indentOf(nxt) === ind ? TAB_RE.exec(nxt.slice(ind)) : null;
          if (!nm || nm[1]!.includes('!')) {
            out.push(' '.repeat(ind) + '</div>', '');
            tabGroupOpen = false;
          }
        }
        i = j;
        prev = 'block';
        lastBlank = false;
        continue;
      }
    }

    // ---------------------------------------------------------------- VitePress containers
    if (o.vitepress) {
      const vm = VP_OPEN.exec(trimmed);
      if (vm && VP_TYPES.has(vm[2]!.toLowerCase())) {
        const colons = vm[1]!.length;
        let j = i + 1;
        let nest = 0;
        const body: string[] = [];
        let inFence: string | null = null;
        while (j < lines.length) {
          const l = lines[j]!;
          const t = l.trim();
          if (inFence) {
            if (new RegExp(`^${inFence[0] === '`' ? '`' : '~'}{${inFence.length},}\\s*$`).test(t)) inFence = null;
          } else {
            const f = /^(`{3,}|~{3,})/.exec(t);
            if (f) inFence = f[1]!;
            else {
              const open2 = VP_OPEN.exec(t);
              const close2 = VP_CLOSE.exec(t);
              if (close2 && close2[1]!.length >= colons && nest === 0) break;
              if (open2 && VP_TYPES.has(open2[2]!.toLowerCase()) && open2[1]!.length < colons) {
                /* nested container with fewer colons */
              } else if (open2 && VP_TYPES.has(open2[2]!.toLowerCase())) nest++;
              else if (close2 && nest > 0) nest--;
            }
          }
          body.push(l);
          j++;
        }
        const type = vm[2]!.toLowerCase();
        let rest = vm[3] ?? '';
        let open = false;
        const om = /\s*\{open\}\s*$/.exec(rest);
        if (om) {
          open = true;
          rest = rest.slice(0, om.index);
        }
        const inner = processBlock(dedent(body, ind), o);
        if (type === 'code-group') {
          emitWrapped(ind, '<div data-kit-container="code-group">', inner);
        } else {
          emitWrapped(
            ind,
            `<div data-kit-container="adm" data-type="${escAttr(type)}" data-classes="${escAttr(type)}" data-title="${escAttr(rest)}" data-default-title="${rest ? '0' : '1'}" data-collapse="${
              type === 'details' ? (open ? 'open' : 'closed') : 'none'
            }">`,
            inner,
          );
        }
        i = j + 1;
        prev = 'block';
        lastBlank = false;
        continue;
      }
    }

    // ---------------------------------------------------------------- python-markdown raw HTML blocks
    if (py && ind <= 3) {
      const hm = /^<([a-zA-Z][a-zA-Z0-9]*)(?=[\s>/])/.exec(trimmed);
      const tag = hm?.[1]!.toLowerCase();
      if (tag && BLOCK_TAGS.has(tag)) {
        // capture until the matching close tag (nesting-aware), like Python-Markdown's HTML extractor
        const block: string[] = [];
        let level = 0;
        let j = i;
        const openRe = new RegExp(`<${tag}(?=[\\s>/])`, 'gi');
        const closeRe = new RegExp(`</${tag}\\s*>`, 'gi');
        const selfClosing = new RegExp(`^<${tag}\\b[^>]*/>\\s*$`, 'i');
        if (selfClosing.test(trimmed) || tag === 'hr') {
          block.push(lines[j]!);
          j++;
        } else {
          for (; j < lines.length; j++) {
            const l = lines[j]!;
            block.push(l);
            level += (l.match(openRe) || []).length;
            level -= (l.match(closeRe) || []).length;
            if (level <= 0) {
              j++;
              break;
            }
          }
        }
        const keepBlank = TYPE1_TAGS.has(tag);
        const padded = block.map((l, n) => {
          if (n === 0) return l;
          if (isBlank(l)) return keepBlank ? l : ' '.repeat(ind) + '<!-- -->';
          return indentOf(l) < ind ? ' '.repeat(ind) + l.trimStart() : l;
        });
        out.push(...padded);
        i = j;
        prev = 'block';
        lastBlank = false;
        continue;
      }
    }

    // ---------------------------------------------------------------- python-markdown tables
    if (py && line.includes('|') && i + 1 < lines.length && TABLE_DELIM.test(lines[i + 1]!) && lines[i + 1]!.includes('-')) {
      if (prev === 'para' && !inList) {
        // Python-Markdown: a table cannot interrupt a paragraph — keep the rows as literal paragraph text
        out.push(mapOutsideCode(line, (t) => escText(t).replace(/\|/g, '\\|')));
        i++;
        lastBlank = false;
        continue;
      }
      // Python-Markdown strips each row; keep rows at the header's indentation (0 outside lists).
      const pad = ' '.repeat(inList ? Math.min(ind, (depth + 1) * 4) : 0);
      const row = (l: string) => pad + mapOutsideCode(escapeTablePipes(l.trim()), escText);
      out.push(row(line), pad + lines[i + 1]!.trim());
      i += 2;
      while (i < lines.length && !isBlank(lines[i]!)) {
        out.push(row(lines[i]!));
        i++;
      }
      prev = 'block';
      lastBlank = false;
      continue;
    }

    // ---------------------------------------------------------------- python-markdown lists
    if (py) {
      const lm = LIST_RE.exec(line);
      if (lm && !HR_RE.test(line) && literalMarkers && inList) {
        // marker inside an indented paragraph block → literal paragraph text (lazy continuation)
        out.push(pyEsc(line).replace(/^(\s*)([*+-]|\d+\.)/, (_m, sp: string, mk: string) => sp + (/\d/.test(mk) ? mk.replace('.', '\\.') : '\\' + mk)));
        i++;
        lastBlank = false;
        continue;
      }
      if (lm && !HR_RE.test(line)) {
        const markerIndent = lm[1]!.length;
        let marker = lm[2]!;
        const ordered = /\d/.test(marker);
        if (ordered && marker.endsWith(')')) {
          // Python-Markdown has no "1)" lists: keep as text
          out.push(line.replace(/^(\s*\d+)\)/, '$1\\)'));
          i++;
          prev = 'para';
          lastBlank = false;
          continue;
        }
        if (!inList) {
          if (markerIndent >= 4) {
            out.push(line);
            i++;
            prev = 'block';
            lastBlank = false;
            continue;
          }
          if (prev === 'para') {
            // Python-Markdown: a list cannot interrupt a paragraph — the line stays paragraph text
            out.push(pyEsc(line).replace(/^(\s*)([*+-]|\d+\.)/, (_m, sp: string, mk: string) => sp + (ordered ? mk.replace('.', '\\.') : '\\' + mk)));
            i++;
            lastBlank = false;
            continue;
          }
          inList = true;
          depth = 0;
          out.push(pyEsc(rewriteMarker(line, 0, ordered ? marker : '-', ordered)));
          i++;
          prev = 'list';
          lastBlank = false;
          continue;
        }
        const level = Math.min(Math.floor(markerIndent / 4), depth + 1);
        depth = level;
        if (!ordered) marker = '-';
        out.push(pyEsc(rewriteMarker(line, level * 4, marker, ordered)));
        i++;
        prev = 'list';
        lastBlank = false;
        continue;
      }
      if (inList && ind < 4 && classify(trimmed) === 'heading') {
        inList = false;
        depth = -1;
      }
      if (inList) {
        if (!lastBlank) {
          // lazy continuation of the current item
          out.push(pyEsc(line));
          i++;
          lastBlank = false;
          continue;
        }
        if (ind >= 4) {
          out.push(pyEsc(line, ind >= (depth + 2) * 4));
          i++;
          prev = 'list';
          lastBlank = false;
          continue;
        }
        // un-indented text after a blank line ends the list (CommonMark would keep it in the item)
        inList = false;
        depth = -1;
        out.push(pyEsc(trimmed));
        i++;
        prev = classify(trimmed);
        lastBlank = false;
        continue;
      }
      // Python-Markdown accepts "#Heading" without a space
      const hm = /^(#{1,6})([^#\s].*)$/.exec(line);
      if (hm && prev !== 'para') {
        out.push(pyEsc(`${hm[1]} ${hm[2]}`));
        i++;
        prev = 'heading';
        lastBlank = false;
        continue;
      }
    }

    out.push(pyEsc(line, ind >= 4 && prev !== 'para'));
    if (py && !inList && ind <= 3 && trimmed.startsWith('>')) quoteOpen = true;
    i++;
    prev = classify(trimmed);
    lastBlank = false;
  }
  if (tabGroupOpen) out.push('</div>', '');
  return out;
}

function rewriteMarker(line: string, newIndent: number, marker: string, ordered: boolean): string {
  const m = LIST_RE.exec(line)!;
  const mk = ordered ? m[2]! : marker;
  // Python-Markdown strips the gap after the marker; in CommonMark 5+ spaces would start an indented code block.
  const gap = m[3] && m[3].length < 5 ? m[3] : ' ';
  return ' '.repeat(newIndent) + mk + gap + m[4];
}

// Python-Markdown's code-span pattern (markdown/inlinepatterns.py BACKTICK_RE). Unlike CommonMark, an opening run
// without a closing run of the same length still matches with fewer backticks: "``a` b" → <code>`a</code> b.
const PY_BACKTICK = /(?<!\\)((?:\\{2})+)(?=`+)|(?<!\\)(`+)(.+?)(?<!`)\2(?!`)/g;
const cmCodes = (line: string) =>
  codeSegments(line)
    .filter(([code]) => code)
    .map(([, t]) => t.replace(/^`+|`+$/g, '').trim());
/**
 * python-markdown compat: rewrite the code spans of a line that holds a run of 2+ backticks so CommonMark pairs
 * them exactly like Python-Markdown did. The line is left alone unless the rewritten spans match Python's.
 */
function pyCodeSpans(line: string): string {
  if (!line.includes('``')) return line;
  const py: string[] = [];
  const out = line.replace(PY_BACKTICK, (m: string, _esc: string | undefined, ticks: string | undefined, content: string) => {
    if (!ticks) return m;
    const c = content.trim();
    py.push(c);
    const longest = Math.max(0, ...(c.match(/`+/g) ?? []).map((r) => r.length));
    const fence = '`'.repeat(longest + 1);
    const pad = c.startsWith('`') || c.endsWith('`') ? ' ' : '';
    return fence + pad + c + pad + fence;
  });
  const cm = cmCodes(out);
  return cm.length === py.length && cm.every((c, n) => c === py[n]) ? out : line;
}

function classify(trimmed: string): Kind {
  if (/^#{1,6}(\s|$)/.test(trimmed)) return 'heading';
  if (HR_RE.test(trimmed)) return 'block';
  if (/^(<|>|\||```|~~~|\[\^?[^\]]+\]:)/.test(trimmed)) return 'block';
  if (/^(=+|-+)\s*$/.test(trimmed)) return 'block';
  return 'para';
}
