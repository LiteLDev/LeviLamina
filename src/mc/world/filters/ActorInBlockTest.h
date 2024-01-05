#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorInBlockTest : public ::SimpleHashStringFilterTest {
public:
    // prevent constructor by default
    ActorInBlockTest& operator=(ActorInBlockTest const&);
    ActorInBlockTest(ActorInBlockTest const&);
    ActorInBlockTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorInBlockTest@@UEAA@XZ
    virtual ~ActorInBlockTest();

    // vIndex: 2, symbol: ?evaluate@ActorInBlockTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorInBlockTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
