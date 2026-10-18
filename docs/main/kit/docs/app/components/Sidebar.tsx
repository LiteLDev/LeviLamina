import { useEffect, useRef, useState } from 'react';
import type { NavItem, SidebarData } from '../../shared/types';
import { href } from '../data';
import { KitLink } from './KitLink';
import { afterPaint, revealIn } from './reveal';
import { PixelIcon } from '../../../components/PixelIcon';

const LINK_GLYPH_END = /(?:🔗|↗️?|⧉)\s*$/u;

function containsPath(it: NavItem, path: string): boolean {
  return (!!it.link && !it.external && it.link === path) || !!it.items?.some((c) => containsPath(c, path));
}

interface ItemProps {
  item: NavItem;
  path: string;
  depth: number;
  onNavigate?: () => void;
  idPath: string;
  expand?: boolean;
  collapse?: boolean;
}

function Group({ item, path, depth, onNavigate, idPath, expand, collapse }: ItemProps) {
  const active = containsPath(item, path);
  // open: the group holding the current page; groups marked collapsed: false; else VitePress (expand) opens all
  // but `collapsed: true`, MkDocs opens the top level unless the tabs sidebar collapses groups (Material default)
  const [open, setOpen] = useState(active || item.collapsed === false || (!item.collapsed && (expand || (depth === 0 && !collapse))));
  // reveal the current page after client-side navigation
  useEffect(() => {
    if (active) setOpen(true);
  }, [active]);
  const listId = `kit-sb-${idPath}`;
  return (
    <li className={`kit-sb-group${active ? ' has-active' : ''}`} data-depth={depth}>
      <button type="button" className="kit-sb-group-btn" aria-expanded={open} aria-controls={listId} onClick={() => setOpen(!open)}>
        <span>{item.text}</span>
        <PixelIcon name="chevronRight" className="kit-sb-chevron" />
      </button>
      <ul id={listId} className="kit-sb-list" hidden={!open}>
        {item.items!.map((c, i) => (
          <Item key={i} item={c} path={path} depth={depth + 1} onNavigate={onNavigate} idPath={`${idPath}-${i}`} expand={expand} collapse={collapse} />
        ))}
      </ul>
    </li>
  );
}

function Item({ item, path, depth, onNavigate, idPath, expand, collapse }: ItemProps) {
  if (item.items) return <Group item={item} path={path} depth={depth} onNavigate={onNavigate} idPath={idPath} expand={expand} collapse={collapse} />;
  if (!item.link) return null;
  const current = !item.external && item.link === path;
  return (
    <li>
      {item.external ? (
        <a className="kit-sb-link" href={item.link} target="_blank" rel="noopener">
          <span>{item.text}</span>
          {/* a label that already ends in a link glyph ("Doxygen API 🔗") gets no second one */}
          {LINK_GLYPH_END.test(item.text) ? null : <PixelIcon name="external" className="kit-sb-ext" />}
        </a>
      ) : (
        <KitLink className={current ? 'kit-sb-link is-active' : 'kit-sb-link'} href={href(item.link)} aria-current={current ? 'page' : undefined} onClick={onNavigate}>
          <span>{item.text}</span>
        </KitLink>
      )}
    </li>
  );
}

export function Sidebar({ data, path, label, onNavigate }: { data: SidebarData; path: string; label: string; onNavigate?: () => void }) {
  const ref = useRef<HTMLElement>(null);
  const revealed = useRef(false);
  // keep the current page's link in view in the sticky sidebar (after its group has opened):
  // centred on the first page, then only nudged inside the edges so a clicked link does not jump under the pointer
  useEffect(
    () =>
      afterPaint(() => {
        const nav = ref.current;
        revealIn(nav?.closest<HTMLElement>('.kit-doc-sidebar-inner') ?? null, nav?.querySelector<HTMLElement>('.kit-sb-link.is-active') ?? null, revealed.current ? 'nearest' : 'center');
        revealed.current = true;
      }),
    [path],
  );
  return (
    <nav ref={ref} className="kit-sidebar-nav" aria-label={label}>
      {data.title ? <p className="kit-sb-title">{data.title}</p> : null}
      <ul className="kit-sb-list kit-sb-root">
        {data.items.map((it, i) => (
          <Item key={i} item={it} path={path} depth={0} onNavigate={onNavigate} idPath={String(i)} expand={data.expand} collapse={data.collapseGroups} />
        ))}
      </ul>
    </nav>
  );
}
