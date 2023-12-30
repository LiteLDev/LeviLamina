#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsSkinIDTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorIsSkinIDTest& operator=(ActorIsSkinIDTest const&);
    ActorIsSkinIDTest(ActorIsSkinIDTest const&);
    ActorIsSkinIDTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsSkinIDTest@@UEAA@XZ
    virtual ~ActorIsSkinIDTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsSkinIDTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsSkinIDTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
