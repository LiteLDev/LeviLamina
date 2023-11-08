#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorRandomChanceTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorRandomChanceTest& operator=(ActorRandomChanceTest const&);
    ActorRandomChanceTest(ActorRandomChanceTest const&);
    ActorRandomChanceTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorRandomChanceTest@@UEAA@XZ
    virtual ~ActorRandomChanceTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorRandomChanceTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const&) const;

    // vIndex: 4, symbol: ?getName@ActorRandomChanceTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
