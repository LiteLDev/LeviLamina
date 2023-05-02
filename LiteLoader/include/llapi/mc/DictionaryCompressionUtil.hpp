/**
 * @file  DictionaryCompressionUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace DictionaryCompressionUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_getDictionary\@DictionaryCompressionUtil\@\@YA?AV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> _getDictionary(std::string const &);
    /**
     * @symbol ?_pruneDictionary\@DictionaryCompressionUtil\@\@YA?AV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAV?$map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_KU?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> _pruneDictionary(class std::map<std::string, unsigned __int64, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, unsigned __int64>>> &);
    /**
     * @symbol ?_tryCompressToken\@DictionaryCompressionUtil\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$set\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@VBinaryStream\@\@\@Z
     */
    MCAPI void _tryCompressToken(std::string const &, class std::set<std::string, struct std::less<std::string>, class std::allocator<std::string>> &, class BinaryStream);
    /**
     * @symbol ?dictionaryCompressString\@DictionaryCompressionUtil\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string dictionaryCompressString(std::string const &);
    /**
     * @symbol ?dictionaryDecompressString\@DictionaryCompressionUtil\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string dictionaryDecompressString(std::string const &);

};