#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompassSpriteCalculator;
class Level;
class LodestoneCompassComponentCalculator;
class PositionTrackingId;
struct ActorUniqueID;
// clang-format on

class LodestoneCompassComponent {
public:
    // LodestoneCompassComponent inner types define
    using CompassIdMap = ::std::unordered_map<
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>,
        ::std::unique_ptr<::LodestoneCompassComponentCalculator>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mTrackingHandle;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>,
            ::std::unique_ptr<::LodestoneCompassComponentCalculator>>>
        mCalculators;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::LodestoneCompassComponentCalculator*
    _createCalculator(::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId);

    MCAPI int getAnimationFrame(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        ::BlockPos const&                                                                lookFromPosition,
        ::DimensionType const&                                                           lookFromDimension
    );

    MCFOLD void initialize(::PositionTrackingId const& trackingHandle);

    MCAPI void setTrackOnlyInSameDimension(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        bool                                                                             trackOnlyInSameDimension
    );

#ifdef LL_PLAT_C
    MCAPI bool tick(::Level& level);
#endif

    MCAPI ~LodestoneCompassComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getSpinningAnimationFrame();

    MCAPI static ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>
    makeCalculatorId(::ActorUniqueID const& id);

#ifdef LL_PLAT_C
    MCAPI static ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>
    makeCalculatorId(::BlockPos const& pos, ::DimensionType const& dimension);

    MCAPI static void tickSpinningCalculator();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CompassSpriteCalculator& mSpinningLodestone();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
