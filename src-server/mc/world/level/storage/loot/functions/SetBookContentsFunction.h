#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetBookContentsFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1d3ee;
    ::ll::UntypedStorage<8, 32> mUnk651b29;
    ::ll::UntypedStorage<8, 24> mUnk994879;
    // NOLINTEND

public:
    // prevent constructor by default
    SetBookContentsFunction& operator=(SetBookContentsFunction const&);
    SetBookContentsFunction(SetBookContentsFunction const&);
    SetBookContentsFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetBookContentsFunction() /*override*/;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext&) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillUserData(::CompoundTag& tag);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext&);

    MCNAPI void $apply(::ItemInstance& itemInstance, ::Random&, ::LootTableContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
