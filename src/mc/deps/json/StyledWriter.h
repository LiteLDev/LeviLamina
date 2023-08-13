#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Writer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Json {

class StyledWriter : public ::Json::Writer {

public:
    // prevent constructor by default
    StyledWriter& operator=(StyledWriter const&) = delete;
    StyledWriter(StyledWriter const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?write\@StyledWriter\@Json\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@2\@\@Z
     */
    virtual std::string write(class Json::Value const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JSON_STYLEDWRITER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~StyledWriter();
#endif
    /**
     * @symbol ??0StyledWriter\@Json\@\@QEAA\@XZ
     */
    MCAPI StyledWriter();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?indent\@StyledWriter\@Json\@\@AEAAXXZ
     */
    MCAPI void indent();
    /**
     * @symbol
     * ?pushValue\@StyledWriter\@Json\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void pushValue(std::string const&);
    /**
     * @symbol ?unindent\@StyledWriter\@Json\@\@AEAAXXZ
     */
    MCAPI void unindent();
    /**
     * @symbol ?writeArrayValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeArrayValue(class Json::Value const&);
    /**
     * @symbol ?writeCommentAfterValueOnSameLine\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentAfterValueOnSameLine(class Json::Value const&);
    /**
     * @symbol ?writeCommentBeforeValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeCommentBeforeValue(class Json::Value const&);
    /**
     * @symbol ?writeValue\@StyledWriter\@Json\@\@AEAAXAEBVValue\@2\@\@Z
     */
    MCAPI void writeValue(class Json::Value const&);
    /**
     * @symbol
     * ?writeWithIndent\@StyledWriter\@Json\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void writeWithIndent(std::string const&);
    /**
     * @symbol
     * ?normalizeEOL\@StyledWriter\@Json\@\@CA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV34\@\@Z
     */
    MCAPI static std::string normalizeEOL(std::string const&);
    // NOLINTEND
};

}; // namespace Json
