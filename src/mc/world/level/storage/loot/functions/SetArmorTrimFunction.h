#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetArmorTrimFunction : public ::LootItemFunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbe4288;
    ::ll::UntypedStorage<8, 48> mUnk231591;
    // NOLINTEND

public:
    // prevent constructor by default
    SetArmorTrimFunction& operator=(SetArmorTrimFunction const&);
    SetArmorTrimFunction(SetArmorTrimFunction const&);
    SetArmorTrimFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetArmorTrimFunction() /*override*/;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SetArmorTrimFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::HashedString const&                                  material,
        ::HashedString const&                                  pattern
    );

    MCNAPI void _apply(::ItemStackBase& item, ::LootTableContext const& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::HashedString const&                                  material,
        ::HashedString const&                                  pattern
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
