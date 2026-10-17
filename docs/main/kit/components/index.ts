// levimc-kit — shared React components for every LeviMC site.
export { GlobalBar, type GlobalBarProps } from './GlobalBar';
export { SiteFooter, type SiteFooterProps } from './SiteFooter';
export { ThemeToggle, type ThemeToggleProps } from './ThemeToggle';
export { LocaleSwitcher, type LocaleSwitcherProps, type LocaleOption, type LinkLikeProps } from './LocaleSwitcher';
export { PaintedBackdrop, type PaintedBackdropProps } from './PaintedBackdrop';
export { PaintedHero, type PaintedHeroProps, type HeroAction } from './PaintedHero';
export { PixelButton, pixelButtonClass, type PixelButtonProps } from './PixelButton';
export { Card, type CardProps } from './Card';
export { Badge, type BadgeProps, type BadgeTone } from './Badge';
export { Tooltip, type TooltipProps } from './Tooltip';
export { HotbarTabs, Pagination, type HotbarTab, type HotbarTabsProps, type PaginationProps } from './Hotbar';
export { PixelIcon, BrandIcon, type PixelIconProps, type PixelIconName, type BrandIconName } from './PixelIcon';
export { PIXEL_ICONS } from './pixel-icons';
export {
  ThemeProvider,
  useTheme,
  useMounted,
  themeInitScript,
  createThemeInitScript,
  applyThemePreference,
  readThemePreference,
  resolveTheme,
  nextThemePreference,
  THEME_STORAGE_KEY,
  type ThemePreference,
  type ResolvedTheme,
} from './theme';
export { LINKS, DOCS_PROJECTS, SOCIAL, NOT_AFFILIATED, COPYRIGHT_HOLDER, globalNav, type DocsProject, type DocsProjectId, type SiteId, type SocialLink } from './projects';
export { UI_LOCALES, UI_STRINGS, resolveUiLocale, uiStrings, type UiLocale, type UiStrings } from './i18n';
export { GOOGLE_FONTS_HREF, FONT_HEAD_HTML } from './fonts';
export { useDismissableDetails } from './menu';
export { lilyPond, harborSunrise, sceneToSvg, type Scene, type Shape } from './paint';
