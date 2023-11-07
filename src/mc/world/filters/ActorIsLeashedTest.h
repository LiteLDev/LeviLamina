#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsLeashedTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsLeashedTest& operator=(ActorIsLeashedTest const&);
    ActorIsLeashedTest(ActorIsLeashedTest const&);
    ActorIsLeashedTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsLeashedTest@@UEAA@XZ
    virtual ~ActorIsLeashedTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsLeashedTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorIsLeashedTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
