#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"

class EnderDragon : public ::Monster {

public:
    // prevent constructor by default
    EnderDragon& operator=(EnderDragon const&) = delete;
    EnderDragon(EnderDragon const&)            = delete;
    EnderDragon()                              = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@EnderDragon\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@EnderDragon\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@EnderDragon\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 70
     * @symbol ?getHeadLookVector\@EnderDragon\@\@UEBA?AVVec3\@\@M\@Z
     */
    virtual class Vec3 getHeadLookVector(float) const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const; // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 107
     * @symbol ?setSitting\@EnderDragon\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@EnderDragon\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@EnderDragon\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@EnderDragon\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 192
     * @symbol ?canBeAffected\@EnderDragon\@\@UEBA_NI\@Z
     */
    virtual bool canBeAffected(unsigned int) const; // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 224
     * @symbol ?die\@EnderDragon\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&); // NOLINT
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@EnderDragon\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@EnderDragon\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@EnderDragon\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 321
     * @symbol ?tickDeath\@EnderDragon\@\@MEAAXXZ
     */
    virtual void tickDeath(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERDRAGON
    /**
     * @symbol ?canExistInPeaceful\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool canExistInPeaceful() const; // NOLINT
    /**
     * @symbol ?isFishable\@EnderDragon\@\@UEBA_NXZ
     */
    MCVAPI bool isFishable() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0EnderDragon\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    EnderDragon(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?dieNaturally\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void dieNaturally(); // NOLINT
    /**
     * @symbol ?findClosestNode\@EnderDragon\@\@QEAAHAEBVVec3\@\@\@Z
     */
    MCAPI int findClosestNode(class Vec3 const&); // NOLINT
    /**
     * @symbol ?findClosestNode\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int findClosestNode(); // NOLINT
    /**
     * @symbol
     * ?findPath\@EnderDragon\@\@QEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@HHPEAVPathfinderNode\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path> findPath(int, int, class PathfinderNode*); // NOLINT
    /**
     * @symbol ?getFlameCount\@EnderDragon\@\@QEBAHXZ
     */
    MCAPI int getFlameCount() const; // NOLINT
    /**
     * @symbol ?getFlapTime\@EnderDragon\@\@QEBAMXZ
     */
    MCAPI float getFlapTime() const; // NOLINT
    /**
     * @symbol ?getHeadPos\@EnderDragon\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getHeadPos() const; // NOLINT
    /**
     * @symbol ?getLatencyPos\@EnderDragon\@\@QEBA?BV?$vector\@MV?$allocator\@M\@std\@\@\@std\@\@HM\@Z
     */
    MCAPI std::vector<float> const getLatencyPos(int, float) const; // NOLINT
    /**
     * @symbol ?getNumCrystalsAlive\@EnderDragon\@\@QEAAHXZ
     */
    MCAPI int getNumCrystalsAlive(); // NOLINT
    /**
     * @symbol ?getTargetPos\@EnderDragon\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getTargetPos() const; // NOLINT
    /**
     * @symbol ?incrementFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void incrementFlameCount(); // NOLINT
    /**
     * @symbol ?onCrystalDestroyed\@EnderDragon\@\@QEAAXAEBVEnderCrystal\@\@VBlockPos\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCAPI void onCrystalDestroyed(class EnderCrystal const&, class BlockPos, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?postAiStep\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void postAiStep(); // NOLINT
    /**
     * @symbol ?resetFlameCount\@EnderDragon\@\@QEAAXXZ
     */
    MCAPI void resetFlameCount(); // NOLINT
    /**
     * @symbol ?setDragonKilledCallback\@EnderDragon\@\@QEAAXV?$function\@$$A6AXAEAVEnderDragon\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setDragonKilledCallback(class std::function<void(class EnderDragon&)>); // NOLINT
    /**
     * @symbol ?setHasDragonPreviouslyBeenKilled\@EnderDragon\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDragonPreviouslyBeenKilled(bool); // NOLINT
    /**
     * @symbol ?setNumCrystalsAlive\@EnderDragon\@\@QEAAXH\@Z
     */
    MCAPI void setNumCrystalsAlive(int); // NOLINT
    /**
     * @symbol ?setTargetPos\@EnderDragon\@\@QEAAXVVec3\@\@\@Z
     */
    MCAPI void setTargetPos(class Vec3); // NOLINT
    /**
     * @symbol ?setTurnSpeed\@EnderDragon\@\@QEAAXM\@Z
     */
    MCAPI void setTurnSpeed(float); // NOLINT

    // protected:
    /**
     * @symbol ?_hurt\@EnderDragon\@\@IEAA_NPEAVAABB\@\@AEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _hurt(class AABB*, class ActorDamageSource const&, float); // NOLINT

    // private:
    /**
     * @symbol ?_checkCrystals\@EnderDragon\@\@AEAAXXZ
     */
    MCAPI void _checkCrystals(); // NOLINT
    /**
     * @symbol ?_checkWalls\@EnderDragon\@\@AEAA_NVAABB\@\@\@Z
     */
    MCAPI bool _checkWalls(class AABB); // NOLINT
    /**
     * @symbol ?_hurtEntities\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _hurtEntities(class gsl::span<class gsl::not_null<class Actor*>, -1>) const; // NOLINT
    /**
     * @symbol ?_knockBack\@EnderDragon\@\@AEBAXV?$span\@V?$not_null\@PEAVActor\@\@\@gsl\@\@$0?0\@gsl\@\@\@Z
     */
    MCAPI void _knockBack(class gsl::span<class gsl::not_null<class Actor*>, -1>) const; // NOLINT
    /**
     * @symbol
     * ?_reconstructPath\@EnderDragon\@\@AEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVPathfinderNode\@\@0W4PathCompletionType\@\@\@Z
     */
    MCAPI std::unique_ptr<class Path>
          _reconstructPath(class PathfinderNode&, class PathfinderNode&, enum class PathCompletionType); // NOLINT
    /**
     * @symbol ?_isDragonImmuneBlock\@EnderDragon\@\@CA_NAEBVBlockLegacy\@\@\@Z
     */
    MCAPI static bool _isDragonImmuneBlock(class BlockLegacy const&); // NOLINT

protected:
private:
    /**
     * @symbol ?GROWL_INTERVAL_MAX\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MAX; // NOLINT
    /**
     * @symbol ?GROWL_INTERVAL_MIN\@EnderDragon\@\@0HA
     */
    MCAPI static int GROWL_INTERVAL_MIN; // NOLINT
    /**
     * @symbol ?MAX_PATH_RADIUS\@EnderDragon\@\@0HA
     */
    MCAPI static int MAX_PATH_RADIUS; // NOLINT
    /**
     * @symbol ?SITTING_ALLOWED_DAMAGE_PERCENTAGE\@EnderDragon\@\@0MA
     */
    MCAPI static float SITTING_ALLOWED_DAMAGE_PERCENTAGE; // NOLINT
};
