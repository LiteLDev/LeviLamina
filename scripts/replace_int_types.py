#!/usr/bin/env python3
"""Rewrite C fixed-width integer spellings to the LeviLamina aliases.

One fixed rule turns ``std::uint32_t`` into ``uint32`` and ``int64_t`` into
``int64``. There is deliberately no ``--pattern``/``--replacement`` knob: the
correctness of this rename comes from the alias table and the guards, not from
the regular expression, so a hand-supplied rule would cheerfully produce
plausible-looking broken output. Teach the script a new guard instead.

Typical use, from the repository root::

    python scripts/replace_int_types.py --dry-run   # preview, change nothing
    python scripts/replace_int_types.py --list      # every candidate + its verdict
    python scripts/replace_int_types.py             # rewrite the source trees
    python scripts/replace_int_types.py src/ll src-test
    python scripts/replace_int_types.py src/mc/deps/core_graphics/ImageDescription.cpp

The alias table is parsed from ``src/ll/api/base/StdInt.h`` at start-up, so that
header stays the single source of truth for which names exist.

What the rename refuses to touch, none of it optional, because in each case the
alias is not a valid stand-in:

* Namespace guard: only ``std::int32_t`` and a bare ``int32_t`` are candidates.
  A name qualified by another namespace, such as ``RakNet::uint24_t``, is
  reported instead, because a global alias cannot stand in for it.
* Alias check: the produced name must be declared in ``StdInt.h``, so
  ``uint24_t`` -- which has no ``uint24`` counterpart -- is reported rather than
  renamed into something that does not exist.
* Token guard: the match must not be glued to an identifier on either side, so
  ``LocklessUint32_t`` and ``std::atomic_uint64_t`` survive untouched.
* ``#include`` lines are left alone, so header names such as
  ``mc/deps/raknet/uint24_t.h`` cannot be corrupted.

The remaining options pick scope (paths, ``-e``, ``-x``) and reporting (``-n``,
``--list``, ``--diff-lines``, ``--max-files``) only. There are no switches that
relax the checks above, because every one of them would emit broken code.

After a rewrite the file has to be able to see the aliases, so the script walks
its include graph and adds ``#include "ll/api/base/StdInt.h"`` when it cannot.
Two situations already count as covered:

* the file reaches ``StdInt.h`` through its own includes, resolved against the
  in-tree include roots taken from ``xmake.lua`` (``mc/_HeaderOutputPredefine.h``
  and every ``ll/api`` header that pulls it in count);
* the translation unit is compiled with the force-included precompiled header
  (``set_pcxxheader("src/ll/api/Global.h")`` in ``xmake.lua``, which shows up as
  ``-FIGlobal.h`` in all 245 entries of ``compile_commands.json``). That covers
  sources and project-internal headers, i.e. everything a mod never compiles.
  Headers installed for mods (``add_headerfiles`` patterns in ``xmake.lua``) get
  the include spelled out, because a mod's translation unit has no such PCH.

No scope is excluded beyond that: generated ``src/mc`` content is rewritten like
any other code, including the ``// NOLINTBEGIN`` fences and ``MC*`` declarations,
because the rename is ABI-neutral (``uint16`` is a typedef of the same
``unsigned short``). Note the header tool regenerates that tree on the ``header``
branch, so those lines can come back reverted; ``-x mc`` prunes the tree instead.

Line endings and a UTF-8 BOM are preserved, and a file is only written when the
rewrite actually changed something.
"""

from __future__ import annotations

import argparse
import difflib
import os
import re
import sys
from collections import Counter
from pathlib import Path

# Matches std::uint32_t, uint16_t, int64_t ... Groups: 1 is `uint`/`int`, 2 is
# the width, so the replacement is simply their concatenation. The identifier
# lookarounds are attached by compile_matcher().
RULE_PATTERN = r"(?:std::)?(u?int)(\d+)_t"

