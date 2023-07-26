#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectSelector {

public:
    // prevent constructor by default
    TextObjectSelector& operator=(TextObjectSelector const&) = delete;
    TextObjectSelector(TextObjectSelector const&)            = delete;
    TextObjectSelector()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?asString\@TextObjectSelector\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const; // NOLINT
    /**
     * @symbol
     * ?RAW_TEXT_SELECTOR_KEY\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY; // NOLINT
    /**
     * @symbol
     * ?RAW_TEXT_SELECTOR_STAR\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR; // NOLINT
};
