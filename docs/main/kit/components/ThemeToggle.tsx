import { useRef } from 'react';
import { useTheme, type ThemePreference } from './theme';
import { PixelIcon } from './PixelIcon';
import { useDismissableDetails } from './menu';
import { uiStrings, type UiStrings } from './i18n';
import type { PixelIconName } from './pixel-icons';

export interface ThemeSwitcherProps {
  /** UI locale (any BCP-47 tag) for the labels. */
  locale?: string;
  strings?: Partial<UiStrings>;
  /** Show the current state's name next to its icon (hidden on narrow screens by CSS). */
  showLabel?: boolean;
  className?: string;
}

const STATES: { pref: ThemePreference; icon: PixelIconName; key: 'themeAuto' | 'themeLight' | 'themeDark' }[] = [
  { pref: 'auto', icon: 'monitor', key: 'themeAuto' },
  { pref: 'light', icon: 'sun', key: 'themeLight' },
  { pref: 'dark', icon: 'moon', key: 'themeDark' },
];

/**
 * The theme menu: Auto (follows the system, the default) / Light / Dark. The trigger shows the current state's
 * sprite and name and the menu checks it; both are chosen by CSS from <html data-theme-pref> (set by the
 * pre-paint script), so they are right on the very first paint and never cause a hydration mismatch.
 * aria-label / aria-checked follow the state after hydration. The choice is shared by every LeviMC site.
 */
export function ThemeSwitcher({ locale, strings, showLabel = true, className }: ThemeSwitcherProps) {
  const ref = useRef<HTMLDetailsElement>(null);
  useDismissableDetails(ref);
  const { preference, setPreference } = useTheme();
  const t = uiStrings(locale, strings);
  const cur = STATES.find((s) => s.pref === preference);
  return (
    <details ref={ref} className={className ? `kit-menu kit-theme ${className}` : 'kit-menu kit-theme'}>
      <summary
        className="mc-icon-btn kit-menu-trigger kit-theme-trigger"
        data-kit-theme-toggle=""
        aria-label={cur ? `${t.theme}: ${t[cur.key]}` : t.theme}
        title={t.theme}
        data-kit-t-title="theme"
      >
        {STATES.map((s) => (
          <PixelIcon key={s.pref} name={s.icon} className={`kit-theme-icon kit-theme-icon-${s.pref}`} />
        ))}
        {showLabel ? (
          <span className="kit-menu-trigger-label kit-theme-label">
            {STATES.map((s) => (
              <span key={s.pref} className={`kit-theme-state kit-theme-state-${s.pref}`} data-kit-t={s.key}>
                {t[s.key]}
              </span>
            ))}
          </span>
        ) : null}
        <PixelIcon name="chevronDown" className="kit-menu-chevron" />
      </summary>
      <div className="kit-menu-panel" role="menu" aria-label={t.theme} data-kit-t-aria="theme">
        {STATES.map((s) => (
          <button
            key={s.pref}
            type="button"
            role="menuitemradio"
            aria-checked={preference === s.pref}
            className={`kit-menu-item kit-theme-option kit-theme-option-${s.pref}`}
            data-kit-theme-value={s.pref}
            onClick={() => setPreference(s.pref)}
          >
            <span className="kit-theme-option-label">
              <PixelIcon name={s.icon} />
              <span data-kit-t={s.key}>{t[s.key]}</span>
            </span>
            <PixelIcon name="check" className="kit-menu-check kit-theme-check" />
          </button>
        ))}
      </div>
    </details>
  );
}

/** @deprecated kit 1.0 name; renders the {@link ThemeSwitcher} menu. The GlobalBar includes it on every site. */
export type ThemeToggleProps = ThemeSwitcherProps & { /** @deprecated ignored */ tooltipAlign?: 'center' | 'end' };
/** @deprecated kit 1.0 name; renders the {@link ThemeSwitcher} menu. */
export function ThemeToggle({ tooltipAlign: _tooltipAlign, ...props }: ThemeToggleProps) {
  return <ThemeSwitcher {...props} />;
}
