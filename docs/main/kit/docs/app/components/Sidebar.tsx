import { useEffect, useState } from 'react';
import type { NavItem, SidebarData } from '../../shared/types';
import { href } from '../data';
import { KitLink } from './KitLink';
import { PixelIcon } from '../../../components/PixelIcon';

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
}

function Group({ item, path, depth, onNavigate, idPath, expand }: ItemProps) {
  const active = containsPath(item, path);
  const [open, setOpen] = useState(active || (!item.collapsed && (expand || depth === 0)));
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
          <Item key={i} item={c} path={path} depth={depth + 1} onNavigate={onNavigate} idPath={`${idPath}-${i}`} expand={expand} />
        ))}
      </ul>
    </li>
  );
}

function Item({ item, path, depth, onNavigate, idPath, expand }: ItemProps) {
  if (item.items) return <Group item={item} path={path} depth={depth} onNavigate={onNavigate} idPath={idPath} expand={expand} />;
  if (!item.link) return null;
  const current = !item.external && item.link === path;
  return (
    <li>
      {item.external ? (
        <a className="kit-sb-link" href={item.link} target="_blank" rel="noopener">
          <span>{item.text}</span>
          <PixelIcon name="external" className="kit-sb-ext" />
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
  return (
    <nav className="kit-sidebar-nav" aria-label={label}>
      {data.title ? <p className="kit-sb-title">{data.title}</p> : null}
      <ul className="kit-sb-list kit-sb-root">
        {data.items.map((it, i) => (
          <Item key={i} item={it} path={path} depth={0} onNavigate={onNavigate} idPath={String(i)} expand={data.expand} />
        ))}
      </ul>
    </nav>
  );
}