DEFAULT_EXTENSIONS = (".h", ".hpp", ".hh", ".hxx", ".inl", ".ipp", ".c", ".cc", ".cpp", ".cxx")
DEFAULT_PATHS = ("src", "src-server", "src-client", "src-test")

# Directory names pruned while walking; the paths passed on the command line are
# always entered, even when they carry one of these names.
PRUNED_DIRS = frozenset(
    {".cache", ".git", ".github", ".vscode", ".vs", ".xmake", "bin", "build", "scripts", "site"}
)

# The alias table and the include we insert are two views of one header.
STDINT_INCLUDE = "ll/api/base/StdInt.h"
STDINT_HEADER = Path("src") / STDINT_INCLUDE
ALIAS_RE = re.compile(r"^\s*using\s+(\w+)\s*=", re.MULTILINE)
FALLBACK_ALIASES = frozenset(f"{prefix}int{width}" for prefix in ("", "u") for width in (8, 16, 32, 64))

XMAKE_FILE = Path("xmake.lua")
SOURCE_SUFFIXES = frozenset({".c", ".cc", ".cpp", ".cxx"})

DIRECTIVE_RE = re.compile(r"^\s*#\s*(?:include|import)\b")
INCLUDE_RE = re.compile(r'^\s*#\s*include\s+[<"]([^">]+)[">]', re.MULTILINE)
PROJECT_INCLUDE_RE = re.compile(r'^\s*#\s*include\s+"(?:ll|mc)/')
PCXXHEADER_RE = re.compile(r'set_pcxxheader\(\s*"([^"]+)"')
HEADERFILES_RE = re.compile(r'add_headerfiles\(\s*(("(?:[^"]*)"(?:\s*,\s*"(?:[^"]*)"\s*)*))\)')
INCLUDEDIRS_RE = re.compile(r'add_includedirs\(\s*("(?:[^"]*)"(?:\s*,\s*"(?:[^"]*)"\s*)*)\)')

# Label for the only scoped skip left: header paths must not be rewritten.
INCLUDE_LINE = "#include line"

# Why a candidate was left as it is.
NO_ALIAS = "no such alias in StdInt.h"
OTHER_NAMESPACE = "qualified by another namespace"

QUALIFIER_RE = re.compile(r"([A-Za-z_]\w*)$")


class Rewriter:
    """Applies the rename to text, honouring the safety rails."""

    def __init__(self, matcher, aliases):
        self.matcher = matcher
        self.aliases = aliases

    def rewrite(self, path, text):
        """Return (new_text, replacements, skipped, guarded) for one file."""
        replacements = Counter()
        skipped = Counter()
        guarded = Counter()
        out = []

        for number, line in enumerate(text.splitlines(keepends=True), start=1):
            if DIRECTIVE_RE.match(line):
                hits = sum(1 for _ in self.matcher.finditer(line))
                if hits:
                    guarded[INCLUDE_LINE] += hits
                out.append(line)
                continue

            cursor = 0
            for match in self.matcher.finditer(line):
                produced = f"{match.group(1)}{match.group(2)}"
                reason, detail = self._skip_reason(line, match, produced)
                if reason is not None:
                    skipped[(reason, f"{match.group(0)} -> {produced}")] += 1
                    print(f"  skipped {path}:{number}: {match.group(0)} -> {produced} ({reason}{detail})")
                    continue
                replacements[f"{match.group(0)} -> {produced}"] += 1
                out.append(line[cursor : match.start()])
                out.append(produced)
                cursor = match.end()
            out.append(line[cursor:])

        return "".join(out), replacements, skipped, guarded

    def _skip_reason(self, line, match, produced):
        """Why this candidate stays as it is, or (None, "") when it is rewritable."""
        matched = match.group(0)
        before = line[: match.start()]
        if not matched.startswith("std::") and before.endswith("::"):
            # `RakNet::uint24_t`, but also `::uint32_t`, where the `::` is the
            # global namespace and the bare alias is a valid stand-in.
            qualifier = QUALIFIER_RE.search(before[:-2])
            if qualifier:
                return OTHER_NAMESPACE, f": {qualifier.group(1)}::"
        if produced not in self.aliases:
            return NO_ALIAS, ""
        return None, ""


