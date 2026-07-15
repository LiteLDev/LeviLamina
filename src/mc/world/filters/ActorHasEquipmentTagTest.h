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

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
