#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsPersistentTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsPersistentTest& operator=(ActorIsPersistentTest const&);
    ActorIsPersistentTest(ActorIsPersistentTest const&);
    ActorIsPersistentTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorIsPersistentTest@@UEAA@XZ
    virtual ~ActorIsPersistentTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorIsPersistentTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsPersistentTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