def compile_matcher():
    """The rule plus the token guard: no identifier may touch the match."""
    return re.compile(rf"(?<![A-Za-z0-9_]){RULE_PATTERN}(?![A-Za-z0-9_])")


def load_aliases(header):
    """Collect the type alias names declared in StdInt.h."""
    try:
        text = header.read_text(encoding="utf-8", errors="replace")
    except OSError:
        print(
            f"warning: {header} not found, falling back to int8/16/32/64 and uint8/16/32/64",
            file=sys.stderr,
        )
        return set(FALLBACK_ALIASES)
    aliases = set(ALIAS_RE.findall(text))
    return aliases or set(FALLBACK_ALIASES)


def glob_to_regex(pattern):
    """Turn an xmake glob such as ``src/(ll/api/**.h)`` into a matcher."""
    parts = []
    for chunk in re.split(r"(\*\*)", pattern):
        if chunk == "**":
            parts.append(".*")
        else:
            parts.append(re.escape(chunk).replace(r"\*", "[^/]*"))
    return re.compile("^" + "".join(parts) + "$")


def load_build_config(xmake_file):
    """Read the PCH, the mod-facing headers and the include roots from xmake.lua."""
    try:
        text = xmake_file.read_text(encoding="utf-8", errors="replace")
    except OSError:
        return None, (), ()

    pch_match = PCXXHEADER_RE.search(text)
    shipped = tuple(
        glob_to_regex(alternative)
        for arguments in HEADERFILES_RE.findall(text)
        for pattern in re.findall(r'"([^"]+)"', arguments[0])
        for alternative in pattern.replace("(", "").replace(")", "").split("|")
    )
    roots = tuple(
        Path(directory)
        for arguments in INCLUDEDIRS_RE.findall(text)
        for directory in re.findall(r'"([^"]+)"', arguments)
        if not directory.startswith("$")  # skip $(builddir)/config generated at configure time
    )
    return (Path(pch_match.group(1)) if pch_match else None), shipped, roots


class IncludeGraph:
    """Walks in-tree includes to answer "does this file already see the aliases?"""

    def __init__(self, roots, provider=STDINT_HEADER):
        self.roots = tuple(roots) + (Path("src"),)
        self.provider = provider
        self._direct = {}
        self._provides = {provider: True}

    def resolve(self, spec, from_file):
        for candidate in (from_file.parent / spec, *(root / spec for root in self.roots)):
            if candidate.is_file():
                return candidate
        return None

    def direct(self, path):
        """The in-tree headers this file includes directly."""
        if path not in self._direct:
            try:
                text = path.read_text(encoding="utf-8", errors="replace")
            except OSError:
                self._direct[path] = ()
            else:
                self._direct[path] = tuple(
                    resolved
                    for spec in INCLUDE_RE.findall(text)
                    if (resolved := self.resolve(spec, path)) is not None
                )
        return self._direct[path]

    def provides(self, path, seen=frozenset()):
        if path in self._provides:
            return self._provides[path]
        if path in seen:
            return False
        found = any(self.provides(included, seen | {path}) for included in self.direct(path))
        self._provides[path] = found
        return found

    def note_provides(self, path):
        """Remember a file we just gave the include to, for the rest of the run."""
        self._provides[path] = True


def is_shipped(path, shipped):
    """True for headers installed for mod developers (``add_headerfiles``)."""
    return any(pattern.match(path.as_posix()) for pattern in shipped)


def needs_include(path, graph, shipped, implicit):
    """Whether the file must spell the include out to see the aliases."""
    if graph.provides(path):
        return False
    # Sources and project-internal headers are compiled with the force-included
    # PCH that already brings the aliases in; mod-facing headers are not.
    return not (implicit and not is_shipped(path, shipped))


