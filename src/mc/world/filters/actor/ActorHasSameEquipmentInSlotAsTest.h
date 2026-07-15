#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorHasSameEquipmentInSlotAsTest : public ::SimpleBoolFilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7f0a76;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHasSameEquipmentInSlotAsTest& operator=(ActorHasSameEquipmentInSlotAsTest const&);
    ActorHasSameEquipmentInSlotAsTest(ActorHasSameEquipmentInSlotAsTest const&);
    ActorHasSameEquipmentInSlotAsTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getName() const /*override*/;

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&) /*override*/;

    virtual bool evaluate(::FilterContext const&) const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;

    virtual ::Json::Value _serializeDomain() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
