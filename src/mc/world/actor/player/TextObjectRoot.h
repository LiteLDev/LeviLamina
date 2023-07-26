#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectRoot {

public:
    // prevent constructor by default
    TextObjectRoot& operator=(TextObjectRoot const&) = delete;
    TextObjectRoot(TextObjectRoot const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?asString\@TextObjectRoot\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTOBJECTROOT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TextObjectRoot(); // NOLINT
#endif
    /**
     * @symbol ??0TextObjectRoot\@\@QEAA\@XZ
     */
    MCAPI TextObjectRoot(); // NOLINT
    /**
     * @symbol
     * ?addChild\@TextObjectRoot\@\@QEAAXV?$unique_ptr\@VITextObject\@\@U?$default_delete\@VITextObject\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addChild(std::unique_ptr<class ITextObject>); // NOLINT
    /**
     * @symbol
     * ?asStringVector\@TextObjectRoot\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> asStringVector() const; // NOLINT
    /**
     * @symbol ?clear\@TextObjectRoot\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?isEmpty\@TextObjectRoot\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?resolveRoot\@TextObjectRoot\@\@QEBA?AVResolvedTextObject\@\@AEBVActor\@\@AEBVScoreboard\@\@\@Z
     */
    MCAPI class ResolvedTextObject resolveRoot(class Actor const&, class Scoreboard const&) const; // NOLINT
};
