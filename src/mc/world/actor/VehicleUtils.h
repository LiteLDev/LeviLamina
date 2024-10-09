#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VehicleUtils {
public:
    // VehicleUtils inner types declare
    // clang-format off
    struct VehicleDirections;
    // clang-format on

    // VehicleUtils inner types define
    struct VehicleDirections {
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
    // NOLINTBEGIN
    MCAPI static std::optional<float>
    calculateBlockFloorHeight(class IConstBlockSource const& region, class BlockPos const& blockPos);

    MCAPI static struct VehicleUtils::VehicleDirections
    calculateVehicleDirections(class Vec3 const& currentPos, class Vec3 const& prevPos);

    MCAPI static auto getActivatorRailExitPatternStrategy(class BaseGameVersion const& version)
        -> std::optional<
            class
            Vec3> (*)(struct VehicleUtils::VehicleDirections const&, std::function<bool(class Vec3 const&, class Vec3 const&)>);

    MCAPI static auto getActorExitPatternStrategy(class BaseGameVersion const& version)
        -> std::optional<
            class
            Vec3> (*)(struct VehicleUtils::VehicleDirections const&, std::function<bool(class Vec3 const&, class Vec3 const&)>);

    MCAPI static bool ignoredExitCollisionBlock(class Block const& block);

    MCAPI static std::optional<class Vec3> testPosFollowingEjectPattern(
        struct VehicleUtils::VehicleDirections const&             vehicleDirections,
        std::function<bool(class Vec3 const&, class Vec3 const&)> callback
    );

    MCAPI static std::optional<class Vec3> testPosFollowingLegacyActivatorRailPattern(
        struct VehicleUtils::VehicleDirections const&             vehicleDirections,
        std::function<bool(class Vec3 const&, class Vec3 const&)> callback
    );

    MCAPI static std::optional<class Vec3> testPosFollowingLegacyActorPattern(
        struct VehicleUtils::VehicleDirections const&             vehicleDirections,
        std::function<bool(class Vec3 const&, class Vec3 const&)> callback
    );

    // NOLINTEND
};
