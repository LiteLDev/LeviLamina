import { useId } from 'react';
import { useTheme } from './theme';
import { PixelIcon } from './PixelIcon';
import { uiStrings, type UiStrings } from './i18n';

export interface ThemeToggleProps {
  /** UI locale (any BCP-47 tag) for the label. */
  locale?: string;
  strings?: Partial<UiStrings>;
  className?: string;
  /** Tooltip alignment relative to the button (default 'end': it opens below, right-aligned). */
  tooltipAlign?: 'center' | 'end';
}

/**
 * One button, three states (light ☀ / dark ☾ / system 🖥). The icon and the Minecraft item tooltip are
 * chosen by CSS from <html data-theme-pref> (set by the pre-paint script), so they are right on the very
 * first paint and never cause a hydration mismatch; the aria-label follows the state after hydration.
 * Click order: system → opposite of system → the other explicit theme → system.
 */
export function ThemeToggle({ locale, strings, className, tooltipAlign = 'end' }: ThemeToggleProps) {
  const { preference, cycle } = useTheme();
  const t = uiStrings(locale, strings);
  const tipId = 'kit-theme-tip-' + useId().replace(/[^a-zA-Z0-9]/g, '');
  const name = preference === 'light' ? t.themeLight : preference === 'dark' ? t.themeDark : preference === 'system' ? t.themeSystem : null;
  const label = name ? `${t.theme}: ${name} — ${t.switchTheme}` : `${t.theme} — ${t.switchTheme}`;
  return (
    <span className="kit-tooltip-host kit-theme-toggle-host" data-placement="bottom" data-align={tooltipAlign}>
      <button
        type="button"
        className={className ? `mc-icon-btn kit-theme-toggle ${className}` : 'mc-icon-btn kit-theme-toggle'}
        data-kit-theme-toggle=""
        onClick={cycle}
        aria-label={label}
        aria-describedby={tipId}
      >
        <PixelIcon name="sun" className="kit-theme-icon kit-theme-icon-light" />
        <PixelIcon name="moon" className="kit-theme-icon kit-theme-icon-dark" />
        <PixelIcon name="monitor" className="kit-theme-icon kit-theme-icon-system" />
      </button>
      <span role="tooltip" id={tipId} className="mc-tooltip kit-tooltip kit-theme-tip">
        <span className="mc-tooltip-title">
          <span className="kit-theme-state kit-theme-state-light">
            {t.theme}: {t.themeLight}
          </span>
          <span className="kit-theme-state kit-theme-state-dark">
            {t.theme}: {t.themeDark}
          </span>
          <span className="kit-theme-state kit-theme-state-system">
            {t.theme}: {t.themeSystem}
          </span>
        </span>
        <span className="mc-tooltip-lore">{t.switchTheme}</span>
      </span>
    </span>
  );
}
