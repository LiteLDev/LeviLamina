/**
 * @file  Shulker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Shulker.
 *
 */
class Shulker : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif

public:
    /**
     * @hash   -1857196703
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Shulker\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Shulker();
    /**
     * @hash   -1224786619
     * @vftbl  20
     * @symbol  ?setPos\@Shulker\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -512069265
     * @vftbl  49
     * @symbol  ?normalTick\@Shulker\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -960920267
     * @vftbl  59
     * @symbol  ?isInWall\@Shulker\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @hash   -1824054950
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Shulker\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @hash   1143187101
     * @vftbl  114
     * @symbol  ?canAttack\@Shulker\@\@UEBA_NPEAVActor\@\@_N\@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @hash   -2072959835
     * @vftbl  132
     * @symbol  ?shouldRender\@Shulker\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @hash   318386730
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Shulker\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   245343228
     * @vftbl  143
     * @symbol  ?getPickRadius\@Shulker\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @hash   -1040235269
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Shulker\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   432059508
     * @vftbl  263
     * @symbol  ?_hurt\@Shulker\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1639872923
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Shulker\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   805964386
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Shulker\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1479019161
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Shulker\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -681979395
     * @vftbl  289
     * @symbol  ?travel\@Shulker\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -1855791121
     * @vftbl  291
     * @symbol  ?aiStep\@Shulker\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   1744639227
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@Shulker\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @hash   -2015654304
     * @vftbl  305
     * @symbol  ?getMaxHeadXRot\@Shulker\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @hash   225569959
     * @vftbl  313
     * @symbol  ?getArmorValue\@Shulker\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @hash   -1937556079
     * @vftbl  346
     * @symbol  ?initBodyControl\@Shulker\@\@UEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @hash   1443118517
     * @symbol  ?breaksFallingBlocks\@Shulker\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   -150566252
     * @symbol  ?isLeashableType\@Shulker\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
#endif
    /**
     * @hash   155417976
     * @symbol  ??0Shulker\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   727004475
     * @symbol  ?postNormalTick\@Shulker\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   1516211958
     * @symbol  ?COVERED_ARMOR_MODIFIER\@Shulker\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @hash   119196599
     * @symbol  ?COVERED_ARMOR_MODIFIER_UUID\@Shulker\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @hash   -1936876447
     * @symbol  ?postSetPosSetShulkerAttachPosAndPeekAmount\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const &);
    /**
     * @hash   1197759919
     * @symbol  ?setShulkerAttachPos\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const &);

//protected:
    /**
     * @hash   -1486664096
     * @symbol  ?_canOpenLidAt\@Shulker\@\@IEBA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @hash   1738542867
     * @symbol  ?_setPeekAmount\@Shulker\@\@KAXVSynchedActorDataWriter\@\@H\@Z
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

//private:
    /**
     * @hash   186308743
     * @symbol  ?_calculateBB\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @hash   -590781835
     * @symbol  ?_isPosOccupiedByOtherShulker\@Shulker\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @hash   733321619
     * @symbol  ?_isValidAttach\@Shulker\@\@AEAA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @hash   -799942433
     * @symbol  ?_peekAmountTick\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _peekAmountTick();
    /**
     * @hash   -1626244136
     * @symbol  ?_setAttachFace\@Shulker\@\@AEAAXE\@Z
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @hash   751253117
     * @symbol  ?_tryAttachingToNeighbouringFaces\@Shulker\@\@AEAA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @hash   616273981
     * @symbol  ?_trySpawnShulker\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _trySpawnShulker();
    /**
     * @hash   -621880602
     * @symbol  ?_tryTeleportSomewhere\@Shulker\@\@AEAA_NXZ
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};