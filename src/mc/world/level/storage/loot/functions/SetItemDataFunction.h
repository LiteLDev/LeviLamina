#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Block;
class Item;
class ItemInstance;
class ItemStack;
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class SetItemDataFunction : public ::LootItemFunction {
public:
    // SetItemDataFunction inner types define
    enum class ApplyForComplexAliasBlockResult : uchar {
        NotComplexAliasBlock           = 0,
        FailedToRemapComplexAliasBlock = 1,
        Success                        = 2,
    };

    enum class ApplyForItemResult : uchar {
        AsNewItem   = 0,
        SetAuxValue = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>              mValue;
    ::ll::TypedStorage<4, 4, ::LootItemFunction::FunctionType> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetItemDataFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult _applyImplForComplexAliasBlock(
        ::Item const*&       inOutItemDef,
        ::std::string const& originalItemName,
        ::Random&            random,
        int&                 outResultAux
    );

    MCAPI ::SetItemDataFunction::ApplyForItemResult _applyImplForItem(
        ::std::string const& originalItemName,
        ::std::string const& itemRawNameId,
        ::Random&            random,
        int&                 outAux,
        ::WeakPtr<::Item>&   outItem
    );

    MCAPI void _applyImplForNormalBlock(::Block const*& inOutBlock, ::Random& random);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
