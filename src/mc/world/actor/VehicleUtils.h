#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
struct ActorUniqueID;
namespace VehicleUtils { struct VehicleDirections; }
// clang-format on

namespace VehicleUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<float> calculateBlockFloorHeight(::IConstBlockSource const& region, ::BlockPos const& blockPos);

MCNAPI bool ignoredExitCollisionBlock(::Block const& block);

MCNAPI bool isPassengerOfActor(::Actor const& maybePassenger, ::ActorUniqueID const& actorID);

MCNAPI ::std::optional<::Vec3> testPosFollowingEjectPattern(
    ::VehicleUtils::VehicleDirections const&            vehicleDirections,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);

MCNAPI ::std::optional<::Vec3> testPosFollowingLegacyActivatorRailPattern(
    ::VehicleUtils::VehicleDirections const&            vehicleDirections,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);

MCNAPI ::std::optional<::Vec3> testPosFollowingLegacyActorPattern(
    ::VehicleUtils::VehicleDirections const&,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
);
// NOLINTEND

} // namespace VehicleUtils
