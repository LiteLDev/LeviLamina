#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorInOverworldTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorInOverworldTest& operator=(ActorInOverworldTest const&);
    ActorInOverworldTest(ActorInOverworldTest const&);
    ActorInOverworldTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorInOverworldTest@@UEAA@XZ
    virtual ~ActorInOverworldTest();

    // vIndex: 2, symbol: ?evaluate@ActorInOverworldTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorInOverworldTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
