#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
// clang-format on

class ActorMissingHealthTest : public ::SimpleBoolFilterTest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ~ActorMissingHealthTest() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $evaluate(::FilterContext const& context) const;

    MCNAPI ::std::string_view $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
