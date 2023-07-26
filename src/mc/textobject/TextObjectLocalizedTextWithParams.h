#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedTextWithParams {

public:
    // prevent constructor by default
    TextObjectLocalizedTextWithParams& operator=(TextObjectLocalizedTextWithParams const&) = delete;
    TextObjectLocalizedTextWithParams(TextObjectLocalizedTextWithParams const&)            = delete;
    TextObjectLocalizedTextWithParams()                                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?asString\@TextObjectLocalizedTextWithParams\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectLocalizedTextWithParams\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectLocalizedTextWithParams\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const; // NOLINT
    /**
     * @symbol
     * ??0TextObjectLocalizedTextWithParams\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@Z
     */
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const&); // NOLINT
};
