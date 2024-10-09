#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsSittingTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsSittingTest& operator=(ActorIsSittingTest const&);
    ActorIsSittingTest(ActorIsSittingTest const&);
    ActorIsSittingTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorIsSittingTest() = default;

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND
};
