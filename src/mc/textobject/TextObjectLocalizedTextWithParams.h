#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedTextWithParams : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectLocalizedTextWithParams& operator=(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextObjectLocalizedTextWithParams@@UEAA@XZ
    virtual ~TextObjectLocalizedTextWithParams() = default;

    // vIndex: 1, symbol:
    // ?asString@TextObjectLocalizedTextWithParams@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectLocalizedTextWithParams@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectLocalizedTextWithParams@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol:
    // ??0TextObjectLocalizedTextWithParams@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@Z
    MCAPI TextObjectLocalizedTextWithParams(std::string text, std::vector<std::string> const& params);

    // NOLINTEND
};
