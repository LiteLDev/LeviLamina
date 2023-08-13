#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectText : public ::ITextObject {

public:
    // prevent constructor by default
    TextObjectText& operator=(TextObjectText const&) = delete;
    TextObjectText(TextObjectText const&)            = delete;
    TextObjectText()                                 = delete;

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
     * ?asString\@TextObjectText\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @vftbl 2
     * @symbol ?asJsonValue\@TextObjectText\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl 3
     * @symbol ?resolve\@TextObjectText\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const&) const;
    /**
     * @symbol ??0TextObjectText\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TextObjectText(std::string);
    /**
     * @symbol
     * ?asJsonValue\@TextObjectText\@\@SA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Json::Value asJsonValue(std::string const&);
    // NOLINTEND
};
