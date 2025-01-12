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
    // vIndex: 1
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;

    // vIndex: 2
    virtual bool evaluate(::FilterContext const& context) const /*override*/;

    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 6
    virtual ::Json::Value _serializeValue() const /*override*/;

    // vIndex: 5
    virtual ::Json::Value _serializeDomain() const /*override*/;

    // vIndex: 7
    virtual bool _isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const;

    // vIndex: 0
    virtual ~ActorHasEquipmentTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);

    MCAPI bool $evaluate(::FilterContext const& context) const;

    MCAPI ::std::string_view $getName() const;

    MCAPI ::Json::Value $_serializeValue() const;

    MCAPI ::Json::Value $_serializeDomain() const;

    MCAPI bool $_isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
