import { useEffect, useMemo, useRef, useState, type KeyboardEvent, type ReactNode } from 'react';
import { useNavigate } from 'react-router';
import type MiniSearchType from 'minisearch';
import type { SearchDoc } from '../../shared/types';
import { searchOptions, tokenizeQuery } from '../../shared/search';
import { href, site } from '../data';
import { internalTarget } from './KitLink';
import { useFocusTrap } from './focus';
import { PixelIcon } from '../../../components/PixelIcon';
import type { UiStrings } from '../../../components/i18n';

type Result = Pick<SearchDoc, 'title' | 'page' | 'crumbs' | 'path' | 'text'> & { id: number; score: number; terms: string[] };

const indexCache = new Map<string, Promise<MiniSearchType<SearchDoc>>>();
function loadIndex(locale: string): Promise<MiniSearchType<SearchDoc>> {
  let p = indexCache.get(locale);
  if (!p) {
    const url = site.search[locale] ?? site.search[site.defaultLocale];
    p = Promise.all([import('minisearch'), fetch(url!).then((r) => {
      if (!r.ok) throw new Error(`search index ${r.status}`);
      return r.text();
    })]).then(([mod, json]) => mod.default.loadJSON<SearchDoc>(json, searchOptions));
    p.catch(() => indexCache.delete(locale));
    indexCache.set(locale, p);
  }
  return p;
}

const escapeRe = (s: string) => s.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');

function highlight(text: string, terms: string[]): ReactNode[] {
  const clean = [...new Set(terms.filter((t) => t.length > 0))].sort((a, b) => b.length - a.length);
  if (!clean.length) return [text];
  const re = new RegExp(`(${clean.map(escapeRe).join('|')})`, 'giu');
  return text.split(re).map((part, i) => (i % 2 === 1 ? <mark key={i}>{part}</mark> : part));
}

function snippet(text: string, terms: string[], len = 150): string {
  if (!text) return '';
  const lower = text.toLowerCase();
  let pos = -1;
  for (const t of terms) {
    const i = lower.indexOf(t.toLowerCase());
    if (i >= 0 && (pos < 0 || i < pos)) pos = i;
  }
  if (pos < 0) return text.slice(0, len) + (text.length > len ? '…' : '');
  const start = Math.max(0, pos - 50);
  const s = text.slice(start, start + len);
  return (start > 0 ? '…' : '') + s + (start + len < text.length ? '…' : '');
}

