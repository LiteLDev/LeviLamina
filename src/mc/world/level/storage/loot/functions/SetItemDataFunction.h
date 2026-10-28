#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/world/level/storage/loot/RandomValueBounds.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemStackBase;
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
    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;

    virtual void applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) /*override*/;
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
    MCAPI ::LootItemFunction::FunctionType $getFunctionType() const;

    MCAPI void $applyPreVersion(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);

    MCAPI void $apply26U6(::ItemStackBase& item, ::Random& random, ::LootTableContext& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
