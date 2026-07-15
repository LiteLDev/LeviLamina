#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class ActorHasEquipmentTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc85f7c;
    ::ll::UntypedStorage<4, 4>  mUnk32c4a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorHasEquipmentTest& operator=(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest(ActorHasEquipmentTest const&);
    ActorHasEquipmentTest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&) /*override*/;

    virtual bool evaluate(::FilterContext const&) const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;

    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getDomain() const /*override*/;

    virtual ::Json::Value _serializeValue() const /*override*/;

    virtual ::Json::Value _serializeDomain() const /*override*/;

    virtual bool _isExpectedItem(::std::vector<::ItemStack const*> const&) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
