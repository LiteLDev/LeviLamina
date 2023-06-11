/**
 * @file  InsidePowderSnowBlockSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsidePowderSnowBlockSystemImpl.
 *
 */
class InsidePowderSnowBlockSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEPOWDERSNOWBLOCKSYSTEMIMPL
public:
    class InsidePowderSnowBlockSystemImpl& operator=(class InsidePowderSnowBlockSystemImpl const &) = delete;
    InsidePowderSnowBlockSystemImpl(class InsidePowderSnowBlockSystemImpl const &) = delete;
    InsidePowderSnowBlockSystemImpl() = delete;
#endif

public:
    /**
     * @symbol ?SLOWDOWN_MODIFIER\@InsidePowderSnowBlockSystemImpl\@\@2VVec3\@\@B
     */
    MCAPI static class Vec3 const SLOWDOWN_MODIFIER;
    /**
     * @symbol ?movementSlowdownSystem\@InsidePowderSnowBlockSystemImpl\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UBlockMovementSlowdownMultiplierComponent\@\@U?$Include\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UBlockMovementSlowdownAppliedComponent\@\@\@\@\@Z
     */
    MCAPI static void movementSlowdownSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct BlockMovementSlowdownMultiplierComponent, struct Include<struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct BlockMovementSlowdownAppliedComponent>);
    /**
     * @symbol ?serverSideFreezingSystem\@InsidePowderSnowBlockSystemImpl\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@\@\@U?$Exclude\@VFreezingComponent\@\@V?$FlagComponent\@UFreezeImmuneFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@U?$Exclude\@VFreezingComponent\@\@V?$FlagComponent\@UFreezeImmuneFlag\@\@\@\@V?$FlagComponent\@UIsDeadFlag\@\@\@\@\@\@$$CBUActorGameTypeComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@VFreezingComponent\@\@\@\@V?$OptionalGlobalT\@$$CBUExternalDataComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void serverSideFreezingSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>>, struct Exclude<class FreezingComponent, class FlagComponent<struct FreezeImmuneFlag>, class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct Exclude<class FreezingComponent, class FlagComponent<struct FreezeImmuneFlag>, class FlagComponent<struct IsDeadFlag>>, struct ActorGameTypeComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FreezingComponent>, class OptionalGlobalT<struct ExternalDataComponent const, class EntityRegistryBase>);

};
