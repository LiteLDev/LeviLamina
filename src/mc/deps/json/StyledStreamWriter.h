#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledStreamWriter {

public:
    // prevent constructor by default
    StyledStreamWriter& operator=(StyledStreamWriter const&) = delete;
    StyledStreamWriter(StyledStreamWriter const&)            = delete;
    StyledStreamWriter()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0StyledStreamWriter\@Json\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI StyledStreamWriter(std::string);
    /**
     * @symbol
     * ?write\@StyledStreamWriter\@Json\@\@QEAAXAEAV?$basic_ostream\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVValue\@2\@\@Z
     */
    MCAPI void write(std::basic_ostream<char, std::char_traits<char>>&, class Json::Value const&);
    /**
     * @symbol ??1StyledStreamWriter\@Json\@\@QEAA\@XZ
     */
    MCAPI ~StyledStreamWriter();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?normalizeEOL\@StyledStreamWriter\@Json\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI static std::string normalizeEOL(std::string const&);
    /**
     * @symbol
     * ?pushValue\@StyledStreamWriter\@Json\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushValue(std::string const&);
    /**
     * @symbol ?unindent\@StyledStreamWriter\@Json\@\@AEAAXXZ
     */
    MCAPI void unindent();
    /**
     * @symbol ?writeArrayValue\@StyledStreamWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeArrayValue(class Json::Value const&);
    /**
     * @symbol ?writeCommentAfterValueOnSameLine\@StyledStreamWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentAfterValueOnSameLine(class Json::Value const&);
    /**
     * @symbol ?writeCommentBeforeValue\@StyledStreamWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentBeforeValue(class Json::Value const&);
    /**
     * @symbol ?writeValue\@StyledStreamWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeValue(class Json::Value const&);
    // NOLINTEND
};

}; // namespace Json
