#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

namespace DictionaryCompressionUtil {
// functions
// NOLINTBEGIN
MCAPI ::std::set<::std::string> _getDictionary(::std::string const& input);

MCAPI ::std::set<::std::string> _pruneDictionary(::std::map<::std::string, uint64>& foundStrings);

MCAPI void _tryCompressToken(::std::string const& token, ::std::set<::std::string>& dictionary, ::BinaryStream& stream);

MCAPI ::std::string dictionaryCompressString(::std::string const& originalString);

MCAPI ::Bedrock::Result<::std::string> dictionaryDecompressString(::std::string const& compressedString);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& DICTIONARY_COMPRESSION_INDICATOR();
// NOLINTEND

} // namespace DictionaryCompressionUtil
