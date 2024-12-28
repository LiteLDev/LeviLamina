#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
// clang-format on

class VehicleUtils {
public:
    // VehicleUtils inner types declare
    // clang-format off
    struct VehicleDirections;
    // clang-format on

    // VehicleUtils inner types define
    struct VehicleDirections {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkbf7371;
        ::ll::UntypedStorage<4, 12> mUnkeb8adf;
        // NOLINTEND

    public:
        // prevent constructor by default
        VehicleDirections& operator=(VehicleDirections const&);
        VehicleDirections(VehicleDirections const&);
        VehicleDirections();
    };

public:
    // prevent constructor by default
    VehicleUtils& operator=(VehicleUtils const&);
    VehicleUtils(VehicleUtils const&);
    VehicleUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<float>
    calculateBlockFloorHeight(::IConstBlockSource const& region, ::BlockPos const& blockPos);

    MCAPI static ::VehicleUtils::VehicleDirections
    calculateVehicleDirections(::Vec3 const& currentPos, ::Vec3 const& prevPos);

    MCAPI static auto getActivatorRailExitPatternStrategy(::BaseGameVersion const& version)
        -> ::std::optional<
            ::Vec3> (*)(::VehicleUtils::VehicleDirections const&, ::std::function<bool(::Vec3 const&, ::Vec3 const&)>);

    MCAPI static auto getActorExitPatternStrategy(::BaseGameVersion const& version)
        -> ::std::optional<
            ::Vec3> (*)(::VehicleUtils::VehicleDirections const&, ::std::function<bool(::Vec3 const&, ::Vec3 const&)>);

    MCAPI static bool ignoredExitCollisionBlock(::Block const& block);

    MCAPI static ::std::optional<::Vec3> testPosFollowingEjectPattern(
        ::VehicleUtils::VehicleDirections const&            vehicleDirections,
        ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
    );

    MCAPI static ::std::optional<::Vec3> testPosFollowingLegacyActivatorRailPattern(
        ::VehicleUtils::VehicleDirections const&            vehicleDirections,
        ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
    );

    MCAPI static ::std::optional<::Vec3> testPosFollowingLegacyActorPattern(
        ::VehicleUtils::VehicleDirections const&            vehicleDirections,
        ::std::function<bool(::Vec3 const&, ::Vec3 const&)> callback
    );
    // NOLINTEND
};
