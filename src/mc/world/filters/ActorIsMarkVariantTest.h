#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsMarkVariantTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorIsMarkVariantTest& operator=(ActorIsMarkVariantTest const&);
    ActorIsMarkVariantTest(ActorIsMarkVariantTest const&);
    ActorIsMarkVariantTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsMarkVariantTest@@UEAA@XZ
    virtual ~ActorIsMarkVariantTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsMarkVariantTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsMarkVariantTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
