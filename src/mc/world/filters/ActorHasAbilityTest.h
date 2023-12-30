#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasAbilityTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorHasAbilityTest& operator=(ActorHasAbilityTest const&);
    ActorHasAbilityTest(ActorHasAbilityTest const&);
    ActorHasAbilityTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasAbilityTest@@UEAA@XZ
    virtual ~ActorHasAbilityTest();

    // vIndex: 2, symbol: ?evaluate@ActorHasAbilityTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHasAbilityTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
