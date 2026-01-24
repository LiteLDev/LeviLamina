#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::TypedStorage<8, 48, ::HashedString> mMaterial;
    ::ll::TypedStorage<8, 48, ::HashedString> mPattern;
    // NOLINTEND

public:
    // prevent constructor by default
    SetArmorTrimFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetArmorTrimFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetArmorTrimFunction(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::HashedString const&                                  material,
        ::HashedString const&                                  pattern
    );

    MCAPI void _apply(::ItemStackBase& item, ::LootTableContext const& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates,
        ::HashedString const&                                  material,
        ::HashedString const&                                  pattern
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random&, ::LootTableContext& context);

    MCFOLD void $apply(::ItemInstance& item, ::Random&, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
