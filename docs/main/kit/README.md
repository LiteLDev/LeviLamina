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

Version: see `VERSION` (1.0.0).

---

## Contents

1. [Layout](#layout)
2. [Vendoring](#vendoring)
3. [Dependencies](#dependencies)
4. [Docs site: app structure & commands](#docs-site-app-structure--commands)
5. [Site config API (`defineDocsConfig`)](#site-config-api-definedocsconfig)
6. [Markdown support](#markdown-support)
7. [Plain Vite apps (levimc.org, pkg.levimc.org)](#plain-vite-apps-levimcorg-pkglevimcorg)
8. [Components](#components)
9. [Static chrome & Doxygen](#static-chrome--doxygen)
10. [Verification scripts](#verification-scripts)
11. [Design rules — do / don't](#design-rules--do--dont)
12. [Porting checklist: MkDocs sites](#porting-checklist-mkdocs-sites-levilamina-legacyscriptengine)
13. [Porting checklist: VitePress sites](#porting-checklist-vitepress-sites-lip-levilauncher-levilaunchroid)
14. [Known limitations](#known-limitations)
15. [Maintaining the kit](#maintaining-the-kit)

---

## Layout

```
levimc-kit/
├── README.md  VERSION  package.template.json  tsconfig.template.json
├── theme/                 Tailwind v4 CSS-first theme
│   ├── tailwind.css         one-line entry: @import "tailwindcss" + index.css + @source for the kit
│   ├── index.css            imports everything below (use after your own @import "tailwindcss")
│   ├── tokens.css           @theme tokens (light on :root, dark on .dark) + @custom-variant dark
│   ├── generated.css        textures & sprites as data URIs (generated — do not edit)
│   ├── base.css             document defaults, focus ring, skip link, reduced motion
│   ├── pixel.css            .px-corners .mc-btn .mc-btn-primary .mc-icon-btn .mc-input .mc-kbd .px-card
│   │                        .kit-slot .hotbar .mc-tooltip .grass-divider .px-dot
│   ├── painterly.css        .kit-backdrop* .kit-hero* .kit-painted .kit-item-frame
│   ├── prose.css            .kit-prose doc typography (headings, lists, tables, quotes, footnotes, details…)
│   ├── code.css             .kit-code Shiki blocks (title bar, CSS line numbers, copy button)
│   ├── admonitions.css      .kit-adm (all MkDocs + VitePress + GitHub types) and .kit-tabs
│   └── chrome.css           GlobalBar, footer, menus, theme toggle, badges, tooltips, cards, hero layout
├── assets/
│   ├── sprites.mjs          16×16 pixel sprites as text grids (the source of truth)
│   ├── build-assets.mjs     → icons/*.svg, components/pixel-icons.ts, theme/generated.css
│   └── icons/*.svg          35 crisp-edge sprites (grass, chest, pickaxe, map, book-quill, emerald, …)
├── components/            React + TS, SSR-safe (no window access during render)
│   ├── index.ts             barrel export
│   ├── GlobalBar.tsx  SiteFooter.tsx  ThemeToggle.tsx  LocaleSwitcher.tsx
│   ├── PaintedBackdrop.tsx  PaintedHero.tsx  PixelButton.tsx  Card.tsx  Badge.tsx  Tooltip.tsx
│   ├── Hotbar.tsx (HotbarTabs, Pagination)  PixelIcon.tsx (PixelIcon, BrandIcon)
│   ├── theme.ts (ThemeProvider, useTheme, themeInitScript)  projects.ts (cross-site registry)
│   ├── i18n.ts (chrome strings: en zh-CN zh-HK es ru de ja ko fr)  fonts.ts  menu.ts
│   ├── paint.ts             deterministic painted scenes (lily pond + block bridge / harbour sunrise + pixel boats)
│   └── pixel-icons.ts       generated sprite data
├── docs/                  the static docs engine
│   ├── node/                build side (Node): config.ts vite.ts site.ts content.ts links.ts nav.ts git.ts
│   │   └── markdown/        preprocess.ts render.ts slug.ts shiki.ts shiki-themes.ts html-tags.ts
│   ├── shared/              types.ts routing.ts head.ts search.ts (used by build and browser)
│   ├── app/                 React app: index.html entry-client.tsx entry-server.tsx App.tsx data.ts enhance.ts
│   │                        layouts/ (DocLayout HomeLayout NotFound) components/ (SiteHeader Sidebar Toc
│   │                        SearchModal MobileDrawer DocFooter KitLink) docs.css styles.css layout-api.ts
│   ├── build.mjs            client build → SSR build → prerender
│   └── prerender.mjs
├── ssg/prerender.mjs      prerenderRoutes() for plain Vite apps
├── static/                non-React chrome (prebuilt; regenerate with build-static.mjs)
│   ├── kit.css  kit-chrome.css  kit.js  theme-init.js  theme-init-doxygen.js
│   ├── globalbar.html  footer.html  i18n/{globalbar,footer}.<locale>.html
│   ├── pages/index.html  pages/404.html     docs.levimc.org root redirect + themed 404
│   ├── doxygen/header.html footer.html doxygen-kit.css
│   └── icons/  grass.svg
├── scripts/               serve-pages · linkcheck · url-parity · text-parity · smoke · shot · vendor · mkdocs-nav
├── demo/                  demo docs sites (not vendored): suffix/directory/pymdownx + folder/html/vitepress
└── screens/               review screenshots (not vendored)
```

## Vendoring

Copy the kit into each app as `<app>/kit/` (everything except `demo/`, `screens/`, `node_modules/`):

```sh
node path/to/levimc-kit/scripts/vendor.mjs path/to/app        # → path/to/app/kit/  (replaces it)
```

`vendor.mjs` produces a clean copy: it skips `demo/`, `screens/`, `node_modules/`, `dist/`, `.kit/` and every
dotfile, replaces `<app>/kit/` completely (re-running is idempotent) and writes `kit/.vendored` with the version.
Verified: 194 files / 2.1 MB, no demo, screenshots or dependencies; running the vendored copy's own
`kit/scripts/vendor.mjs <dest>` reproduces it byte for byte. `--dest <name>` changes the folder name.
Never edit files under `kit/` in an app; change the kit and re-vendor. The demo vendors itself the same way
(`cd demo && npm run vendor`).

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
| typescript | 7.0.2 | | mdast-util-to-string | 4.0.0 |
| @types/react | 19.3.0 | | unist-util-visit | 5.1.0 |
| @types/react-dom | 19.3.0 | | shiki | 4.5.0 |
| @types/node | 24.19.2 | | @shikijs/transformers | 4.5.0 |
| @types/hast | 3.0.5 | | yaml | 2.9.1 |
| @types/mdast | 4.0.4 | | picomatch | 4.0.7 |
| @types/unist | 3.0.3 | | @types/picomatch | 4.0.3 |

Playwright is only needed for `smoke.mjs`, `text-parity.mjs` and `shot.mjs`; they resolve it from
`$LEVIMC_PW_DIR` (a directory containing `node_modules/playwright`) or from the app (`npm i -D playwright@1.56.1`).

Plain Vite apps (levimc.org, pkg.levimc.org) only need react, react-dom, react-router, vite,
@vitejs/plugin-react, tailwindcss, @tailwindcss/vite, typescript and the @types packages.

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
| `repo` | URL | header GitHub button (if `social` not given) |
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
| `social` | `[{ icon: 'github'\|'discord'\|'telegram'\|'x'\|'youtube'\|'email', link, label? }]` | header icons |
| `footer` | `{ message?, copyright? }` | extra line in the shared footer |
| `ui` | `{ [locale]: Partial<UiStrings> }` | override chrome strings (e.g. VitePress `docFooter`, `editLink.text`) |
| `titleTemplate` | `':title \| :site'` | use `':title - :site'` to match MkDocs |
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

### Language behaviour

* The locale switcher maps the current page to the same page in the target locale (falls back to that
  locale's home), and stores the choice in `localStorage['levimc-locale-<base segment>']`.
* Auto-redirect runs only when the URL is exactly the site root (`base` or `base/index.html`): the stored
  choice wins, otherwise the first `navigator.languages` entry that matches a locale (`zh-TW/HK/MO/Hant`
  prefer a `zh-HK`-style locale). Deep links are never redirected.

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
├── index.html                 <!--app-head--> in <head>, <div id="root"><!--app-html--></div>
├── public/levimc-theme-init.js   copy of kit/static/theme-init.js (or inline themeInitScript)
├── src/styles.css             @import "../kit/theme/tailwind.css"; @source "./";
├── src/App.tsx                routes; wrap in <ThemeProvider>; <PaintedBackdrop/> <GlobalBar/> … <SiteFooter/>
├── src/entry-client.tsx       hydrateRoot(…, <BrowserRouter><App/></BrowserRouter>)
├── src/entry-server.tsx       export function render(url) { return { html, head, lang } }
├── prerender.mjs              prerenderRoutes({ routes, notFound })
└── vite.config.ts             plugins: [react(), tailwindcss()]
```

`index.html` head: the theme init script must run before CSS paints (blocking `<script src="/levimc-theme-init.js">`
or an inline `<script>` with `themeInitScript`), then the fonts (`FONT_HEAD_HTML` from `kit/components/fonts.ts`):
preconnect to fonts.googleapis.com / fonts.gstatic.com and the css2 URL for Inter, Fraunces, Silkscreen,
JetBrains Mono (`display=swap`). CJK uses the system stack — never ship a CJK webfont.

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
and `.nojekyll`. Verified with a two-route example app (hydration without warnings).

## Components

All components are SSR-safe and render identical markup on server and client.

| Component | Purpose / key props |
|---|---|
| `GlobalBar` | cross-site bar: `current` (`'home'\|'projects'\|'docs'\|'packages'\|'community'\|'blog'\|'about'`), `currentDocs`, `locale`, `end` (extra controls). `<details>` dropdowns work without JS; mobile collapses into a sites menu |
| `SiteFooter` | grass horizon over soil: docs projects, ecosystem, Discord/Telegram/X/YouTube/email/GitHub, `© LeviMC`, "Not affiliated with Mojang Studios."; `extra`, `year`, `locale` |
| `ThemeToggle` | one button with 16×16 sun / moon / monitor ("system") sprites and a Minecraft item tooltip ("Theme: Dark — Switch theme"), both chosen by CSS from `html[data-theme-pref]` (correct on first paint, no mismatch); `aria-label` reflects the state after hydration; cycle system → opposite → other → system |
| `LocaleSwitcher` | `options[{code,label,lang,href}]`, `current`, `onSelect`, `linkComponent` |
| `PaintedBackdrop` | fixed impressionist dabs + brush + grain; optional painted scene band at the page top |
| `PaintedHero` | painted pond with block-built Japanese bridge (light) / harbour sunrise with pixel boats (dark), AA scrim, grass horizon; `eyebrow name text tagline actions image linkComponent` |
| `PixelButton` | Minecraft bevel button: `variant` default/primary/ghost, `size`, `icon`, `iconRight`, `href` |
| `Card` | stepped-corner card with sprite in an inventory slot; `title description icon eyebrow href footer` |
| `Badge` | `tone` grass/diamond/gold/redstone/enchant/stone/pond, `pixel` (Silkscreen, Latin only) |
| `Tooltip` | Minecraft item tooltip on hover/focus (`aria-describedby`) |
| `HotbarTabs`, `Pagination` | hotbar-style tabs (WAI-ARIA keyboard) and numbered pagination (crawlable hrefs) |
| `PixelIcon`, `BrandIcon` | 16×16 crisp sprites (`PIXEL_ICONS`); vector brand marks for social links |
| `theme.ts` | `ThemeProvider`, `useTheme()`, `themeInitScript`, `createThemeInitScript({ doxygen })`, `applyThemePreference`, key `levimc-theme` |
| `projects.ts` | `LINKS`, `DOCS_PROJECTS`, `SOCIAL`, `globalNav()` — the redirect-free canonical cross-site URLs |
| `i18n.ts` | `uiStrings(lang)`, `resolveUiLocale(tag)` for en, zh-CN, zh-HK, es, ru, de, ja, ko, fr |

Stable test hooks: `data-kit-theme-toggle`, `data-kit-locale-switcher`, `data-kit-search-trigger`,
`data-kit-nav-toggle`, `data-kit-copy`, `data-kit-tabs`, `data-doc-content` (wraps rendered markdown only),
`data-kit-globalbar`, `data-kit-footer`, `data-kit-hero`.

Canonical cross-site URLs (exact, no redirect): Home `https://levimc.org/`, Projects
`https://levimc.org/projects/`, Community `https://levimc.org/community/`, About `https://levimc.org/about/`,
Packages `https://pkg.levimc.org/`, Blog `https://blog.levimc.org/`, GitHub `https://github.com/LiteLDev`,
Docs `https://docs.levimc.org/{LeviLamina,LegacyScriptEngine,lip,LeviLauncher,LeviLaunchroid}/`,
Discord `https://discord.gg/v5R5P4vRZk`, Telegram `https://t.me/LiteLoader`, X `https://x.com/levimc_org`,
YouTube `https://www.youtube.com/@LeviLamina`, `mailto:contact@levimc.org`. lip's repository is
`https://github.com/LiteLDev/lip` (`futrime/lip` redirects).

## Static chrome & Doxygen

`static/` is prebuilt — consumers copy files, no build needed:

* `kit.css` — full theme incl. Tailwind preflight (standalone pages). `kit-chrome.css` — only the chrome,
  no preflight, cascade layers flattened so it can sit next to foreign CSS (Doxygen).
* `globalbar.html`, `footer.html` (+ `i18n/*.<locale>.html`) — rendered from the React components.
* `kit.js` — vanilla theme toggle and menus. `theme-init.js` / `theme-init-doxygen.js` — blocking head scripts.
* `pages/index.html` (docs.levimc.org root → levimc.org redirect, with project cards) and `pages/404.html`
  reference assets under `/levimc-kit/` (copy `kit.css`, `kit.js`, `icons/`, `grass.svg` there).

**LeviLamina Doxygen** (`docs/api/`): copy `static/doxygen/header.html` → `docs/api/header.html`,
`static/doxygen/footer.html` → `docs/api/footer.html`, and set in the Doxyfile:

```
HTML_HEADER            = docs/api/header.html
HTML_FOOTER            = docs/api/footer.html
HTML_EXTRA_STYLESHEET  = docs/api/doxygen-awesome-css/doxygen-awesome.css kit/static/kit-chrome.css kit/static/doxygen/doxygen-kit.css
HTML_EXTRA_FILES       = kit/static/kit.js
```

Drop `doxygen-awesome-darkmode-toggle.js` (kit.js owns the theme and keeps `html.dark-mode` /
`html.light-mode` in sync for doxygen-awesome v2.4.1). Verified with doxygen 1.16.1 + doxygen-awesome-css
2.4.1 in both themes (`screens/doxygen-*.png`).

## Verification scripts

All are Node ESM with no dependencies beyond Playwright (where noted).

```sh
# GitHub Pages emulation: file → 200, /x → x.html, /x → 301 /x/ for directories, else 404.html (404)
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

# browser smoke test (Playwright)
node kit/scripts/smoke.mjs --url http://127.0.0.1:4173/LeviLamina/ [--search-term hook] [--pages a/,b/,c/]

node kit/scripts/shot.mjs <url> <out.png> [light|dark] [w] [h] [--full]
```

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
3. Remove the inline language-redirect `<script>` from `head` (the kit does root-only redirects).
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
* The theme toggle's `aria-label` is generic ("Theme — Switch theme") until hydration; the icon and the visible
  tooltip are correct immediately (CSS).
* `lastUpdated` needs git history (`fetch-depth: 0` in CI).

## Maintaining the kit

* Sprites: edit `assets/sprites.mjs`, then `node assets/build-assets.mjs` (regenerates `assets/icons/`,
  `components/pixel-icons.ts`, `theme/generated.css` — including the painted backdrop scenes from
  `components/paint.ts`).
* Static chrome: from an app with the dependencies installed (e.g. `demo/`):
  `node kit/static/build-static.mjs --out ../static` (snippets, `kit.css`, `kit-chrome.css`, pages,
  Doxygen templates).
* Demo: `cd demo && npm ci && npm run vendor && npm run build && npm run preview`, then `npm run linkcheck`,
  `npm run smoke`; the folder-mode lip demo: `npm run build:lip && npm run preview:lip`.
* Bump `VERSION` on every change that consumers must re-vendor.
