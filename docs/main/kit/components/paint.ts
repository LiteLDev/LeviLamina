// Deterministic painterly scene generator ("Painterly = atmosphere; Pixel = structure").
//
// Produces plain shape descriptions that are rendered either as inline SVG (PaintedHero) or serialised
// into CSS data URIs (assets/build-assets.mjs → theme/generated.css for PaintedBackdrop). Everything is
// seeded, so server and client render byte-identical markup (no hydration mismatch).
//
// Only erasable TypeScript syntax is used so Node ≥ 22.18 can import this file directly.

export type Attrs = Record<string, string | number>;
export interface Shape {
  tag: 'rect' | 'ellipse' | 'circle' | 'path' | 'g';
  attrs: Attrs;
  children?: Shape[];
}
export interface Scene {
  width: number;
  height: number;
  defs: string; // raw SVG defs (gradients, filters) — ids are prefixed per scene
  layers: { id: string; filter?: string; crisp?: boolean; className?: string; shapes: Shape[] }[];
}

export function mulberry32(seed: number): () => number {
  let a = seed;
  return () => {
    a |= 0;
    a = (a + 0x6d2b79f5) | 0;
    let t = Math.imul(a ^ (a >>> 15), 1 | a);
    t = (t + Math.imul(t ^ (t >>> 7), 61 | t)) ^ t;
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
}

const r1 = (n: number) => Math.round(n * 10) / 10;
const pick = <T,>(rnd: () => number, list: readonly T[]): T => list[Math.floor(rnd() * list.length)] as T;

function stroke(cx: number, cy: number, rx: number, ry: number, rot: number, fill: string, opacity: number): Shape {
  return {
    tag: 'ellipse',
    attrs: {
      cx: r1(cx),
      cy: r1(cy),
      rx: r1(rx),
      ry: r1(ry),
      transform: rot ? `rotate(${r1(rot)} ${r1(cx)} ${r1(cy)})` : '',
      fill,
      opacity: Math.round(opacity * 100) / 100,
    },
  };
}

function paintFilter(id: string, seed: number, scale: number, freq = '0.012 0.045'): string {
  return (
    `<filter id="${id}" x="-5%" y="-5%" width="110%" height="110%" color-interpolation-filters="sRGB">` +
    `<feTurbulence type="fractalNoise" baseFrequency="${freq}" numOctaves="2" seed="${seed}" result="n"/>` +
    `<feDisplacementMap in="SourceGraphic" in2="n" scale="${scale}" xChannelSelector="R" yChannelSelector="G"/>` +
    `</filter>`
  );
}

// ---------------------------------------------------------------------------------------------- Nymphéas
const FOLIAGE = ['#6f9f5e', '#86b26b', '#a9c98a', '#5c8b57', '#b9b3d9', '#c8dcb0', '#7fae74', '#9a86c2'] as const;
const WATER_LIGHT = ['#eef2ee', '#cfc6e4', '#a9cbe0', '#8fbcbc', '#c4dcd6', '#f3efe2'] as const;
const PAD = ['#5f9a5a', '#78ad63', '#4f8a5b', '#8dbb6c', '#6aa060'] as const;
const FLOWER = ['#e9a7b8', '#f6d8de', '#fff7f0', '#d98a9e'] as const;

export function lilyPond(opts: { width?: number; height?: number; seed?: number; bridge?: boolean; detail?: number; prefix?: string } = {}): Scene {
  const W = opts.width ?? 1600;
  const H = opts.height ?? 600;
  const rnd = mulberry32(opts.seed ?? 1899); // Le Bassin aux nymphéas, 1899
  const p = opts.prefix ?? 'ly';
  const detail = opts.detail ?? 1;
  const horizon = H * 0.47;

  const defs =
    `<linearGradient id="${p}-sky" x1="0" y1="0" x2="0" y2="1">` +
    `<stop offset="0" stop-color="#d9e7cf"/><stop offset="0.38" stop-color="#c5ddd2"/>` +
    `<stop offset="0.5" stop-color="#a7cbc6"/><stop offset="1" stop-color="#7eaab0"/></linearGradient>` +
    `<radialGradient id="${p}-sun" cx="0.72" cy="0.18" r="0.5"><stop offset="0" stop-color="#fff4cf" stop-opacity="0.85"/>` +
    `<stop offset="1" stop-color="#fff4cf" stop-opacity="0"/></radialGradient>` +
    paintFilter(`${p}-paint`, 3, 16) +
    paintFilter(`${p}-water`, 9, 10, '0.006 0.08') +
    `<filter id="${p}-wash" x="-10%" y="-20%" width="120%" height="140%"><feGaussianBlur stdDeviation="9"/></filter>`;

  const sky: Shape[] = [
    { tag: 'rect', attrs: { x: 0, y: 0, width: W, height: H, fill: `url(#${p}-sky)` } },
    { tag: 'rect', attrs: { x: 0, y: 0, width: W, height: H, fill: `url(#${p}-sun)` } },
  ];

  // Canopy: soft masses of green and blue-violet shadow along the top edge.
  const canopy: Shape[] = [];
  for (let i = 0; i < 26 * detail + 6; i++) {
    const x = (i / (26 * detail + 6)) * W + (rnd() - 0.5) * 120;
    canopy.push(stroke(x, rnd() * horizon * 0.32, 90 + rnd() * 160, 34 + rnd() * 46, (rnd() - 0.5) * 20, pick(rnd, ['#5c8b57', '#6f9f5e', '#7d9fb0', '#8e8fbf', '#4e7d4a'] as const), 0.22 + rnd() * 0.26));
  }

  // Willow / foliage curtain: drooping, mostly vertical dabs, densest at the top.
  const foliage: Shape[] = [];
  const nFol = Math.round(240 * detail);
  for (let i = 0; i < nFol; i++) {
    const x = rnd() * W;
    const y = Math.pow(rnd(), 1.9) * horizon * 1.02;
    const len = 16 + rnd() * 40;
    foliage.push(stroke(x, y, len, 5 + rnd() * 8, 74 + rnd() * 32, pick(rnd, [...FOLIAGE, '#4e7d4a', '#3f6e45'] as const), 0.3 + rnd() * 0.45));
  }

  // Water light: long horizontal strokes, shorter near the horizon (perspective).
  const water: Shape[] = [];
  const nWat = Math.round(170 * detail);
  for (let i = 0; i < nWat; i++) {
    const t = rnd();
    const y = horizon + t * (H - horizon);
    const s = 0.45 + t * 1.1;
    water.push(stroke(rnd() * W, y, (24 + rnd() * 90) * s, (2 + rnd() * 3.2) * s, (rnd() - 0.5) * 4, pick(rnd, WATER_LIGHT), 0.25 + rnd() * 0.5));
  }

  // Lily pads in clusters, with flowers.
  const pads: Shape[] = [];
  const clusters = Math.round(13 * detail);
  for (let c = 0; c < clusters; c++) {
    const t = Math.pow(rnd(), 0.8);
    const cy = horizon + 20 + t * (H - horizon - 10);
    const cx = rnd() * W;
    const s = 0.35 + t * 1.15;
    const n = 3 + Math.floor(rnd() * 5);
    for (let k = 0; k < n; k++) {
      const x = cx + (rnd() - 0.5) * 220 * s;
      const y = cy + (rnd() - 0.5) * 34 * s;
      const rx = (26 + rnd() * 30) * s;
      const ry = rx * (0.24 + rnd() * 0.08);
      pads.push(stroke(x + 3 * s, y + 3 * s, rx, ry, (rnd() - 0.5) * 8, '#3d6e4c', 0.35));
      pads.push(stroke(x, y, rx, ry, (rnd() - 0.5) * 8, pick(rnd, PAD), 0.85));
      pads.push(stroke(x - rx * 0.25, y - ry * 0.3, rx * 0.5, ry * 0.35, 0, '#b6d68f', 0.45));
      if (rnd() < 0.42) {
        const fx = x + (rnd() - 0.5) * rx * 0.8;
        const fy = y - ry * 0.4;
        const fr = (5 + rnd() * 5) * s;
        pads.push(stroke(fx, fy, fr * 1.5, fr * 0.8, 0, pick(rnd, FLOWER), 0.95));
        pads.push(stroke(fx, fy - fr * 0.3, fr * 0.8, fr * 0.55, 0, '#fff6f2', 0.9));
        pads.push({ tag: 'circle', attrs: { cx: r1(fx), cy: r1(fy - fr * 0.2), r: r1(fr * 0.28), fill: '#f2c94c', opacity: 0.95 } });
      }
    }
  }

  // Glints of sunlight on the water.
  const glints: Shape[] = [];
  for (let i = 0; i < 40 * detail; i++) {
    const t = rnd();
    glints.push(stroke(W * (0.5 + rnd() * 0.45), horizon + t * (H - horizon), 6 + rnd() * 16, 1.4 + rnd() * 1.6, 0, '#fffbe8', 0.5 + rnd() * 0.4));
  }

  const layers: Scene['layers'] = [
    { id: 'sky', shapes: sky },
    { id: 'water', filter: `url(#${p}-water)`, shapes: water },
    { id: 'canopy', filter: `url(#${p}-wash)`, shapes: canopy },
    { id: 'foliage', filter: `url(#${p}-paint)`, shapes: foliage },
  ];

  if (opts.bridge !== false) {
    const b = japaneseBridge(W, horizon, rnd);
    layers.push({ id: 'bridge-reflection', filter: `url(#${p}-water)`, shapes: b.reflection });
    layers.push({ id: 'pads', filter: `url(#${p}-paint)`, shapes: pads });
    layers.push({ id: 'wisteria', filter: `url(#${p}-paint)`, shapes: b.wisteria });
    layers.push({ id: 'bridge', crisp: true, className: 'kit-scene-pixel', shapes: b.blocks });
  } else {
    layers.push({ id: 'pads', filter: `url(#${p}-paint)`, shapes: pads });
  }
  layers.push({ id: 'glints', shapes: glints, className: 'kit-scene-glints' });
  return { width: W, height: H, defs, layers };
}

/** Monet's green Japanese footbridge, built from blocks. */
function japaneseBridge(W: number, horizon: number, rnd: () => number) {
  const px = 8; // one "block pixel" in scene units
  const x0 = Math.round((W * 0.36) / px) * px;
  const x1 = Math.round((W * 0.94) / px) * px;
  const cx = (x0 + x1) / 2;
  const half = (x1 - x0) / 2;
  const rise = 118;
  const deckY = (x: number) => horizon + 6 - rise * (1 - Math.pow((x - cx) / half, 2));
  const snap = (v: number) => Math.round(v / px) * px;
  const blocks: Shape[] = [];
  const rect = (x: number, y: number, w: number, h: number, fill: string) =>
    blocks.push({ tag: 'rect', attrs: { x, y, width: w, height: h, fill } });

  for (let x = x0; x < x1; x += px * 2) {
    const y = snap(deckY(x + px));
    rect(x, y, px * 2, px, '#93c77f'); // lit top edge
    rect(x, y + px, px * 2, px * 2, '#4f8a5b'); // deck
    rect(x, y + px * 3, px * 2, px, '#2f5f3b'); // underside
    // railing: top rail + mid rail
    rect(x, y - px * 5, px * 2, px, '#5f9e68');
    rect(x, y - px * 2, px * 2, px, '#4f8a5b');
  }
  // posts
  for (let x = x0; x <= x1 - px; x += px * 8) {
    const y = snap(deckY(x + px / 2));
    rect(x, y - px * 6, px, px * 6, '#3f7a4a');
    rect(x, y - px * 7, px, px, '#93c77f');
  }
  rect(x1 - px, snap(deckY(x1 - px)) - px * 6, px, px * 6, '#3f7a4a');
  // supporting piles into the water at both ends
  for (const x of [x0 + px * 2, x0 + px * 6, x1 - px * 7, x1 - px * 3]) {
    const y = snap(deckY(x)) + px * 4;
    rect(x, y, px, Math.max(px, snap(horizon + 24 - y)), '#2f5f3b');
  }

  // painterly reflection of the arch
  const reflection: Shape[] = [];
  for (let x = x0; x < x1; x += 7) {
    const y = 2 * horizon - deckY(x) + 22;
    reflection.push(stroke(x + (rnd() - 0.5) * 14, y + (rnd() - 0.5) * 8, 18 + rnd() * 20, 2 + rnd() * 2, 0, rnd() > 0.35 ? '#3f6f4c' : '#7aa77e', 0.16 + rnd() * 0.22));
  }
  // wisteria cascading over the left of the bridge
  const wisteria: Shape[] = [];
  for (let i = 0; i < 46; i++) {
    const x = x0 - 60 + rnd() * 300;
    const y = rnd() * (horizon - 40);
    wisteria.push(stroke(x, y, 16 + rnd() * 26, 5 + rnd() * 6, 80 + rnd() * 25, pick(rnd, ['#9a86c2', '#b7a6d9', '#8873b5', '#cfc2ea'] as const), 0.35 + rnd() * 0.45));
  }
  return { blocks, reflection, wisteria };
}

// ---------------------------------------------------------------------------------------------- Soleil levant
const HAZE = ['#5b6f86', '#7d6f9e', '#4a6b7a', '#8c8fb0', '#3f5a70'] as const;
const HARBOR = ['#2b4a5e', '#3f7f8c', '#24405a', '#5c7f95', '#1f3a4e'] as const;

export function harborSunrise(opts: { width?: number; height?: number; seed?: number; boats?: boolean; sunDisc?: boolean; detail?: number; prefix?: string; sunX?: number } = {}): Scene {
  const W = opts.width ?? 1600;
  const H = opts.height ?? 600;
  const rnd = mulberry32(opts.seed ?? 1872);
  const p = opts.prefix ?? 'sr';
  const detail = opts.detail ?? 1;
  const horizon = H * 0.5;
  const sunX = W * (opts.sunX ?? 0.7);
  const sunY = H * 0.3;

  const defs =
    `<linearGradient id="${p}-sky" x1="0" y1="0" x2="0" y2="1">` +
    `<stop offset="0" stop-color="#1b2e41"/><stop offset="0.32" stop-color="#2c465a"/>` +
    `<stop offset="0.5" stop-color="#36576a"/><stop offset="0.56" stop-color="#22394c"/>` +
    `<stop offset="1" stop-color="#0f1b26"/></linearGradient>` +
    `<radialGradient id="${p}-glow" gradientUnits="userSpaceOnUse" cx="${sunX}" cy="${sunY}" r="${H * 0.55}">` +
    `<stop offset="0" stop-color="#f08a4b" stop-opacity="0.55"/><stop offset="0.35" stop-color="#e0764a" stop-opacity="0.18"/>` +
    `<stop offset="1" stop-color="#7d6f9e" stop-opacity="0"/></radialGradient>` +
    paintFilter(`${p}-paint`, 5, 14, '0.008 0.05') +
    paintFilter(`${p}-water`, 11, 9, '0.005 0.09') +
    `<filter id="${p}-soft" x="-5%" y="-5%" width="110%" height="110%"><feGaussianBlur stdDeviation="1.1"/></filter>`;

  const sky: Shape[] = [
    { tag: 'rect', attrs: { x: 0, y: 0, width: W, height: H, fill: `url(#${p}-sky)` } },
    { tag: 'rect', attrs: { x: 0, y: 0, width: W, height: H, fill: `url(#${p}-glow)` } },
  ];

  const haze: Shape[] = [];
  for (let i = 0; i < 240 * detail; i++) {
    const y = Math.pow(rnd(), 0.8) * horizon * 1.02;
    haze.push(stroke(rnd() * W, y, 50 + rnd() * 160, 3.5 + rnd() * 8, (rnd() - 0.5) * 4, pick(rnd, HAZE), 0.07 + rnd() * 0.17));
  }
  // warm mist around the sun
  for (let i = 0; i < 26 * detail; i++) {
    haze.push(stroke(sunX + (rnd() - 0.5) * W * 0.4, sunY + (rnd() - 0.4) * H * 0.3, 50 + rnd() * 90, 6 + rnd() * 9, (rnd() - 0.5) * 4, pick(rnd, ['#c9775a', '#a0687a', '#e0905e'] as const), 0.08 + rnd() * 0.14));
  }

  // Le Havre: low shore, masts, cranes and chimneys dissolving in the mist (no displacement: straight lines).
  const shore: Shape[] = [];
  for (let i = 0; i < 14; i++) {
    shore.push(stroke((i / 14) * W + rnd() * 60, horizon - 6 + rnd() * 6, 90 + rnd() * 150, 9 + rnd() * 10, 0, pick(rnd, ['#1c2e3e', '#22374a', '#1a2a38'] as const), 0.55 + rnd() * 0.25));
  }
  const masts: Shape[] = [];
  for (let i = 0; i < 22 * detail; i++) {
    const x = rnd() * W;
    if (Math.abs(x - sunX) < 70) continue;
    const h = 40 + rnd() * 130;
    const w = 1.4 + rnd() * 2;
    const op = Math.round((0.22 + rnd() * 0.3) * 100) / 100;
    masts.push({ tag: 'rect', attrs: { x: r1(x), y: r1(horizon - h), width: r1(w), height: r1(h), fill: '#2b4357', opacity: op } });
    if (rnd() < 0.35) {
      // crane jib
      const len = 30 + rnd() * 50;
      masts.push({ tag: 'path', attrs: { d: `M${r1(x)} ${r1(horizon - h + 6)}l${r1(len)} ${r1(len * 0.18)}`, stroke: '#2b4357', 'stroke-width': r1(w * 0.9), opacity: op, fill: 'none' } });
    }
    if (rnd() < 0.3) {
      // smoke from a chimney
      masts.push(stroke(x + 18, horizon - h - 14, 26 + rnd() * 30, 8 + rnd() * 6, -14, '#5d6f88', 0.12 + rnd() * 0.12));
    }
  }

  const water: Shape[] = [];
  for (let i = 0; i < 190 * detail; i++) {
    const t = rnd();
    const s = 0.45 + t * 1.1;
    water.push(stroke(rnd() * W, horizon + t * (H - horizon), (26 + rnd() * 80) * s, (2 + rnd() * 3) * s, (rnd() - 0.5) * 3, pick(rnd, HARBOR), 0.3 + rnd() * 0.45));
  }

  const sunDisc: Shape[] = [
    { tag: 'circle', attrs: { cx: r1(sunX), cy: r1(sunY), r: 27, fill: '#f08a4b' } },
    { tag: 'circle', attrs: { cx: r1(sunX - 5), cy: r1(sunY - 6), r: 14, fill: '#f7a96f', opacity: 0.65 } },
  ];
  const sun: Shape[] = [];
  // the famous broken orange reflection
  for (let i = 0; i < 24; i++) {
    const t = i / 24;
    const y = horizon + 12 + t * (H - horizon - 40);
    const w = 10 + t * 34 + rnd() * 10;
    sun.push(stroke(sunX + (rnd() - 0.5) * (12 + t * 30), y, w, 2.4 + t * 2.4, (rnd() - 0.5) * 4, rnd() > 0.35 ? '#f08a4b' : '#f6a56b', 0.85 - t * 0.5));
  }

  const layers: Scene['layers'] = [
    { id: 'sky', shapes: sky },
    { id: 'haze', filter: `url(#${p}-paint)`, shapes: haze },
    { id: 'masts', filter: `url(#${p}-soft)`, shapes: masts },
    { id: 'shore', filter: `url(#${p}-paint)`, shapes: shore },
    { id: 'water', filter: `url(#${p}-water)`, shapes: water },
    { id: 'sun-disc', filter: `url(#${p}-soft)`, shapes: opts.sunDisc === false ? [] : sunDisc, className: 'kit-scene-sun' },
    { id: 'sun', filter: `url(#${p}-water)`, shapes: sun, className: 'kit-scene-sun' },
  ];
  if (opts.boats !== false) {
    const b = pixelBoats(W, H, horizon, rnd);
    layers.push({ id: 'boat-reflections', filter: `url(#${p}-water)`, shapes: b.reflections });
    layers.push({ id: 'boats', crisp: true, className: 'kit-scene-pixel', shapes: b.blocks });
  }
  return { width: W, height: H, defs, layers };
}

/** Dark rowboats with standing oarsmen, as pixel silhouettes. */
function pixelBoats(W: number, H: number, horizon: number, rnd: () => number) {
  const blocks: Shape[] = [];
  const reflections: Shape[] = [];
  const boat = (cx: number, baseY: number, px: number, fill: string) => {
    const hull = [
      // [dx, dy, w, h] in boat pixels, origin at the waterline centre
      [-10, -2, 20, 1],
      [-9, -1, 18, 1],
      [-7, 0, 14, 1],
      [-11, -3, 2, 1],
      [9, -3, 2, 1],
      // standing oarsman
      [2, -10, 2, 2],
      [1, -8, 3, 5],
      [-1, -7, 2, 1],
      // long oar trailing into the water at the stern
      [-2, -6, 1, 1],
      [-3, -5, 1, 1],
      [-4, -4, 1, 1],
      [-5, -3, 1, 1],
      [-6, -2, 1, 1],
      [-7, -1, 1, 1],
      [-8, 0, 1, 1],
      [-9, 1, 1, 1],
      // seated passenger
      [5, -5, 2, 2],
      [5, -6, 2, 1],
    ];
    for (const [dx, dy, w, h] of hull) {
      blocks.push({ tag: 'rect', attrs: { x: r1(cx + (dx as number) * px), y: r1(baseY + (dy as number) * px), width: r1((w as number) * px), height: r1((h as number) * px), fill } });
    }
    for (let i = 0; i < 7; i++) {
      reflections.push(stroke(cx + (rnd() - 0.5) * 10 * px, baseY + px * (1.5 + i * 1.6), (8 - i * 0.6) * px, 0.9 * px, 0, '#08121a', 0.55 - i * 0.06));
    }
  };
  boat(W * 0.34, H * 0.8, 6, '#081219');
  boat(W * 0.55, H * 0.66, 4, '#0c1822');
  boat(W * 0.86, H * 0.585, 2.5, '#14232f');
  return { blocks, reflections };
}

// ---------------------------------------------------------------------------------------------- serialisation
const esc = (v: string | number) => String(v).replace(/&/g, '&amp;').replace(/"/g, '&quot;').replace(/</g, '&lt;');

export function shapeToString(s: Shape): string {
  const attrs = Object.entries(s.attrs)
    .filter(([, v]) => v !== '' && v !== undefined)
    .map(([k, v]) => `${k}="${esc(v)}"`)
    .join(' ');
  if (s.children?.length) return `<${s.tag} ${attrs}>${s.children.map(shapeToString).join('')}</${s.tag}>`;
  return `<${s.tag} ${attrs}/>`;
}

/** CSS inside a standalone scene (e.g. a CSS background): the hero's slow shimmer, off under reduced motion. */
const SCENE_ANIMATION_CSS =
  '.kit-scene-glints{animation:g 7s ease-in-out infinite alternate}.kit-scene-sun{animation:g 9s ease-in-out infinite alternate}' +
  '@keyframes g{from{opacity:.55}to{opacity:1}}@media (prefers-reduced-motion:reduce){.kit-scene-glints,.kit-scene-sun{animation:none}}';

export function sceneToSvg(scene: Scene, extra: { preserveAspectRatio?: string; animate?: boolean } = {}): string {
  return (
    `<svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 ${scene.width} ${scene.height}" preserveAspectRatio="${extra.preserveAspectRatio ?? 'xMidYMid slice'}">` +
    (extra.animate ? `<style>${SCENE_ANIMATION_CSS}</style>` : '') +
    `<defs>${scene.defs}</defs>` +
    scene.layers
      .map(
        (l) =>
          `<g${l.filter ? ` filter="${l.filter}"` : ''}${l.crisp ? ' shape-rendering="crispEdges"' : ''}${extra.animate && l.className ? ` class="${l.className}"` : ''}>` +
          l.shapes.map(shapeToString).join('') +
          `</g>`,
      )
      .join('') +
    `</svg>`
  );
}
