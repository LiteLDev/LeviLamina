#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsVariantTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorIsVariantTest& operator=(ActorIsVariantTest const&);
    ActorIsVariantTest(ActorIsVariantTest const&);
    ActorIsVariantTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorIsVariantTest@@UEAA@XZ
    virtual ~ActorIsVariantTest();

    // vIndex: 2, symbol: ?evaluate@ActorIsVariantTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorIsVariantTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
