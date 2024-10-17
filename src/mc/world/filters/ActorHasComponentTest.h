#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasComponentTest : public ::SimpleHashStringFilterTest {
public:
    // prevent constructor by default
    ActorHasComponentTest& operator=(ActorHasComponentTest const&);
    ActorHasComponentTest(ActorHasComponentTest const&);
    ActorHasComponentTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorHasComponentTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI std::string_view getName$() const;

    // NOLINTEND
};