def insert_include(text):
    """Return text with the StdInt.h include added where the conventions want it."""
    newline = "\r\n" if "\r\n" in text else "\n"
    include_line = f'#include "{STDINT_INCLUDE}"{newline}'
    lines = text.splitlines(keepends=True)

    # Stay inside the leading header block, unless the file has no includes there.
    limit = len(lines)
    for index, line in enumerate(lines):
        stripped = line.strip()
        if stripped and not stripped.startswith(("#", "//", "/*", "*")):
            limit = index
            break
    if not any(INCLUDE_RE.match(line) for line in lines[:limit]):
        limit = len(lines)

    def last_index(predicate):
        found = [index for index, line in enumerate(lines[:limit]) if predicate(line)]
        return found[-1] if found else None

    def quoted_with_directory(line):
        match = INCLUDE_RE.match(line)
        return match is not None and "/" in match.group(1) and '"' in line

    # First match wins: generated-header convention, then `ll/`+`mc/` includes,
    # then other quoted includes, then any include (new block), then `#pragma once`.
    for index, starts_block in (
        (last_index(lambda line: "_HeaderOutputPredefine.h" in line), False),
        (last_index(PROJECT_INCLUDE_RE.match), False),
        (last_index(quoted_with_directory), False),
        (last_index(INCLUDE_RE.match), True),
        (last_index(lambda line: line.strip().startswith("#pragma once")), True),
    ):
        if index is not None:
            gap = newline if starts_block else ""
            return "".join(lines[: index + 1]) + gap + include_line + "".join(lines[index + 1 :])
    return include_line + text


def iter_files(paths, extensions, pruned):
    for entry in paths:
        path = Path(entry)
        if path.is_file():
            yield path
        elif path.is_dir():
            for dirpath, dirnames, filenames in os.walk(path):
                dirnames[:] = sorted(name for name in dirnames if name not in pruned)
                for name in sorted(filenames):
                    if Path(name).suffix.lower() in extensions:
                        yield Path(dirpath) / name
        else:
            print(f"warning: {entry} does not exist", file=sys.stderr)


def parse_args(argv):
    parser = argparse.ArgumentParser(
        description="Rewrite std::uintN_t / uintN_t spellings to the LeviLamina aliases.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
    )
    parser.add_argument("paths", nargs="*", help="files or directories (default: the four source trees)")
    parser.add_argument("-n", "--dry-run", action="store_true", help="report changes without writing")
    parser.add_argument("-e", "--ext", action="append", default=[], metavar="EXT", help="extra extension, e.g. -e .inl")
    parser.add_argument("-x", "--prune-dir", action="append", default=[], metavar="NAME", help="extra directory name to skip")
    parser.add_argument("--list", action="store_true", help="list every candidate and its verdict, no diff")
    parser.add_argument("--diff-lines", type=int, default=120, metavar="N", help="max diff lines for --dry-run (0 = all)")
    parser.add_argument("--max-files", type=int, default=60, metavar="N", help="max changed files listed (0 = all)")
    return parser.parse_args(argv)


