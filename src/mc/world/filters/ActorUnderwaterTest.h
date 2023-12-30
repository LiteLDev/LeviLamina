#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorUnderwaterTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorUnderwaterTest& operator=(ActorUnderwaterTest const&);
    ActorUnderwaterTest(ActorUnderwaterTest const&);
    ActorUnderwaterTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorUnderwaterTest@@UEAA@XZ
    virtual ~ActorUnderwaterTest();

    // vIndex: 2, symbol: ?evaluate@ActorUnderwaterTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorUnderwaterTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
