#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class TextObjectRoot : public ::ITextObject {
public:
    // prevent constructor by default
    TextObjectRoot& operator=(TextObjectRoot const&);
    TextObjectRoot(TextObjectRoot const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TextObjectRoot@@UEAA@XZ
    virtual ~TextObjectRoot();

    // vIndex: 1, symbol:
    // ?asString@TextObjectRoot@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string asString() const;

    // vIndex: 2, symbol: ?asJsonValue@TextObjectRoot@@UEBA?AVValue@Json@@XZ
    virtual class Json::Value asJsonValue() const;

    // vIndex: 3, symbol: ?resolve@TextObjectRoot@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
    virtual class Json::Value resolve(struct ResolveData const&) const;

    // symbol: ??0TextObjectRoot@@QEAA@XZ
    MCAPI TextObjectRoot();

    // symbol: ?addChild@TextObjectRoot@@QEAAXV?$unique_ptr@VITextObject@@U?$default_delete@VITextObject@@@std@@@std@@@Z
    MCAPI void addChild(std::unique_ptr<class ITextObject> childObject);

    // symbol:
    // ?asStringVector@TextObjectRoot@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> asStringVector() const;

    // symbol: ?clear@TextObjectRoot@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?isEmpty@TextObjectRoot@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?resolveRoot@TextObjectRoot@@QEBA?AVResolvedTextObject@@AEBVActor@@AEBVScoreboard@@@Z
    MCAPI class ResolvedTextObject resolveRoot(class Actor const& actor, class Scoreboard const& scoreboard) const;

    // NOLINTEND
};
