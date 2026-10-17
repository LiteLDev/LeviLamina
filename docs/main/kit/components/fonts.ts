// Web fonts for every LeviMC site. CJK text uses the system stack (no CJK webfont is shipped).
//   Inter            UI and body copy
//   Fraunces         display / hero headings only
//   Silkscreen       short Latin micro-labels only (badges, eyebrows, version tags) — never CJK, never body
//   JetBrains Mono   code
export const GOOGLE_FONTS_HREF =
  'https://fonts.googleapis.com/css2?family=Fraunces:opsz,wght@9..144,400..700&family=Inter:wght@400..700&family=JetBrains+Mono:wght@400..600&family=Silkscreen&display=swap';

/** Paste into <head> (index.html) of any LeviMC app. */
export const FONT_HEAD_HTML =
  '<link rel="preconnect" href="https://fonts.googleapis.com" />' +
  '<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin />' +
  `<link rel="stylesheet" href="${GOOGLE_FONTS_HREF}" />`;
