"""Prepares a release of a version: checks it, and writes its release notes.

Usage: python scripts/prepare_release.py --version 26.60.8 --notes-file notes.md [--tags-file tags.txt]

Writes to $GITHUB_OUTPUT (or prints) these outputs:
- tag: v<version>
- prerelease: "true" when the version has a pre-release part
- latest: "true" when the version is a release above every version tag listed in --tags-file

The release notes are the section of the version in CHANGELOG.md, with the link definitions
it uses.
"""

import argparse
import os
import re

SEMVER = re.compile(
    r"^(0|[1-9]\d*)\.(0|[1-9]\d*)\.(0|[1-9]\d*)"
    r"(?:-((?:0|[1-9]\d*|\d*[A-Za-z-][0-9A-Za-z-]*)(?:\.(?:0|[1-9]\d*|\d*[A-Za-z-][0-9A-Za-z-]*))*))?$"
)
LINK_DEFINITION = re.compile(r"^\[([^\]]+)\]:\s+\S")


def sort_key(version: str):
    m = SEMVER.match(version)
    if m is None:
        raise ValueError(version)
    pre = m.group(4)
    ids = [] if pre is None else [(0, int(p), "") if p.isdigit() else (1, 0, p) for p in pre.split(".")]
    # A release sorts above its pre-releases.
    return (int(m.group(1)), int(m.group(2)), int(m.group(3)), pre is None, ids)


def release_notes(changelog: str, version: str) -> str:
    lines = changelog.splitlines()
    header = re.compile(r"^## \[{}\]".format(re.escape(version)))
    start = next((i for i, line in enumerate(lines) if header.match(line)), None)
    if start is None:
        raise SystemExit(f"CHANGELOG.md has no section ## [{version}]")
    end = next((i for i in range(start + 1, len(lines)) if lines[i].startswith("## ")), len(lines))
    body = [line for line in lines[start + 1 : end] if not LINK_DEFINITION.match(line)]
    text = "\n".join(body).strip()

    # Keep the link definitions the section uses, such as [#1869]: https://...
    definitions = [line for line in lines if (m := LINK_DEFINITION.match(line)) and f"[{m.group(1)}]" in text]
    if definitions:
        text += "\n\n" + "\n".join(definitions)
    if not text:
        raise SystemExit(f"The section ## [{version}] of CHANGELOG.md is empty")
    return text + "\n"


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--version", required=True)
    parser.add_argument("--notes-file", required=True)
    parser.add_argument("--tags-file")
    args = parser.parse_args()

    version: str = args.version
    if SEMVER.match(version) is None:
        raise SystemExit(f"Not a SemVer version (without a leading v and build metadata): {version!r}")

    with open("CHANGELOG.md", encoding="utf-8") as f:
        notes = release_notes(f.read(), version)
    with open(args.notes_file, "w", encoding="utf-8", newline="\n") as f:
        f.write(notes)

    others = []
    if args.tags_file:
        with open(args.tags_file, encoding="utf-8") as f:
            for line in f:
                name = line.strip().removeprefix("v")
                if SEMVER.match(name):
                    others.append(sort_key(name))

    prerelease = SEMVER.match(version).group(4) is not None
    latest = not prerelease and all(sort_key(version) > other for other in others)

    outputs = {
        "tag": f"v{version}",
        "prerelease": str(prerelease).lower(),
        "latest": str(latest).lower(),
    }
    lines = "".join(f"{key}={value}\n" for key, value in outputs.items())
    if path := os.environ.get("GITHUB_OUTPUT"):
        with open(path, "a", encoding="utf-8") as f:
            f.write(lines)
    print(lines, end="")


if __name__ == "__main__":
    main()
