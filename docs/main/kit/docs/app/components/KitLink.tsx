import type { MouseEvent } from 'react';
import { useNavigate } from 'react-router';
import { matchPathname, preloadPage, site } from '../data';
import type { LinkLikeProps } from '../../../components/LocaleSwitcher';

/** Is this href an internal page of the current site (SPA-navigable)? Returns the router path. */
export function internalTarget(href: string): string | null {
  if (typeof window !== 'undefined') {
    try {
      const u = new URL(href, window.location.href);
      if (u.origin !== window.location.origin) return null;
      if (!matchPathname(u.pathname)) return null;
      return '/' + u.pathname.slice(site.base.length) + u.search + u.hash;
    } catch {
      return null;
    }
  }
  if (!href.startsWith(site.base)) return null;
  return '/' + href.slice(site.base.length);
}

export function isPlainLeftClick(e: MouseEvent | globalThis.MouseEvent) {
  return e.button === 0 && !e.metaKey && !e.ctrlKey && !e.shiftKey && !e.altKey;
}

/**
 * Anchor with an exact, absolute href (what GitHub Pages serves without redirects) that navigates
 * client-side through react-router for internal pages, preloading the page chunk on hover/focus.
 */
export function KitLink({ href, children, onClick, target, ...rest }: LinkLikeProps & { target?: string }) {
  const navigate = useNavigate();
  const warm = () => {
    if (!href.startsWith(site.base)) return;
    const r = matchPathname(href.split('#')[0]!.split('?')[0]!);
    if (r) preloadPage(r.page);
  };
  return (
    <a
      href={href}
      target={target}
      {...(rest as Record<string, unknown>)}
      onMouseEnter={warm}
      onFocus={warm}
      onClick={(e) => {
        onClick?.(e);
        if (e.defaultPrevented || target === '_blank' || !isPlainLeftClick(e)) return;
        const to = internalTarget(href);
        if (!to) return;
        e.preventDefault();
        navigate(to);
      }}
    >
      {children}
    </a>
  );
}
