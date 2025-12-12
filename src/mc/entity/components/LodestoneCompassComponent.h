#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/PositionTrackingId.h"

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
};
