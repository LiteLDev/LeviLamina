#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectSelector {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSELECTOR
public:
    TextObjectSelector& operator=(TextObjectSelector const&) = delete;
    TextObjectSelector(TextObjectSelector const&)            = delete;
    TextObjectSelector()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?asString\@TextObjectSelector\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const;
    /**
     * @symbol
     * ?RAW_TEXT_SELECTOR_KEY\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;
    /**
     * @symbol
     * ?RAW_TEXT_SELECTOR_STAR\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;
};
