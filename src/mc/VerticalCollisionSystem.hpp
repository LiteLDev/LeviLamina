/**
 * @file  VerticalCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VerticalCollisionSystem.
 *
 */
class VerticalCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VERTICALCOLLISIONSYSTEM
public:
    class VerticalCollisionSystem& operator=(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VerticalCollisionSystem();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol  __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol  ?tick\@VerticalCollisionSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol  ?create\@VerticalCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol  ?createSideBySide\@VerticalCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSideBySide();
    /**
     * @symbol  ?tickVerticalCollisionSystem\@VerticalCollisionSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAUWalkDistComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@USideBySidePlaybackBlocksComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickVerticalCollisionSystem(class StrictEntityContext const &, struct MoveRequestComponent const &, struct AABBShapeComponent const &, struct StateVectorComponent const &, struct WalkDistComponent &, class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);

};