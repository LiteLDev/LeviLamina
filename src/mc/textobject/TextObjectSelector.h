#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectSelector : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectSelector& operator=(TextObjectSelector const&);
    TextObjectSelector(TextObjectSelector const&);
    TextObjectSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextObjectSelector@@UEAA@XZ
    virtual ~TextObjectSelector() = default;

    // vIndex: 1, symbol:
    // ?asString@TextObjectSelector@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectSelector@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectSelector@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol: ??0TextObjectSelector@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit TextObjectSelector(std::string selectorString);

    // symbol:
    // ?RAW_TEXT_SELECTOR_KEY@TextObjectSelector@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;

    // symbol:
    // ?RAW_TEXT_SELECTOR_STAR@TextObjectSelector@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;

    // NOLINTEND
};
