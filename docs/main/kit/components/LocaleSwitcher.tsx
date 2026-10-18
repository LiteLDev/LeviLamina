import { useRef, type ComponentType, type MouseEvent, type ReactNode } from 'react';
import { PixelIcon } from './PixelIcon';
import { useDismissableDetails } from './menu';
import { uiStrings } from './i18n';

export interface LocaleOption {
  /** Site locale code, e.g. "en", "zh", "zh-CN". */
  code: string;
  /** Native label, e.g. "English", "简体中文". */
  label: string;
  /** BCP-47 language tag for hreflang/lang. */
  lang: string;
  /** Destination for this locale (the equivalent page, or that locale's home). */
  href: string;
}

export interface LinkLikeProps {
  href: string;
  className?: string;
  children?: ReactNode;
  onClick?: (e: MouseEvent<HTMLAnchorElement>) => void;
  [attr: string]: unknown;
}

export interface LocaleSwitcherProps {
  options: LocaleOption[];
  current: string;
  /** Called before navigating (e.g. persist the preference). */
  onSelect?: (code: string) => void;
  /** Router-aware link component (defaults to <a>). */
  linkComponent?: ComponentType<LinkLikeProps>;
  /** Show the current language name next to the globe (hidden on narrow screens by CSS). */
  showLabel?: boolean;
  className?: string;
}

export function LocaleSwitcher({ options, current, onSelect, linkComponent, showLabel = true, className }: LocaleSwitcherProps) {
  const ref = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(ref);
  const cur = options.find((o) => o.code === current) ?? options[0];
  const t = uiStrings(cur?.lang);
  const Link = (linkComponent ?? 'a') as ComponentType<LinkLikeProps>;
  if (!cur || options.length < 2) return null;
  return (
    <details ref={ref} className={className ? `kit-menu kit-locale ${className}` : 'kit-menu kit-locale'}>
      <summary className="mc-icon-btn kit-menu-trigger" data-kit-locale-switcher="" aria-label={`${t.language}: ${cur.label}`} title={t.language}>
        <PixelIcon name="globe" />
        {showLabel ? <span className="kit-menu-trigger-label">{cur.label}</span> : null}
        <PixelIcon name="chevronDown" className="kit-menu-chevron" />
      </summary>
      <div className="kit-menu-panel" role="menu" aria-label={t.language}>
        {options.map((o) => (
          <Link
            key={o.code}
            role="menuitemradio"
            aria-checked={o.code === cur.code}
            href={o.href}
            hrefLang={o.lang}
            lang={o.lang}
            className={o.code === cur.code ? 'kit-menu-item is-active' : 'kit-menu-item'}
            data-locale={o.code}
            onClick={() => onSelect?.(o.code)}
          >
            <span>{o.label}</span>
            {o.code === cur.code ? <PixelIcon name="check" className="kit-menu-check" /> : null}
          </Link>
        ))}
      </div>
    </details>
  );
}
