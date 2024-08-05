#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

namespace DictionaryCompressionUtil {
// NOLINTBEGIN
MCAPI std::set<std::string> _getDictionary(std::string const& input);

MCAPI std::set<std::string> _pruneDictionary(std::map<std::string, uint64>&);

MCAPI void _tryCompressToken(std::string const& token, std::set<std::string>& dictionary, class BinaryStream stream);

MCAPI std::string dictionaryCompressString(std::string const&);

MCAPI class Bedrock::Result<std::string> dictionaryDecompressString(std::string const&);
// NOLINTEND

}; // namespace DictionaryCompressionUtil
