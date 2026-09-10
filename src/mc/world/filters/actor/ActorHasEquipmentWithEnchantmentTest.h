#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleHashStringFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
// clang-format on

class ActorHasEquipmentWithEnchantmentTest : public ::SimpleHashStringFilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7c3c9e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHasEquipmentWithEnchantmentTest& operator=(ActorHasEquipmentWithEnchantmentTest const&);
    ActorHasEquipmentWithEnchantmentTest(ActorHasEquipmentWithEnchantmentTest const&);
    ActorHasEquipmentWithEnchantmentTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCNAPI bool $evaluate(::FilterContext const& context) const;

    MCNAPI ::std::string_view $getName() const;


    // NOLINTEND
};
