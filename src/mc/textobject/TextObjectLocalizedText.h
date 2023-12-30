#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedText : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectLocalizedText& operator=(TextObjectLocalizedText const&);
    TextObjectLocalizedText(TextObjectLocalizedText const&);
    TextObjectLocalizedText();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextObjectLocalizedText@@UEAA@XZ
    virtual ~TextObjectLocalizedText() = default;

    // vIndex: 1, symbol:
    // ?asString@TextObjectLocalizedText@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectLocalizedText@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectLocalizedText@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol: ??0TextObjectLocalizedText@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit TextObjectLocalizedText(std::string text);

    // NOLINTEND
};
