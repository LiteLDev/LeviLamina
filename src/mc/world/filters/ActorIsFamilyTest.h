#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
// clang-format on

class ActorIsFamilyTest : public ::SimpleHashStringFilterTest {
public:
    // prevent constructor by default
    ActorIsFamilyTest& operator=(ActorIsFamilyTest const&);
    ActorIsFamilyTest(ActorIsFamilyTest const&);
    ActorIsFamilyTest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 0
    virtual ~ActorIsFamilyTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $evaluate(::FilterContext const& context) const;

    MCAPI ::std::string_view $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
