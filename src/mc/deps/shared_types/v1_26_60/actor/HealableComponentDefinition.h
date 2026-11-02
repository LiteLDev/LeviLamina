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
        MCNAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition::Effect const&) const;

        MCNAPI ~Effect();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem&
        operator=(::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem const&);

        MCNAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition::FeedItem const&) const;

        MCNAPI ~FeedItem();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI HealableComponentDefinition(::SharedTypes::v1_26_60::HealableComponentDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_60::HealableComponentDefinition const&) const;

    MCNAPI ~HealableComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_60::HealableComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
