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
    // vIndex: 0
    virtual ~ActorIsVariantTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI std::string_view getName$() const;

    // NOLINTEND
};
