#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

namespace DictionaryCompressionUtil {
// NOLINTBEGIN
// symbol:
// ?_getDictionary@DictionaryCompressionUtil@@YA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::set<std::string> _getDictionary(std::string const& input);

// symbol:
// ?_pruneDictionary@DictionaryCompressionUtil@@YA?AV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@std@@@2@@3@@Z
MCAPI std::set<std::string> _pruneDictionary(std::map<std::string, uint64>&);

// symbol:
// ?_tryCompressToken@DictionaryCompressionUtil@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@VBinaryStream@@@Z
MCAPI void _tryCompressToken(std::string const& token, std::set<std::string>& dictionary, class BinaryStream stream);

// symbol:
// ?dictionaryCompressString@DictionaryCompressionUtil@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI std::string dictionaryCompressString(std::string const&);

// symbol:
// ?dictionaryDecompressString@DictionaryCompressionUtil@@YA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Verror_code@2@@Bedrock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI class Bedrock::Result<std::string> dictionaryDecompressString(std::string const&);
// NOLINTEND

}; // namespace DictionaryCompressionUtil
