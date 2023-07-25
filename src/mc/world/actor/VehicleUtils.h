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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLEUTILS_VEHICLEDIRECTIONS
    public:
        VehicleDirections& operator=(VehicleDirections const&) = delete;
        VehicleDirections(VehicleDirections const&)            = delete;
        VehicleDirections()                                    = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLEUTILS
public:
    VehicleUtils& operator=(VehicleUtils const&) = delete;
    VehicleUtils(VehicleUtils const&)            = delete;
    VehicleUtils()                               = delete;
#endif

public:
    /**
     * @symbol
     * ?calculateBlockFloorHeight\@VehicleUtils\@\@SA?AV?$optional\@M\@std\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static class std::optional<float>
    calculateBlockFloorHeight(class IConstBlockSource const&, class BlockPos const&);
    /**
     * @symbol ?calculateVehicleDirections\@VehicleUtils\@\@SA?AUVehicleDirections\@1\@AEBVVec3\@\@0\@Z
     */
    MCAPI static struct VehicleUtils::VehicleDirections
    calculateVehicleDirections(class Vec3 const&, class Vec3 const&);
    /**
     * @symbol
     * ?getActivatorRailExitPatternStrategy\@VehicleUtils\@\@SAP6A?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@1\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@ZAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static class std::optional<
        class
        Vec3> (*)(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>)
        getActivatorRailExitPatternStrategy(class BaseGameVersion const&);
    /**
     * @symbol
     * ?getActorExitPatternStrategy\@VehicleUtils\@\@SAP6A?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@1\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@ZAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static class std::optional<
        class
        Vec3> (*)(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>)
        getActorExitPatternStrategy(class BaseGameVersion const&);
    /**
     * @symbol ?ignoredExitCollisionBlock\@VehicleUtils\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool ignoredExitCollisionBlock(class Block const&);
    /**
     * @symbol
     * ?testPosFollowingEjectPattern\@VehicleUtils\@\@SA?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@1\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@Z
     */
    MCAPI static class std::optional<class Vec3>
    testPosFollowingEjectPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);
    /**
     * @symbol
     * ?testPosFollowingLegacyActivatorRailPattern\@VehicleUtils\@\@SA?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@1\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@Z
     */
    MCAPI static class std::optional<class Vec3>
    testPosFollowingLegacyActivatorRailPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);
    /**
     * @symbol
     * ?testPosFollowingLegacyActorPattern\@VehicleUtils\@\@SA?AV?$optional\@VVec3\@\@\@std\@\@AEBUVehicleDirections\@1\@V?$function\@$$A6A_NAEBVVec3\@\@0\@Z\@3\@\@Z
     */
    MCAPI static class std::optional<class Vec3>
    testPosFollowingLegacyActorPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);
};
