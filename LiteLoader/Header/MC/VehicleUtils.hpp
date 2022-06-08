// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VehicleUtils {

#define AFTER_EXTRA
// Add Member There
public:
struct VehicleDirections {
    VehicleDirections() = delete;
    VehicleDirections(VehicleDirections const&) = delete;
    VehicleDirections(VehicleDirections const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEHICLEUTILS
public:
    class VehicleUtils& operator=(class VehicleUtils const &) = delete;
    VehicleUtils(class VehicleUtils const &) = delete;
    VehicleUtils() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VEHICLEUTILS
public:
#endif
    MCAPI static class std::optional<float> calculateBlockFloorHeight(class IConstBlockSource const &, class BlockPos const &);
    MCAPI static struct VehicleUtils::VehicleDirections calculateVehicleDirections(class Vec3 const &, class Vec3 const &);
    //MCAPI static class std::optional<class Vec3> ( *)(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>) getActivatorRailExitPatternStrategy(class BaseGameVersion const &);
    //MCAPI static class std::optional<class Vec3> ( *)(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>) getActorExitPatternStrategy(class BaseGameVersion const &);
    MCAPI static bool ignoredExitCollisionBlock(class Block const &);
    MCAPI static class std::optional<class Vec3> testPosFollowingEjectPattern(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>);
    MCAPI static class std::optional<class Vec3> testPosFollowingLegacyActivatorRailPattern(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>);
    MCAPI static class std::optional<class Vec3> testPosFollowingLegacyActorPattern(struct VehicleUtils::VehicleDirections const &, class std::function<bool (class Vec3 const &, class Vec3 const &)>);



};