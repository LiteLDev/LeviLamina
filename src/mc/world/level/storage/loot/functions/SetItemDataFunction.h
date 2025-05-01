#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
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
    ::ll::UntypedStorage<4, 8> mUnk66cbff;
    // NOLINTEND

public:
    // prevent constructor by default
    SetItemDataFunction& operator=(SetItemDataFunction const&);
    SetItemDataFunction(SetItemDataFunction const&);
    SetItemDataFunction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetItemDataFunction() /*override*/ = default;

    // vIndex: 4
    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    // vIndex: 2
    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SetItemDataFunction::ApplyForComplexAliasBlockResult _applyImplForComplexAliasBlock(
        ::Item const*&       inOutItemDef,
        ::std::string const& originalItemName,
        ::Random&            random,
        int&                 outResultAux
    );

    MCNAPI ::SetItemDataFunction::ApplyForItemResult _applyImplForItem(
        ::std::string const& originalItemName,
        ::std::string const& itemRawNameId,
        ::Random&            random,
        int&                 outAux,
        ::WeakPtr<::Item>&   outItem
    );

    MCNAPI void _applyImplForNormalBlock(::Block const*& inOutBlock, ::Random& random);
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCNAPI void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
