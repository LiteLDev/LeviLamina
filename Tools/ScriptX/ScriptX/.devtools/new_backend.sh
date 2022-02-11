#!/bin/bash

BACKEND_NAME=$1
BACKEND_NAMESPACE=$2
BACKEND_PREFIX=$3

if [[ -z $BACKEND_NAME || -z $BACKEND_NAMESPACE || -z $BACKEND_PREFIX ]]; then
  echo "create new backend from Template"
  echo "usage: $0 <backend name> <backend cpp namespace> <class prefix>"
  echo "example: $0 QuickJs qjs_backend Qjs"
  echo "ScriptX/backend/<backend name>"
  echo "namespace script::<backend cpp namespace>"
  echo "<class prefix>Engine"
  exit 1
fi

echo "${BACKEND_NAME} ${BACKEND_NAMESPACE} ${BACKEND_NAME}"

cd "$(git rev-parse --show-toplevel)"

mkdir -p backend/"${BACKEND_NAME}"
cp -afv backend/Template/* backend/"${BACKEND_NAME}"
rm backend/"${BACKEND_NAME}"/README.md

function renameFiles() {
  for FILE in *; do
    if [[ -f $FILE ]]; then
      sed -i '' -e "s/template_backend/${BACKEND_NAMESPACE}/g" "$FILE"
      sed -i '' -e "s/Template/${BACKEND_PREFIX}/g" "$FILE"
      mv "$FILE" "${FILE/Template/${BACKEND_PREFIX}}"
    fi
  done
}

pushd backend/"$BACKEND_NAME" >/dev/null
renameFiles
popd >/dev/null

pushd backend/"$BACKEND_NAME"/trait >/dev/null
renameFiles
popd >/dev/null
