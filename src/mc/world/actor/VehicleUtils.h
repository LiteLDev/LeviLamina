#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
namespace VehicleUtils { struct VehicleDirections; }
// clang-format on

namespace VehicleUtils {
// functions
// NOLINTBEGIN
MCAPI bool arePassengersOfSameActor(::Actor const& maybePassenger1, ::Actor const& maybePassenger2);

MCAPI ::std::optional<float> calculateBlockFloorHeight(::IConstBlockSource const& region, ::BlockPos const& blockPos);

MCAPI auto getActorExitPatternStrategy(::BaseGameVersion const& version) -> ::std::optional<::Vec3> (*)(
    ::VehicleUtils::VehicleDirections const&,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)>
);

MCAPI bool ignoredExitCollisionBlock(::Block const& block);

MCAPI ::std::optional<::Vec3> testPosFollowingEjectPattern(
    ::VehicleUtils::VehicleDirections const&            vehicleDirections,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);

MCAPI ::std::optional<::Vec3> testPosFollowingLegacyActivatorRailPattern(
    ::VehicleUtils::VehicleDirections const&            vehicleDirections,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);

MCAPI ::std::optional<::Vec3> testPosFollowingLegacyActorPattern(
    ::VehicleUtils::VehicleDirections const&,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);
// NOLINTEND

} // namespace VehicleUtils
