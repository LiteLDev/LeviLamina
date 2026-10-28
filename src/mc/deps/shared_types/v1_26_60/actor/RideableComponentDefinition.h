#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct RideableComponentDefinition {
public:
    // RideableComponentDefinition inner types declare
    // clang-format off
    struct SeatDescription;
    // clang-format on

    // RideableComponentDefinition inner types define
    enum class DismountMode : uchar {
        Default       = 0,
        OnTopCenter   = 1,
        LookDirection = 2,
    };

    struct SeatDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                                mPosition;
        ::ll::TypedStorage<4, 4, int>                                    mMinSeatCount;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                   mMaxSeatCount;
        ::ll::TypedStorage<1, 1, bool>                                   mHasSeatRotation;
        ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mSeatRotation;
        ::ll::TypedStorage<1, 1, bool>                                   mLockPassengerRotation;
        ::ll::TypedStorage<4, 4, float>                                  mLockPassengerRotationDegrees;
        ::ll::TypedStorage<4, 8, ::std::optional<float>>                 mThirdPersonCameraRadiusOverride;
        ::ll::TypedStorage<4, 8, ::std::optional<float>>                 mCameraRelaxDistanceSmoothing;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SharedTypes::v1_26_60::RideableComponentDefinition::SeatDescription const& seat) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mSeatCount;
    ::ll::TypedStorage<4, 4, int>  mControllingSeat;
    ::ll::TypedStorage<1, 1, bool> mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::RideableComponentDefinition::SeatDescription>>
                                                                                                 mSeats;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                      mFamilyTypes;
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mInteractText;
    ::ll::TypedStorage<1, 1, bool>                                                               mPullInEntities;
    ::ll::TypedStorage<1, 1, bool>                                                               mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float>                                                              mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_60::RideableComponentDefinition::DismountMode> mDismountMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                                     mOnRiderExitEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    RideableComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RideableComponentDefinition(::SharedTypes::v1_26_60::RideableComponentDefinition const&);

    MCAPI void addFamilyTypeByName(::std::string const& name);

    MCAPI ::SharedTypes::v1_26_60::RideableComponentDefinition&
    operator=(::SharedTypes::v1_26_60::RideableComponentDefinition&&);

    MCAPI ::SharedTypes::v1_26_60::RideableComponentDefinition&
    operator=(::SharedTypes::v1_26_60::RideableComponentDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::RideableComponentDefinition const&) const;

    MCAPI ~RideableComponentDefinition();
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
    MCAPI void* $ctor(::SharedTypes::v1_26_60::RideableComponentDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
