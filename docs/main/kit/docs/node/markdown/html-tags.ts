// Known HTML (and inline SVG/MathML) element names. Raw "tags" outside this list — e.g. Array<NBT object>,
// Object<string, NBT Object>, std::vector<T> in prose — are escaped so they render literally instead of
// being swallowed by the browser as unknown elements.
export const HTML_TAGS = new Set(
  (
    'a abbr acronym address area article aside audio b base bdi bdo big blink blockquote body br button canvas caption ' +
    'center cite code col colgroup data datalist dd del details dfn dialog dir div dl dt em embed fieldset figcaption ' +
    'figure font footer form frame frameset h1 h2 h3 h4 h5 h6 head header hgroup hr html i iframe img input ins kbd ' +
    'label legend li link main map mark marquee menu meta meter nav nobr noframes noscript object ol optgroup option ' +
    'output p param picture plaintext pre progress q rb rp rt rtc ruby s samp script search section select slot small ' +
    'source span strike strong style sub summary sup table tbody td template textarea tfoot th thead time title tr ' +
    'track tt u ul var video wbr ' +
    // svg
    'svg g path rect circle ellipse line polyline polygon text tspan defs use symbol lineargradient radialgradient stop ' +
    'clippath mask pattern filter image foreignobject marker desc ' +
    // mathml
    'math mi mo mn ms mrow msup msub mfrac msqrt mroot mtext mtable mtr mtd semantics annotation'
  ).split(/\s+/),
);
