import { useRef, type ComponentType, type MouseEvent, type ReactNode } from 'react';
import { PixelIcon } from './PixelIcon';
import { useDismissableDetails } from './menu';
import { uiStrings, type UiStrings } from './i18n';
import { writePref } from './prefs';

export interface LocaleOption {
  /** Site locale code, e.g. "en", "zh", "zh-CN". */
  code: string;
  /** Native label, e.g. "English", "简体中文". */
  label: string;
  /** Shorter label for the closed trigger, e.g. "EN" (defaults to `label`; the menu always shows `label`). */
  short?: string;
  /** BCP-47 language tag for hreflang/lang — also the value stored as the cross-site language preference. */
  lang: string;
  /**
   * Destination for this locale (the equivalent page, or that locale's home). Without `href` the option is a
   * button: the language is app state (e.g. pkg.levimc.org, static pages), not part of the URL.
   */
  href?: string;
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
  /**
   * Called when the visitor picks a language (after the choice was stored as the cross-site preference,
   * unless `persist` is false). Link options then navigate; button options rely on this to re-render.
   */
  onSelect?: (code: string, option: LocaleOption) => void;
  /** Store the choice as the cross-site `levimc_lang` preference (default true). */
  persist?: boolean;
  /** Router-aware link component (defaults to <a>). */
  linkComponent?: ComponentType<LinkLikeProps>;
  /** Show the current language name next to the globe (hidden on narrow screens by CSS). */
  showLabel?: boolean;
  /** Chrome strings (the menu's own label follows the current option's language by default). */
  strings?: Partial<UiStrings>;
  className?: string;
}

/** The language menu (globe ▾). In the GlobalBar on every LeviMC site; usable on its own too. */
export function LocaleSwitcher({ options, current, onSelect, persist = true, linkComponent, showLabel = true, strings, className }: LocaleSwitcherProps) {
  const ref = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(ref);
  const cur = options.find((o) => o.code === current) ?? options[0];
  const t = uiStrings(cur?.lang, strings);
  const Link = (linkComponent ?? 'a') as ComponentType<LinkLikeProps>;
  if (!cur) return null;
  const choose = (o: LocaleOption, e: MouseEvent<HTMLElement>) => {
    // A modified click on a link opens the other locale in a new tab/window and leaves this page as it is:
    // it is not a choice, so the cross-site preference stays untouched (and this page does not re-render).
    if (o.href !== undefined && (e.ctrlKey || e.metaKey || e.shiftKey || e.altKey || e.button !== 0)) return;
    if (persist) writePref('lang', o.lang);
    onSelect?.(o.code, o);
  };
  return (
    <details ref={ref} className={className ? `kit-menu kit-locale ${className}` : 'kit-menu kit-locale'}>
      <summary className="mc-icon-btn kit-menu-trigger" data-kit-locale-switcher="" aria-label={`${t.language}: ${cur.label}`} title={t.language} data-kit-t-title="language">
        <PixelIcon name="globe" />
        {showLabel ? (
          <span className="kit-menu-trigger-label" lang={cur.lang}>
            {cur.short ?? cur.label}
          </span>
        ) : null}
        <PixelIcon name="chevronDown" className="kit-menu-chevron" />
      </summary>
      <div className="kit-menu-panel" role="menu" aria-label={t.language} data-kit-t-aria="language">
        {options.map((o) => {
          const active = o.code === cur.code;
          const inner = (
            <>
              <span>{o.label}</span>
              {active ? <PixelIcon name="check" className="kit-menu-check" /> : null}
            </>
          );
          const common = {
            role: 'menuitemradio',
            'aria-checked': active,
            lang: o.lang,
            className: active ? 'kit-menu-item is-active' : 'kit-menu-item',
            'data-locale': o.code,
            'data-kit-lang-value': o.lang,
          };
          return o.href !== undefined ? (
            <Link key={o.code} {...common} href={o.href} hrefLang={o.lang} onClick={(e: MouseEvent<HTMLAnchorElement>) => choose(o, e)}>
              {inner}
            </Link>
          ) : (
            <button key={o.code} type="button" {...common} onClick={(e) => choose(o, e)}>
              {inner}
            </button>
          );
        })}
      </div>
    </details>
  );
}
