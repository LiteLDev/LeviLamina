/**
 * @file  SideBySidePartialComparison.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SideBySidePartialComparison.
 *
 */
struct SideBySidePartialComparison {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDEPARTIALCOMPARISON
public:
    struct SideBySidePartialComparison& operator=(struct SideBySidePartialComparison const &) = delete;
    SideBySidePartialComparison() = delete;
#endif

public:
    /**
     * @symbol  ??0SideBySidePartialComparison\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SideBySidePartialComparison(struct SideBySidePartialComparison const &);
    /**
     * @symbol  ??4SideBySidePartialComparison\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SideBySidePartialComparison & operator=(struct SideBySidePartialComparison &&);
    /**
     * @symbol  ?combine\@SideBySidePartialComparison\@\@SA?AV?$optional\@V?$tuple\@P6A_NAEBUAABBShapeComponent\@\@0\@ZP6A_NAEBUActorRotationComponent\@\@1\@ZP6A_NAEBUInsideBlockComponent\@\@2\@ZP6A_NAEBUPassengerComponent\@\@3\@ZP6A_NAEBUPendingRemovePassengersComponent\@\@4\@ZP6A_NAEBUPostTickPositionDeltaComponent\@\@5\@ZP6A_NAEBURenderPositionComponent\@\@6\@ZP6A_NAEBURidingPrevIDComponent\@\@7\@ZP6A_NAEBUStateVectorComponent\@\@8\@ZP6A_NAEBUVehicleComponent\@\@9\@Z\@std\@\@\@std\@\@AEBV23\@0_N\@Z
     */
    MCAPI static class std::optional<class std::tuple<bool ( *)(struct AABBShapeComponent const &, struct AABBShapeComponent const &), bool ( *)(struct ActorRotationComponent const &, struct ActorRotationComponent const &), bool ( *)(struct InsideBlockComponent const &, struct InsideBlockComponent const &), bool ( *)(struct PassengerComponent const &, struct PassengerComponent const &), bool ( *)(struct PendingRemovePassengersComponent const &, struct PendingRemovePassengersComponent const &), bool ( *)(struct PostTickPositionDeltaComponent const &, struct PostTickPositionDeltaComponent const &), bool ( *)(struct RenderPositionComponent const &, struct RenderPositionComponent const &), bool ( *)(struct RidingPrevIDComponent const &, struct RidingPrevIDComponent const &), bool ( *)(struct StateVectorComponent const &, struct StateVectorComponent const &), bool ( *)(struct VehicleComponent const &, struct VehicleComponent const &)>> combine(class std::optional<class std::tuple<bool (__cdecl *)(struct AABBShapeComponent const &, struct AABBShapeComponent const &), bool (__cdecl *)(struct ActorRotationComponent const &, struct ActorRotationComponent const &), bool (__cdecl *)(struct InsideBlockComponent const &, struct InsideBlockComponent const &), bool (__cdecl *)(struct PassengerComponent const &, struct PassengerComponent const &), bool (__cdecl *)(struct PendingRemovePassengersComponent const &, struct PendingRemovePassengersComponent const &), bool (__cdecl *)(struct PostTickPositionDeltaComponent const &, struct PostTickPositionDeltaComponent const &), bool (__cdecl *)(struct RenderPositionComponent const &, struct RenderPositionComponent const &), bool (__cdecl *)(struct RidingPrevIDComponent const &, struct RidingPrevIDComponent const &), bool (__cdecl *)(struct StateVectorComponent const &, struct StateVectorComponent const &), bool (__cdecl *)(struct VehicleComponent const &, struct VehicleComponent const &)>> const &, class std::optional<class std::tuple<bool (__cdecl *)(struct AABBShapeComponent const &, struct AABBShapeComponent const &), bool (__cdecl *)(struct ActorRotationComponent const &, struct ActorRotationComponent const &), bool (__cdecl *)(struct InsideBlockComponent const &, struct InsideBlockComponent const &), bool (__cdecl *)(struct PassengerComponent const &, struct PassengerComponent const &), bool (__cdecl *)(struct PendingRemovePassengersComponent const &, struct PendingRemovePassengersComponent const &), bool (__cdecl *)(struct PostTickPositionDeltaComponent const &, struct PostTickPositionDeltaComponent const &), bool (__cdecl *)(struct RenderPositionComponent const &, struct RenderPositionComponent const &), bool (__cdecl *)(struct RidingPrevIDComponent const &, struct RidingPrevIDComponent const &), bool (__cdecl *)(struct StateVectorComponent const &, struct StateVectorComponent const &), bool (__cdecl *)(struct VehicleComponent const &, struct VehicleComponent const &)>> const &, bool);
    /**
     * @symbol  ?createPartialVehicleComparison\@SideBySidePartialComparison\@\@SA?AU1\@XZ
     */
    MCAPI static struct SideBySidePartialComparison createPartialVehicleComparison();

};