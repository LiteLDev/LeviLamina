#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedText {

public:
    // prevent constructor by default
    TextObjectLocalizedText& operator=(TextObjectLocalizedText const&) = delete;
    TextObjectLocalizedText(TextObjectLocalizedText const&)            = delete;
    TextObjectLocalizedText()                                          = delete;

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
     * ?asString\@TextObjectLocalizedText\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectLocalizedText\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectLocalizedText\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const;
    /**
     * @symbol
     * ??0TextObjectLocalizedText\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TextObjectLocalizedText(std::string);
    // NOLINTEND
};
