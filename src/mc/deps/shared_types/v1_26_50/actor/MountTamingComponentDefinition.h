#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct MountTamingComponentDefinition {
public:
    // MountTamingComponentDefinition inner types declare
    // clang-format off
    struct FeedItem;
    struct RejectItem;
    // clang-format on

    // MountTamingComponentDefinition inner types define
    struct FeedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItemDescriptor;
        ::ll::TypedStorage<4, 4, int>                                    mTemperMod;
        // NOLINTEND
    };

    struct RejectItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItem;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                mMinTemper;
    ::ll::TypedStorage<4, 4, int>                                                mMaxTemper;
    ::ll::TypedStorage<4, 4, int>                                                mAttemptTemperMod;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mFeedText;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mVehicleText;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnTame;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_50::MountTamingComponentDefinition::FeedItem>>
        mFeedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_50::MountTamingComponentDefinition::RejectItem>>
        mAutoRejectItems;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTamingComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MountTamingComponentDefinition(::SharedTypes::v1_26_50::MountTamingComponentDefinition&&);

    MCAPI MountTamingComponentDefinition(::SharedTypes::v1_26_50::MountTamingComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_50::MountTamingComponentDefinition&
    operator=(::SharedTypes::v1_26_50::MountTamingComponentDefinition&&);

    MCAPI ::SharedTypes::v1_26_50::MountTamingComponentDefinition&
    operator=(::SharedTypes::v1_26_50::MountTamingComponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_50::MountTamingComponentDefinition const&) const;

    MCAPI ~MountTamingComponentDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_ATTEMPT_TEMPER_MOD();

    MCAPI static int const& DEFAULT_MAX_TEMPER();

    MCAPI static int const& DEFAULT_MIN_TEMPER();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::MountTamingComponentDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_50::MountTamingComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
