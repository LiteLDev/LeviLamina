// "Last updated" timestamps: one `git log` pass over the content dir (equivalent to running
// `git log -1 --format=%ct -- <file>` per file). Returns an empty map when git or history is unavailable.

import { execFileSync } from 'node:child_process';
import { relative, resolve, sep } from 'node:path';

export function gitLastUpdated(contentRoot: string): Map<string, number> {
  const out = new Map<string, number>();
  try {
    const top = execFileSync('git', ['rev-parse', '--show-toplevel'], { cwd: contentRoot, encoding: 'utf8', stdio: ['ignore', 'pipe', 'ignore'] }).trim();
    const log = execFileSync('git', ['log', '--format=%x00%ct', '--name-only', '--no-renames', '--', '.'], {
      cwd: contentRoot,
      encoding: 'utf8',
      maxBuffer: 256 * 1024 * 1024,
      stdio: ['ignore', 'pipe', 'ignore'],
    });
    let ts = 0;
    for (const line of log.split('\n')) {
      if (line.startsWith('\0')) {
        ts = Number(line.slice(1)) * 1000;
        continue;
      }
      const f = line.trim();
      if (!f) continue;
      const rel = relative(contentRoot, resolve(top, f)).split(sep).join('/');
      if (rel.startsWith('..')) continue;
      if (!out.has(rel)) out.set(rel, ts);
    }
  } catch {
    /* not a git checkout, or git missing: no timestamps */
  }
  return out;
}
