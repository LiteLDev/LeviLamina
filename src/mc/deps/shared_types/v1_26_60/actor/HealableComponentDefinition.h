#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct HealableComponentDefinition {
public:
    // HealableComponentDefinition inner types declare
    // clang-format off
    struct Effect;
    struct FeedItem;
    // clang-format on

    // HealableComponentDefinition inner types define
    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                        mName;
        ::ll::TypedStorage<8, 40, ::std::variant<float, ::std::string>> mDuration;
        ::ll::TypedStorage<4, 4, int>                                   mAmplifier;
        ::ll::TypedStorage<4, 4, float>                                 mChance;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition::Effect const&) const;

        MCAPI ~Effect();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct FeedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItemDescriptor;
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mResultItem;
        ::ll::TypedStorage<4, 4, int>                                    mHealAmount;
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::HealableComponentDefinition::Effect>> mEffects;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeedItem(FeedItem const&);
        FeedItem();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem&
        operator=(::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem const&);

        MCAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem const&) const;

        MCAPI ~FeedItem();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                                                                           mForceUse;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>                                     mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    HealableComponentDefinition& operator=(HealableComponentDefinition const&);
    HealableComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HealableComponentDefinition(::SharedTypes::v1_26_60::HealableComponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition const&) const;

    MCAPI ~HealableComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_60::HealableComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
