#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/PositionTrackingId.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompassSpriteCalculator;
class Level;
class LodestoneCompassComponentCalculator;
struct DimensionType;
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

#ifdef LL_PLAT_C
    MCAPI bool tick(::Level& level);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void tickSpinningCalculator();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CompassSpriteCalculator& mSpinningLodestone();
    // NOLINTEND
};
