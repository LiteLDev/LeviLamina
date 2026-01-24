#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BannerBlockType.h"
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

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
    // SetBannerDetailsFunction inner types define
    using Pattern = ::std::pair<uchar, ::ItemColor>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BannerBlockType>                               mBannerType;
    ::ll::TypedStorage<1, 1, ::ItemColor>                                     mBaseColor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<uchar, ::ItemColor>>> mBannerPatterns;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SetBannerDetailsFunction() /*override*/ = default;

    virtual void apply(::ItemStack& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual void apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context) /*override*/;

    virtual ::LootItemFunction::FunctionType getFunctionType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _apply(::ItemStackBase& item, ::Random& random, ::LootTableContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _parseBannerPattern(::std::vector<::std::pair<uchar, ::ItemColor>>& patternVec, ::Json::Value const& object);

    MCAPI static ::std::unique_ptr<::LootItemFunction>
    deserialize(::Json::Value object, ::std::vector<::std::unique_ptr<::LootItemCondition>>& predicates);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $apply(::ItemStack& item, ::Random& random, ::LootTableContext& context);

    MCFOLD void $apply(::ItemInstance& item, ::Random& random, ::LootTableContext& context);

    MCFOLD ::LootItemFunction::FunctionType $getFunctionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
