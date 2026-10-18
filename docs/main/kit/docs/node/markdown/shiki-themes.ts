// Shiki (TextMate) themes harmonised with the kit palette. Every token colour was checked for
// ≥ 4.5:1 contrast against its code background (light #FBF8EF, dark #0B1620).

interface Palette {
  bg: string;
  fg: string;
  comment: string;
  keyword: string;
  storage: string;
  string: string;
  number: string;
  func: string;
  type: string;
  variable: string;
  property: string;
  punct: string;
  tag: string;
  attr: string;
  macro: string;
  regexp: string;
  invalid: string;
  heading: string;
}

const nymphéas: Palette = {
  bg: '#fbf8ef',
  fg: '#26323b',
  comment: '#69737b',
  keyword: '#7a3f9c', // wisteria, deepened
  storage: '#7a3f9c',
  string: '#2f6f3d', // lily green
  number: '#a4470f', // sunrise, earthen
  func: '#2a5d84', // pond
  type: '#0e6a73', // harbour teal
  variable: '#26323b',
  property: '#3b5566',
  punct: '#56616a',
  tag: '#a12f4f', // rose, deepened
  attr: '#8a5a00', // sunlight, ochre
  macro: '#a12f4f',
  regexp: '#8a5a00',
  invalid: '#b42318',
  heading: '#2a5d84',
};

const soleilLevant: Palette = {
  bg: '#0b1620',
  fg: '#dce5ec',
  comment: '#8496a8',
  keyword: '#c6a8ff', // mist violet, lifted
  storage: '#c6a8ff',
  string: '#9bd69e', // lily
  number: '#f5a26b', // sunrise
  func: '#8fd3e0', // harbour light
  type: '#e9c46a', // sunlight
  variable: '#dce5ec',
  property: '#b8cad8',
  punct: '#9aaab8',
  tag: '#f394b4',
  attr: '#f2c230',
  macro: '#f394b4',
  regexp: '#f2c230',
  invalid: '#ff8a80',
  heading: '#8fd3e0',
};

function theme(name: string, type: 'light' | 'dark', p: Palette) {
  return {
    name,
    type,
    colors: {
      'editor.background': p.bg,
      'editor.foreground': p.fg,
    },
    fg: p.fg,
    bg: p.bg,
    tokenColors: [
      { settings: { foreground: p.fg, background: p.bg } },
      { scope: ['comment', 'punctuation.definition.comment', 'string.comment'], settings: { foreground: p.comment, fontStyle: 'italic' } },
      {
        scope: ['keyword', 'keyword.control', 'keyword.other', 'keyword.operator.new', 'keyword.operator.expression', 'keyword.operator.logical.python', 'keyword.operator.wordlike'],
        settings: { foreground: p.keyword },
      },
      { scope: ['storage', 'storage.type', 'storage.modifier', 'keyword.type'], settings: { foreground: p.storage } },
      { scope: ['keyword.operator', 'punctuation', 'meta.brace', 'punctuation.separator', 'punctuation.terminator'], settings: { foreground: p.punct } },
      {
        scope: ['string', 'string.quoted', 'string.template', 'punctuation.definition.string', 'string.unquoted', 'markup.inline.raw', 'markup.raw'],
        settings: { foreground: p.string },
      },
      { scope: ['string.regexp', 'constant.character.escape', 'constant.other.placeholder'], settings: { foreground: p.regexp } },
      {
        scope: ['constant.numeric', 'constant.language', 'constant.other', 'support.constant', 'variable.other.constant', 'constant.other.enum', 'keyword.other.unit'],
        settings: { foreground: p.number },
      },
      {
        scope: ['entity.name.function', 'support.function', 'meta.function-call entity.name.function', 'variable.function', 'entity.name.function.member', 'support.function.builtin'],
        settings: { foreground: p.func },
      },
      {
        scope: [
          'entity.name.type',
          'entity.name.class',
          'entity.name.namespace',
          'entity.name.scope-resolution',
          'support.type',
          'support.class',
          'entity.other.inherited-class',
          'storage.type.built-in',
          'entity.name.type.class',
          'meta.type.annotation entity.name.type',
        ],
        settings: { foreground: p.type },
      },
      { scope: ['variable', 'variable.other', 'variable.parameter', 'meta.definition.variable'], settings: { foreground: p.variable } },
      {
        scope: ['variable.other.property', 'variable.other.object.property', 'support.variable.property', 'meta.object-literal.key', 'support.type.property-name', 'entity.name.tag.yaml', 'entity.name.tag.toml'],
        settings: { foreground: p.property },
      },
      { scope: ['support.type.property-name.json', 'support.type.property-name.json.comments'], settings: { foreground: p.func } },
      { scope: ['variable.language', 'variable.language.this', 'variable.language.self'], settings: { foreground: p.keyword, fontStyle: 'italic' } },
      { scope: ['entity.name.tag', 'meta.tag.sgml', 'punctuation.definition.tag'], settings: { foreground: p.tag } },
      { scope: ['entity.other.attribute-name'], settings: { foreground: p.attr } },
      {
        scope: ['meta.preprocessor', 'keyword.control.directive', 'punctuation.definition.directive', 'entity.name.function.preprocessor', 'keyword.control.import', 'keyword.other.import'],
        settings: { foreground: p.macro },
      },
      { scope: ['meta.preprocessor.include string', 'string.quoted.other.lt-gt.include'], settings: { foreground: p.string } },
      { scope: ['entity.name.label', 'entity.name.section', 'markup.heading', 'entity.name.section.markdown'], settings: { foreground: p.heading, fontStyle: 'bold' } },
      { scope: ['markup.bold'], settings: { fontStyle: 'bold' } },
      { scope: ['markup.italic'], settings: { fontStyle: 'italic' } },
      { scope: ['markup.underline.link', 'string.other.link'], settings: { foreground: p.func } },
      { scope: ['markup.inserted', 'punctuation.definition.inserted'], settings: { foreground: p.string } },
      { scope: ['markup.deleted', 'punctuation.definition.deleted'], settings: { foreground: p.tag } },
      { scope: ['markup.changed'], settings: { foreground: p.attr } },
      { scope: ['invalid', 'invalid.illegal'], settings: { foreground: p.invalid } },
      { scope: ['support.function.shell', 'support.function.builtin.shell', 'entity.name.command.shell'], settings: { foreground: p.func } },
      { scope: ['variable.other.normal.shell', 'variable.other.positional.shell', 'punctuation.definition.variable.shell'], settings: { foreground: p.number } },
      { scope: ['constant.other.option', 'variable.parameter.option'], settings: { foreground: p.type } },
    ],
  };
}

export const kitLightTheme = theme('levimc-light', 'light', nymphéas);
export const kitDarkTheme = theme('levimc-dark', 'dark', soleilLevant);
export const SHIKI_PALETTES = { light: nymphéas, dark: soleilLevant };
