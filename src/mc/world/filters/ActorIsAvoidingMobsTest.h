#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsAvoidingMobsTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsAvoidingMobsTest& operator=(ActorIsAvoidingMobsTest const&);
    ActorIsAvoidingMobsTest(ActorIsAvoidingMobsTest const&);
    ActorIsAvoidingMobsTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsAvoidingMobsTest@@UEAA@XZ
    virtual ~ActorIsAvoidingMobsTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsAvoidingMobsTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsAvoidingMobsTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
