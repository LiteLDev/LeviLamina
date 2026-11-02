#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID;

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
LLAPI bool isPassengerOfActor(::Actor const& maybePassenger, ::ActorUniqueID const& actorID);

// functions
// NOLINTBEGIN
MCNAPI bool arePassengersOfSameActor(::Actor const& maybePassenger1, ::Actor const& maybePassenger2);

MCNAPI ::std::optional<float> calculateBlockFloorHeight(::IConstBlockSource const& region, ::BlockPos const& blockPos);

MCNAPI auto getActorExitPatternStrategy(::BaseGameVersion const& version) -> ::std::optional<::Vec3> (*)(
    ::VehicleUtils::VehicleDirections const&,
    ::std::function<bool(::Vec3 const&, ::Vec3 const&)>
);

MCNAPI bool ignoredExitCollisionBlock(::Block const& block);

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
