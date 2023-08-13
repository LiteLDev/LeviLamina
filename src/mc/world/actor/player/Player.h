#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class IEditorPlayer; }
namespace mce { class UUID; }
// clang-format on

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    class PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    class PlayerSpawnPoint {

    public:
        // prevent constructor by default
        PlayerSpawnPoint& operator=(PlayerSpawnPoint const&) = delete;
        PlayerSpawnPoint(PlayerSpawnPoint const&)            = delete;
        PlayerSpawnPoint()                                   = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?hasSpawnBlock\@PlayerSpawnPoint\@Player\@\@QEBA_NXZ
         */
        MCAPI bool hasSpawnBlock() const;
        /**
         * @symbol
         * ?setSpawnPoint\@PlayerSpawnPoint\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@0\@Z
         */
        MCAPI void setSpawnPoint(class BlockPos const&, class AutomaticID<class Dimension, int>, class BlockPos const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    Player& operator=(Player const&) = delete;
    Player(Player const&)            = delete;
    Player()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@Player\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol ?resetUserPos\@Player\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool);
    /**
     * @vftbl 19
     * @symbol ?remove\@Player\@\@UEAAXXZ
     */
    virtual void remove();
    /**
     * @vftbl 32
     * @symbol ?getInterpolatedRidingOffset\@Player\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@Player\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const;
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Player\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool);
    /**
     * @vftbl 42
     * @symbol
     * ?tryCreateAddActorPacket\@Player\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Player\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 45
     * @symbol ?passengerTick\@Player\@\@UEAAXXZ
     */
    virtual void passengerTick();
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Player\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 74
     * @symbol ?canInteractWithOtherEntitiesInGame\@Player\@\@UEBA_NXZ
     */
    virtual bool canInteractWithOtherEntitiesInGame() const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@Player\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl 81
     * @symbol ?isSilentObserver\@Player\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const;
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 84
     * @symbol ?isSleeping\@Player\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const;
    /**
     * @vftbl 85
     * @symbol ?setSleeping\@Player\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool);
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 88
     * @symbol ?isBlocking\@Player\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const;
    /**
     * @vftbl 89
     * @symbol ?isDamageBlocked\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 103
     * @symbol ?attack\@Player\@\@UEAA_NAEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor&, enum class ActorDamageCause const&);
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Player\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /**
     * @vftbl 126
     * @symbol ?feed\@Player\@\@UEAAXH\@Z
     */
    virtual void feed(int);
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Player\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 129
     * @symbol ?getActorRendererId\@Player\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getActorRendererId() const;
    /**
     * @vftbl 135
     * @symbol ?awardKillScore\@Player\@\@UEAAXAEAVActor\@\@H\@Z
     */
    virtual void awardKillScore(class Actor&, int);
    /**
     * @vftbl 136
     * @symbol ?setArmor\@Player\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&);
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&);
    /**
     * @vftbl 145
     * @symbol ?getCarriedItem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getCarriedItem() const;
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&);
    /**
     * @vftbl 147
     * @symbol ?getEquippedTotem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getEquippedTotem() const;
    /**
     * @vftbl 148
     * @symbol ?consumeTotem\@Player\@\@UEAA_NXZ
     */
    virtual bool consumeTotem();
    /**
     * @vftbl 153
     * @symbol ?getEntityTypeId\@Player\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const;
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Player\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl 161
     * @symbol ?getPortalCooldown\@Player\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const;
    /**
     * @vftbl 162
     * @symbol ?getPortalWaitTime\@Player\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const;
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@Player\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Player\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Player\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Player\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const;
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Player\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 180
     * @symbol ?sendMotionPacketIfNeeded\@Player\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded();
    /**
     * @vftbl 182
     * @symbol ?startSwimming\@Player\@\@UEAAXXZ
     */
    virtual void startSwimming();
    /**
     * @vftbl 183
     * @symbol ?stopSwimming\@Player\@\@UEAAXXZ
     */
    virtual void stopSwimming();
    /**
     * @vftbl 185
     * @symbol ?getCommandPermissionLevel\@Player\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const;
    /**
     * @vftbl 197
     * @symbol ?canObstructSpawningAndBlockPlacement\@Player\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const;
    /**
     * @vftbl 198
     * @symbol ?getAnimationComponent\@Player\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent& getAnimationComponent();
    /**
     * @vftbl 201
     * @symbol ?useItem\@Player\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase&, enum class ItemUseMethod, bool);
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 205
     * @symbol ?getMapDecorationRotation\@Player\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const;
    /**
     * @vftbl 207
     * @symbol ?add\@Player\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&);
    /**
     * @vftbl 208
     * @symbol ?drop\@Player\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const&, bool);
    /**
     * @vftbl 216
     * @symbol ?startSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void startSpinAttack();
    /**
     * @vftbl 217
     * @symbol ?stopSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void stopSpinAttack();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 224
     * @symbol ?die\@Player\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&);
    /**
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@Player\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl 231
     * @symbol ?getLastDeathPos\@Player\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual std::optional<class BlockPos> getLastDeathPos() const;
    /**
     * @vftbl 232
     * @symbol ?getLastDeathDimension\@Player\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const;
    /**
     * @vftbl 233
     * @symbol ?hasDiedBefore\@Player\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const;
    /**
     * @vftbl 235
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet\@Player\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const&) const;
    /**
     * @vftbl 236
     * @symbol ?_shouldProvideFeedbackOnArmorSet\@Player\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const&) const;
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Player\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Player\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Player\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Player\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 259
     * @symbol ?getSpeed\@Player\@\@UEBAMXZ
     */
    virtual float getSpeed() const;
    /**
     * @vftbl 260
     * @symbol ?setSpeed\@Player\@\@UEAAXM\@Z
     */
    virtual void setSpeed(float);
    /**
     * @vftbl 264
     * @symbol ?aiStep\@Player\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 265
     * @symbol ?aiStep\@Player\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void aiStep(struct IMobMovementProxy&) const;
    /**
     * @vftbl 271
     * @symbol ?getItemUseDuration\@Player\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const;
    /**
     * @vftbl 272
     * @symbol ?getItemUseStartupProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const;
    /**
     * @vftbl 273
     * @symbol ?getItemUseIntervalProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const;
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 296
     * @symbol
     * ?getAllHand\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllHand() const;
    /**
     * @vftbl 297
     * @symbol
     * ?getAllEquipment\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllEquipment() const;
    /**
     * @vftbl 299
     * @symbol ?dropEquipmentOnDeath\@Player\@\@UEAAXAEBVActorDamageSource\@\@H\@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);
    /**
     * @vftbl 300
     * @symbol ?dropEquipmentOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath();
    /**
     * @vftbl 301
     * @symbol ?clearVanishEnchantedItemsOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath();
    /**
     * @vftbl 302
     * @symbol ?sendInventory\@Player\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool);
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@Player\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const;
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Player\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl 322
     * @symbol ?updateGliding\@Player\@\@MEAAXXZ
     */
    virtual void updateGliding();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
    /**
     * @vftbl 325
     * @symbol ?prepareRegion\@Player\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource&);
    /**
     * @vftbl 326
     * @symbol ?destroyRegion\@Player\@\@UEAAXXZ
     */
    virtual void destroyRegion();
    /**
     * @vftbl 327
     * @symbol ?suspendRegion\@Player\@\@UEAAXXZ
     */
    virtual void suspendRegion();
    /**
     * @vftbl 328
     * @symbol ?resendAllChunks\@Player\@\@UEAAXXZ
     */
    virtual void resendAllChunks();
    /**
     * @vftbl 329
     * @symbol ?_fireWillChangeDimension\@Player\@\@UEAAXXZ
     */
    virtual void _fireWillChangeDimension();
    /**
     * @vftbl 330
     * @symbol ?_fireDimensionChanged\@Player\@\@UEAAXXZ
     */
    virtual void _fireDimensionChanged();
    /**
     * @vftbl 331
     * @symbol ?changeDimensionWithCredits\@Player\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 332
     * @symbol ?tickWorld\@Player\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const&);
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333() = 0;
    /**
     * @vftbl 334
     * @symbol
     * ?getTickingOffsets\@Player\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ChunkPos> const& getTickingOffsets() const;
    /**
     * @vftbl 335
     * @symbol ?moveView\@Player\@\@UEAAXXZ
     */
    virtual void moveView();
    /**
     * @vftbl 336
     * @symbol ?moveSpawnView\@Player\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);
    /**
     * @vftbl 337
     * @symbol ?setName\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setName(std::string const&);
    /**
     * @vftbl 338
     * @symbol ?getTravelledMethod\@Player\@\@UEBA?AW4TravelMethod\@\@XZ
     */
    virtual enum class TravelMethod getTravelledMethod() const;
    /**
     * @vftbl 339
     * @symbol ?checkMovementStats\@Player\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const&);
    /**
     * @vftbl 340
     * @symbol __unk_vfn_340
     */
    virtual void __unk_vfn_340();
    /**
     * @vftbl 341
     * @symbol __unk_vfn_341
     */
    virtual void __unk_vfn_341();
    /**
     * @vftbl 342
     * @symbol ?respawn\@Player\@\@UEAAXXZ
     */
    virtual void respawn();
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343();
    /**
     * @vftbl 344
     * @symbol __unk_vfn_344
     */
    virtual void __unk_vfn_344();
    /**
     * @vftbl 345
     * @symbol ?hasResource\@Player\@\@UEAA_NH\@Z
     */
    virtual bool hasResource(int);
    /**
     * @vftbl 346
     * @symbol ?completeUsingItem\@Player\@\@UEAAXXZ
     */
    virtual void completeUsingItem();
    /**
     * @vftbl 347
     * @symbol ?startDestroying\@Player\@\@UEAAXXZ
     */
    virtual void startDestroying();
    /**
     * @vftbl 348
     * @symbol ?stopDestroying\@Player\@\@UEAAXXZ
     */
    virtual void stopDestroying();
    /**
     * @vftbl 349
     * @symbol __unk_vfn_349
     */
    virtual void __unk_vfn_349();
    /**
     * @vftbl 350
     * @symbol __unk_vfn_350
     */
    virtual void __unk_vfn_350();
    /**
     * @vftbl 351
     * @symbol ?openTrading\@Player\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const&, bool);
    /**
     * @vftbl 352
     * @symbol ?canOpenContainerScreen\@Player\@\@UEAA_NXZ
     */
    virtual bool canOpenContainerScreen();
    /**
     * @vftbl 353
     * @symbol __unk_vfn_353
     */
    virtual void __unk_vfn_353();
    /**
     * @vftbl 354
     * @symbol ?openNpcInteractScreen\@Player\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData>);
    /**
     * @vftbl 355
     * @symbol ?openInventory\@Player\@\@UEAAXXZ
     */
    virtual void openInventory();
    /**
     * @vftbl 356
     * @symbol __unk_vfn_356
     */
    virtual void __unk_vfn_356();
    /**
     * @vftbl 357
     * @symbol __unk_vfn_357
     */
    virtual void __unk_vfn_357();
    /**
     * @vftbl 358
     * @symbol
     * ?displayTextObjectMessage\@Player\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    /**
     * @vftbl 359
     * @symbol
     * ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    /**
     * @vftbl 360
     * @symbol
     * ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&);
    /**
     * @vftbl 361
     * @symbol
     * ?displayWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    /**
     * @vftbl 362
     * @symbol ?startSleepInBed\@Player\@\@UEAA?AW4BedSleepingResult\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BedSleepingResult startSleepInBed(class BlockPos const&);
    /**
     * @vftbl 363
     * @symbol ?stopSleepInBed\@Player\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool);
    /**
     * @vftbl 364
     * @symbol ?canStartSleepInBed\@Player\@\@UEAA_NXZ
     */
    virtual bool canStartSleepInBed();
    /**
     * @vftbl 365
     * @symbol ?getSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getSleepTimer() const;
    /**
     * @vftbl 366
     * @symbol ?getPreviousTickSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getPreviousTickSleepTimer() const;
    /**
     * @vftbl 367
     * @symbol ?openSign\@Player\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const&, bool);
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368();
    /**
     * @vftbl 369
     * @symbol ?isHostingPlayer\@Player\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const;
    /**
     * @vftbl 370
     * @symbol ?isLoading\@Player\@\@UEBA_NXZ
     */
    virtual bool isLoading() const;
    /**
     * @vftbl 371
     * @symbol ?isPlayerInitialized\@Player\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const;
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372();
    /**
     * @vftbl 373
     * @symbol ?registerTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void registerTrackedBoss(struct ActorUniqueID);
    /**
     * @vftbl 374
     * @symbol ?unRegisterTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /**
     * @vftbl 375
     * @symbol ?setPlayerGameType\@Player\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType);
    /**
     * @vftbl 376
     * @symbol ?initHUDContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void initHUDContainerManager();
    /**
     * @vftbl 377
     * @symbol ?_crit\@Player\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void _crit(class Actor&);
    /**
     * @vftbl 378
     * @symbol ?getEventing\@Player\@\@UEBAPEAVIMinecraftEventing\@\@XZ
     */
    virtual class IMinecraftEventing* getEventing() const;
    /**
     * @vftbl 379
     * @symbol __unk_vfn_379
     */
    virtual void __unk_vfn_379();
    /**
     * @vftbl 380
     * @symbol ?sendEventPacket\@Player\@\@UEBAXAEAVLegacyTelemetryEventPacket\@\@\@Z
     */
    virtual void sendEventPacket(class LegacyTelemetryEventPacket&) const;
    /**
     * @vftbl 381
     * @symbol ?addExperience\@Player\@\@UEAAXH\@Z
     */
    virtual void addExperience(int);
    /**
     * @vftbl 382
     * @symbol ?addLevels\@Player\@\@UEAAXH\@Z
     */
    virtual void addLevels(int);
    /**
     * @vftbl 383
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager&, int, int) = 0;
    /**
     * @vftbl 384
     * @symbol ?slotChanged\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@AEAVContainer\@\@HAEBVItemStack\@\@2_N\@Z
     */
    virtual void slotChanged(
        class IContainerManager&,
        class Container&,
        int,
        class ItemStack const&,
        class ItemStack const&,
        bool
    ) = 0;
    /**
     * @vftbl 385
     * @symbol ?inventoryChanged\@Player\@\@UEAAXAEAVContainer\@\@HAEBVItemStack\@\@1_N\@Z
     */
    virtual void inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    /**
     * @vftbl 386
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager&) = 0;
    /**
     * @vftbl 387
     * @symbol ?deleteContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void deleteContainerManager();
    /**
     * @vftbl 388
     * @symbol ?isActorRelevant\@Player\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const&);
    /**
     * @vftbl 389
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const = 0;
    /**
     * @vftbl 390
     * @symbol ?onSuspension\@Player\@\@UEAAXXZ
     */
    virtual void onSuspension();
    /**
     * @vftbl 391
     * @symbol ?onLinkedSlotsChanged\@Player\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged();
    /**
     * @vftbl 392
     * @symbol ?startCooldown\@Player\@\@UEAAXPEBVItem\@\@_N\@Z
     */
    virtual void startCooldown(class Item const*, bool);
    /**
     * @vftbl 393
     * @symbol ?getItemCooldownLeft\@Player\@\@UEBAHAEBVHashedString\@\@\@Z
     */
    virtual int getItemCooldownLeft(class HashedString const&) const;
    /**
     * @vftbl 394
     * @symbol ?getItemCooldownLeft\@Player\@\@UEBAH_K\@Z
     */
    virtual int getItemCooldownLeft(uint64_t) const;
    /**
     * @vftbl 395
     * @symbol ?getMaxItemCooldownLeft\@Player\@\@UEBAHXZ
     */
    virtual int getMaxItemCooldownLeft() const;
    /**
     * @vftbl 396
     * @symbol ?isItemOnCooldown\@Player\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool isItemOnCooldown(class HashedString const&) const;
    /**
     * @vftbl 397
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const = 0;
    /**
     * @vftbl 398
     * @symbol
     * ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /**
     * @vftbl 399
     * @symbol ?sendNetworkPacket\@Player\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet&) const;
    /**
     * @vftbl 400
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;
    /**
     * @vftbl 401
     * @symbol ?reportMovementTelemetry\@Player\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType);
    /**
     * @vftbl 402
     * @symbol __unk_vfn_402
     */
    virtual void __unk_vfn_402();
    /**
     * @vftbl 403
     * @symbol ?getXuid\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const;
    /**
     * @vftbl 404
     * @symbol ?getMovementSettings\@Player\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const& getMovementSettings() const;
    /**
     * @vftbl 405
     * @symbol __unk_vfn_405
     */
    virtual void __unk_vfn_405();
    /**
     * @vftbl 406
     * @symbol ?getMaxChunkBuildRadius\@Player\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const;
    /**
     * @vftbl 407
     * @symbol ?onMovePlayerPacketNormal\@Player\@\@MEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    virtual void onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float);
    /**
     * @vftbl 408
     * @symbol ?_createChunkSource\@Player\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);
    /**
     * @vftbl 409
     * @symbol ?setAbilities\@Player\@\@UEAAXAEBVLayeredAbilities\@\@\@Z
     */
    virtual void setAbilities(class LayeredAbilities const&);
    /**
     * @vftbl 410
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;
    /**
     * @vftbl 411
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    /**
     * @symbol ?addSavedChunk\@Player\@\@UEAAXAEBVChunkPos\@\@\@Z
     */
    MCVAPI void addSavedChunk(class ChunkPos const&);
    /**
     * @symbol
     * ?displayChatMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void displayChatMessage(std::string const&, std::string const&);
    /**
     * @symbol
     * ?displayClientMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void displayClientMessage(std::string const&);
    /**
     * @symbol ?getAlwaysShowNameTag\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const;
    /**
     * @symbol ?getCurrentStructureFeature\@Player\@\@UEBA?AW4StructureFeatureType\@\@XZ
     */
    MCVAPI enum class StructureFeatureType getCurrentStructureFeature() const;
    /**
     * @symbol ?getUserId\@Player\@\@UEBAIXZ
     */
    MCVAPI unsigned int getUserId() const;
    /**
     * @symbol ?isAutoJumpEnabled\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const;
    /**
     * @symbol ?isCreativeModeAllowed\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed();
    /**
     * @symbol ?isInTrialMode\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isInTrialMode();
    /**
     * @symbol ?isPlayer\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const;
    /**
     * @symbol ?isShootable\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable();
    /**
     * @symbol ?isSimulated\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const;
    /**
     * @symbol ?openBook\@Player\@\@UEAAXH_NHPEAVBlockActor\@\@\@Z
     */
    MCVAPI void openBook(int, bool, int, class BlockActor*);
    /**
     * @symbol ?openChalkboard\@Player\@\@UEAAXAEAVChalkboardBlockActor\@\@_N\@Z
     */
    MCVAPI void openChalkboard(class ChalkboardBlockActor&, bool);
    /**
     * @symbol ?openPortfolio\@Player\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio();
    /**
     * @symbol
     * ?playEmote\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void playEmote(std::string const&, bool);
    /**
     * @symbol ?resetRot\@Player\@\@UEAAXXZ
     */
    MCVAPI void resetRot();
    /**
     * @symbol ?stopLoading\@Player\@\@UEAAXXZ
     */
    MCVAPI void stopLoading();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Player();
#endif
    /**
     * @symbol
     * ??0Player\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@6V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@9\@AEAVEntityContext\@\@66\@Z
     */
    MCAPI
    Player(class Level&, class PacketSender&, enum class GameType, class NetworkIdentifier const&, enum class SubClientId, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, class EntityContext&, std::string const&, std::string const&);
    /**
     * @symbol ?broadcastPlayerSpawnedMobEvent\@Player\@\@QEAAXW4ActorType\@\@W4MobSpawnMethod\@\@\@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(enum class ActorType, enum class MobSpawnMethod);
    /**
     * @symbol ?canBeSeenOnMap\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canBeSeenOnMap() const;
    /**
     * @symbol ?canDestroy\@Player\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const&) const;
    /**
     * @symbol ?canSleep\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canSleep() const;
    /**
     * @symbol ?canStackInOffhand\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canStackInOffhand(class ItemStack const&) const;
    /**
     * @symbol ?canUseAbility\@Player\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool canUseAbility(enum class AbilitiesIndex) const;
    /**
     * @symbol ?canUseOperatorBlocks\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canUseOperatorBlocks() const;
    /**
     * @symbol ?causeFoodExhaustion\@Player\@\@QEAAXM\@Z
     */
    MCAPI void causeFoodExhaustion(float);
    /**
     * @symbol ?clearRespawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void clearRespawnPosition();
    /**
     * @symbol ?dropCursorSelectedItemOnDeath\@Player\@\@QEAAXXZ
     */
    MCAPI void dropCursorSelectedItemOnDeath();
    /**
     * @symbol ?eat\@Player\@\@QEAAXHM\@Z
     */
    MCAPI void eat(int, float);
    /**
     * @symbol ?eat\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void eat(class ItemStack const&);
    /**
     * @symbol ?equippedArmorItemCanBeMoved\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const&) const;
    /**
     * @symbol ?fireDimensionChangedEvent\@Player\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@0\@Z
     */
    MCAPI void
        fireDimensionChangedEvent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?forceAllowEating\@Player\@\@QEBA_NXZ
     */
    MCAPI bool forceAllowEating() const;
    /**
     * @symbol ?getAbilities\@Player\@\@QEBAAEBVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities const& getAbilities() const;
    /**
     * @symbol ?getAbilities\@Player\@\@QEAAAEAVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities& getAbilities();
    /**
     * @symbol ?getAgent\@Player\@\@QEBAPEAVAgent\@\@XZ
     */
    MCAPI class Agent* getAgent() const;
    /**
     * @symbol ?getAgentID\@Player\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getAgentID() const;
    /**
     * @symbol ?getAgentIfAllowed\@Player\@\@QEBAPEAVAgent\@\@_NUActorUniqueID\@\@\@Z
     */
    MCAPI class Agent* getAgentIfAllowed(bool, struct ActorUniqueID) const;
    /**
     * @symbol ?getBedPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getBedPosition() const;
    /**
     * @symbol ?getBlockedUsingDamagedShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI int64_t getBlockedUsingDamagedShieldTimeStamp() const;
    /**
     * @symbol ?getBlockedUsingShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI int64_t getBlockedUsingShieldTimeStamp() const;
    /**
     * @symbol ?getBlockingStartTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI int64_t getBlockingStartTimeStamp() const;
    /**
     * @symbol ?getCapePos\@Player\@\@QEAA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getCapePos(float);
    /**
     * @symbol ?getChunkRadius\@Player\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const;
    /**
     * @symbol ?getContainerManager\@Player\@\@QEAA?AV?$weak_ptr\@VIContainerManager\@\@\@std\@\@XZ
     */
    MCAPI std::weak_ptr<class IContainerManager> getContainerManager();
    /**
     * @symbol ?getCurrentActiveShield\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getCurrentActiveShield() const;
    /**
     * @symbol ?getDestroyProgress\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroyProgress(class Block const&) const;
    /**
     * @symbol ?getDestroySpeed\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class Block const&) const;
    /**
     * @symbol ?getDirection\@Player\@\@QEBAHXZ
     */
    MCAPI int getDirection() const;
    /**
     * @symbol ?getEnchantmentSeed\@Player\@\@QEBAHXZ
     */
    MCAPI int getEnchantmentSeed() const;
    /**
     * @symbol ?getExpectedSpawnDimensionId\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    /**
     * @symbol ?getExpectedSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getExpectedSpawnPosition() const;
    /**
     * @symbol
     * ?getInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getInteractText() const;
    /**
     * @symbol ?getInventory\@Player\@\@QEAAAEAVContainer\@\@XZ
     */
    MCAPI class Container& getInventory();
    /**
     * @symbol ?getItemInUse\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getItemInUse() const;
    /**
     * @symbol
     * ?getItemInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItem\@\@\@Z
     */
    MCAPI std::string getItemInteractText(class Item const&) const;
    /**
     * @symbol ?getItemStackNetManager\@Player\@\@QEBAPEBVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;
    /**
     * @symbol ?getItemStackNetManager\@Player\@\@QEAAPEAVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();
    /**
     * @symbol ?getLuck\@Player\@\@QEAAMXZ
     */
    MCAPI float getLuck();
    /**
     * @symbol ?getMapIndex\@Player\@\@QEAAHXZ
     */
    MCAPI int getMapIndex();
    /**
     * @symbol ?getName\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?getNewEnchantmentSeed\@Player\@\@QEAAXXZ
     */
    MCAPI void getNewEnchantmentSeed();
    /**
     * @symbol ?getPickupArea\@Player\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getPickupArea() const;
    /**
     * @symbol ?getPlatform\@Player\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getPlatform() const;
    /**
     * @symbol
     * ?getPlatformOnlineId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPlatformOnlineId() const;
    /**
     * @symbol ?getPlayerGameType\@Player\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getPlayerGameType() const;
    /**
     * @symbol ?getPlayerIndex\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerIndex() const;
    /**
     * @symbol ?getPlayerLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerLevel() const;
    /**
     * @symbol ?getPlayerPermissionLevel\@Player\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissionLevel() const;
    /**
     * @symbol
     * ?getPlayerSessionId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPlayerSessionId() const;
    /**
     * @symbol ?getPlayerUIItem\@Player\@\@QEAAAEBVItemStack\@\@W4PlayerUISlot\@\@\@Z
     */
    MCAPI class ItemStack const& getPlayerUIItem(enum class PlayerUISlot);
    /**
     * @symbol ?getRespawnAnchorPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getRespawnAnchorPosition() const;
    /**
     * @symbol ?getSelectedItem\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getSelectedItem() const;
    /**
     * @symbol ?getSelectedItemSlot\@Player\@\@QEBAHXZ
     */
    MCAPI int getSelectedItemSlot() const;
    /**
     * @symbol
     * ?getServerId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getServerId() const;
    /**
     * @symbol ?getSkin\@Player\@\@QEBAAEBVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin const& getSkin() const;
    /**
     * @symbol ?getSkin\@Player\@\@QEAAAEAVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin& getSkin();
    /**
     * @symbol ?getSleepRotation\@Player\@\@QEBAMXZ
     */
    MCAPI float getSleepRotation() const;
    /**
     * @symbol ?getSpawnDimension\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    /**
     * @symbol ?getSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getSpawnPosition() const;
    /**
     * @symbol ?getSupplies\@Player\@\@QEAAAEAVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory& getSupplies();
    /**
     * @symbol ?getSupplies\@Player\@\@QEBAAEBVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory const& getSupplies() const;
    /**
     * @symbol
     * ?getTrackedBosses\@Player\@\@QEAAAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();
    /**
     * @symbol ?getUsedPotion\@Player\@\@QEAA_NXZ
     */
    MCAPI bool getUsedPotion();
    /**
     * @symbol ?getXpEarnedAtCurrentLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpEarnedAtCurrentLevel() const;
    /**
     * @symbol ?getXpNeededForLevelRange\@Player\@\@QEBAIHH\@Z
     */
    MCAPI unsigned int getXpNeededForLevelRange(int, int) const;
    /**
     * @symbol ?getXpNeededForNextLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpNeededForNextLevel() const;
    /**
     * @symbol ?hasBedPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasBedPosition() const;
    /**
     * @symbol ?hasOpenContainer\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOpenContainer() const;
    /**
     * @symbol ?hasOpenContainerOfContainerType\@Player\@\@QEBA_NW4ContainerType\@\@\@Z
     */
    MCAPI bool hasOpenContainerOfContainerType(enum class ContainerType) const;
    /**
     * @symbol ?hasOwnedChunkSource\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOwnedChunkSource() const;
    /**
     * @symbol ?hasResource\@Player\@\@QEAA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI bool hasResource(class ItemDescriptor const&);
    /**
     * @symbol ?hasRespawnAnchorPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnAnchorPosition() const;
    /**
     * @symbol ?hasRespawnPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnPosition() const;
    /**
     * @symbol ?interact\@Player\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool interact(class Actor&, class Vec3 const&);
    /**
     * @symbol ?is2DPositionRelevant\@Player\@\@QEAA_NV?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);
    /**
     * @symbol ?isFlying\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isFlying() const;
    /**
     * @symbol ?isForcedRespawn\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isForcedRespawn() const;
    /**
     * @symbol ?isHiddenFrom\@Player\@\@QEBA_NAEAVMob\@\@\@Z
     */
    MCAPI bool isHiddenFrom(class Mob&) const;
    /**
     * @symbol ?isHungry\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isHungry() const;
    /**
     * @symbol ?isHurt\@Player\@\@QEAA_NXZ
     */
    MCAPI bool isHurt();
    /**
     * @symbol ?isInRaid\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isInRaid() const;
    /**
     * @symbol ?isRespawningFromTheEnd\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isRespawningFromTheEnd() const;
    /**
     * @symbol ?isSleepingLongEnough\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSleepingLongEnough() const;
    /**
     * @symbol ?isSpawned\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSpawned() const;
    /**
     * @symbol ?isUsingItem\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isUsingItem() const;
    /**
     * @symbol ?isValidSpawn\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isValidSpawn() const;
    /**
     * @symbol ?loadLastDeathLocation\@Player\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadLastDeathLocation(class CompoundTag const&);
    /**
     * @symbol ?passengerCheckMovementStats\@Player\@\@QEAAXXZ
     */
    MCAPI void passengerCheckMovementStats();
    /**
     * @symbol
     * ?playPredictiveSynchronizedSound\@Player\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N\@Z
     */
    MCAPI void playPredictiveSynchronizedSound(
        enum class LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool
    );
    /**
     * @symbol
     * ?playPredictiveSynchronizedSound\@Player\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@AEBUActorDefinitionIdentifier\@\@H_N\@Z
     */
    MCAPI void playPredictiveSynchronizedSound(
        enum class LevelSoundEvent,
        class Vec3 const&,
        struct ActorDefinitionIdentifier const&,
        int,
        bool
    );
    /**
     * @symbol ?recheckSpawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void recheckSpawnPosition();
    /**
     * @symbol ?releaseUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void releaseUsingItem();
    /**
     * @symbol ?resetPlayerLevel\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPlayerLevel();
    /**
     * @symbol ?resetPublisherInitialSpawn\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPublisherInitialSpawn();
    /**
     * @symbol ?resetToDefaultGameMode\@Player\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultGameMode();
    /**
     * @symbol ?saveLastDeathLocation\@Player\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveLastDeathLocation(class CompoundTag&) const;
    /**
     * @symbol ?sendPlayerTeleported\@Player\@\@QEAAXXZ
     */
    MCAPI void sendPlayerTeleported();
    /**
     * @symbol ?sendSpawnExperienceOrbPacketToServer\@Player\@\@QEAAXAEBVVec3\@\@H\@Z
     */
    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const&, int);
    /**
     * @symbol ?setAgent\@Player\@\@QEAAXPEAVAgent\@\@\@Z
     */
    MCAPI void setAgent(class Agent*);
    /**
     * @symbol ?setBedRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBedRespawnPosition(class BlockPos const&);
    /**
     * @symbol ?setBlockRespawnUntilClientMessage\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    /**
     * @symbol ?setChunkRadius\@Player\@\@QEAAXI\@Z
     */
    MCAPI void setChunkRadius(unsigned int);
    /**
     * @symbol ?setContainerManager\@Player\@\@QEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void setContainerManager(std::shared_ptr<class IContainerManager>);
    /**
     * @symbol ?setCursorSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setCursorSelectedItem(class ItemStack const&);
    /**
     * @symbol ?setCursorSelectedItemGroup\@Player\@\@QEAAXAEBVItemGroup\@\@\@Z
     */
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const&);
    /**
     * @symbol ?setEnchantmentSeed\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantmentSeed(int);
    /**
     * @symbol ?setHasDied\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDied(bool);
    /**
     * @symbol ?setHasSeenCredits\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasSeenCredits(bool);
    /**
     * @symbol ?setLastDeathDimension\@Player\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setLastDeathDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?setLastDeathPos\@Player\@\@QEAAXVBlockPos\@\@\@Z
     */
    MCAPI void setLastDeathPos(class BlockPos);
    /**
     * @symbol ?setLastHurtBy\@Player\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void setLastHurtBy(enum class ActorType);
    /**
     * @symbol ?setMapIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setMapIndex(int);
    /**
     * @symbol ?setPermissions\@Player\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setPermissions(enum class CommandPermissionLevel);
    /**
     * @symbol
     * ?setPlatformOnlineId\@Player\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPlatformOnlineId(std::string const&);
    /**
     * @symbol ?setPlayerIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setPlayerIndex(int);
    /**
     * @symbol ?setPlayerUIItem\@Player\@\@QEAAXW4PlayerUISlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void setPlayerUIItem(enum class PlayerUISlot, class ItemStack const&);
    /**
     * @symbol ?setRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?setRespawnPositionCandidate\@Player\@\@QEAAXXZ
     */
    MCAPI void setRespawnPositionCandidate();
    /**
     * @symbol ?setRespawnReady\@Player\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setRespawnReady(class Vec3 const&);
    /**
     * @symbol ?setSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const&);
    /**
     * @symbol ?setSelectedSlot\@Player\@\@QEAAAEBVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack const& setSelectedSlot(int);
    /**
     * @symbol ?setSpawnBlockRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?setUsedPotion\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setUsedPotion(bool);
    /**
     * @symbol ?shouldShowCredits\@Player\@\@QEBA_NXZ
     */
    MCAPI bool shouldShowCredits() const;
    /**
     * @symbol ?startCooldown\@Player\@\@QEAAXAEBVHashedString\@\@H_N\@Z
     */
    MCAPI void startCooldown(class HashedString const&, int, bool);
    /**
     * @symbol ?startGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void startGliding();
    /**
     * @symbol ?startItemUseOn\@Player\@\@QEAAXEAEBVBlockPos\@\@0AEBVItemStack\@\@\@Z
     */
    MCAPI void startItemUseOn(unsigned char, class BlockPos const&, class BlockPos const&, class ItemStack const&);
    /**
     * @symbol ?startUsingItem\@Player\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void startUsingItem(class ItemStack const&, int);
    /**
     * @symbol ?stopGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void stopGliding();
    /**
     * @symbol ?stopItemUseOn\@Player\@\@QEAAXAEBVBlockPos\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void stopItemUseOn(class BlockPos const&, class ItemStack const&);
    /**
     * @symbol ?stopUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void stopUsingItem();
    /**
     * @symbol ?take\@Player\@\@QEAA_NAEAVActor\@\@HH\@Z
     */
    MCAPI bool take(class Actor&, int, int);
    /**
     * @symbol ?tryStartGliding\@Player\@\@QEAA_NXZ
     */
    MCAPI bool tryStartGliding();
    /**
     * @symbol ?updateBlockSourceTick\@Player\@\@QEAAXXZ
     */
    MCAPI void updateBlockSourceTick();
    /**
     * @symbol ?updateInventoryTransactions\@Player\@\@QEAAXXZ
     */
    MCAPI void updateInventoryTransactions();
    /**
     * @symbol ?updateSkin\@Player\@\@QEAAXAEBVSerializedSkin\@\@H\@Z
     */
    MCAPI void updateSkin(class SerializedSkin const&, int);
    /**
     * @symbol ?updateSpawnChunkView\@Player\@\@QEAAXXZ
     */
    MCAPI void updateSpawnChunkView();
    /**
     * @symbol ?updateTrackedBosses\@Player\@\@QEAAXXZ
     */
    MCAPI void updateTrackedBosses();
    /**
     * @symbol ?useSelectedItem\@Player\@\@QEAAXW4ItemUseMethod\@\@_N\@Z
     */
    MCAPI void useSelectedItem(enum class ItemUseMethod, bool);
    /**
     * @symbol ?_aiStep\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void _aiStep(struct IPlayerMovementProxy&);
    /**
     * @symbol ?_causeFoodExhaustion\@Player\@\@SAXPEAVAttributeInstance\@\@_NM\@Z
     */
    MCAPI static void _causeFoodExhaustion(class AttributeInstance*, bool, float);
    /**
     * @symbol ?canJump\@Player\@\@SA_NAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static bool canJump(struct IPlayerMovementProxy&);
    /**
     * @symbol
     * ?checkAndFixSpawnPosition\@Player\@\@SA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@VAABB\@\@_N33333F\@Z
     */
    MCAPI static bool checkAndFixSpawnPosition(
        class Vec3&,
        std::vector<class gsl::not_null<class BlockSource*>>,
        class AABB,
        bool,
        bool,
        bool,
        bool,
        bool,
        bool,
        short
    );
    /**
     * @symbol ?checkNeedAutoJump\@Player\@\@SA_NPEAUIPlayerMovementProxy\@\@MM\@Z
     */
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy*, float, float);
    /**
     * @symbol ?handleJumpEffects\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy&);
    /**
     * @symbol ?isDangerousVolume\@Player\@\@SA_NAEAVBlockSource\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI static bool isDangerousVolume(class BlockSource&, class AABB const&, bool);
    /**
     * @symbol
     * ?tryGetFromComponent\@Player\@\@SAPEAV1\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Player*
    tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&, bool);
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Player* tryGetFromEntity(class EntityContext&, bool);
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Player* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool);
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEBV1\@AEBVEntityContext\@\@_N\@Z
     */
    MCAPI static class Player const* tryGetFromEntity(class EntityContext const&, bool);
    /**
     * @symbol ?DEFAULT_BB_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_HEIGHT;
    /**
     * @symbol ?DEFAULT_BB_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_WIDTH;
    /**
     * @symbol ?DEFAULT_PLAYER_HEIGHT_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    /**
     * @symbol ?DEFAULT_WALK_SPEED\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_WALK_SPEED;
    /**
     * @symbol ?DISTANCE_TO_TRANSFORM_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    /**
     * @symbol ?DISTANCE_TO_TRAVELLED_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    /**
     * @symbol ?EXHAUSTION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXHAUSTION;
    /**
     * @symbol ?EXPERIENCE\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXPERIENCE;
    /**
     * @symbol ?GLIDE_STOP_DELAY\@Player\@\@2HB
     */
    MCAPI static int const GLIDE_STOP_DELAY;
    /**
     * @symbol ?HUNGER\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const HUNGER;
    /**
     * @symbol ?LEVEL\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LEVEL;
    /**
     * @symbol ?PLAYER_ALIVE_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    /**
     * @symbol ?PLAYER_ALIVE_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    /**
     * @symbol ?PLAYER_DEAD_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    /**
     * @symbol ?PLAYER_DEAD_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_WIDTH;
    /**
     * @symbol ?PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS\@Player\@\@2HB
     */
    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS;
    /**
     * @symbol ?PLAYER_DOWN_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    /**
     * @symbol ?PLAYER_SLEEPING_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    /**
     * @symbol ?PLAYER_SLEEPING_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    /**
     * @symbol ?PLAYER_SWIMMING_CAMERA_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    /**
     * @symbol ?PLAYER_SWIM_BREACH_ANGLE\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    /**
     * @symbol ?PLAYER_SWIM_ENTER_THRESHOLD\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    /**
     * @symbol ?PLAYER_SWIM_FLY_MULTI\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    /**
     * @symbol ?PLAYER_UP_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    /**
     * @symbol ?SATURATION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const SATURATION;
    /**
     * @symbol ?SPAWN_CHUNK_LARGE_JUMP\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    /**
     * @symbol ?SPAWN_CHUNK_RADIUS\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canChangeGameType\@Player\@\@IEBA_NW4GameType\@\@\@Z
     */
    MCAPI bool _canChangeGameType(enum class GameType) const;
    /**
     * @symbol
     * ?_checkAndFixSpawnPosition\@Player\@\@IEBA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@_N2222\@Z
     */
    MCAPI bool _checkAndFixSpawnPosition(
        class Vec3&,
        std::vector<class gsl::not_null<class BlockSource*>>,
        bool,
        bool,
        bool,
        bool,
        bool
    ) const;
    /**
     * @symbol ?_chooseSpawnArea\@Player\@\@IEAAXXZ
     */
    MCAPI void _chooseSpawnArea();
    /**
     * @symbol ?_chooseSpawnPositionWithinArea\@Player\@\@IEAA_NXZ
     */
    MCAPI bool _chooseSpawnPositionWithinArea();
    /**
     * @symbol ?_registerPlayerAttributes\@Player\@\@IEAAXXZ
     */
    MCAPI void _registerPlayerAttributes();
    /**
     * @symbol ?_setPreDimensionTransferSpawnPosition\@Player\@\@IEAAXVVec3\@\@\@Z
     */
    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3);
    /**
     * @symbol ?_updateInteraction\@Player\@\@IEAAXXZ
     */
    MCAPI void _updateInteraction();
    /**
     * @symbol ?_validateSpawnPositionAvailability\@Player\@\@IEBA_NAEBVVec3\@\@PEAVBlockSource\@\@QEBV2\@\@Z
     */
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const&, class BlockSource*, class Vec3 const* const) const;
    /**
     * @symbol ?checkBed\@Player\@\@IEAA_NPEAVBlockSource\@\@QEBVVec3\@\@\@Z
     */
    MCAPI bool checkBed(class BlockSource*, class Vec3 const* const);
    /**
     * @symbol ?checkSpawnBlock\@Player\@\@IEBA_NAEBVBlockSource\@\@\@Z
     */
    MCAPI bool checkSpawnBlock(class BlockSource const&) const;
    /**
     * @symbol ?_isDangerousBlock\@Player\@\@KA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI static bool _isDangerousBlock(class Block const&, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_addLevels\@Player\@\@AEAAXH\@Z
     */
    MCAPI void _addLevels(int);
    /**
     * @symbol ?_blockUsingShield\@Player\@\@AEAA_NAEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _blockUsingShield(class ActorDamageSource const&, float);
    /**
     * @symbol ?_ensureSafeSpawnPosition\@Player\@\@AEAAXAEAVVec3\@\@\@Z
     */
    MCAPI void _ensureSafeSpawnPosition(class Vec3&);
    /**
     * @symbol
     * ?_findFallbackSpawnPosition\@Player\@\@AEAA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@I\@Z
     */
    MCAPI bool
    _findFallbackSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource*>>, unsigned int);
    /**
     * @symbol ?_handleCarriedItemInteractText\@Player\@\@AEAAXXZ
     */
    MCAPI void _handleCarriedItemInteractText();
    /**
     * @symbol ?_isChunkSourceLoaded\@Player\@\@AEBA_NAEBVVec3\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI bool _isChunkSourceLoaded(class Vec3 const&, class BlockSource const&) const;
    /**
     * @symbol ?_registerElytraLoopSound\@Player\@\@AEAAXXZ
     */
    MCAPI void _registerElytraLoopSound();
    /**
     * @symbol ?_sendShieldUpdatePacket\@Player\@\@AEAAXAEBVShieldItem\@\@AEBVItemStack\@\@1W4ContainerID\@\@H\@Z
     */
    MCAPI void _sendShieldUpdatePacket(
        class ShieldItem const&,
        class ItemStack const&,
        class ItemStack const&,
        enum class ContainerID,
        int
    );
    /**
     * @symbol ?_updateFroglightCountAndTestForAchievement\@Player\@\@AEAA_NAEBVItemStack\@\@0\@Z
     */
    MCAPI bool _updateFroglightCountAndTestForAchievement(class ItemStack const&, class ItemStack const&);
    // NOLINTEND
};