def report(changed, replacements, skipped, guarded, added_includes, args):
    replacements, skipped, guarded = +replacements, +skipped, +guarded
    total = sum(replacements.values())
    verb = "would rewrite" if args.dry_run else "rewrote"
    print()
    print(f"{verb} {total} occurrence(s) in {len(changed)} file(s)")

    for old in sorted(replacements, key=lambda item: (-replacements[item], item)):
        print(f"  {old:<28} {replacements[old]:>4}")

    if skipped:
        print(f"  {sum(skipped.values())} candidate(s) left as they are")
        for reason in sorted({label for label, _ in skipped}):
            entries = {mapping: count for (label, mapping), count in skipped.items() if label == reason}
            print(f"    {reason} ({sum(entries.values())})")
            for mapping in sorted(entries):
                print(f"      {mapping:<26} {entries[mapping]:>4}")

    if guarded:
        print(f"  {sum(guarded.values())} match(es) left alone on #include lines")
        for reason in sorted(guarded):
            print(f"    {reason:<28} {guarded[reason]:>4}")

    if added_includes:
        print(f'  added #include "{STDINT_INCLUDE}" to {len(added_includes)} file(s)')
        shown_includes = added_includes if args.max_files == 0 else added_includes[: args.max_files]
        for path in shown_includes:
            print(f"    {path}")

    if changed:
        print()
        shown = changed if args.max_files == 0 else changed[: args.max_files]
        for path, count in shown:
            print(f"  {count:>4}  {path}")
        if len(changed) > len(shown):
            print(f"  ... {len(changed) - len(shown)} more file(s)")
        if args.dry_run:
            print("\nRe-run without --dry-run to apply.")


def main(argv=None):
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(errors="replace")

    args = parse_args(argv if argv is not None else sys.argv[1:])
    if args.list:
        args.dry_run = True
        args.diff_lines = 0
    matcher = compile_matcher()

    aliases = load_aliases(STDINT_HEADER)
    print(f"aliases taken from {STDINT_HEADER}: {' '.join(sorted(aliases))}")

    pch, shipped, roots = load_build_config(XMAKE_FILE)
    graph = IncludeGraph(roots)
    implicit = pch is not None and graph.provides(pch)
    if not implicit:
        print(
            f"note: {pch or XMAKE_FILE} does not reach {STDINT_INCLUDE},"
            " so every rewritten file spells the include out"
        )
    extensions = {ext.lower() for ext in DEFAULT_EXTENSIONS}
    for ext in args.ext:
        extensions.update(part if part.startswith(".") else f".{part}" for part in ext.split(",") if part)
    pruned = PRUNED_DIRS | set(args.prune_dir)

    rewriter = Rewriter(matcher, aliases)
    changed = []
    replacements = Counter()
    skipped = Counter()
    guarded = Counter()
    added_includes = []
    scanned = 0
    diff_budget = args.diff_lines

    for path in iter_files(args.paths or DEFAULT_PATHS, extensions, pruned):
        scanned += 1
        try:
            raw = path.read_bytes()
        except OSError as error:
            print(f"warning: cannot read {path}: {error}", file=sys.stderr)
            continue
        if not raw or b"int" not in raw:
            continue

        bom = raw.startswith(b"\xef\xbb\xbf")
        text = raw.decode("utf-8-sig" if bom else "utf-8", errors="surrogateescape")
        new_text, file_replacements, file_skipped, file_guarded = rewriter.rewrite(path, text)
        replacements.update(file_replacements)
        skipped.update(file_skipped)
        guarded.update(file_guarded)
        if not file_replacements:
            continue

        if needs_include(path, graph, shipped, implicit):
            new_text = insert_include(new_text)
            graph.note_provides(path)
            added_includes.append(str(path))

        count = sum(file_replacements.values())
        changed.append((str(path), count))
        if args.dry_run:
            diff = list(
                difflib.unified_diff(
                    text.splitlines(keepends=True),
                    new_text.splitlines(keepends=True),
                    fromfile=str(path),
                    tofile=str(path),
                    n=1,
                )
            )
            if diff_budget > 0:
                shown_diff = diff[:diff_budget]
                diff_budget -= len(shown_diff)
                print("".join(shown_diff).rstrip("\n"))
            continue

        try:
            encoded = ("\ufeff" + new_text if bom else new_text).encode("utf-8", errors="surrogateescape")
            path.write_bytes(encoded)
        except OSError as error:
            print(f"warning: cannot write {path}: {error}", file=sys.stderr)

    print(f"\nscanned {scanned} file(s)")
    changed.sort(key=lambda item: item[0])
    report(changed, replacements, skipped, guarded, added_includes, args)
    return 0


if __name__ == "__main__":
    sys.exit(main())
