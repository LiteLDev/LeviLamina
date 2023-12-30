#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsTargetTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsTargetTest& operator=(ActorIsTargetTest const&);
    ActorIsTargetTest(ActorIsTargetTest const&);
    ActorIsTargetTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsTargetTest@@UEAA@XZ
    virtual ~ActorIsTargetTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsTargetTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsTargetTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