export function SearchModal({ open, onClose, locale, t }: { open: boolean; onClose: () => void; locale: string; t: UiStrings }) {
  const [query, setQuery] = useState('');
  const [index, setIndex] = useState<MiniSearchType<SearchDoc> | null>(null);
  const [error, setError] = useState(false);
  const [sel, setSel] = useState(0);
  const panel = useRef<HTMLDivElement>(null);
  const list = useRef<HTMLUListElement>(null);
  const navigate = useNavigate();
  useFocusTrap(panel, open, onClose);

  useEffect(() => {
    if (!open) return;
    setIndex(null);
    setError(false);
    let live = true;
    loadIndex(locale).then(
      (ix) => live && setIndex(ix),
      () => live && setError(true),
    );
    return () => {
      live = false;
    };
  }, [open, locale]);

  const results: Result[] = useMemo(() => {
    const q = query.trim();
    if (!index || !q) return [];
    const opts = {
      prefix: (term: string) => term.length > 1,
      fuzzy: (term: string) => (term.length > 4 && /^[\x00-\x7f]+$/.test(term) ? 0.2 : false),
      boost: { title: 3, page: 1.6, crumbs: 0.6 },
      tokenize: tokenizeQuery,
    };
    let r = index.search(q, { ...opts, combineWith: 'AND' });
    if (!r.length) r = index.search(q, { ...opts, combineWith: 'OR' });
    return r.slice(0, 24) as unknown as Result[];
  }, [index, query]);

  useEffect(() => setSel(0), [query]);
  useEffect(() => {
    list.current?.querySelector<HTMLElement>(`[data-index="${sel}"]`)?.scrollIntoView({ block: 'nearest' });
  }, [sel]);

  if (!open) return null;

  const go = (r: Result) => {
    const url = href(r.path);
    const to = internalTarget(url);
    onClose();
    if (to) navigate(to);
    else window.location.href = url;
  };
  const onKeyDown = (e: KeyboardEvent) => {
    if (e.key === 'ArrowDown') {
      e.preventDefault();
      setSel((s) => Math.min(results.length - 1, s + 1));
    } else if (e.key === 'ArrowUp') {
      e.preventDefault();
      setSel((s) => Math.max(0, s - 1));
    } else if (e.key === 'Enter' && results[sel]) {
      e.preventDefault();
      go(results[sel]!);
    }
  };
  const optionId = (i: number) => `kit-search-opt-${i}`;
  const q = query.trim();
  const terms = tokenizeQuery(q).concat(q.split(/\s+/));

  return (
    <div className="kit-search-root">
      <div className="kit-search-scrim" onClick={onClose} aria-hidden="true" />
      <div ref={panel} className="kit-search" role="dialog" aria-modal="true" aria-label={t.search} onKeyDown={onKeyDown}>
        <div className="kit-search-field mc-input">
          <PixelIcon name="search" />
          <input
            data-autofocus=""
            type="search"
            role="combobox"
            aria-expanded={results.length > 0}
            aria-controls="kit-search-list"
            aria-activedescendant={results.length ? optionId(sel) : undefined}
            aria-autocomplete="list"
            autoComplete="off"
            spellCheck={false}
            placeholder={t.searchPlaceholder}
            value={query}
            onChange={(e) => setQuery(e.target.value)}
          />
          <button type="button" className="mc-icon-btn kit-search-close" onClick={onClose} aria-label={t.close}>
            <kbd className="mc-kbd">Esc</kbd>
          </button>
        </div>
        <div className="kit-search-body">
          {!index && !error ? <p className="kit-search-status">{t.searchLoading}</p> : null}
          {error ? <p className="kit-search-status">Search index unavailable.</p> : null}
          {index && q && !results.length ? (
            <p className="kit-search-status">
              {t.searchNoResults} “{q}”
            </p>
          ) : null}
          {results.length ? (
            <ul id="kit-search-list" ref={list} role="listbox" aria-label={t.search} className="kit-search-list">
              {results.map((r, i) => (
                <li
                  key={r.id}
                  id={optionId(i)}
                  role="option"
                  aria-selected={i === sel}
                  data-index={i}
                  className={i === sel ? 'kit-search-item is-active' : 'kit-search-item'}
                  onMouseMove={() => setSel(i)}
                  onClick={() => go(r)}
                >
                  <a href={href(r.path)} tabIndex={-1} onClick={(e) => e.preventDefault()}>
                    <span className="kit-search-crumbs">
                      {r.crumbs ? <span>{r.crumbs}</span> : null}
                      {r.crumbs && r.title !== r.page ? <PixelIcon name="chevronRight" /> : null}
                      {r.title !== r.page ? <span>{r.page}</span> : null}
                    </span>
                    <span className="kit-search-title">
                      {r.title !== r.page ? <PixelIcon name="hash" className="kit-search-hash" /> : null}
                      <span>{highlight(r.title, terms)}</span>
                    </span>
                    {r.text ? <span className="kit-search-snippet">{highlight(snippet(r.text, terms), terms)}</span> : null}
                  </a>
                </li>
              ))}
            </ul>
          ) : null}
        </div>
        <div className="kit-search-foot" aria-hidden="true">
          <span>
            <kbd className="mc-kbd">↑</kbd>
            <kbd className="mc-kbd">↓</kbd> {t.searchNavigate}
          </span>
          <span>
            <kbd className="mc-kbd">Enter</kbd> {t.searchSelect}
          </span>
          <span>
            <kbd className="mc-kbd">Esc</kbd> {t.searchClose}
          </span>
        </div>
      </div>
    </div>
  );
}
