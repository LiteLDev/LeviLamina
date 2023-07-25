#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { template<typename T0, typename T1> class Result; }
// clang-format on

namespace DictionaryCompressionUtil {
/**
 * @symbol
 * ?_getDictionary\@DictionaryCompressionUtil\@\@YA?AV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
 */
MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>>
_getDictionary(std::string const&);
/**
 * @symbol
 * ?_pruneDictionary\@DictionaryCompressionUtil\@\@YA?AV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KU?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@\@2\@\@3\@\@Z
 */
MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>>
_pruneDictionary(class std::map<
                 std::string,
                 unsigned __int64,
                 struct std::less<std::string>,
                 class std::allocator<struct std::pair<std::string const, unsigned __int64>>>&);
/**
 * @symbol
 * ?_tryCompressToken\@DictionaryCompressionUtil\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@VBinaryStream\@\@\@Z
 */
MCAPI void _tryCompressToken(
    std::string const&,
    class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>>&,
    class BinaryStream
);
/**
 * @symbol
 * ?dictionaryCompressString\@DictionaryCompressionUtil\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
 */
MCAPI std::string dictionaryCompressString(std::string const&);
/**
 * @symbol
 * ?dictionaryDecompressString\@DictionaryCompressionUtil\@\@YA?AV?$Result\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@Verror_code\@2\@\@Bedrock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI class Bedrock::Result<std::string, class std::error_code> dictionaryDecompressString(std::string const&);

}; // namespace DictionaryCompressionUtil
