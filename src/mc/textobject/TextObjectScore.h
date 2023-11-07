#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectScore : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectScore& operator=(TextObjectScore const&);
    TextObjectScore(TextObjectScore const&);
    TextObjectScore();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TextObjectScore@@UEAA@XZ
    virtual ~TextObjectScore() = default;

    // vIndex: 1, symbol:
    // ?asString@TextObjectScore@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectScore@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectScore@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol: ?RAW_TEXT_SCORE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SCORE_KEY;

    // symbol:
    // ?RAW_TEXT_SCORE_NAME_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SCORE_NAME_KEY;

    // symbol:
    // ?RAW_TEXT_SCORE_OBJECTIVE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SCORE_OBJECTIVE_KEY;

    // symbol: ?RAW_TEXT_SCORE_STAR@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAW_TEXT_SCORE_STAR;

    // NOLINTEND
};
