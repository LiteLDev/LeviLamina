#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasRangedWeaponTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorHasRangedWeaponTest& operator=(ActorHasRangedWeaponTest const&);
    ActorHasRangedWeaponTest(ActorHasRangedWeaponTest const&);
    ActorHasRangedWeaponTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasRangedWeaponTest@@UEAA@XZ
    virtual ~ActorHasRangedWeaponTest();

    // vIndex: 2, symbol: ?evaluate@ActorHasRangedWeaponTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHasRangedWeaponTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
