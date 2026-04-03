#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemDescriptor;
class LootTableContext;
class Random;
struct IntRange;
namespace Json { class Value; }
// clang-format on

class LootItemMatchToolCondition : public ::LootItemCondition {
public:
    // LootItemMatchToolCondition inner types declare
    // clang-format off
    struct EnchantInfo;
    // clang-format on

    // LootItemMatchToolCondition inner types define
    struct EnchantInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk925f0a;
        ::ll::UntypedStorage<4, 8>  mUnkeb6509;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnchantInfo& operator=(EnchantInfo const&);
        EnchantInfo(EnchantInfo const&);
        EnchantInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkeb8bef;
    ::ll::UntypedStorage<4, 8>  mUnkf68036;
    ::ll::UntypedStorage<8, 32> mUnk361680;
    ::ll::UntypedStorage<8, 24> mUnka00550;
    ::ll::UntypedStorage<8, 24> mUnk7efdcf;
    ::ll::UntypedStorage<8, 24> mUnk32586a;
    ::ll::UntypedStorage<8, 24> mUnkcc3703;
    // NOLINTEND

public:
    // prevent constructor by default
    LootItemMatchToolCondition& operator=(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition(LootItemMatchToolCondition const&);
    LootItemMatchToolCondition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool applies(::Random&, ::LootTableContext& context) /*override*/;

    virtual ::LootItemCondition::ConditionType getConditionType() const /*override*/;

    virtual ~LootItemMatchToolCondition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LootItemMatchToolCondition(
        ::IntRange                                               count,
        ::IntRange                                               durability,
        ::std::string                                            itemName,
        ::std::vector<::LootItemMatchToolCondition::EnchantInfo> enchantments,
        ::std::vector<::ItemDescriptor>                          itemTagsAny,
        ::std::vector<::ItemDescriptor>                          itemTagsAll,
        ::std::vector<::ItemDescriptor>                          itemTagsNone
    );

    MCNAPI bool _doItemTagsMatch(::Item const& item) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::LootItemCondition> deserialize(::Json::Value const& object);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IntRange                                               count,
        ::IntRange                                               durability,
        ::std::string                                            itemName,
        ::std::vector<::LootItemMatchToolCondition::EnchantInfo> enchantments,
        ::std::vector<::ItemDescriptor>                          itemTagsAny,
        ::std::vector<::ItemDescriptor>                          itemTagsAll,
        ::std::vector<::ItemDescriptor>                          itemTagsNone
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
    MCNAPI bool $applies(::Random&, ::LootTableContext& context);

    MCNAPI ::LootItemCondition::ConditionType $getConditionType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
