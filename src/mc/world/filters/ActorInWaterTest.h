#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorInWaterTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorInWaterTest& operator=(ActorInWaterTest const&);
    ActorInWaterTest(ActorInWaterTest const&);
    ActorInWaterTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorInWaterTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};
