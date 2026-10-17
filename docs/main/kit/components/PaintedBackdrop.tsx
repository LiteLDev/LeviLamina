export interface PaintedBackdropProps {
  /** Show the painted scene band at the top of the page (Nymphéas / Impression, soleil levant). */
  scene?: boolean;
  /** Height of the scene band (CSS length). */
  sceneHeight?: string;
  /** Opacity of the scene band in light / dark (0–1). */
  sceneOpacity?: number;
  sceneOpacityDark?: number;
  className?: string;
}

/**
 * Fixed, decorative page background: impressionist colour dabs in the margins, an optional painted scene
 * band fading into the canvas, brush-dab texture and canvas grain. Purely CSS (textures are cached data URIs),
 * aria-hidden, and the drift animation stops under prefers-reduced-motion. Place it first inside <body>'s
 * root and give page content `.kit-above-backdrop` (or any positioned z-index ≥ 1).
 */
export function PaintedBackdrop({ scene = true, sceneHeight, sceneOpacity, sceneOpacityDark, className }: PaintedBackdropProps) {
  const style: Record<string, string | number> = {};
  if (sceneHeight) style['--kit-scene-height'] = sceneHeight;
  if (sceneOpacity !== undefined) style['--kit-scene-opacity'] = sceneOpacity;
  if (sceneOpacityDark !== undefined) style['--kit-scene-opacity-dark'] = sceneOpacityDark;
  return (
    <>
      <div className={className ? `kit-backdrop ${className}` : 'kit-backdrop'} aria-hidden="true" style={style}>
        <div className="kit-backdrop-dabs" />
        <div className="kit-backdrop-brush" />
        <div className="kit-backdrop-grain" />
      </div>
      {/* the scene band is positioned against the document, so it scrolls away with the page top */}
      {scene ? <div className="kit-backdrop-scene" aria-hidden="true" style={style} /> : null}
    </>
  );
}
