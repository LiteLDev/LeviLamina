#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/ActorHasEquipmentTest.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterInputs;
// clang-format on

class ActorHasEquipmentTagTest : public ::ActorHasEquipmentTest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getName() const /*override*/;

    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    virtual ~ActorHasEquipmentTagTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string_view $getName() const;

    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
