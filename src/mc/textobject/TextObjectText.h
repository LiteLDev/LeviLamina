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
    TextObjectText& operator=(TextObjectText const&);
    TextObjectText(TextObjectText const&);
    TextObjectText();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextObjectText@@UEAA@XZ
    virtual ~TextObjectText() = default;

    // vIndex: 1, symbol:
    // ?asString@TextObjectText@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectText@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectText@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol: ??0TextObjectText@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit TextObjectText(std::string text);

    // symbol:
    // ?asJsonValue@TextObjectText@@SA?AVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Json::Value asJsonValue(std::string const& textField);

    // NOLINTEND
};
