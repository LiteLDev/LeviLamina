#!/bin/sh

set -e

cd "$(git rev-parse --show-toplevel)"
DEVTOOLS=.devtools

chmod a+x ${DEVTOOLS}/*.sh

cp ${DEVTOOLS}/hooks/pre-commit .git/hooks/
chmod a+x .git/hooks/pre-commit

if ! command -v clang-format >/dev/null 2>&1; then
  cat >&2 <<EOF
clang-format not fond, git commit would fail.
please install clang-format.

mac     -> brew install clang-format
windows -> http://llvm.org/builds/
ubuntu  -> sudo apt install clang-format

EOF
fi
