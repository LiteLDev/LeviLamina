#!/bin/bash

# bash case insensitive match
shopt -s nocasematch

DEVTOOLS=$(dirname $0)

file=$1

TEMPLATE_FILE=${DEVTOOLS}/LicenseHeader.template
THIRDPARTY_PATTERN='thirdparty|third_party'
YEAR=$(date +"%Y")

if [[ $file =~ ${THIRDPARTY_PATTERN} ]]; then
  exit 0
fi

if ! grep -q 'THL A29 Limited, a Tencent company.' $file; then
  echo "append license header to $file"
  temp_file=$(mktemp)
  sed -e "s/\${YEAR\}/${YEAR}/" ${TEMPLATE_FILE} > $temp_file
  cat $file >> $temp_file
  # copy file content instead of moving file to keep file attributes
  cat $temp_file > $file
  rm -f $temp_file
fi
