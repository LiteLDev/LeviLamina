#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorUndergroundTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorUndergroundTest& operator=(ActorUndergroundTest const&);
    ActorUndergroundTest(ActorUndergroundTest const&);
    ActorUndergroundTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorUndergroundTest@@UEAA@XZ
    virtual ~ActorUndergroundTest();

    // vIndex: 2, symbol: ?evaluate@ActorUndergroundTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorUndergroundTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
