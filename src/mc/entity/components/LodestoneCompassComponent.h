#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompassSpriteCalculator;
class Dimension;
class LodestoneCompassComponentCalculator;
class PositionTrackingId;
struct ActorUniqueID;
// clang-format on

class LodestoneCompassComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd7217f;
    ::ll::UntypedStorage<8, 64> mUnkb85952;
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&);
    LodestoneCompassComponent(LodestoneCompassComponent const&);
    LodestoneCompassComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LodestoneCompassComponent(::LodestoneCompassComponent&&);

    MCAPI ::LodestoneCompassComponentCalculator* _findCalculator(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        bool                                                                             createIfNotFound
    );

    MCAPI int getAnimationFrame(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        ::BlockPos const&                                                                lookFromPosition,
        ::DimensionType const&                                                           lookFromDimension
    );

    MCAPI void initialize(::PositionTrackingId const& trackingHandle);

    MCAPI void setTrackOnlyInSameDimension(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        bool                                                                             trackOnlyInSameDimension
    );

    MCAPI ~LodestoneCompassComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getSpinningAnimationFrame();

    MCAPI static ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>
    makeCalculatorId(::ActorUniqueID const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CompassSpriteCalculator& mSpinningLodestone();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LodestoneCompassComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
