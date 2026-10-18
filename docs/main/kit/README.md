# levimc-kit

The shared design system and static docs engine for every LeviMC website — levimc.org, pkg.levimc.org and
the project docs at `docs.levimc.org/<Project>/` (LeviLamina, LegacyScriptEngine, lip, LeviLauncher,
LeviLaunchroid), plus the Doxygen API reference.

**Design concept: "Impression, Craft".** Monet's Giverny rendered as if built in Minecraft.
*Painterly = atmosphere* (impressionist colour fields and brush-dab texture in heroes, backdrops and margins);
*Pixel = structure* (crisp stepped geometry on every interactive affordance). Reading surfaces stay calm
"canvas" at WCAG AA contrast and a ~76ch measure. Light theme = *Nymphéas*, dark theme = *Impression, soleil levant*.

**Stack:** Vite 8 + React 19 + react-router 7 + TypeScript + Tailwind CSS v4 (`@tailwindcss/vite`).
Docs sites are compiled at build time (unified/remark/rehype + Shiki) and statically prerendered — one real
HTML file per URL for GitHub Pages — then hydrated into a SPA.

Version: see `VERSION` (1.1.0) and the [Changelog](#changelog) (with migration notes for every site).

---

## Contents

1. [Layout](#layout)
2. [Vendoring](#vendoring)
3. [Dependencies](#dependencies)
4. [Docs site: app structure & commands](#docs-site-app-structure--commands)
5. [Site config API (`defineDocsConfig`)](#site-config-api-definedocsconfig)
6. [Markdown support](#markdown-support)
7. [Plain Vite apps (levimc.org, pkg.levimc.org)](#plain-vite-apps-levimcorg-pkglevimcorg) · [Cross-site preferences](#cross-site-preferences)
8. [Components](#components)
9. [Static chrome & Doxygen](#static-chrome--doxygen)
10. [Verification scripts](#verification-scripts)
11. [Design rules — do / don't](#design-rules--do--dont)
12. [Porting checklist: MkDocs sites](#porting-checklist-mkdocs-sites-levilamina-legacyscriptengine)
13. [Porting checklist: VitePress sites](#porting-checklist-vitepress-sites-lip-levilauncher-levilaunchroid)
14. [Known limitations](#known-limitations)
15. [Maintaining the kit](#maintaining-the-kit)
16. [Changelog](#changelog)

---

## Layout

```
levimc-kit/
├── README.md  VERSION  package.template.json  tsconfig.template.json
├── theme/                 Tailwind v4 CSS-first theme
│   ├── tailwind.css         one-line entry: @import "tailwindcss" + index.css + @source for the kit
│   ├── index.css            imports everything below except hero.css (use after your own @import "tailwindcss")
│   ├── fonts.css            metric-matched fallback faces (Inter/Fraunces/JetBrains Mono/Silkscreen): no CLS on swap
│   ├── tokens.css           @theme tokens (light on :root, dark on .dark) + @custom-variant dark
│   ├── generated.css        textures & sprites as data URIs (generated — do not edit)
│   ├── hero.css             PaintedHero's default scenes as cached backgrounds (generated; imported by PaintedHero)
│   ├── base.css             document defaults, focus ring, skip link, reduced motion, :lang(ko|ru) rules
│   ├── pixel.css            .px-corners .mc-btn .mc-btn-primary .mc-icon-btn .mc-input .mc-kbd .px-card
│   │                        .kit-slot .hotbar .mc-tooltip .grass-divider .px-dot
│   ├── painterly.css        .kit-backdrop* .kit-hero* .kit-painted .kit-item-frame
│   ├── prose.css            .kit-prose doc typography (headings, lists, tables, quotes, footnotes, details…)
│   ├── code.css             .kit-code Shiki blocks (title bar, CSS line numbers, copy button)
│   ├── admonitions.css      .kit-adm (all MkDocs + VitePress + GitHub types) and .kit-tabs
│   └── chrome.css           GlobalBar, footer, menus, theme + language menus, badges, tooltips, cards, hero layout
├── assets/
│   ├── sprites.mjs          16×16 pixel sprites as text grids (the source of truth)
│   ├── build-assets.mjs     → icons/*.svg, components/pixel-icons.ts, theme/generated.css, theme/hero.css
│   └── icons/*.svg          36 crisp-edge sprites (grass, chest, pickaxe, map, book-quill, emerald, …)
├── components/            React + TS, SSR-safe (no window access during render)
│   ├── index.ts             barrel export
│   ├── GlobalBar.tsx (GlobalBar, GlobalNavList)  SiteFooter.tsx  LocaleSwitcher.tsx
│   ├── ThemeToggle.tsx (ThemeSwitcher; ThemeToggle = deprecated alias)
│   ├── PaintedBackdrop.tsx  PaintedHero.tsx  PixelButton.tsx  Card.tsx  Badge.tsx  Tooltip.tsx
│   ├── Hotbar.tsx (HotbarTabs, Pagination)  PixelIcon.tsx (PixelIcon, BrandIcon)
│   ├── prefs.ts             cross-site preferences: cookies levimc_theme / levimc_lang, locale matching,
│   │                        pre-paint script (createPrefsInitScript)
│   ├── theme.ts (ThemeProvider, useTheme, themeInitScript)  locale.ts (usePreferredLocale)
│   ├── projects.ts (cross-site registry, canonical bar tabs)  version.ts (KIT_VERSION, generator meta)
│   ├── i18n.ts (chrome strings: en zh-CN zh-HK es ru de ja ko fr)  fonts.ts  menu.ts
│   ├── paint.ts             deterministic painted scenes (lily pond + block bridge / harbour sunrise + pixel boats)
│   └── pixel-icons.ts       generated sprite data
├── docs/                  the static docs engine
│   ├── node/                build side (Node): config.ts vite.ts site.ts content.ts links.ts nav.ts git.ts
│   │   └── markdown/        preprocess.ts render.ts slug.ts shiki.ts shiki-themes.ts html-tags.ts
│   ├── shared/              types.ts routing.ts head.ts search.ts (used by build and browser)
│   ├── app/                 React app: index.html entry-client.tsx entry-server.tsx App.tsx data.ts enhance.ts
│   │                        layouts/ (DocLayout HomeLayout NotFound) components/ (SiteHeader Sidebar Toc reveal
│   │                        SearchModal MobileDrawer DocFooter KitLink) docs.css styles.css layout-api.ts
│   ├── build.mjs            client build → SSR build → prerender
│   └── prerender.mjs
├── ssg/prerender.mjs      prerenderRoutes() for plain Vite apps
├── static/                non-React chrome (prebuilt; regenerate with build-static.mjs)
│   ├── kit.css  kit-chrome.css  kit-nojs-dark.css
│   ├── kit.js (built from kit.src.js)  theme-init.js  theme-init-static.js  theme-init-doxygen.js
│   ├── globalbar.html  footer.html  i18n/{globalbar,footer}.<locale>.html
│   ├── pages/index.html  pages/404.html     docs.levimc.org root redirect + themed 404
│   ├── doxygen/header.html footer.html doxygen-kit.css
│   └── icons/  grass.svg  nojs-dark.mjs  snippets.tsx  build-static.mjs
├── scripts/               serve-pages · linkcheck · url-parity · text-parity · smoke · shot · vendor · mkdocs-nav
├── tests/                 prefs.test.mjs (node --test: cookies, locale mapping, inline scripts) ·
│                          static.test.mjs (no-JS dark CSS, kit.js: footer year, chrome-only translation) ·
│                          cross-site.e2e.mjs (Playwright: preferences shared by levimc.org + docs.levimc.org)
├── demo/                  demo sites (not vendored): docs (suffix/directory/pymdownx), lip (folder/html/vitepress),
│                          single (the docs as a single-locale site), app/ (plain Vite + React app, the
│                          levimc.org / pkg.levimc.org shape); pinned package-lock.json
└── screens/               review screenshots (not vendored, not published)
```

## Vendoring

Copy the kit into each app as `<app>/kit/` (everything except `demo/`, `screens/`, `node_modules/`):

```sh
node path/to/levimc-kit/scripts/vendor.mjs path/to/app        # → path/to/app/kit/  (replaces it)
node path/to/levimc-kit/scripts/vendor.mjs path/to/app/kit    # the same: a path named "kit" without a package.json
```

`vendor.mjs` produces a clean copy: it skips `demo/`, `screens/`, `node_modules/`, `dist/`, `.kit/` and every
dotfile, replaces `<app>/kit/` completely (re-running is idempotent) and writes `kit/.vendored` with the version.
Kit 1.1.0: 209 files / 2.7 MB, no demo, screenshots or dependencies; running the vendored copy's own
`kit/scripts/vendor.mjs <dest>` reproduces it byte for byte. `--dest <name>` changes the folder name.
Never edit files under `kit/` in an app; change the kit and re-vendor. The demo vendors itself the same way
(`cd demo && npm run vendor`). Every page the kit renders carries `<meta name="generator" content="levimc-kit 1.1.0">`,
so `curl -s <url> | grep generator` shows which kit a deployment runs.

## Dependencies

Pinned, verified together (Node 24.22, npm 11.19; any Node ≥ 22.12 works — `assets/build-assets.mjs`
needs Node ≥ 22.18 for native TypeScript stripping). Copy the fields of `package.template.json`.

| Package | Version | | Package | Version |
|---|---|---|---|---|
| react | 19.3.1 | | unified | 11.0.5 |
| react-dom | 19.3.1 | | remark-parse | 11.0.0 |
| react-router | 7.18.4 (`version-7` tag; 8.x exists but the LeviMC stack is v7) | | remark-gfm | 4.0.1 |
| minisearch | 7.2.0 | | remark-frontmatter | 5.0.0 |
| vite | 8.3.4 | | remark-rehype | 11.1.2 |
| @vitejs/plugin-react | 6.1.2 | | rehype-raw | 7.0.0 |
| tailwindcss | 4.3.3 | | hast-util-to-html | 9.0.5 |
| @tailwindcss/vite | 4.3.3 | | hast-util-to-string | 3.0.1 |
| typescript | 7.0.2 (6.0.x works too) | | mdast-util-to-string | 4.0.0 |
| @types/react | 19.3.0 | | unist-util-visit | 5.1.0 |
| @types/react-dom | 19.3.0 | | shiki | 4.5.0 |
| @types/node | 24.19.2 | | @shikijs/transformers | 4.5.0 |
| @types/hast | 3.0.5 | | yaml | 2.9.1 |
| @types/mdast | 4.0.4 | | picomatch | 4.0.7 |
| @types/unist | 3.0.3 | | @types/picomatch | 4.0.3 |

The kit type-checks clean with TypeScript 7.0.2 and 6.0.3 (typescript-eslint needs < 6.1; pkg.levimc.org pins 6.0.3).

Playwright is only needed for `smoke.mjs`, `text-parity.mjs`, `shot.mjs` and `tests/cross-site.e2e.mjs`; they resolve it from
`$LEVIMC_PW_DIR` (a directory containing `node_modules/playwright`) or from the app (`npm i -D playwright@1.56.1`).

Plain Vite apps (levimc.org, pkg.levimc.org) only need react, react-dom, react-router, vite,
@vitejs/plugin-react, tailwindcss, @tailwindcss/vite, typescript and the @types packages; their tsconfig then
includes `kit/components` (and `kit/ssg`), not `kit/**` (the docs engine needs the markdown packages' types).

## Docs site: app structure & commands

A docs site is the repository's existing markdown plus four small files:

```
<repo>/
├── kit/                     vendored levimc-kit
├── docs.config.ts           defineDocsConfig({...})            (replaces mkdocs.yml / .vitepress/config.mts)
├── vite.config.ts           plugins: [kitDocs(docs)]
├── tsconfig.json            from tsconfig.template.json
├── package.json             from package.template.json
├── .gitignore               node_modules/ dist/ .kit/
└── docs/… (contentDir)      unchanged markdown, images, logo.svg …
```

### Where the app lives

The app sits where the old generator config was; `kit/` sits next to `package.json`.

**VitePress-style repos (lip, LeviLauncher, LeviLaunchroid) — markdown directly in `docs/`:** the app *is*
`docs/` (it already holds a `package.json`):

```
docs/
├── kit/                 vendored (excluded from content automatically)
├── package.json         replaces the VitePress one
├── vite.config.ts  docs.config.ts  tsconfig.json  .gitignore (node_modules/ dist/ .kit/)
├── public/              unchanged (served at the site root)
├── index.md  guide/…  zh-CN/…      unchanged content
└── .vitepress/          delete after the port (ignored meanwhile)
```

```ts
// docs/docs.config.ts
export default defineDocsConfig({ base: '/lip/', contentDir: '.', urlStyle: 'html', i18n: { mode: 'folder', … }, … });
```

With `contentDir: '.'` the engine automatically excludes the vendored `kit/` folder, the output directory
(`dist/`) and `.kit/`; `node_modules/`, every dot-folder (`.vitepress/`) and `public/` are always excluded.
Add `exclude: ['README.md']` only if `docs/` has a README that is not a page. CI: `working-directory: docs`,
upload `docs/dist`.

**LeviLamina — app in `docs/main/`, content in `docs/main/contents/`:**

```
docs/main/
├── kit/  package.json  vite.config.ts  docs.config.ts  tsconfig.json  .gitignore
├── contents/            unchanged (index.md, *.zh.md, logo.svg, favicon.ico …)   ← contentDir: 'contents'
└── (mkdocs.yml, requirements.txt, overrides/ — delete after the port)
```

The Doxyfile (`docs/api/Doxyfile`, run from the repo root) then references
`docs/main/kit/static/kit-chrome.css`, `docs/main/kit/static/doxygen/doxygen-kit.css` and
`docs/main/kit/static/kit.js`; CI builds in `docs/main` and merges the Doxygen output into `docs/main/dist/api/`.

**LegacyScriptEngine — `mkdocs.yml` at the repo root, content in `docs/`:** the app is the repository root
(`kit/`, `package.json`, … next to the old `mkdocs.yml`) with `contentDir: 'docs'` and
`exclude: ['overrides/**']` (the theme overrides live inside `docs/`).

```ts
// vite.config.ts
import { defineConfig } from 'vite';
import { kitDocs } from './kit/docs/node/vite.ts';
import docs from './docs.config.ts';
export default defineConfig({ plugins: [kitDocs(docs)] }); // includes @vitejs/plugin-react + @tailwindcss/vite
```

| Command | What it does |
|---|---|
| `npm run dev` (`vite`) | dev server with content hot-rebuild (open `http://localhost:5173/<Project>/`) |
| `npm run build` (`node kit/docs/build.mjs [--config vite.config.ts]`) | client build → SSR build (`.kit/ssr/`) → prerender every route to `dist/` + `404.html`, `sitemap.xml`, `.nojekyll`, search indexes; prints warnings (unresolved links, missing anchors, escaped pseudo-tags) and writes them to `.kit/warnings.txt` |
| `npm run preview` | `serve-pages.mjs dist --base /<Project>/ --port 4173` (GitHub Pages semantics) |
| `npm run typecheck` | `tsc --noEmit` (covers the kit and the app) |
| `npm run linkcheck` | internal links, redirects and anchors (add `--external` for every external URL) |
| `npm run smoke` | Playwright smoke test against the preview server |

Equivalent manual steps: `vite build && vite build --ssr && node kit/docs/prerender.mjs`.

GitHub Actions (Pages):

```yaml
- uses: actions/setup-node@v4
  with: { node-version: 24 }
- run: npm ci && npm run build
- run: node kit/scripts/linkcheck.mjs dist --base /<Project>/ --site-origin https://docs.levimc.org
- uses: actions/upload-pages-artifact@v5
  with: { path: dist }
```

Use `fetch-depth: 0` in `actions/checkout` if you want accurate "Last updated" dates (git history).

### What the engine produces

* `dist/<route>` — real HTML per URL. MkDocs-style sites: `a/b.md` → `a/b/index.html` (URL `a/b/`);
  VitePress-style: `a/b.md` → `a/b.html` (URL `a/b` with `cleanUrls`, else `a/b.html`). GitHub Pages serves
  both `a/b` and `a/b.html`, so every URL that works today keeps working with **no redirect**.
* `<head>`: title, description, canonical, hreflang alternates (+ x-default), Open Graph, theme-color,
  the no-flash theme script and the root-only language redirect.
* `dist/assets/pages/*.js` — one lazily loaded chunk per page (SPA navigation); the first load reuses the
  prerendered HTML (no duplicate download) and hydrates with `hydrateRoot`.
* `dist/assets/search-<locale>.<hash>.json` — MiniSearch index per locale (CJK indexed as character
  bigrams), lazy-loaded on first search.
* `404.html` (themed, locale-aware), `sitemap.xml` (with hreflang), `.nojekyll`, content assets
  (MkDocs: every non-markdown file in `contentDir`, verbatim; VitePress: `public/` + hashed images).

## Site config API (`defineDocsConfig`)

```ts
import { defineDocsConfig } from './kit/docs/node/config.ts';
export default defineDocsConfig({ … });
```

| Option | Type / default | Notes (MkDocs ↔ VitePress) |
|---|---|---|
| `base` | `'/LeviLamina/'` | `site_url` path / `base` |
| `title`, `description` | string | `site_name` / `title` |
| `logo` | `'logo.svg'` or `{ src, alt, dark? }` | path relative to base; each project keeps its own logo |
| `favicon` | path | |
| `project` | default = base segment | highlights the project in the GlobalBar "Docs" menu |
| `repo` | URL | the LeviMC bar's GitHub button (unless `social` has a `github` entry) |
| `editLink` | `'https://github.com/<org>/<repo>/edit/<branch>/<dir>/:path'` or `{ pattern: string \| (source) => url \| undefined, text?: { [locale]: label } }` | `:path` = path relative to `contentDir`; evaluated at build time |
| `contentDir` | string (required) | `docs_dir` / `srcDir` |
| `publicDir` | default `<contentDir>/public` if present, or `false` | VitePress `public/` (copied verbatim) |
| `copyContentAssets` | default `true` for `urlStyle: 'directory'` | MkDocs: copy every non-md file (logo.svg stays at `/LeviLamina/logo.svg`) |
| `exclude` | globs relative to contentDir | e.g. `['overrides/**']`; `node_modules`, dot folders, `.vitepress`, `public` are always excluded |
| `i18n.mode` | `'suffix'` \| `'folder'` | mkdocs-static-i18n (`x.md`, `x.zh.md`, `x.en.md` = default) / VitePress (`zh-CN/x.md`) |
| `i18n.defaultLocale` | locale code | |
| `i18n.locales[]` | `{ code, label, lang?, prefix?, suffix?, folder? }` | `prefix` defaults to `''` (default) / `'<code>/'`; `lang` is used for `<html lang>`/hreflang |
| `i18n.fallback` | default `true` (suffix) / `false` (folder) | build default-locale content at localized URLs when a translation is missing (static-i18n `fallback_to_default`) |
| `urlStyle` | `'directory'` (default) \| `'html'` | MkDocs directory URLs / VitePress `.html` files |
| `cleanUrls` | `false` | html style: link `a/b` instead of `a/b.html` |
| `slug` | `'pymdownx'` \| `'vitepress'` | heading ids (see below); default by compat |
| `markdown.compat` | `'python-markdown'` (default for directory) \| `'commonmark'` | see [Markdown support](#markdown-support) |
| `markdown.containers` | `{ mkdocs?, vitepress? }` | which container syntaxes to recognise (default by compat) |
| `markdown.lineNumbers` | `true` | multi-line blocks; per block `:no-line-numbers` / `linenums="1"` |
| `markdown.codeTitle` | `'pygments'` (MkDocs `auto_title`: "C++", "GAS", "Text Only") \| `'lang'` \| `'none'` | |
| `markdown.languageAlias` | `{ xmake: 'lua' }` | extra fence-language aliases |
| `markdown.admonitionTitles` | `'mkdocs'` ("Note") \| `'vitepress'` ("TIP") | default titles |
| `markdown.autoTitle` | default `true` for python-markdown | MkDocs Material: pages without `# H1` get one from their nav title / file name |
| `markdown.literalBackslashes` | `false` | python-markdown only: keep backslashes Python-Markdown does not treat as escapes (`\<T\>` → `\<T>`, byte-identical to MkDocs) |
| `nav` | `NavEntry[]` or `{ [locale]: NavEntry[] }` | MkDocs `nav` (verbatim YAML structure works) / VitePress `themeConfig.nav` |
| `navTranslations` | `{ [locale]: { 'User Guides': '用户指南' } }` | static-i18n `nav_translations` |
| `sidebar` | `'tabs'` (default) \| `'tree'` \| `false` \| `SidebarConfig` \| `{ [locale]: SidebarConfig }` | `'tabs'` = Material `navigation.tabs` (header shows top-level sections, sidebar shows the active one); `SidebarConfig` = VitePress array or `{ '/guide/': [...] }` multi-sidebar |
| `layouts` | `{ name: './path/Component.tsx' }` | custom page layouts for `layout: <name>` frontmatter (props: `CustomLayoutProps` from `kit/docs/app/layout-api.ts`) |
| `lastUpdated` | `true` | `git log` timestamp per file; silently absent without git history |
| `hostname` | `'https://docs.levimc.org'` | canonical / og:url / hreflang origin (defaults to `sitemap.hostname`) |
| `sitemap` | `{ hostname }` \| `false` | |
| `head` | `[[tag, attrs, content?], …]` | extra head tags (VitePress format) |
| `outline` | `[2, 4]` (python-markdown) / `[2, 3]` (commonmark) | "On this page" levels (`outline: false` in frontmatter hides it) |
| `social` | `[{ icon: 'github'\|'discord'\|'telegram'\|'x'\|'youtube'\|'email', link, label? }]` | `github` → the bar's GitHub button; others → icons in the docs header |
| `footer` | `{ message?, copyright? }` | `message`: extra line above the legal row; `copyright`: replaces "© <year> LeviMC" |
| `ui` | `{ [locale]: Partial<UiStrings> }` | override chrome strings (e.g. VitePress `docFooter`, `editLink.text`) |
| `titleTemplate` | `':title \| :site'` | use `':title - :site'` to match MkDocs; the root page of a directory-style site gets the template without `:title` (Material's home title) |
| `header`, `sidebarExpand` | | see [Header](#header-the-docs-own-row) and the table under it |
| `outDir` | `'dist'` | |
| `searchExclude` | globs on page keys | |

`NavEntry` accepts every MkDocs and VitePress form:

```ts
'user_guides/install.md'                                  // title = the page's H1 in each locale
{ 'Install': 'user_guides/install.md' }                   // titled (translated via navTranslations)
{ 'User Guides': [ … ] }                                  // group
{ 'About': 'https://levimc.org/about/' }                  // external
{ text: 'Guide', link: '/guide/quick-start' }             // VitePress (root-absolute, locale prefix allowed)
{ text: 'Developer', items: [ … ], collapsed: true }      // VitePress group / dropdown
```

Home pages: frontmatter `layout: home` with VitePress `hero` (`name`, `text`, `tagline`, `image`,
`actions[{ theme: brand|alt, text, link }]`) and `features[{ title, details, icon?, link? }]`.
`icon` may be a kit sprite name (`grass`, `chest`, `pickaxe`, `map`, `compass`, `emerald`, `diamond`,
`bookQuill`, `torch`, …) or an emoji. Links in frontmatter are resolved like markdown links.

Generate a starting config from an existing `mkdocs.yml`:
`node kit/scripts/mkdocs-nav.mjs path/to/mkdocs.yml > docs.config.generated.json`.

### Header (the docs' own row)

The LeviMC bar (GlobalBar) is the top of every page and carries the language menu, the theme menu and the
GitHub button. Under it, the docs header is one light row on the page's own canvas: the project's logo and
name, the section tabs (`nav`) and search — never a second set of controls. The bar scrolls away, the row
sticks (a hairline fades in once it is stuck). Below 960px one menu button opens the drawer with the
sections, the current section's sidebar and the LeviMC links of the bar (the bar's own menu is off on docs).

Long navs are measured before the first paint (inline script after the header, then on resize / font load /
locale change) and the header steps through `html[data-kit-nav-fit]`: `search` (icon-only search), `tabs`
(the tabs move to a second row under brand + search — MkDocs Material's `navigation.tabs`), `drawer` (the tabs
move into the drawer). `header.tabsRow: true` starts in the two-row layout, `false` skips it.

### Language behaviour

* The language menu in the LeviMC bar is the site's locale switcher: it lists the site's locales, opens the
  same page in the chosen locale (falls back to that locale's home) and stores the choice as the visitor's
  **cross-site language preference** (cookie `levimc_lang`, see [Cross-site preferences](#cross-site-preferences)).
* Auto-redirect runs only when the URL is exactly the site root (`base` or `base/index.html`):
  1. a stored preference always wins (also when the visitor followed an in-site link to the root) and maps to
     the nearest locale — `zh-CN`/`zh-HK`/`zh-TW`/`zh` → the site's zh variant (Traditional prefers a
     `zh-HK`-style locale), else the base language, else English;
  2. without one: not after an in-site link (an explicit "[English](/)" is followed as written), otherwise the
     first `navigator.languages` entry that matches a locale.
* Deep links and explicit locale URLs are never redirected, and visiting them never changes the stored
  preference — only the language menu does (a Ctrl/⌘/Shift/Alt-click opens the other locale elsewhere and
  stores nothing). Kit 1.0's per-site choice (`localStorage['levimc-locale-<site>']`) is moved into the
  preference once.
* A site with a single locale: the bar's menu offers the 9 chrome languages; the LeviMC chrome (bar, footer, the
  drawer's LeviMC links) follows the stored preference and switches in place when one is chosen — the content
  stays in the site's language. The pre-paint script hides the chrome until then (`chromeLocales`), so it never
  flashes in the site's language first (`demo/vite.single.config.ts`, `npm run smoke:single`).

| Option | Type / default | Notes |
|---|---|---|
| `header` | `{ tabsRow?: 'auto' \| true \| false }` | see [Header](#header-the-docs-own-row) |
| `sidebarExpand` | `false` | MkDocs Material `navigation.expand` for the `'tabs'` sidebar. Default: only the group holding the current page starts open (plus groups with `collapsed: false`) |

`social`: a `github` entry (or `repo`) becomes the target of the bar's GitHub button; other entries stay as
icons at the end of the docs header.

## Markdown support

Build-time only (unified → remark-parse + remark-gfm → mdast transforms → remark-rehype → rehype-raw →
kit transforms → Shiki → HTML). No markdown is parsed in the browser.

* **GFM**: tables, strikethrough, autolinks, task lists; **footnotes** (definitions may contain fenced code);
  YAML frontmatter; raw HTML (`<details><summary>`, `<br/>`, `<u>`, …).
* **Unknown pseudo-tags** such as `Array<NBT object>` are escaped and render literally (MkDocs dropped them;
  this is a visible text *improvement*), and are listed as build warnings.
* **MkDocs**: admonitions `!!! type "Title"` (case-insensitive type, optional title, `""` = no title,
  4-space indented bodies with fences/lists/tables/nested admonitions; allowed directly after a paragraph
  line), collapsible `??? type` / `???+ type`, pymdownx tabs `=== "Label"` (consecutive blocks form one
  set, `===!` starts a new set, `===+` selects), `{#id}` / `{: #id }` heading ids.
  Types: note abstract(summary, tldr) info(todo) tip(hint, important) success(check, done)
  question(help, faq) warning(caution, attention) failure(fail, missing) danger(error) bug example
  quote(cite); unknown types use the note style.
* **VitePress**: containers `::: tip|info|warning|danger|details [Title]` (`{open}` for details),
  `::: code-group`, GitHub alerts `> [!NOTE|TIP|IMPORTANT|WARNING|CAUTION]`, `<span v-pre>` (kept; `{{ }}`
  is never interpolated), fence meta `{1,3-5}` / `[file.js]` / `:line-numbers`.
* **`compat: 'python-markdown'`** (MkDocs sites) reproduces Python-Markdown's block rules so the text and
  structure match the live MkDocs output: 4-space list nesting (2–3-space items are siblings), a list
  cannot interrupt a paragraph, an un-indented block after a blank line ends the list, an indented
  paragraph block inside a list keeps later `-` lines literal, `#Heading` without space, block-level raw
  HTML is captured to its closing tag (even inside list items), tables need a blank line before them and
  pipes inside code spans don't split cells, and code spans are trimmed. pymdownx extras that are configured but unused
  (betterem, caret, mark, tilde, critic, keys, smartsymbols, emoji, arithmatex…) are ignored.
* **Code**: Shiki with the kit's dual themes (all token colours ≥ 4.5:1), class-based tokens, CSS line
  numbers (never copied), title bar with the language (pymdownx `auto_title` names) or file name, copy
  button. Languages: cpp/c/c++, js/javascript, ts/tsx/jsx, lua, json/jsonc, shell/sh/bash/console,
  powershell, bat/batch/cmd, sql, asm, md, cmake, python, yaml, toml, xml/svg, html, css, go, csharp,
  ini, diff, rust, java, kotlin; `text`/`log`/unknown → plain.
* **Escapes**: standard CommonMark backslash escapes by default, so `### Observable\<T\>` renders — and appears
  in the TOC, search, sidebar, prev/next and `<title>` — as `Observable<T>`. All labels use the rendered plain
  text (inline code, emphasis and entities resolved). MkDocs printed a stray backslash there
  (`Observable\<T>`, Python-Markdown does not escape `<`); `markdown.literalBackslashes: true` reproduces that
  byte for byte if ever needed. Heading ids are unaffected (`#observable` either way).
* **Heading ids**: `pymdownx` = Python-Markdown toc + `pymdownx.slugs.slugify(case='lower')` (text →
  strip tags → NFC → lowercase → drop chars outside `[\w\- ]` (Unicode) → spaces to `-`, no trimming,
  duplicates `_1`, `_2`; "🔑 SQL数据库" → `-sql数据库`). `vitepress` = @mdit-vue slugify (duplicates `-1`).
  Verified identical to the live sites on every LeviLamina/LSE page.
* **Links** are rewritten at build time to the target's canonical, base-prefixed URL: relative `.md`
  (with/without locale suffix, `./`, `../`, anchors), extensionless VitePress links, root-absolute links
  (`/zh-CN/guide/x`), own-origin absolute links. The current page's locale wins when that translation exists
  (static-i18n semantics); `x.zh.md` / `/zh-CN/…` pin a locale. External links get
  `target="_blank" rel="noopener"`. Unresolvable links and missing anchors are build warnings.

## Plain Vite apps (levimc.org, pkg.levimc.org)

```
<app>/
├── kit/                       vendored
├── index.html                 pre-paint script + fonts, <!--app-head--> in <head>, <div id="root"><!--app-html--></div>
├── src/styles.css             @import "../kit/theme/tailwind.css"; @source "./";
├── src/App.tsx                routes; wrap in <ThemeProvider>; <PaintedBackdrop/> <GlobalBar sticky …/> … <SiteFooter/>
├── src/entry-client.tsx       hydrateRoot(…, <BrowserRouter><App/></BrowserRouter>)
├── src/entry-server.tsx       export function render(url) { return { html, head, lang } }
├── prerender.mjs              prerenderRoutes({ routes, notFound })
└── vite.config.ts             plugins: [react(), tailwindcss()]
```

`index.html` head: the pre-paint script must run before CSS paints — an inline `<script>` with
`createThemeInitScript({ appLocales: { locales: LOCALES, prerendered: 'en' } })` (the app's languages and the one
its pages are prerendered in; add `legacyTheme` / `legacyLang` to migrate a site's old localStorage keys once,
e.g. levimc.org: `{ legacyTheme: ['theme'], legacyLang: [{ key: 'locale', map: { zh: 'zh-CN' } }] }`),
then the fonts (`FONT_HEAD_HTML` from `kit/components/fonts.ts`): preconnect to fonts.googleapis.com /
fonts.gstatic.com and the css2 URL for Inter, Fraunces, Silkscreen, JetBrains Mono (`display=swap`; `theme/fonts.css`
adds metric-matched fallbacks, so the swap does not shift the layout). CJK uses the system stack — never ship a
CJK webfont. `demo/app/` is a complete example (`npm run build:app && npm run preview:app && npm run smoke:app`).

The GlobalBar is the app's only header there (`sticky`), with the app's own languages:

```tsx
const LOCALES = [{ code: 'en', lang: 'en', label: 'English' }, { code: 'zh-CN', lang: 'zh-CN', label: '简体中文' }, …] as const;
const [locale, setLocale] = usePreferredLocale(LOCALES, LOCALES[0]);   // the cross-site preference, else the browser
<GlobalBar
  current="packages" locale={locale.lang} sticky
  languages={{ options: LOCALES.map(({ code, label, lang }) => ({ code, label, lang })), current: locale.code, onSelect: setLocale }}
  siteOrigin="https://pkg.levimc.org" linkComponent={RouterLink}           // same-site bar links stay in the app
  isAppPath={(p) => !p.startsWith('/blog/')}                               // …except static pages (levimc.org/blog/)
/>
<SiteFooter locale={locale.lang} siteOrigin="https://pkg.levimc.org" linkComponent={RouterLink} />
```

`usePreferredLocale` renders the fallback locale on the server and the first client render (no hydration
mismatch), then switches to the preferred one right after hydration, before the next paint. So that a visitor
whose language is not the prerendered one never sees it first, the pre-paint script with `appLocales` (same
locales, same mapping: the stored preference, else `navigator.languages`) adds `html.kit-chrome-pending` and
`html.kit-content-pending` exactly when the app will switch: the bar's contents, `<main>` and the footer text are
`visibility: hidden` (no layout shift; the theme and backdrop already show) until `usePreferredLocale` has
re-rendered and removes both classes (`revealPendingChrome()`). A CSS fail-safe shows the page after 1.5 s if
the app's JavaScript never runs. Keep the locales in one module that `vite.config.ts` and the app both import
(`demo/app/src/locales.ts`). `smoke.mjs --app` fails if a stored `zh-CN` preference paints the prerendered
language.

```tsx
// src/entry-server.tsx
import { renderToString } from 'react-dom/server';
import { StaticRouter } from 'react-router';
import { App } from './App';
export function render(url: string) {
  const html = renderToString(<StaticRouter location={url}><App /></StaticRouter>);
  return { html, head: `<title>…</title><link rel="canonical" href="https://levimc.org${url}">`, lang: 'en' };
}
```

```js
// prerender.mjs
import { prerenderRoutes } from './kit/ssg/prerender.mjs';
await prerenderRoutes({
  routes: ['/', '/projects/', '/features/', '/community/', '/about/', '/support/'],   // levimc.org
  // pkg.levimc.org: routes: async () => ['/', ...(await listTeeth()).map((t) => `/packages/${t}/`)],
  notFound: '/404',
});
```

Build: `vite build && vite build --ssr src/entry-server.tsx --outDir .kit/ssr && node prerender.mjs`
(`npm run ssg:build` in `package.template.json`). Routes are written directory-style (`/about/` →
`about/index.html`); use trailing-slash routes in react-router (`path="/about/"`) and link to them exactly
(the canonical URLs in `components/projects.ts` all end in `/`). `prerenderRoutes` also writes `404.html`
and `.nojekyll`, inserts the head and body with replacement functions (content may contain `$&`) and adds
`<meta name="generator" content="levimc-kit <version>">` unless the page has one.

## Cross-site preferences

Theme and language are one choice for all of levimc.org and *.levimc.org (`components/prefs.ts`):

| Preference | Cookie (`Domain=levimc.org; Path=/; SameSite=Lax; Secure; Max-Age=1 year`) | localStorage mirror |
|---|---|---|
| theme | `levimc_theme` = `auto` \| `light` \| `dark` (Auto = follow the system, live; the default) | `levimc-theme` |
| language | `levimc_lang` = a BCP-47 tag, e.g. `zh-CN` | `levimc-lang` |

* The cookie wins; localStorage is the fallback where cookies are not available (it is also what kit 1.0
  wrote, so a 1.0 choice is copied into the cookie once). Outside levimc.org (localhost, previews) the cookie is
  host-only, and `Secure` only on https.
* The pre-paint script (`themeInitScript` / `createPrefsInitScript`) reads both before the first paint:
  `html.dark`, `html[data-theme-pref]`, `color-scheme` and `html[data-kit-lang-pref]`.
* Changing either on one site applies on every other on its next load (and when a tab regains focus).
* Each site maps the language preference to its nearest locale with `matchLocale` / `pickLocale`:
  `zh-CN`/`zh-HK`/`zh-TW`/`zh` → the site's zh variant (Traditional tags prefer `zh-HK`/`zh-TW`), otherwise
  the base language, otherwise English. The same algorithm runs inline (`PREFS_CORE_JS`) in the docs root
  redirect and kit.js; `tests/prefs.test.mjs` keeps both in step.
* `tests/cross-site.e2e.mjs` proves the sharing in Chromium with the real cookie rules of
  https://levimc.org and https://docs.levimc.org (requests answered from local builds).

## Components

All components are SSR-safe and render identical markup on server and client.

| Component | Purpose / key props |
|---|---|
| `GlobalBar` | the bar at the top of every LeviMC site — identical everywhere: tabs **Home · Projects · Docs ▾ · Mods · Blog · Community · About** (`globalNav()`), then **language menu · theme menu · GitHub**; below 960px the tabs fold into one menu (≤ 400px the triggers lose their chevrons). Props: `current` (`'home'\|'projects'\|'docs'\|'packages'\|'blog'\|'community'\|'about'`), `currentDocs`, `locale`, `strings`, `languages` (`{ options, current, onSelect?, linkComponent? }`; omitted → the 9 chrome languages, stored as the preference, then `onLanguageChange` or a reload), `github` (button target), `brandIcon`, `siteOrigin` + `linkComponent` + `isAppPath` (same-site links through the router), `menu` (false when the site's own drawer carries the links, see `GlobalNavList`), `sticky`. A labelled region; `<details>` menus work without JS. No props to hide, add or reorder tabs or controls |
| `GlobalNavList` | the bar's tabs + docs projects as a vertical list (the bar's phone menu; the "LeviMC" part of the docs drawer) |
| `ThemeSwitcher` | the theme menu: **Auto** (default; follows `prefers-color-scheme` live) / Light / Dark. Trigger sprite + name and the checked item come from `html[data-theme-pref]` via CSS (right before hydration and on static pages); the choice is the cross-site `levimc_theme` cookie. `ThemeToggle` is a deprecated alias |
| `LocaleSwitcher` | `options[{ code, label, short?, lang, href? }]` (`href` → links to the equivalent page; none → buttons), `current`, `onSelect(code, option)`, `persist` (default: store `lang` as the cross-site `levimc_lang`; a modified click on a link opens it elsewhere and stores nothing), `linkComponent`, `showLabel` |
| `SiteFooter` | grass horizon over soil: docs projects, ecosystem (Home, Projects, Mods, Blog, About), Discord/Telegram/X/YouTube/email/GitHub, "Not affiliated with Mojang Studios."; `strings` (e.g. a site's own nav labels), `extra`, `copyright` (replaces "© <year> LeviMC"), `year`, `siteOrigin` + `linkComponent` + `isAppPath`, `locale` |
| `PaintedBackdrop` | fixed impressionist dabs + brush + grain; optional painted scene band at the page top |
| `PaintedHero` | painted pond with block-built Japanese bridge (light) / harbour sunrise with pixel boats (dark), AA scrim, grass horizon; `eyebrow name text tagline actions image badge aside linkComponent`. The default scenes are cached CSS backgrounds (`theme/hero.css`, imported by the component — no per-page SVG, no flash); a custom `seed` or `pixelProps={false}` renders inline SVG |
| `PixelButton` | Minecraft bevel button: `variant` default/primary/ghost, `size`, `icon`, `iconRight`, `href` |
| `Card` | stepped-corner card with sprite in an inventory slot; `title description icon eyebrow href footer` |
| `Badge` | `tone` grass/diamond/gold/redstone/enchant/stone/pond, `pixel` (Silkscreen, Latin only) |
| `Tooltip` | Minecraft item tooltip on hover/focus (`aria-describedby`) |
| `HotbarTabs`, `Pagination` | hotbar-style tabs (WAI-ARIA keyboard) and numbered pagination (crawlable hrefs) |
| `PixelIcon`, `BrandIcon` | 16×16 crisp sprites (`PIXEL_ICONS`); vector brand marks for social links |
| `prefs.ts` | `readPref`/`writePref`, `readThemeChoice`, `readLanguagePreference`, `preferredLanguages`, `matchLocale`, `pickLocale`, `createPrefsInitScript`, `prefCookieDomain`, `serializePrefCookie`, `PREFS_CORE_JS` |
| `locale.ts` | `usePreferredLocale(locales, fallback)` → `[locale, setLocale]` for apps whose language is state (syncs before paint, then `revealPendingChrome()`) |
| `menu.ts` | `useDismissableDetails(ref)` for every `<details class="kit-menu">`: outside click, Escape, focus leaving, one open at a time; `role="menu"` panels (language, theme) get the WAI-ARIA menu keys — Enter/Space open on the checked item, ArrowDown/ArrowUp on the trigger open on the first/last item, inside Arrow keys move (wrapping), Home/End jump (`menuKey`, `focusMenuOnOpen`; kit.js does the same on static pages) |
| `theme.ts` | `ThemeProvider`, `useTheme()` (`preference`, `resolved`, `setPreference`), `themeInitScript`, `createThemeInitScript(opts)`, `applyThemePreference`; `'system'` is accepted as an alias of `'auto'` |
| `projects.ts` | `LINKS`, `DOCS_PROJECTS`, `MODS_SITE`, `SOCIAL`, `globalNav()`, `sameSitePath()` — the redirect-free canonical cross-site URLs |
| `i18n.ts` | `uiStrings(lang, overrides)`, `resolveUiLocale(tag)`, `UI_LOCALE_NAMES` for en, zh-CN, zh-HK, es, ru, de, ja, ko, fr |
| `version.ts` | `KIT_VERSION`, `KIT_GENERATOR`, `GENERATOR_META` |

Stable test hooks: `data-kit-theme-toggle` (theme menu trigger), `data-kit-theme-value`, `data-kit-locale-switcher`,
`data-kit-lang-value`, `data-kit-gbar-menu`, `data-kit-search-trigger`, `data-kit-nav-toggle`, `data-kit-subnav`,
`data-kit-copy`, `data-kit-tabs`, `data-doc-content` (wraps rendered markdown only), `data-kit-globalbar`,
`data-kit-footer`, `data-kit-hero`.

Canonical cross-site URLs (exact, no redirect): Home `https://levimc.org/`, Projects
`https://levimc.org/projects/`, Community `https://levimc.org/community/`, About `https://levimc.org/about/`,
Mods (LeviMC Mods, id `packages`) `https://pkg.levimc.org/`, Blog `https://levimc.org/blog/` (blog.levimc.org
no longer resolves), GitHub `https://github.com/LiteLDev`,
Docs `https://docs.levimc.org/{LeviLamina,LegacyScriptEngine,lip,LeviLauncher,LeviLaunchroid}/`,
Discord `https://discord.gg/v5R5P4vRZk`, Telegram `https://t.me/LiteLoader`, X `https://x.com/levimc_org`,
YouTube `https://www.youtube.com/@LeviLamina`, `mailto:contact@levimc.org`. lip's repository is
`https://github.com/LiteLDev/lip` (`futrime/lip` redirects).

## Static chrome & Doxygen

`static/` is prebuilt — consumers copy files, no build needed:

* `kit.css` — full theme incl. Tailwind preflight (standalone pages). `kit-chrome.css` — only the chrome,
  no preflight, cascade layers flattened so it can sit next to foreign CSS (Doxygen); its scoped reset comes
  first so host element styles lose and every kit rule wins. `kit-nojs-dark.css` — kit.css's `.dark` rules as
  `:root` rules, for `<noscript><link … media="(prefers-color-scheme: dark)"></noscript>`.
* `globalbar.html`, `footer.html` (+ `i18n/*.<locale>.html`) — rendered from the React components, with
  `data-kit-t` hooks for the runtime translation.
* `kit.js` (built from `kit.src.js`) — the GlobalBar's theme and language menus, `<details>` menus (outside
  click, Escape, focus leaving, the menu keys of `menu.ts`), the footer year, and the chrome language: the bar,
  footer and skip link follow the visitor's language preference (strings for the 9 UI locales are embedded; each
  translated part gets `lang=<locale>`); choosing a language stores it for every LeviMC site and translates the
  chrome in place. Only the chrome is translated — page content stays as written, including copies of chrome
  strings in it (the 404 page's project cards stay English like the rest of the page). On Doxygen pages it also
  follows the preference in the project's own row (`data-kit-site-locales` / `data-kit-l10n`: LeviLamina's zh
  section labels and URLs), turns Doxygen's regions into landmarks (`#main-nav`, `#side-nav`, `#doc-content` as
  `main`, `#nav-path`) and moves Doxygen's phone menu button + search into the row.
* `theme-init.js` (React apps), `theme-init-static.js` (static pages: also hides the chrome for ≤ 1.5 s while
  kit.js translates it, so it never flashes in English), `theme-init-doxygen.js` — blocking head scripts.
* `pages/index.html` (docs.levimc.org root → levimc.org redirect, redirect tags before any stylesheet, with
  project cards) and `pages/404.html`: skip link, generator meta, no-JS dark theme, footer year; they reference
  assets under `/levimc-kit/` (copy `kit.css`, `kit.js`, `kit-nojs-dark.css`, `icons/`, `grass.svg` there).

**LeviLamina Doxygen** (`docs/api/`): copy `static/doxygen/header.html` → `docs/api/header.html`,
`static/doxygen/footer.html` → `docs/api/footer.html`, and set in the Doxyfile:

```
HTML_HEADER            = docs/api/header.html
HTML_FOOTER            = docs/api/footer.html
HTML_EXTRA_STYLESHEET  = docs/api/doxygen-awesome-css/doxygen-awesome.css kit/static/kit-chrome.css kit/static/doxygen/doxygen-kit.css
HTML_EXTRA_FILES       = kit/static/kit.js
```

Drop `doxygen-awesome-darkmode-toggle.js` (kit.js owns the theme and keeps `html.dark-mode` /
`html.light-mode` in sync for doxygen-awesome v2.4.1). The header is the docs pages' one header: the GlobalBar
(language and theme menus, GitHub → LeviLamina; its own phone menu off) above Doxygen's layers, then one
light row (`header#titlearea`) with LeviLamina's logo + name, its docs sections (Home · User Guides · Developer
Guides · Maintainer Guides · Supported Versions, linking into the docs) plus an active **Doxygen API** tab, and
Doxygen's search box — no painted title band, no second menubar: Doxygen's Main Page / Related Pages / Classes /
Files menubar is hidden from 768px (the tree on the left lists the same pages). 768–1199px: the sections get
their own row under logo + search. Phones: Doxygen's menu button is the only one; it opens one panel with the
docs sections, Doxygen's menu and the LeviMC links. The sections are configured in `DOX` in
`static/build-static.mjs`. Verified with doxygen 1.16.1 + doxygen-awesome-css 2.4.1 in both themes at 1440,
1024 and 390px (`screens/kit-doxygen-*.png`).

## Verification scripts

All are Node ESM with no dependencies beyond Playwright (where noted).

```sh
# GitHub Pages emulation: file → 200, /x → x.html, /x → 301 /x/ for any directory, repeated slashes collapsed
# (//about/ serves about/index.html), else 404.html (404)
node kit/scripts/serve-pages.mjs dist --base /LeviLamina/ --port 4173

# internal links (+ redirects + #anchors); --external checks every external URL with curl
node kit/scripts/linkcheck.mjs dist --base /LeviLamina/ --site-origin https://docs.levimc.org \
     [--external] [--allow-redirect-hosts aka.ms,discord.gg,qm.qq.com] [--ignore-paths /LeviLamina/api/] [--json out.json]

# every live URL (sitemap.xml, else crawl) must answer 200 with 0 redirects locally;
# --anchors also requires every live heading id (old #deep-links) to exist on the local page
node kit/scripts/url-parity.mjs --live https://docs.levimc.org/LeviLamina/ --local http://127.0.0.1:4173/LeviLamina/ --anchors

# word-level text diff of the main content, live vs local (Playwright)
node kit/scripts/text-parity.mjs --live https://docs.levimc.org/LeviLamina/ --local http://127.0.0.1:4173/LeviLamina/ \
     [--paths a/,b/ | --paths-file f] [--live-selector 'article.md-content__inner' | '.vp-doc'] [--json out.json]
     # a path may differ per side: --paths 'daemon/overview.html=>daemon/overview/'

# browser smoke test (Playwright): docs mode, or app mode for plain Vite apps
node kit/scripts/smoke.mjs --url http://127.0.0.1:4173/LeviLamina/ [--search-term hook] [--pages a/,b/,c/] [--redirect-lang zh]
node kit/scripts/smoke.mjs --app --url http://127.0.0.1:4173/ [--pages about/,projects/] [--current home] [--not-found missing/]

# kit unit tests (cookies, locale mapping, pre-paint script, docs root redirect) and the cross-site e2e
node --test "kit/tests/*.test.mjs"
node kit/tests/cross-site.e2e.mjs --app <app dist> --docs <docs dist> --docs-base /Demo/

node kit/scripts/shot.mjs <url> <out.png> [light|dark] [w] [h] [--full]
```

Both smoke modes check the unified chrome: the GlobalBar's canonical tabs (in order, with their canonical
URLs) and controls (language · theme · GitHub), Auto as the default theme following the system live, theme and
language stored in the `levimc_theme` / `levimc_lang` cookies and applied after a reload from the cookie alone,
the menu keys of the theme and language menus, no paint of the prerendered language for a stored `zh-CN`
preference (apps and single-locale docs: the chrome and `<main>` stay hidden until they switch),
the 390px layout (controls visible, exactly one menu button whose menu holds every bar link and the five docs
projects, no sideways scroll), no console or hydration errors and the themed 404. Docs mode adds SPA
navigation, the docs header (no duplicated controls, sticky while the bar scrolls away), Ctrl+K search, the
language menu landing on the equivalent page, the root-only redirect (stored preference wins, also after an
in-site link), content tabs and copy buttons.

External link verdicts: `ok`, `ok-redirect` (`/releases/latest` and allow-listed hosts), `ok-auth`
(GitHub edit links redirect to sign-in), `redirect` (update the link to the final URL), `blocked`
(403/429 bot walls — verify by hand), `broken`, `error`.

## Design rules — do / don't

**Do**
* Use semantic tokens (`bg-canvas`, `text-ink`, `text-muted`, `border-line`, `text-link`, `bg-primary-strong`,
  `--color-adm-*`) — never raw hex in app code; dark mode then comes for free.
* Keep painterly effects in heroes, backdrops, margins and cards' backgrounds; keep text on calm canvas.
* Use the pixel vocabulary for interactive things: `mc-btn` for actions, `hotbar` for tab sets / pagination /
  segmented controls, `kit-slot` for icons, `px-corners` / `px-card` for frames, `mc-kbd` for keys.
* Use sprites at 16 or 32 px (crisp multiples). Use Fraunces only for display headings (H1, hero, section
  titles), Silkscreen only for short Latin labels (badges, eyebrows, versions — never CJK, never body copy).
* Keep each project's own logo; the kit provides the shared chrome around it.
* Link to the canonical, redirect-free URLs (trailing slash for directories); run `linkcheck --external`.
* Respect `prefers-reduced-motion` (all kit animations stop) and keep focus visible (`--color-focus`).
* Put the GlobalBar first on every page, unmodified: same tabs, same controls, same order on every site. A site's
  own navigation goes below it as a light secondary row (the docs header) or in the page itself.
* Read and write theme / language only through the kit (`ThemeProvider`, `LocaleSwitcher`, `usePreferredLocale`,
  `prefs.ts`), so the choice is shared by every LeviMC site.

* Lay pages out as `.kit-shell` (min-height 100dvh flex column) → header → `<main>` (grows) → `SiteFooter`, so
  the footer is flush with the bottom on short pages; give flex/grid children that hold text `min-width: 0`
  (kit components already do: cards, search results, sidebar, TOC, pager, admonition titles wrap long URLs,
  identifiers and CJK/emoji runs).

**Don't**
* Don't round corners or add soft drop shadows to controls — pixel frames and the 2px "pixel drop" only.
* Don't put painted scenes or brush texture behind body text, code or tables.
* Don't ship CJK webfonts, recolour sprites, or add new display typefaces.
* Don't render dates/random values differently on server and client (hydration); format dates with
  `timeZone: 'UTC'` like the kit does.
* Don't edit vendored `kit/` files.
* Don't add theme, language or GitHub controls to a site's own header (they live in the GlobalBar), and don't
  store those preferences under site-specific keys.

## Porting checklist: MkDocs sites (LeviLamina, LegacyScriptEngine)

1. Vendor the kit; add `package.json` (template), `tsconfig.json`, `vite.config.ts`, `.gitignore`.
2. `node kit/scripts/mkdocs-nav.mjs mkdocs.yml` → paste into `docs.config.ts`. Keep `urlStyle: 'directory'`,
   `i18n.mode: 'suffix'` (locales `en` default + `zh`, `lang: 'zh'` like the live site), `slug: 'pymdownx'`,
   `markdown.compat: 'python-markdown'`, `sidebar: 'tabs'`, `hostname`/`sitemap: { hostname: 'https://docs.levimc.org' }`.
3. `exclude: ['overrides/**']` (theme overrides are not content). Delete `mkdocs.yml`, `requirements.txt`,
   `overrides/` once the port is merged (the language-redirect script there is replaced by the kit's).
4. `logo`/`favicon` paths stay as in `theme.logo`/`theme.favicon` (they are copied verbatim).
5. `editLink: 'https://github.com/LiteLDev/<Repo>/edit/<branch>/<docs_dir>/:path'`.
6. Fix nav entries pointing at external own-site URLs: `https://docs.levimc.org/LeviLamina/api` →
   `https://docs.levimc.org/LeviLamina/api/`; `https://levimc.org/about` → `https://levimc.org/about/`.
7. `npm run build` — fix every warning (unresolved links, missing anchors). Known in LeviLamina today:
   `build_guide(.zh).md` links `architecture.md` (should be `../architecture.md`) and
   `how_to_guides/testing_guide.md` (missing page).
8. Serve, then: `linkcheck` (0 internal errors; `--ignore-paths /LeviLamina/api` because Doxygen is merged
   later in CI), `linkcheck --external` (fix `redirect`/`broken`), `url-parity --anchors` (all live URLs 200,
   0 redirects, every old #anchor present), `text-parity` (expect only the documented differences below), `smoke`.

   Reference results for the unmodified upstream content built with this kit (kit 1.0.0):
   LeviLamina — 88 pages, URL parity 88/88 + all 1106 heading anchors, text parity 99.978 % (74/87 pages
   identical; 12 of the 13 differences are only MkDocs' stray backslash before `<` — `Observable\<T>`,
   `Overload\<Params>`, `CoroTask\<T>`, `Generator\<T>`, `Listener\<T>`, `Cancellable\<T>`, `Expected\<T>`,
   `\<=1.7.5` — which the kit renders as the author wrote them; with `markdown.literalBackslashes: true` it is
   86/87 identical, 99.998 %). LegacyScriptEngine — 92 pages, URL parity 92/92 + all 1537 anchors, text parity
   80/91 identical (99.977 %, every remaining difference listed under Known limitations).
9. CI: replace the mkdocs job with `npm ci && npm run build`; keep the Doxygen job and merge
   `site/api` into `dist/api` as before (header/footer/CSS from `kit/static/doxygen`).

## Porting checklist: VitePress sites (lip, LeviLauncher, LeviLaunchroid)

1. Vendor; add the four files. `contentDir: 'docs'`, `urlStyle: 'html'`, `cleanUrls` as in the old config
   (LeviLauncher: `true`; lip: `false`), `i18n.mode: 'folder'` with the old locales (`root` → default with
   `prefix: ''`; `zh-CN`, `zh-HK`, `es-ES`, … with `prefix: '<code>/'`), `slug: 'vitepress'`,
   `markdown.compat: 'commonmark'`.
2. Move `themeConfig.nav` → `nav: { [locale]: … }`, `themeConfig.sidebar` → `sidebar: { [locale]: … }` (the
   builder functions can be pasted as-is; they return the same shapes). `docFooter`/`editLink.text`/labels →
   `ui` or `editLink.text`. `head` stays VitePress-shaped. `public/` is picked up automatically.
3. Remove the inline language-redirect `<script>` from `head` (the kit does root-only redirects from the
   cross-site language preference).
4. Home page frontmatter (`layout: home`, `hero`, `features`) works unchanged.
5. Build, fix warnings, run the same verification as for MkDocs. lip was ported in `demo/lip.config.ts` as
   a reference: 56 pages, 0 build warnings, 0 internal link errors, URL parity 52/52 (+ heading anchors),
   text parity 100 % (51/51 pages identical), smoke 11/11.

## Known limitations

* Python-Markdown compatibility is targeted at the constructs used in LiteLDev docs. Remaining differences on
  the live pages are all source bugs or quirks where the kit renders the author's intent:
  unbalanced `**` handled differently (pymdownx.betterem: LL `usage_guidelines`, LSE `NBT.zh`), `hh:mm:ss`
  eaten by pymdownx.emoji on the live site (LSE `Economy`), 2-space-indented fences inside footnotes (live
  renders them as inline code "json …"; the kit renders code blocks — LSE `i18n`), `Array<NBT object>` /
  `Object<string, NBT Object>` (the live site lets the browser swallow them as tags; the kit shows them), a
  stray double backtick in LSE `NBTValue`, and LeviLamina's escaped generics (`Observable<T>`, `<=1.7.5`, …
  instead of MkDocs' `Observable\<T>`, `\<=1.7.5`; opt back in with `markdown.literalBackslashes: true`).
* pymdownx extensions that LiteLDev configures but never uses (critic, keys, mark, caret, tilde,
  smartsymbols, emoji, arithmatex, abbr, def_list, attr_list beyond heading ids) are not implemented.
* VitePress Vue components inside markdown (e.g. `<Badge>`) are not supported (none are used today);
  unknown tags are escaped and reported.
* Search indexes prose and inline code, not fenced code blocks (LeviLamina: 416 KB en / 655 KB zh raw,
  105 KB / 168 KB gzipped; loaded only when search is opened).
* The theme menu trigger's `aria-label` is the generic "Theme" until hydration (kit.js: until it runs); its
  sprite, visible state name and the checked item are correct immediately (CSS from `html[data-theme-pref]`).
* The "language pending" hiding (apps, single-locale docs, static pages) has a 1.5 s fail-safe: when the
  scripts take longer, the prerendered language shows until they run.
* Doxygen's own markup keeps a few axe findings the kit does not touch: icon-only links in the tree
  (`link-name`), no `<h1>`, and doxygen-awesome's floating TOC outside the landmarks (`region`).
* Language preferences stored by pre-kit sites under their own keys (e.g. VitePress's `levilauncher-docs-locale`)
  are not read; kit 1.0's `levimc-locale-<site>` keys and the 1.0 theme key are migrated.
* `lastUpdated` needs git history (`fetch-depth: 0` in CI).

## Maintaining the kit

* Sprites: edit `assets/sprites.mjs`, then `node assets/build-assets.mjs` (regenerates `assets/icons/`,
  `components/pixel-icons.ts`, `theme/generated.css` — including the painted backdrop scenes from
  `components/paint.ts` — and `theme/hero.css`).
* Static chrome: from an app with the dependencies installed (e.g. `demo/`):
  `node kit/static/build-static.mjs --out ../static` (snippets, `kit.js` from `kit.src.js`, `kit.css`,
  `kit-chrome.css`, `kit-nojs-dark.css`, pages, Doxygen templates). Rebuild it after any change to the
  components, the theme CSS, `prefs.ts` or `i18n.ts`.
* Demo: `cd demo && npm ci && npm run vendor && npm run typecheck && npm test && npm run build && npm run preview`,
  then `npm run linkcheck`, `npm run smoke`; the folder-mode lip demo: `npm run build:lip && npm run preview:lip`;
  the single-locale docs: `npm run build:single && npm run preview:single && npm run smoke:single`; the plain app:
  `npm run build:app && npm run preview:app && npm run smoke:app`; cross-site:
  `node kit/tests/cross-site.e2e.mjs --app app/dist --docs dist`. `demo/package-lock.json` pins the dependency
  set the kit is verified with; the demo's `kit/` is the vendored copy (`npm run vendor`, git-ignored).
* Bump `VERSION` and `components/version.ts` together on every change that consumers must re-vendor (the tests
  and build-static check they agree), and add a [Changelog](#changelog) entry with migration notes.
* The kit is published in LiteLDev/liteldev.github.io under `kit/`, with its `demo/` (sources and lockfile;
  `vendor.mjs` leaves `demo/` out of every site copy). Its CI (`.github/workflows/kit.yml`) runs the unit tests and
  builds, type-checks and link-checks every demo; `screens/` is not published.

## Changelog

### 1.1.0 — 2026-10-18

**One chrome on every site (the unified chrome contract).**

* `GlobalBar` is identical everywhere: tabs **Home · Projects · Docs ▾ · Mods · Blog · Community · About** and,
  on the right, **language menu · theme menu · GitHub**. Sites can no longer replace, hide or reorder them
  (`items` and `end` are gone; `end` is accepted and ignored). Same-site tabs can route in the app
  (`siteOrigin` + `linkComponent` + `isAppPath`), the brand sprite can be swapped (`brandIcon`), the GitHub
  button can point at a project (`github`), and `sticky` keeps the bar on top for sites without another header.
  The phone menu (≤ 960px) lists the same links; on docs sites the docs drawer carries them (`menu={false}`).
  The bar is a labelled region, so axe's `region` rule passes on every page.
* Theme: **Auto / Light / Dark** in a menu (`ThemeSwitcher`; `ThemeToggle` is now its alias). Auto follows
  `prefers-color-scheme` live and is the default; the trigger shows the current state's sprite and name.
* Cross-site preferences (`components/prefs.ts`): cookies `levimc_theme` and `levimc_lang` on
  `Domain=levimc.org; Path=/; SameSite=Lax; Secure; Max-Age=1 year`, localStorage as fallback (and kit 1.0's
  `levimc-theme` copied into the cookie once). Every pre-paint script reads them (no flash). Locale mapping
  (`matchLocale`, `pickLocale`): zh-* → the site's zh variant, then base language, then English.
  `usePreferredLocale` gives plain apps their locale from the preference.
* Docs language: the bar's language menu is the site's locale switcher (stores the preference, opens the
  equivalent page). The root-only redirect follows the stored preference first — **it always wins**, also after
  an in-site link — then the browser languages. Explicit locale URLs never change the preference.
* Docs header redesigned as the lower half of one header: logo + name, section tabs and search in one light,
  compact row (3.25rem) on the page's canvas; no theme/language/GitHub controls (they are in the bar); the bar
  scrolls away and the row sticks, with a hairline only once stuck. Long navs fit themselves before the first
  paint and on resize (`html[data-kit-nav-fit]`: icon search → tabs row → drawer; `header.tabsRow`). Phones:
  one menu button, one drawer with the sections, the sidebar and the LeviMC links.
* Static pages and Doxygen get the same bar with working language and theme menus: `kit.js` (now generated
  from `kit.src.js`) translates the chrome — and only the chrome — into the stored language (9 UI locales) and
  stores choices cross-site; `theme-init-static.js` keeps the chrome hidden ≤ 1.5 s while it does, so it never
  flashes.
* Doxygen header redesigned as the docs pages' one header: GlobalBar (menu off) + one light row with the
  project's logo and name, its docs sections plus an active "Doxygen API" tab, and Doxygen's search; the
  painted title band and Doxygen's menubar are gone (the tree has the same entries); phones get one menu
  button whose panel holds the sections, Doxygen's menu and the LeviMC links; Doxygen's regions are landmarks.
* No flash of the prerendered language: `createPrefsInitScript({ appLocales })` + `usePreferredLocale` for
  plain apps (the page waits, ≤ 1.5 s, until it shows the visitor's language), the same for the chrome of
  single-locale docs sites — which now follows the stored preference in place.
* Language and theme menus have the WAI-ARIA menu keys (Arrow keys, Home/End, focus on the checked item when
  opened from the keyboard) in React and in kit.js.
* Docs pages without JavaScript follow a dark system theme (the build emits `assets/kit-nojs-dark.<hash>.css`
  from the site stylesheet, loaded inside `<noscript>`), like the static pages.
* Hero pages look the same under the docs row: a page with a `PaintedHero` never also shows the backdrop's
  scene band (home layout, custom layouts, apps).

**Renames.** pkg.levimc.org is **LeviMC Mods**: bar/footer label "Mods" (en/es/de/fr), "模组" (zh-CN), "模組"
(zh-HK), "MOD" (ja), "모드" (ko), "Моды" (ru); `modsName` / `modsBlurb` strings ("LeviMC Mods" / "LeviMC 模组" /
"LeviMC 模組"); the id stays `packages`. The Blog link is `https://levimc.org/blog/` (blog.levimc.org no longer
resolves).

**Upstreamed from the round-1 site ports** (delete the local copies when re-vendoring):

| Patch | From | Now in the kit |
|---|---|---|
| prerender with replacement functions (`$&` in content) | pkg.levimc.org | `ssg/prerender.mjs`, `docs/prerender.mjs` |
| GlobalBar `linkComponent` | levimc.org | `siteOrigin` + `linkComponent` + `isAppPath` (GlobalBar, GlobalNavList, SiteFooter) |
| `LocaleOption.short` (trigger text "EN") | levimc.org | `LocaleSwitcher` |
| header tabs row for long navs | LeviLamina | `header.tabsRow` (`'auto'` default) + nav fit |
| sidebar/drawer/TOC reveal of the current entry | LeviLamina, LegacyScriptEngine | `components/reveal.ts`, Sidebar, MobileDrawer, Toc |
| no second external glyph after "🔗" | LeviLamina | Sidebar |
| heading `scroll-margin-top` counted the header twice | LeviLamina | `theme/prose.css` |
| mobile TOC on the article's measure | lip, LeviLauncher, LeviLamina | `docs.css` |
| scrollable tables focusable (axe) | lip, LeviLamina | `enhance.ts` |
| pymdownx tab ids `#__tabbed_<set>_<n>` (+ hash selects the tab) | LeviLamina | `render.ts`, `enhance.ts` |
| Material home title (`:title - X` → `X` on the root page) | LeviLamina, LegacyScriptEngine | `shared/head.ts` |
| empty `dist/kit/docs/app/` left behind | LeviLamina, LegacyScriptEngine | `docs/prerender.mjs` |
| Doxygen: bar above Doxygen's layers, search field contrast, doxygen.nl credit link | LeviLamina | `static/doxygen/*` |
| TOC indentation for levels 3/4 (`outline: [2, 6]`) | LegacyScriptEngine | `docs.css` |
| python-markdown: wide list-marker gaps, lazy blockquote continuation, Python's code-span pairing | LegacyScriptEngine | `preprocess.ts` |
| Python-Markdown footnote ids (`fn:1`, `fnref:1`) — now with the label's own case (`fn:Note`) | LegacyScriptEngine | `render.ts` |
| `sitemap.xml.gz` for directory-style sites | LegacyScriptEngine | `docs/node/vite.ts` |
| 4 home features → 2 × 2 | lip | `docs.css` |
| bold link text keeps the link colour | lip | `prose.css` |
| search button named by its visible text (label visually hidden when compact) | lip | SiteHeader, `docs.css` |
| ThemeToggle reads the site's `ui` strings | LeviLauncher | GlobalBar gets the docs strings |
| `<dir>/index` URLs match (no hydration into 404) | LeviLauncher | `shared/routing.ts` |
| `:lang(ko)` keep-all, `:lang(ru)` sans display face, 404 title balance / `auto-phrase` | LeviLauncher | `base.css`, `docs.css` |
| sidebar/TOC wrappers are `<div>` around their labelled `<nav>` (axe landmark-unique) | LeviLauncher | DocLayout |
| folder-mode links name the file they link (`[English](/)`) | LeviLaunchroid | `links.ts` |
| active header item: exact → dropdown that lists the page → longest prefix | LeviLaunchroid | `nav.ts` |
| open nav dropdown not clipped by the scrolling list | LeviLaunchroid | `docs.css` |
| pixel focus outline in menus | LeviLaunchroid | `chrome.css` |
| nav fit (no clipped items) — now also before hydration | LeviLaunchroid | SiteHeader (inline script + hook) |
| `SiteFooter copyright` (footer.copyright no longer replaces footer.message) | LeviLaunchroid | SiteFooter, docs App |
| menus close when focus leaves | LeviLaunchroid | `menu.ts`, `kit.js` |
| current page marked in nav dropdowns and the drawer | LeviLaunchroid | SiteHeader, MobileDrawer |
| hero action row may be wider than the 40rem text | LeviLaunchroid | `chrome.css` |
| static pages: skip link, underlined title link, balanced title, no-JS dark theme, live footer year, redirect before stylesheets | liteldev.github.io | `static/build-static.mjs`, `kit-nojs-dark.css`, `kit.js` |

Not taken over, and why:

* levimc.org's GlobalBar `items` (custom tabs): the bar must be identical on every site. Features and
  Support Us move out of the bar into levimc.org's pages / footer.
* LeviLaunchroid patch 7 as written (skip the redirect after an in-site link even with a stored choice): the
  stored preference must always win. The referrer skip remains for visitors without a preference.
* LeviLaunchroid patch 8 (following a link to another locale's home stores that locale): only the language
  menu changes the preference; visiting a locale URL never does.
* lip's labelled `<aside>` wrappers: LeviLauncher's plain wrappers around the already-labelled `<nav>`s give
  one landmark per region instead of two.
* lip's social icons in the drawer and LegacyScriptEngine's ≤ 420px title squeezing: superseded by the new
  header (GitHub is in the bar at every width; the docs row has no other controls, so names fit from 320px).

**Other fixes.** Sidebar groups of the `'tabs'` sidebar start closed unless they hold the current page
(MkDocs Material without `navigation.expand`; `sidebarExpand: true` restores 1.0); the bar's phone menu
scrolls inside the viewport with a scroll cue; `PaintedHero` has `badge` / `aside` slots, puts a space between
its title lines (textContent "Mod Bedrock your way."), and its default scenes are cached CSS backgrounds
(`theme/hero.css`) instead of ~200 KB of inline SVG per page; `Card` likewise spaces title and description;
`.px-card`'s drop no longer leaks into nested pixel controls; plain `<code>` inside `.kit-code` wraps (only
Shiki's `pre > code` is `max-content`); `scroll-padding-top` only reserves a sticky header that exists
(`--kit-sticky-offset`); metric-matched fallback fonts remove the layout shift of the web-font swap;
`<meta name="generator" content="levimc-kit 1.1.0">` on every docs page, prerendered app page, static page and
Doxygen page; `smoke.mjs` has an app mode and checks the chrome contract; `serve-pages.mjs` collapses repeated
slashes and redirects every directory like GitHub Pages; the scripts run through symlinked paths;
`vendor.mjs` also accepts `<app>/kit`; the kit type-checks with TypeScript 6.0.x and 7.x.

#### Migrating a site to 1.1.0

1. Re-vendor (`rm -rf kit && node <kit>/scripts/vendor.mjs .`) and delete every local kit patch (the table
   above). Copy `kit/static` assets again where a site serves them (now also `kit-nojs-dark.css`).
2. Remove site-local theme/language/GitHub controls from headers and the GlobalBar `end`/`items` props; pass
   the site's languages as `languages={…}` instead. Replace site-specific theme/language storage with the kit
   preferences (pre-paint: `createThemeInitScript({ legacyTheme, legacyLang })` migrates old keys once).
3. CSS that targeted `html[data-theme-pref="system"]`, `.kit-theme-toggle*`, `.kit-site-locale` or the 3.75rem
   docs header: the state is now `auto`, the classes are `.kit-theme*`, the header row is 3.25rem
   (`--spacing-header`).
4. Run `smoke.mjs` (docs or `--app`): it now fails on any deviation from the chrome contract.

Site-specific notes:

* **levimc.org** — drop the GlobalBar/LocaleSwitcher patches; `<GlobalBar sticky siteOrigin="https://levimc.org"
  linkComponent={RouterLink} isAppPath={(p) => !p.startsWith('/blog/')} brandIcon={…} languages={{ options
  (with short "EN"/"ZH"), current, onSelect }} />`; drop `.lm-banner` sticky and `.lm-gbar-locale` CSS; prepaint:
  `createThemeInitScript({ appLocales: { locales: LOCALES, prerendered: 'en' }, legacyTheme: ['theme'], legacyLang:
  [{ key: 'locale', map: { en: 'en', zh: 'zh-CN' } }] })` (LOCALES shared by `vite.config.ts` and the app) and read
  the locale with `usePreferredLocale`; drop any own `#root`-hiding CSS for the language switch; hero badge/code
  card via `PaintedHero badge` / `aside` (drop the `order:-1` / absolute positioning); footer labels via
  `SiteFooter strings`.
* **pkg.levimc.org** — drop the prerender patch and the `--px-drop` / `.kit-code code` overrides;
  `current="packages"`, languages en / zh-CN / zh-HK with `usePreferredLocale` and the same locales as
  `appLocales` in the pre-paint script (no English flash for zh visitors); TypeScript 6.0.3 is fine.
* **LeviLamina** — drop all `[kit patch: …]` code; `header: { tabsRow: true }` can go (`'auto'` keeps one row at
  1440px and wraps only when needed); point the Doxyfile at the new `kit/static/doxygen/` header/footer/CSS and
  `kit/static/kit.js` again (the header's sections mirror `docs.config.ts` — update `DOX` in
  `kit/static/build-static.mjs` when the top-level nav changes).
* **LegacyScriptEngine** — drop the patches; the `collapsed: true` marks on API groups are now the default
  (harmless to keep).
* **lip, LeviLauncher, LeviLaunchroid** — drop the patches; LeviLaunchroid's referrer/remember-locale
  behaviour is replaced as described above.
* **liteldev.github.io** — the static-page decorations of `scripts/build-site.mjs` are in `kit/static` now.

### 1.0.0 — 2026-10-17

First release: design tokens and theme, components, the static docs engine (MkDocs and VitePress ports),
static chrome and Doxygen templates, verification scripts.
