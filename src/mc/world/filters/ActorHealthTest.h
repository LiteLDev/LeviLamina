#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHealthTest : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    ActorHealthTest& operator=(ActorHealthTest const&);
    ActorHealthTest(ActorHealthTest const&);
    ActorHealthTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorHealthTest@@UEAA@XZ
    virtual ~ActorHealthTest() = default;

    // vIndex: 2, symbol: ?evaluate@ActorHealthTest@@UEBA_NAEBUFilterContext@@@Z
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4, symbol: ?getName@ActorHealthTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // NOLINTEND
};
