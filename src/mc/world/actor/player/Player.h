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
        /**
         * @symbol ?hasSpawnBlock\@PlayerSpawnPoint\@Player\@\@QEBA_NXZ
         */
        MCAPI bool hasSpawnBlock() const; // NOLINT
        /**
         * @symbol
         * ?setSpawnPoint\@PlayerSpawnPoint\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@0\@Z
         */
        MCAPI void
        setSpawnPoint(class BlockPos const&, class AutomaticID<class Dimension, int>, class BlockPos const&); // NOLINT
    };

public:
    // prevent constructor by default
    Player& operator=(Player const&) = delete;
    Player(Player const&)            = delete;
    Player()                         = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?initializeComponents\@Player\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    initializeComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?_serverInitItemStackIds\@Player\@\@MEAAXXZ
     */
    virtual void _serverInitItemStackIds(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?resetUserPos\@Player\@\@UEAAX_N\@Z
     */
    virtual void resetUserPos(bool); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?remove\@Player\@\@UEAAXXZ
     */
    virtual void remove(); // NOLINT
    /**
     * @vftbl 32
     * @symbol ?getInterpolatedRidingOffset\@Player\@\@UEBA?AVVec3\@\@MH\@Z
     */
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const; // NOLINT
    /**
     * @vftbl 34
     * @symbol ?isFireImmune\@Player\@\@UEBA_NXZ
     */
    virtual bool isFireImmune() const; // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?teleportTo\@Player\@\@UEAAXAEBVVec3\@\@_NHH1\@Z
     */
    virtual void teleportTo(class Vec3 const&, bool, int, int, bool); // NOLINT
    /**
     * @vftbl 42
     * @symbol
     * ?tryCreateAddActorPacket\@Player\@\@UEAA?AV?$unique_ptr\@VAddActorBasePacket\@\@U?$default_delete\@VAddActorBasePacket\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket(); // NOLINT
    /**
     * @vftbl 43
     * @symbol ?normalTick\@Player\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
    /**
     * @vftbl 45
     * @symbol ?passengerTick\@Player\@\@UEAAXXZ
     */
    virtual void passengerTick(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 59
     * @symbol
     * ?getFormattedNameTag\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getFormattedNameTag() const; // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Player\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 74
     * @symbol ?canInteractWithOtherEntitiesInGame\@Player\@\@UEBA_NXZ
     */
    virtual bool canInteractWithOtherEntitiesInGame() const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 79
     * @symbol ?isImmobile\@Player\@\@UEBA_NXZ
     */
    virtual bool isImmobile() const; // NOLINT
    /**
     * @vftbl 81
     * @symbol ?isSilentObserver\@Player\@\@UEBA_NXZ
     */
    virtual bool isSilentObserver() const; // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?isSleeping\@Player\@\@UEBA_NXZ
     */
    virtual bool isSleeping() const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?setSleeping\@Player\@\@UEAAX_N\@Z
     */
    virtual void setSleeping(bool); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 88
     * @symbol ?isBlocking\@Player\@\@UEBA_NXZ
     */
    virtual bool isBlocking() const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?isDamageBlocked\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isDamageBlocked(class ActorDamageSource const&) const; // NOLINT
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
     * @vftbl 103
     * @symbol ?attack\@Player\@\@UEAA_NAEAVActor\@\@AEBW4ActorDamageCause\@\@\@Z
     */
    virtual bool attack(class Actor&, enum class ActorDamageCause const&); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Player\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Player\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 126
     * @symbol ?feed\@Player\@\@UEAAXH\@Z
     */
    virtual void feed(int); // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Player\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
    /**
     * @vftbl 129
     * @symbol ?getActorRendererId\@Player\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getActorRendererId() const; // NOLINT
    /**
     * @vftbl 135
     * @symbol ?awardKillScore\@Player\@\@UEAAXAEAVActor\@\@H\@Z
     */
    virtual void awardKillScore(class Actor&, int); // NOLINT
    /**
     * @vftbl 136
     * @symbol ?setArmor\@Player\@\@UEAAXW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual void setArmor(enum class ArmorSlot, class ItemStack const&); // NOLINT
    /**
     * @vftbl 144
     * @symbol ?setCarriedItem\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setCarriedItem(class ItemStack const&); // NOLINT
    /**
     * @vftbl 145
     * @symbol ?getCarriedItem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getCarriedItem() const; // NOLINT
    /**
     * @vftbl 146
     * @symbol ?setOffhandSlot\@Player\@\@UEAAXAEBVItemStack\@\@\@Z
     */
    virtual void setOffhandSlot(class ItemStack const&); // NOLINT
    /**
     * @vftbl 147
     * @symbol ?getEquippedTotem\@Player\@\@UEBAAEBVItemStack\@\@XZ
     */
    virtual class ItemStack const& getEquippedTotem() const; // NOLINT
    /**
     * @vftbl 148
     * @symbol ?consumeTotem\@Player\@\@UEAA_NXZ
     */
    virtual bool consumeTotem(); // NOLINT
    /**
     * @vftbl 153
     * @symbol ?getEntityTypeId\@Player\@\@UEBA?AW4ActorType\@\@XZ
     */
    virtual enum class ActorType getEntityTypeId() const; // NOLINT
    /**
     * @vftbl 157
     * @symbol ?canFreeze\@Player\@\@UEBA_NXZ
     */
    virtual bool canFreeze() const; // NOLINT
    /**
     * @vftbl 161
     * @symbol ?getPortalCooldown\@Player\@\@UEBAHXZ
     */
    virtual int getPortalCooldown() const; // NOLINT
    /**
     * @vftbl 162
     * @symbol ?getPortalWaitTime\@Player\@\@UEBAHXZ
     */
    virtual int getPortalWaitTime() const; // NOLINT
    /**
     * @vftbl 163
     * @symbol ?canChangeDimensionsUsingPortal\@Player\@\@UEBA_NXZ
     */
    virtual bool canChangeDimensionsUsingPortal() const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@Player\@\@UEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource); // NOLINT
    /**
     * @vftbl 173
     * @symbol ?onSynchedDataUpdate\@Player\@\@UEAAXH\@Z
     */
    virtual void onSynchedDataUpdate(int); // NOLINT
    /**
     * @vftbl 174
     * @symbol ?canAddPassenger\@Player\@\@UEBA_NAEAVActor\@\@\@Z
     */
    virtual bool canAddPassenger(class Actor&) const; // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Player\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 180
     * @symbol ?sendMotionPacketIfNeeded\@Player\@\@UEAAXXZ
     */
    virtual void sendMotionPacketIfNeeded(); // NOLINT
    /**
     * @vftbl 182
     * @symbol ?startSwimming\@Player\@\@UEAAXXZ
     */
    virtual void startSwimming(); // NOLINT
    /**
     * @vftbl 183
     * @symbol ?stopSwimming\@Player\@\@UEAAXXZ
     */
    virtual void stopSwimming(); // NOLINT
    /**
     * @vftbl 185
     * @symbol ?getCommandPermissionLevel\@Player\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getCommandPermissionLevel() const; // NOLINT
    /**
     * @vftbl 197
     * @symbol ?canObstructSpawningAndBlockPlacement\@Player\@\@UEBA_NXZ
     */
    virtual bool canObstructSpawningAndBlockPlacement() const; // NOLINT
    /**
     * @vftbl 198
     * @symbol ?getAnimationComponent\@Player\@\@UEAAAEAVAnimationComponent\@\@XZ
     */
    virtual class AnimationComponent& getAnimationComponent(); // NOLINT
    /**
     * @vftbl 201
     * @symbol ?useItem\@Player\@\@UEAAXAEAVItemStackBase\@\@W4ItemUseMethod\@\@_N\@Z
     */
    virtual void useItem(class ItemStackBase&, enum class ItemUseMethod, bool); // NOLINT
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
     * @vftbl 205
     * @symbol ?getMapDecorationRotation\@Player\@\@UEBAMXZ
     */
    virtual float getMapDecorationRotation() const; // NOLINT
    /**
     * @vftbl 207
     * @symbol ?add\@Player\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool add(class ItemStack&); // NOLINT
    /**
     * @vftbl 208
     * @symbol ?drop\@Player\@\@UEAA_NAEBVItemStack\@\@_N\@Z
     */
    virtual bool drop(class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 216
     * @symbol ?startSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void startSpinAttack(); // NOLINT
    /**
     * @vftbl 217
     * @symbol ?stopSpinAttack\@Player\@\@UEAAXXZ
     */
    virtual void stopSpinAttack(); // NOLINT
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
     * @symbol ?die\@Player\@\@UEAAXAEBVActorDamageSource\@\@\@Z
     */
    virtual void die(class ActorDamageSource const&); // NOLINT
    /**
     * @vftbl 225
     * @symbol ?shouldDropDeathLoot\@Player\@\@UEBA_NXZ
     */
    virtual bool shouldDropDeathLoot() const; // NOLINT
    /**
     * @vftbl 231
     * @symbol ?getLastDeathPos\@Player\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    virtual class std::optional<class BlockPos> getLastDeathPos() const; // NOLINT
    /**
     * @vftbl 232
     * @symbol ?getLastDeathDimension\@Player\@\@UEBA?AV?$optional\@V?$AutomaticID\@VDimension\@\@H\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AutomaticID<class Dimension, int>> getLastDeathDimension() const; // NOLINT
    /**
     * @vftbl 233
     * @symbol ?hasDiedBefore\@Player\@\@UEBA_NXZ
     */
    virtual bool hasDiedBefore() const; // NOLINT
    /**
     * @vftbl 235
     * @symbol ?_shouldProvideFeedbackOnHandContainerItemSet\@Player\@\@MEBA_NW4HandSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool
    _shouldProvideFeedbackOnHandContainerItemSet(enum class HandSlot, class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 236
     * @symbol ?_shouldProvideFeedbackOnArmorSet\@Player\@\@MEBA_NW4ArmorSlot\@\@AEBVItemStack\@\@\@Z
     */
    virtual bool _shouldProvideFeedbackOnArmorSet(enum class ArmorSlot, class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Player\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Player\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Player\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Player\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 259
     * @symbol ?getSpeed\@Player\@\@UEBAMXZ
     */
    virtual float getSpeed() const; // NOLINT
    /**
     * @vftbl 260
     * @symbol ?setSpeed\@Player\@\@UEAAXM\@Z
     */
    virtual void setSpeed(float); // NOLINT
    /**
     * @vftbl 264
     * @symbol ?aiStep\@Player\@\@UEAAXXZ
     */
    virtual void aiStep(); // NOLINT
    /**
     * @vftbl 265
     * @symbol ?aiStep\@Player\@\@UEBAXAEAUIMobMovementProxy\@\@\@Z
     */
    virtual void aiStep(struct IMobMovementProxy&) const; // NOLINT
    /**
     * @vftbl 271
     * @symbol ?getItemUseDuration\@Player\@\@UEBAHXZ
     */
    virtual int getItemUseDuration() const; // NOLINT
    /**
     * @vftbl 272
     * @symbol ?getItemUseStartupProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseStartupProgress() const; // NOLINT
    /**
     * @vftbl 273
     * @symbol ?getItemUseIntervalProgress\@Player\@\@UEBAMXZ
     */
    virtual float getItemUseIntervalProgress() const; // NOLINT
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
     * @vftbl 296
     * @symbol
     * ?getAllHand\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllHand() const; // NOLINT
    /**
     * @vftbl 297
     * @symbol
     * ?getAllEquipment\@Player\@\@UEBA?AV?$vector\@PEBVItemStack\@\@V?$allocator\@PEBVItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack const*> getAllEquipment() const; // NOLINT
    /**
     * @vftbl 299
     * @symbol ?dropEquipmentOnDeath\@Player\@\@UEAAXAEBVActorDamageSource\@\@H\@Z
     */
    virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int); // NOLINT
    /**
     * @vftbl 300
     * @symbol ?dropEquipmentOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void dropEquipmentOnDeath(); // NOLINT
    /**
     * @vftbl 301
     * @symbol ?clearVanishEnchantedItemsOnDeath\@Player\@\@UEAAXXZ
     */
    virtual void clearVanishEnchantedItemsOnDeath(); // NOLINT
    /**
     * @vftbl 302
     * @symbol ?sendInventory\@Player\@\@UEAAX_N\@Z
     */
    virtual void sendInventory(bool); // NOLINT
    /**
     * @vftbl 313
     * @symbol ?canExistWhenDisallowMob\@Player\@\@UEBA_NXZ
     */
    virtual bool canExistWhenDisallowMob() const; // NOLINT
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Player\@\@EEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl(); // NOLINT
    /**
     * @vftbl 322
     * @symbol ?updateGliding\@Player\@\@MEAAXXZ
     */
    virtual void updateGliding(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
    /**
     * @vftbl 325
     * @symbol ?prepareRegion\@Player\@\@UEAAXAEAVChunkSource\@\@\@Z
     */
    virtual void prepareRegion(class ChunkSource&); // NOLINT
    /**
     * @vftbl 326
     * @symbol ?destroyRegion\@Player\@\@UEAAXXZ
     */
    virtual void destroyRegion(); // NOLINT
    /**
     * @vftbl 327
     * @symbol ?suspendRegion\@Player\@\@UEAAXXZ
     */
    virtual void suspendRegion(); // NOLINT
    /**
     * @vftbl 328
     * @symbol ?resendAllChunks\@Player\@\@UEAAXXZ
     */
    virtual void resendAllChunks(); // NOLINT
    /**
     * @vftbl 329
     * @symbol ?_fireWillChangeDimension\@Player\@\@UEAAXXZ
     */
    virtual void _fireWillChangeDimension(); // NOLINT
    /**
     * @vftbl 330
     * @symbol ?_fireDimensionChanged\@Player\@\@UEAAXXZ
     */
    virtual void _fireDimensionChanged(); // NOLINT
    /**
     * @vftbl 331
     * @symbol ?changeDimensionWithCredits\@Player\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 332
     * @symbol ?tickWorld\@Player\@\@UEAAXAEBUTick\@\@\@Z
     */
    virtual void tickWorld(struct Tick const&); // NOLINT
    /**
     * @vftbl 333
     * @symbol __unk_vfn_333
     */
    virtual void __unk_vfn_333() = 0; // NOLINT
    /**
     * @vftbl 334
     * @symbol
     * ?getTickingOffsets\@Player\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ChunkPos> const& getTickingOffsets() const; // NOLINT
    /**
     * @vftbl 335
     * @symbol ?moveView\@Player\@\@UEAAXXZ
     */
    virtual void moveView(); // NOLINT
    /**
     * @vftbl 336
     * @symbol ?moveSpawnView\@Player\@\@UEAAXAEBVVec3\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    virtual void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @vftbl 337
     * @symbol ?setName\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setName(std::string const&); // NOLINT
    /**
     * @vftbl 338
     * @symbol ?getTravelledMethod\@Player\@\@UEBA?AW4TravelMethod\@\@XZ
     */
    virtual enum class TravelMethod getTravelledMethod() const; // NOLINT
    /**
     * @vftbl 339
     * @symbol ?checkMovementStats\@Player\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void checkMovementStats(class Vec3 const&); // NOLINT
    /**
     * @vftbl 340
     * @symbol __unk_vfn_340
     */
    virtual void __unk_vfn_340(); // NOLINT
    /**
     * @vftbl 341
     * @symbol __unk_vfn_341
     */
    virtual void __unk_vfn_341(); // NOLINT
    /**
     * @vftbl 342
     * @symbol ?respawn\@Player\@\@UEAAXXZ
     */
    virtual void respawn(); // NOLINT
    /**
     * @vftbl 343
     * @symbol __unk_vfn_343
     */
    virtual void __unk_vfn_343(); // NOLINT
    /**
     * @vftbl 344
     * @symbol __unk_vfn_344
     */
    virtual void __unk_vfn_344(); // NOLINT
    /**
     * @vftbl 345
     * @symbol ?hasResource\@Player\@\@UEAA_NH\@Z
     */
    virtual bool hasResource(int); // NOLINT
    /**
     * @vftbl 346
     * @symbol ?completeUsingItem\@Player\@\@UEAAXXZ
     */
    virtual void completeUsingItem(); // NOLINT
    /**
     * @vftbl 347
     * @symbol ?startDestroying\@Player\@\@UEAAXXZ
     */
    virtual void startDestroying(); // NOLINT
    /**
     * @vftbl 348
     * @symbol ?stopDestroying\@Player\@\@UEAAXXZ
     */
    virtual void stopDestroying(); // NOLINT
    /**
     * @vftbl 349
     * @symbol __unk_vfn_349
     */
    virtual void __unk_vfn_349(); // NOLINT
    /**
     * @vftbl 350
     * @symbol __unk_vfn_350
     */
    virtual void __unk_vfn_350(); // NOLINT
    /**
     * @vftbl 351
     * @symbol ?openTrading\@Player\@\@UEAAXAEBUActorUniqueID\@\@_N\@Z
     */
    virtual void openTrading(struct ActorUniqueID const&, bool); // NOLINT
    /**
     * @vftbl 352
     * @symbol ?canOpenContainerScreen\@Player\@\@UEAA_NXZ
     */
    virtual bool canOpenContainerScreen(); // NOLINT
    /**
     * @vftbl 353
     * @symbol __unk_vfn_353
     */
    virtual void __unk_vfn_353(); // NOLINT
    /**
     * @vftbl 354
     * @symbol ?openNpcInteractScreen\@Player\@\@UEAAXV?$shared_ptr\@UINpcDialogueData\@\@\@std\@\@\@Z
     */
    virtual void openNpcInteractScreen(class std::shared_ptr<struct INpcDialogueData>); // NOLINT
    /**
     * @vftbl 355
     * @symbol ?openInventory\@Player\@\@UEAAXXZ
     */
    virtual void openInventory(); // NOLINT
    /**
     * @vftbl 356
     * @symbol __unk_vfn_356
     */
    virtual void __unk_vfn_356(); // NOLINT
    /**
     * @vftbl 357
     * @symbol __unk_vfn_357
     */
    virtual void __unk_vfn_357(); // NOLINT
    /**
     * @vftbl 358
     * @symbol
     * ?displayTextObjectMessage\@Player\@\@UEAAXAEBVTextObjectRoot\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 359
     * @symbol
     * ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBVResolvedTextObject\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    virtual void
    displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 360
     * @symbol
     * ?displayTextObjectWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    virtual void displayTextObjectWhisperMessage(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 361
     * @symbol
     * ?displayWhisperMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000\@Z
     */
    virtual void
    displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 362
     * @symbol ?startSleepInBed\@Player\@\@UEAA?AW4BedSleepingResult\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BedSleepingResult startSleepInBed(class BlockPos const&); // NOLINT
    /**
     * @vftbl 363
     * @symbol ?stopSleepInBed\@Player\@\@UEAAX_N0\@Z
     */
    virtual void stopSleepInBed(bool, bool); // NOLINT
    /**
     * @vftbl 364
     * @symbol ?canStartSleepInBed\@Player\@\@UEAA_NXZ
     */
    virtual bool canStartSleepInBed(); // NOLINT
    /**
     * @vftbl 365
     * @symbol ?getSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getSleepTimer() const; // NOLINT
    /**
     * @vftbl 366
     * @symbol ?getPreviousTickSleepTimer\@Player\@\@UEBAHXZ
     */
    virtual int getPreviousTickSleepTimer() const; // NOLINT
    /**
     * @vftbl 367
     * @symbol ?openSign\@Player\@\@UEAAXAEBVBlockPos\@\@_N\@Z
     */
    virtual void openSign(class BlockPos const&, bool); // NOLINT
    /**
     * @vftbl 368
     * @symbol __unk_vfn_368
     */
    virtual void __unk_vfn_368(); // NOLINT
    /**
     * @vftbl 369
     * @symbol ?isHostingPlayer\@Player\@\@UEBA_NXZ
     */
    virtual bool isHostingPlayer() const; // NOLINT
    /**
     * @vftbl 370
     * @symbol ?isLoading\@Player\@\@UEBA_NXZ
     */
    virtual bool isLoading() const; // NOLINT
    /**
     * @vftbl 371
     * @symbol ?isPlayerInitialized\@Player\@\@UEBA_NXZ
     */
    virtual bool isPlayerInitialized() const; // NOLINT
    /**
     * @vftbl 372
     * @symbol __unk_vfn_372
     */
    virtual void __unk_vfn_372(); // NOLINT
    /**
     * @vftbl 373
     * @symbol ?registerTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void registerTrackedBoss(struct ActorUniqueID); // NOLINT
    /**
     * @vftbl 374
     * @symbol ?unRegisterTrackedBoss\@Player\@\@UEAAXUActorUniqueID\@\@\@Z
     */
    virtual void unRegisterTrackedBoss(struct ActorUniqueID); // NOLINT
    /**
     * @vftbl 375
     * @symbol ?setPlayerGameType\@Player\@\@UEAAXW4GameType\@\@\@Z
     */
    virtual void setPlayerGameType(enum class GameType); // NOLINT
    /**
     * @vftbl 376
     * @symbol ?initHUDContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void initHUDContainerManager(); // NOLINT
    /**
     * @vftbl 377
     * @symbol ?_crit\@Player\@\@UEAAXAEAVActor\@\@\@Z
     */
    virtual void _crit(class Actor&); // NOLINT
    /**
     * @vftbl 378
     * @symbol ?getEventing\@Player\@\@UEBAPEAVIMinecraftEventing\@\@XZ
     */
    virtual class IMinecraftEventing* getEventing() const; // NOLINT
    /**
     * @vftbl 379
     * @symbol __unk_vfn_379
     */
    virtual void __unk_vfn_379(); // NOLINT
    /**
     * @vftbl 380
     * @symbol ?sendEventPacket\@Player\@\@UEBAXAEAVLegacyTelemetryEventPacket\@\@\@Z
     */
    virtual void sendEventPacket(class LegacyTelemetryEventPacket&) const; // NOLINT
    /**
     * @vftbl 381
     * @symbol ?addExperience\@Player\@\@UEAAXH\@Z
     */
    virtual void addExperience(int); // NOLINT
    /**
     * @vftbl 382
     * @symbol ?addLevels\@Player\@\@UEAAXH\@Z
     */
    virtual void addLevels(int); // NOLINT
    /**
     * @vftbl 383
     * @symbol ?setContainerData\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@HH\@Z
     */
    virtual void setContainerData(class IContainerManager&, int, int) = 0; // NOLINT
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
    ) = 0; // NOLINT
    /**
     * @vftbl 385
     * @symbol ?inventoryChanged\@Player\@\@UEAAXAEAVContainer\@\@HAEBVItemStack\@\@1_N\@Z
     */
    virtual void
    inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 386
     * @symbol ?refreshContainer\@ServerPlayer\@\@UEAAXAEAVIContainerManager\@\@\@Z
     */
    virtual void refreshContainer(class IContainerManager&) = 0; // NOLINT
    /**
     * @vftbl 387
     * @symbol ?deleteContainerManager\@Player\@\@UEAAXXZ
     */
    virtual void deleteContainerManager(); // NOLINT
    /**
     * @vftbl 388
     * @symbol ?isActorRelevant\@Player\@\@UEAA_NAEBVActor\@\@\@Z
     */
    virtual bool isActorRelevant(class Actor const&); // NOLINT
    /**
     * @vftbl 389
     * @symbol ?isTeacher\@ServerPlayer\@\@UEBA_NXZ
     */
    virtual bool isTeacher() const = 0; // NOLINT
    /**
     * @vftbl 390
     * @symbol ?onSuspension\@Player\@\@UEAAXXZ
     */
    virtual void onSuspension(); // NOLINT
    /**
     * @vftbl 391
     * @symbol ?onLinkedSlotsChanged\@Player\@\@UEAAXXZ
     */
    virtual void onLinkedSlotsChanged(); // NOLINT
    /**
     * @vftbl 392
     * @symbol ?startCooldown\@Player\@\@UEAAXPEBVItem\@\@_N\@Z
     */
    virtual void startCooldown(class Item const*, bool); // NOLINT
    /**
     * @vftbl 393
     * @symbol ?getItemCooldownLeft\@Player\@\@UEBAHAEBVHashedString\@\@\@Z
     */
    virtual int getItemCooldownLeft(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 394
     * @symbol ?getItemCooldownLeft\@Player\@\@UEBAH_K\@Z
     */
    virtual int getItemCooldownLeft(unsigned __int64) const; // NOLINT
    /**
     * @vftbl 395
     * @symbol ?getMaxItemCooldownLeft\@Player\@\@UEBAHXZ
     */
    virtual int getMaxItemCooldownLeft() const; // NOLINT
    /**
     * @vftbl 396
     * @symbol ?isItemOnCooldown\@Player\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool isItemOnCooldown(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 397
     * @symbol ?sendInventoryTransaction\@ServerPlayer\@\@UEBAXAEBVInventoryTransaction\@\@\@Z
     */
    virtual void sendInventoryTransaction(class InventoryTransaction const&) const = 0; // NOLINT
    /**
     * @vftbl 398
     * @symbol
     * ?sendComplexInventoryTransaction\@ServerPlayer\@\@UEBAXV?$unique_ptr\@VComplexInventoryTransaction\@\@U?$default_delete\@VComplexInventoryTransaction\@\@\@std\@\@\@std\@\@\@Z
     */
    virtual void
        sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0; // NOLINT
    /**
     * @vftbl 399
     * @symbol ?sendNetworkPacket\@Player\@\@UEBAXAEAVPacket\@\@\@Z
     */
    virtual void sendNetworkPacket(class Packet&) const; // NOLINT
    /**
     * @vftbl 400
     * @symbol ?getPlayerEventCoordinator\@ServerPlayer\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0; // NOLINT
    /**
     * @vftbl 401
     * @symbol ?reportMovementTelemetry\@Player\@\@UEAAXW4MovementEventType\@\@\@Z
     */
    virtual void reportMovementTelemetry(enum class MovementEventType); // NOLINT
    /**
     * @vftbl 402
     * @symbol __unk_vfn_402
     */
    virtual void __unk_vfn_402(); // NOLINT
    /**
     * @vftbl 403
     * @symbol ?getXuid\@Player\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getXuid() const; // NOLINT
    /**
     * @vftbl 404
     * @symbol ?getMovementSettings\@Player\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    virtual struct PlayerMovementSettings const& getMovementSettings() const; // NOLINT
    /**
     * @vftbl 405
     * @symbol __unk_vfn_405
     */
    virtual void __unk_vfn_405(); // NOLINT
    /**
     * @vftbl 406
     * @symbol ?getMaxChunkBuildRadius\@Player\@\@UEBAEXZ
     */
    virtual unsigned char getMaxChunkBuildRadius() const; // NOLINT
    /**
     * @vftbl 407
     * @symbol ?onMovePlayerPacketNormal\@Player\@\@MEAAXAEBVVec3\@\@AEBVVec2\@\@M\@Z
     */
    virtual void onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float); // NOLINT
    /**
     * @vftbl 408
     * @symbol ?_createChunkSource\@Player\@\@MEAA?AV?$shared_ptr\@VChunkViewSource\@\@\@std\@\@AEAVChunkSource\@\@\@Z
     */
    virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&); // NOLINT
    /**
     * @vftbl 409
     * @symbol ?setAbilities\@Player\@\@UEAAXAEBVLayeredAbilities\@\@\@Z
     */
    virtual void setAbilities(class LayeredAbilities const&); // NOLINT
    /**
     * @vftbl 410
     * @symbol ?getEditorPlayer\@ServerPlayer\@\@UEBA?AV?$NonOwnerPointer\@VIEditorPlayer\@Editor\@\@\@Bedrock\@\@XZ
     */
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0; // NOLINT
    /**
     * @vftbl 411
     * @symbol ?destroyEditorPlayer\@ServerPlayer\@\@UEAAXXZ
     */
    virtual void destroyEditorPlayer() = 0; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYER
    /**
     * @symbol ?addSavedChunk\@Player\@\@UEAAXAEBVChunkPos\@\@\@Z
     */
    MCVAPI void addSavedChunk(class ChunkPos const&); // NOLINT
    /**
     * @symbol
     * ?displayChatMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCVAPI void displayChatMessage(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?displayClientMessage\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void displayClientMessage(std::string const&); // NOLINT
    /**
     * @symbol ?getAlwaysShowNameTag\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool getAlwaysShowNameTag() const; // NOLINT
    /**
     * @symbol ?getCurrentStructureFeature\@Player\@\@UEBA?AW4StructureFeatureType\@\@XZ
     */
    MCVAPI enum class StructureFeatureType getCurrentStructureFeature() const; // NOLINT
    /**
     * @symbol ?getUserId\@Player\@\@UEBAIXZ
     */
    MCVAPI unsigned int getUserId() const; // NOLINT
    /**
     * @symbol ?isAutoJumpEnabled\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isAutoJumpEnabled() const; // NOLINT
    /**
     * @symbol ?isCreativeModeAllowed\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isCreativeModeAllowed(); // NOLINT
    /**
     * @symbol ?isInTrialMode\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isInTrialMode(); // NOLINT
    /**
     * @symbol ?isPlayer\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isPlayer() const; // NOLINT
    /**
     * @symbol ?isShootable\@Player\@\@UEAA_NXZ
     */
    MCVAPI bool isShootable(); // NOLINT
    /**
     * @symbol ?isSimulated\@Player\@\@UEBA_NXZ
     */
    MCVAPI bool isSimulated() const; // NOLINT
    /**
     * @symbol ?openBook\@Player\@\@UEAAXH_NHPEAVBlockActor\@\@\@Z
     */
    MCVAPI void openBook(int, bool, int, class BlockActor*); // NOLINT
    /**
     * @symbol ?openChalkboard\@Player\@\@UEAAXAEAVChalkboardBlockActor\@\@_N\@Z
     */
    MCVAPI void openChalkboard(class ChalkboardBlockActor&, bool); // NOLINT
    /**
     * @symbol ?openPortfolio\@Player\@\@UEAAXXZ
     */
    MCVAPI void openPortfolio(); // NOLINT
    /**
     * @symbol
     * ?playEmote\@Player\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    MCVAPI void playEmote(std::string const&, bool); // NOLINT
    /**
     * @symbol ?resetRot\@Player\@\@UEAAXXZ
     */
    MCVAPI void resetRot(); // NOLINT
    /**
     * @symbol ?stopLoading\@Player\@\@UEAAXXZ
     */
    MCVAPI void stopLoading(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Player(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Player\@\@QEAA\@AEAVLevel\@\@AEAVPacketSender\@\@W4GameType\@\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@6V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@9\@AEAVEntityContext\@\@66\@Z
     */
    MCAPI
    Player(class Level&, class PacketSender&, enum class GameType, class NetworkIdentifier const&, enum class SubClientId, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, class EntityContext&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?broadcastPlayerSpawnedMobEvent\@Player\@\@QEAAXW4ActorType\@\@W4MobSpawnMethod\@\@\@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(enum class ActorType, enum class MobSpawnMethod); // NOLINT
    /**
     * @symbol ?canBeSeenOnMap\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canBeSeenOnMap() const; // NOLINT
    /**
     * @symbol ?canDestroy\@Player\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const&) const; // NOLINT
    /**
     * @symbol ?canSleep\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canSleep() const; // NOLINT
    /**
     * @symbol ?canStackInOffhand\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool canStackInOffhand(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?canUseAbility\@Player\@\@QEBA_NW4AbilitiesIndex\@\@\@Z
     */
    MCAPI bool canUseAbility(enum class AbilitiesIndex) const; // NOLINT
    /**
     * @symbol ?canUseOperatorBlocks\@Player\@\@QEBA_NXZ
     */
    MCAPI bool canUseOperatorBlocks() const; // NOLINT
    /**
     * @symbol ?causeFoodExhaustion\@Player\@\@QEAAXM\@Z
     */
    MCAPI void causeFoodExhaustion(float); // NOLINT
    /**
     * @symbol ?clearRespawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void clearRespawnPosition(); // NOLINT
    /**
     * @symbol ?dropCursorSelectedItemOnDeath\@Player\@\@QEAAXXZ
     */
    MCAPI void dropCursorSelectedItemOnDeath(); // NOLINT
    /**
     * @symbol ?eat\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void eat(class ItemStack const&); // NOLINT
    /**
     * @symbol ?eat\@Player\@\@QEAAXHM\@Z
     */
    MCAPI void eat(int, float); // NOLINT
    /**
     * @symbol ?equippedArmorItemCanBeMoved\@Player\@\@QEBA_NAEBVItemStack\@\@\@Z
     */
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?fireDimensionChangedEvent\@Player\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@0\@Z
     */
    MCAPI void
        fireDimensionChangedEvent(class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?forceAllowEating\@Player\@\@QEBA_NXZ
     */
    MCAPI bool forceAllowEating() const; // NOLINT
    /**
     * @symbol ?getAbilities\@Player\@\@QEAAAEAVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities& getAbilities(); // NOLINT
    /**
     * @symbol ?getAbilities\@Player\@\@QEBAAEBVLayeredAbilities\@\@XZ
     */
    MCAPI class LayeredAbilities const& getAbilities() const; // NOLINT
    /**
     * @symbol ?getAgent\@Player\@\@QEBAPEAVAgent\@\@XZ
     */
    MCAPI class Agent* getAgent() const; // NOLINT
    /**
     * @symbol ?getAgentID\@Player\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getAgentID() const; // NOLINT
    /**
     * @symbol ?getAgentIfAllowed\@Player\@\@QEBAPEAVAgent\@\@_NUActorUniqueID\@\@\@Z
     */
    MCAPI class Agent* getAgentIfAllowed(bool, struct ActorUniqueID) const; // NOLINT
    /**
     * @symbol ?getBedPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getBedPosition() const; // NOLINT
    /**
     * @symbol ?getBlockedUsingDamagedShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const; // NOLINT
    /**
     * @symbol ?getBlockedUsingShieldTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const; // NOLINT
    /**
     * @symbol ?getBlockingStartTimeStamp\@Player\@\@QEBA_JXZ
     */
    MCAPI __int64 getBlockingStartTimeStamp() const; // NOLINT
    /**
     * @symbol ?getCapePos\@Player\@\@QEAA?AVVec3\@\@M\@Z
     */
    MCAPI class Vec3 getCapePos(float); // NOLINT
    /**
     * @symbol ?getChunkRadius\@Player\@\@QEBAIXZ
     */
    MCAPI unsigned int getChunkRadius() const; // NOLINT
    /**
     * @symbol ?getContainerManager\@Player\@\@QEAA?AV?$weak_ptr\@VIContainerManager\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager(); // NOLINT
    /**
     * @symbol ?getCurrentActiveShield\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getCurrentActiveShield() const; // NOLINT
    /**
     * @symbol ?getDestroyProgress\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroyProgress(class Block const&) const; // NOLINT
    /**
     * @symbol ?getDestroySpeed\@Player\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class Block const&) const; // NOLINT
    /**
     * @symbol ?getDirection\@Player\@\@QEBAHXZ
     */
    MCAPI int getDirection() const; // NOLINT
    /**
     * @symbol ?getEnchantmentSeed\@Player\@\@QEBAHXZ
     */
    MCAPI int getEnchantmentSeed() const; // NOLINT
    /**
     * @symbol ?getExpectedSpawnDimensionId\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const; // NOLINT
    /**
     * @symbol ?getExpectedSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getExpectedSpawnPosition() const; // NOLINT
    /**
     * @symbol
     * ?getInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getInteractText() const; // NOLINT
    /**
     * @symbol ?getInventory\@Player\@\@QEAAAEAVContainer\@\@XZ
     */
    MCAPI class Container& getInventory(); // NOLINT
    /**
     * @symbol ?getItemInUse\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getItemInUse() const; // NOLINT
    /**
     * @symbol
     * ?getItemInteractText\@Player\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItem\@\@\@Z
     */
    MCAPI std::string getItemInteractText(class Item const&) const; // NOLINT
    /**
     * @symbol ?getItemStackNetManager\@Player\@\@QEAAPEAVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager(); // NOLINT
    /**
     * @symbol ?getItemStackNetManager\@Player\@\@QEBAPEBVItemStackNetManagerBase\@\@XZ
     */
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const; // NOLINT
    /**
     * @symbol ?getLuck\@Player\@\@QEAAMXZ
     */
    MCAPI float getLuck(); // NOLINT
    /**
     * @symbol ?getMapIndex\@Player\@\@QEAAHXZ
     */
    MCAPI int getMapIndex(); // NOLINT
    /**
     * @symbol ?getName\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const; // NOLINT
    /**
     * @symbol ?getNewEnchantmentSeed\@Player\@\@QEAAXXZ
     */
    MCAPI void getNewEnchantmentSeed(); // NOLINT
    /**
     * @symbol ?getPickupArea\@Player\@\@QEBA?AVAABB\@\@XZ
     */
    MCAPI class AABB getPickupArea() const; // NOLINT
    /**
     * @symbol ?getPlatform\@Player\@\@QEBA?AW4BuildPlatform\@\@XZ
     */
    MCAPI enum class BuildPlatform getPlatform() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformOnlineId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPlatformOnlineId() const; // NOLINT
    /**
     * @symbol ?getPlayerGameType\@Player\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getPlayerGameType() const; // NOLINT
    /**
     * @symbol ?getPlayerIndex\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerIndex() const; // NOLINT
    /**
     * @symbol ?getPlayerLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getPlayerLevel() const; // NOLINT
    /**
     * @symbol ?getPlayerPermissionLevel\@Player\@\@QEBA?AW4PlayerPermissionLevel\@\@XZ
     */
    MCAPI enum class PlayerPermissionLevel getPlayerPermissionLevel() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerSessionId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getPlayerSessionId() const; // NOLINT
    /**
     * @symbol ?getPlayerUIItem\@Player\@\@QEAAAEBVItemStack\@\@W4PlayerUISlot\@\@\@Z
     */
    MCAPI class ItemStack const& getPlayerUIItem(enum class PlayerUISlot); // NOLINT
    /**
     * @symbol ?getRespawnAnchorPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getRespawnAnchorPosition() const; // NOLINT
    /**
     * @symbol ?getSelectedItem\@Player\@\@QEBAAEBVItemStack\@\@XZ
     */
    MCAPI class ItemStack const& getSelectedItem() const; // NOLINT
    /**
     * @symbol ?getSelectedItemSlot\@Player\@\@QEBAHXZ
     */
    MCAPI int getSelectedItemSlot() const; // NOLINT
    /**
     * @symbol
     * ?getServerId\@Player\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getServerId() const; // NOLINT
    /**
     * @symbol ?getSkin\@Player\@\@QEAAAEAVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin& getSkin(); // NOLINT
    /**
     * @symbol ?getSkin\@Player\@\@QEBAAEBVSerializedSkin\@\@XZ
     */
    MCAPI class SerializedSkin const& getSkin() const; // NOLINT
    /**
     * @symbol ?getSleepRotation\@Player\@\@QEBAMXZ
     */
    MCAPI float getSleepRotation() const; // NOLINT
    /**
     * @symbol ?getSpawnDimension\@Player\@\@QEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const; // NOLINT
    /**
     * @symbol ?getSpawnPosition\@Player\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getSpawnPosition() const; // NOLINT
    /**
     * @symbol ?getSupplies\@Player\@\@QEBAAEBVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory const& getSupplies() const; // NOLINT
    /**
     * @symbol ?getSupplies\@Player\@\@QEAAAEAVPlayerInventory\@\@XZ
     */
    MCAPI class PlayerInventory& getSupplies(); // NOLINT
    /**
     * @symbol
     * ?getTrackedBosses\@Player\@\@QEAAAEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses(); // NOLINT
    /**
     * @symbol ?getUsedPotion\@Player\@\@QEAA_NXZ
     */
    MCAPI bool getUsedPotion(); // NOLINT
    /**
     * @symbol ?getXpEarnedAtCurrentLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpEarnedAtCurrentLevel() const; // NOLINT
    /**
     * @symbol ?getXpNeededForLevelRange\@Player\@\@QEBAIHH\@Z
     */
    MCAPI unsigned int getXpNeededForLevelRange(int, int) const; // NOLINT
    /**
     * @symbol ?getXpNeededForNextLevel\@Player\@\@QEBAHXZ
     */
    MCAPI int getXpNeededForNextLevel() const; // NOLINT
    /**
     * @symbol ?hasBedPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasBedPosition() const; // NOLINT
    /**
     * @symbol ?hasOpenContainer\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOpenContainer() const; // NOLINT
    /**
     * @symbol ?hasOpenContainerOfContainerType\@Player\@\@QEBA_NW4ContainerType\@\@\@Z
     */
    MCAPI bool hasOpenContainerOfContainerType(enum class ContainerType) const; // NOLINT
    /**
     * @symbol ?hasOwnedChunkSource\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasOwnedChunkSource() const; // NOLINT
    /**
     * @symbol ?hasResource\@Player\@\@QEAA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI bool hasResource(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?hasRespawnAnchorPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnAnchorPosition() const; // NOLINT
    /**
     * @symbol ?hasRespawnPosition\@Player\@\@QEBA_NXZ
     */
    MCAPI bool hasRespawnPosition() const; // NOLINT
    /**
     * @symbol ?interact\@Player\@\@QEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI bool interact(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?is2DPositionRelevant\@Player\@\@QEAA_NV?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isFlying\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isFlying() const; // NOLINT
    /**
     * @symbol ?isForcedRespawn\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isForcedRespawn() const; // NOLINT
    /**
     * @symbol ?isHiddenFrom\@Player\@\@QEBA_NAEAVMob\@\@\@Z
     */
    MCAPI bool isHiddenFrom(class Mob&) const; // NOLINT
    /**
     * @symbol ?isHungry\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isHungry() const; // NOLINT
    /**
     * @symbol ?isHurt\@Player\@\@QEAA_NXZ
     */
    MCAPI bool isHurt(); // NOLINT
    /**
     * @symbol ?isInRaid\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isInRaid() const; // NOLINT
    /**
     * @symbol ?isRespawningFromTheEnd\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isRespawningFromTheEnd() const; // NOLINT
    /**
     * @symbol ?isSleepingLongEnough\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSleepingLongEnough() const; // NOLINT
    /**
     * @symbol ?isSpawned\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isSpawned() const; // NOLINT
    /**
     * @symbol ?isUsingItem\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isUsingItem() const; // NOLINT
    /**
     * @symbol ?isValidSpawn\@Player\@\@QEBA_NXZ
     */
    MCAPI bool isValidSpawn() const; // NOLINT
    /**
     * @symbol ?loadLastDeathLocation\@Player\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadLastDeathLocation(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?passengerCheckMovementStats\@Player\@\@QEAAXXZ
     */
    MCAPI void passengerCheckMovementStats(); // NOLINT
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
    ); // NOLINT
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
    ); // NOLINT
    /**
     * @symbol ?recheckSpawnPosition\@Player\@\@QEAAXXZ
     */
    MCAPI void recheckSpawnPosition(); // NOLINT
    /**
     * @symbol ?releaseUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void releaseUsingItem(); // NOLINT
    /**
     * @symbol ?resetPlayerLevel\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPlayerLevel(); // NOLINT
    /**
     * @symbol ?resetPublisherInitialSpawn\@Player\@\@QEAAXXZ
     */
    MCAPI void resetPublisherInitialSpawn(); // NOLINT
    /**
     * @symbol ?resetToDefaultGameMode\@Player\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultGameMode(); // NOLINT
    /**
     * @symbol ?saveLastDeathLocation\@Player\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void saveLastDeathLocation(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?sendPlayerTeleported\@Player\@\@QEAAXXZ
     */
    MCAPI void sendPlayerTeleported(); // NOLINT
    /**
     * @symbol ?sendSpawnExperienceOrbPacketToServer\@Player\@\@QEAAXAEBVVec3\@\@H\@Z
     */
    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?setAgent\@Player\@\@QEAAXPEAVAgent\@\@\@Z
     */
    MCAPI void setAgent(class Agent*); // NOLINT
    /**
     * @symbol ?setBedRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setBedRespawnPosition(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setBlockRespawnUntilClientMessage\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setBlockRespawnUntilClientMessage(bool); // NOLINT
    /**
     * @symbol ?setChunkRadius\@Player\@\@QEAAXI\@Z
     */
    MCAPI void setChunkRadius(unsigned int); // NOLINT
    /**
     * @symbol ?setContainerManager\@Player\@\@QEAAXV?$shared_ptr\@VIContainerManager\@\@\@std\@\@\@Z
     */
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>); // NOLINT
    /**
     * @symbol ?setCursorSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setCursorSelectedItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?setCursorSelectedItemGroup\@Player\@\@QEAAXAEBVItemGroup\@\@\@Z
     */
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const&); // NOLINT
    /**
     * @symbol ?setEnchantmentSeed\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setEnchantmentSeed(int); // NOLINT
    /**
     * @symbol ?setHasDied\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasDied(bool); // NOLINT
    /**
     * @symbol ?setHasSeenCredits\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setHasSeenCredits(bool); // NOLINT
    /**
     * @symbol ?setLastDeathDimension\@Player\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setLastDeathDimension(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?setLastDeathPos\@Player\@\@QEAAXVBlockPos\@\@\@Z
     */
    MCAPI void setLastDeathPos(class BlockPos); // NOLINT
    /**
     * @symbol ?setLastHurtBy\@Player\@\@QEAAXW4ActorType\@\@\@Z
     */
    MCAPI void setLastHurtBy(enum class ActorType); // NOLINT
    /**
     * @symbol ?setMapIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setMapIndex(int); // NOLINT
    /**
     * @symbol ?setPermissions\@Player\@\@QEAAXW4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void setPermissions(enum class CommandPermissionLevel); // NOLINT
    /**
     * @symbol
     * ?setPlatformOnlineId\@Player\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPlatformOnlineId(std::string const&); // NOLINT
    /**
     * @symbol ?setPlayerIndex\@Player\@\@QEAAXH\@Z
     */
    MCAPI void setPlayerIndex(int); // NOLINT
    /**
     * @symbol ?setPlayerUIItem\@Player\@\@QEAAXW4PlayerUISlot\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void setPlayerUIItem(enum class PlayerUISlot, class ItemStack const&); // NOLINT
    /**
     * @symbol ?setRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?setRespawnPositionCandidate\@Player\@\@QEAAXXZ
     */
    MCAPI void setRespawnPositionCandidate(); // NOLINT
    /**
     * @symbol ?setRespawnReady\@Player\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setRespawnReady(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setSelectedItem\@Player\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void setSelectedItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?setSelectedSlot\@Player\@\@QEAAAEBVItemStack\@\@H\@Z
     */
    MCAPI class ItemStack const& setSelectedSlot(int); // NOLINT
    /**
     * @symbol ?setSpawnBlockRespawnPosition\@Player\@\@QEAAXAEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?setUsedPotion\@Player\@\@QEAAX_N\@Z
     */
    MCAPI void setUsedPotion(bool); // NOLINT
    /**
     * @symbol ?shouldShowCredits\@Player\@\@QEBA_NXZ
     */
    MCAPI bool shouldShowCredits() const; // NOLINT
    /**
     * @symbol ?startCooldown\@Player\@\@QEAAXAEBVHashedString\@\@H_N\@Z
     */
    MCAPI void startCooldown(class HashedString const&, int, bool); // NOLINT
    /**
     * @symbol ?startGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void startGliding(); // NOLINT
    /**
     * @symbol ?startItemUseOn\@Player\@\@QEAAXEAEBVBlockPos\@\@0AEBVItemStack\@\@\@Z
     */
    MCAPI void
    startItemUseOn(unsigned char, class BlockPos const&, class BlockPos const&, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startUsingItem\@Player\@\@QEAAXAEBVItemStack\@\@H\@Z
     */
    MCAPI void startUsingItem(class ItemStack const&, int); // NOLINT
    /**
     * @symbol ?stopGliding\@Player\@\@QEAAXXZ
     */
    MCAPI void stopGliding(); // NOLINT
    /**
     * @symbol ?stopItemUseOn\@Player\@\@QEAAXAEBVBlockPos\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI void stopItemUseOn(class BlockPos const&, class ItemStack const&); // NOLINT
    /**
     * @symbol ?stopUsingItem\@Player\@\@QEAAXXZ
     */
    MCAPI void stopUsingItem(); // NOLINT
    /**
     * @symbol ?take\@Player\@\@QEAA_NAEAVActor\@\@HH\@Z
     */
    MCAPI bool take(class Actor&, int, int); // NOLINT
    /**
     * @symbol ?tryStartGliding\@Player\@\@QEAA_NXZ
     */
    MCAPI bool tryStartGliding(); // NOLINT
    /**
     * @symbol ?updateBlockSourceTick\@Player\@\@QEAAXXZ
     */
    MCAPI void updateBlockSourceTick(); // NOLINT
    /**
     * @symbol ?updateInventoryTransactions\@Player\@\@QEAAXXZ
     */
    MCAPI void updateInventoryTransactions(); // NOLINT
    /**
     * @symbol ?updateSkin\@Player\@\@QEAAXAEBVSerializedSkin\@\@H\@Z
     */
    MCAPI void updateSkin(class SerializedSkin const&, int); // NOLINT
    /**
     * @symbol ?updateSpawnChunkView\@Player\@\@QEAAXXZ
     */
    MCAPI void updateSpawnChunkView(); // NOLINT
    /**
     * @symbol ?updateTrackedBosses\@Player\@\@QEAAXXZ
     */
    MCAPI void updateTrackedBosses(); // NOLINT
    /**
     * @symbol ?useSelectedItem\@Player\@\@QEAAXW4ItemUseMethod\@\@_N\@Z
     */
    MCAPI void useSelectedItem(enum class ItemUseMethod, bool); // NOLINT
    /**
     * @symbol ?_aiStep\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void _aiStep(struct IPlayerMovementProxy&); // NOLINT
    /**
     * @symbol ?_causeFoodExhaustion\@Player\@\@SAXPEAVAttributeInstance\@\@_NM\@Z
     */
    MCAPI static void _causeFoodExhaustion(class AttributeInstance*, bool, float); // NOLINT
    /**
     * @symbol ?canJump\@Player\@\@SA_NAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static bool canJump(struct IPlayerMovementProxy&); // NOLINT
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
    ); // NOLINT
    /**
     * @symbol ?checkNeedAutoJump\@Player\@\@SA_NPEAUIPlayerMovementProxy\@\@MM\@Z
     */
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy*, float, float); // NOLINT
    /**
     * @symbol ?handleJumpEffects\@Player\@\@SAXAEAUIPlayerMovementProxy\@\@\@Z
     */
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy&); // NOLINT
    /**
     * @symbol ?isDangerousVolume\@Player\@\@SA_NAEAVBlockSource\@\@AEBVAABB\@\@_N\@Z
     */
    MCAPI static bool isDangerousVolume(class BlockSource&, class AABB const&, bool); // NOLINT
    /**
     * @symbol
     * ?tryGetFromComponent\@Player\@\@SAPEAV1\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@_N\@Z
     */
    MCAPI static class Player* tryGetFromComponent(
        class FlagComponent<struct PlayerComponentFlag> const&,
        class ActorOwnerComponent&,
        bool
    ); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEAV1\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@_N\@Z
     */
    MCAPI static class Player* tryGetFromEntity(class StackRefResultT<struct EntityRefTraits>, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEAV1\@AEAVEntityContext\@\@_N\@Z
     */
    MCAPI static class Player* tryGetFromEntity(class EntityContext&, bool); // NOLINT
    /**
     * @symbol ?tryGetFromEntity\@Player\@\@SAPEBV1\@AEBVEntityContext\@\@_N\@Z
     */
    MCAPI static class Player const* tryGetFromEntity(class EntityContext const&, bool); // NOLINT
    /**
     * @symbol ?DEFAULT_BB_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_HEIGHT; // NOLINT
    /**
     * @symbol ?DEFAULT_BB_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_BB_WIDTH; // NOLINT
    /**
     * @symbol ?DEFAULT_PLAYER_HEIGHT_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET; // NOLINT
    /**
     * @symbol ?DEFAULT_WALK_SPEED\@Player\@\@2MB
     */
    MCAPI static float const DEFAULT_WALK_SPEED; // NOLINT
    /**
     * @symbol ?DISTANCE_TO_TRANSFORM_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT; // NOLINT
    /**
     * @symbol ?DISTANCE_TO_TRAVELLED_EVENT\@Player\@\@2MB
     */
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT; // NOLINT
    /**
     * @symbol ?EXHAUSTION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXHAUSTION; // NOLINT
    /**
     * @symbol ?EXPERIENCE\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const EXPERIENCE; // NOLINT
    /**
     * @symbol ?GLIDE_STOP_DELAY\@Player\@\@2HB
     */
    MCAPI static int const GLIDE_STOP_DELAY; // NOLINT
    /**
     * @symbol ?HUNGER\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const HUNGER; // NOLINT
    /**
     * @symbol ?LEVEL\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const LEVEL; // NOLINT
    /**
     * @symbol ?PLAYER_ALIVE_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_HEIGHT; // NOLINT
    /**
     * @symbol ?PLAYER_ALIVE_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_ALIVE_WIDTH; // NOLINT
    /**
     * @symbol ?PLAYER_DEAD_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_HEIGHT; // NOLINT
    /**
     * @symbol ?PLAYER_DEAD_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DEAD_WIDTH; // NOLINT
    /**
     * @symbol ?PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS\@Player\@\@2HB
     */
    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS; // NOLINT
    /**
     * @symbol ?PLAYER_DOWN_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED; // NOLINT
    /**
     * @symbol ?PLAYER_SLEEPING_HEIGHT\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_HEIGHT; // NOLINT
    /**
     * @symbol ?PLAYER_SLEEPING_WIDTH\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SLEEPING_WIDTH; // NOLINT
    /**
     * @symbol ?PLAYER_SWIMMING_CAMERA_OFFSET\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET; // NOLINT
    /**
     * @symbol ?PLAYER_SWIM_BREACH_ANGLE\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE; // NOLINT
    /**
     * @symbol ?PLAYER_SWIM_ENTER_THRESHOLD\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD; // NOLINT
    /**
     * @symbol ?PLAYER_SWIM_FLY_MULTI\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_SWIM_FLY_MULTI; // NOLINT
    /**
     * @symbol ?PLAYER_UP_SWIM_SPEED\@Player\@\@2MB
     */
    MCAPI static float const PLAYER_UP_SWIM_SPEED; // NOLINT
    /**
     * @symbol ?SATURATION\@Player\@\@2VAttribute\@\@B
     */
    MCAPI static class Attribute const SATURATION; // NOLINT
    /**
     * @symbol ?SPAWN_CHUNK_LARGE_JUMP\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP; // NOLINT
    /**
     * @symbol ?SPAWN_CHUNK_RADIUS\@Player\@\@2IB
     */
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS; // NOLINT

    // protected:
    /**
     * @symbol ?_canChangeGameType\@Player\@\@IEBA_NW4GameType\@\@\@Z
     */
    MCAPI bool _canChangeGameType(enum class GameType) const; // NOLINT
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
    ) const; // NOLINT
    /**
     * @symbol ?_chooseSpawnArea\@Player\@\@IEAAXXZ
     */
    MCAPI void _chooseSpawnArea(); // NOLINT
    /**
     * @symbol ?_chooseSpawnPositionWithinArea\@Player\@\@IEAA_NXZ
     */
    MCAPI bool _chooseSpawnPositionWithinArea(); // NOLINT
    /**
     * @symbol ?_registerPlayerAttributes\@Player\@\@IEAAXXZ
     */
    MCAPI void _registerPlayerAttributes(); // NOLINT
    /**
     * @symbol ?_setPreDimensionTransferSpawnPosition\@Player\@\@IEAAXVVec3\@\@\@Z
     */
    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3); // NOLINT
    /**
     * @symbol ?_updateInteraction\@Player\@\@IEAAXXZ
     */
    MCAPI void _updateInteraction(); // NOLINT
    /**
     * @symbol ?_validateSpawnPositionAvailability\@Player\@\@IEBA_NAEBVVec3\@\@PEAVBlockSource\@\@QEBV2\@\@Z
     */
    MCAPI bool
    _validateSpawnPositionAvailability(class Vec3 const&, class BlockSource*, class Vec3 const* const) const; // NOLINT
    /**
     * @symbol ?checkBed\@Player\@\@IEAA_NPEAVBlockSource\@\@QEBVVec3\@\@\@Z
     */
    MCAPI bool checkBed(class BlockSource*, class Vec3 const* const); // NOLINT
    /**
     * @symbol ?checkSpawnBlock\@Player\@\@IEBA_NAEBVBlockSource\@\@\@Z
     */
    MCAPI bool checkSpawnBlock(class BlockSource const&) const; // NOLINT
    /**
     * @symbol ?_isDangerousBlock\@Player\@\@KA_NAEBVBlock\@\@_N\@Z
     */
    MCAPI static bool _isDangerousBlock(class Block const&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_addLevels\@Player\@\@AEAAXH\@Z
     */
    MCAPI void _addLevels(int); // NOLINT
    /**
     * @symbol ?_blockUsingShield\@Player\@\@AEAA_NAEBVActorDamageSource\@\@M\@Z
     */
    MCAPI bool _blockUsingShield(class ActorDamageSource const&, float); // NOLINT
    /**
     * @symbol ?_ensureSafeSpawnPosition\@Player\@\@AEAAXAEAVVec3\@\@\@Z
     */
    MCAPI void _ensureSafeSpawnPosition(class Vec3&); // NOLINT
    /**
     * @symbol
     * ?_findFallbackSpawnPosition\@Player\@\@AEAA_NAEAVVec3\@\@V?$vector\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVBlockSource\@\@\@gsl\@\@\@std\@\@\@std\@\@I\@Z
     */
    MCAPI bool _findFallbackSpawnPosition(
        class Vec3&,
        std::vector<class gsl::not_null<class BlockSource*>>,
        unsigned int
    ); // NOLINT
    /**
     * @symbol ?_handleCarriedItemInteractText\@Player\@\@AEAAXXZ
     */
    MCAPI void _handleCarriedItemInteractText(); // NOLINT
    /**
     * @symbol ?_isChunkSourceLoaded\@Player\@\@AEBA_NAEBVVec3\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI bool _isChunkSourceLoaded(class Vec3 const&, class BlockSource const&) const; // NOLINT
    /**
     * @symbol ?_registerElytraLoopSound\@Player\@\@AEAAXXZ
     */
    MCAPI void _registerElytraLoopSound(); // NOLINT
    /**
     * @symbol ?_sendShieldUpdatePacket\@Player\@\@AEAAXAEBVShieldItem\@\@AEBVItemStack\@\@1W4ContainerID\@\@H\@Z
     */
    MCAPI void _sendShieldUpdatePacket(
        class ShieldItem const&,
        class ItemStack const&,
        class ItemStack const&,
        enum class ContainerID,
        int
    ); // NOLINT
    /**
     * @symbol ?_updateFroglightCountAndTestForAchievement\@Player\@\@AEAA_NAEBVItemStack\@\@0\@Z
     */
    MCAPI bool _updateFroglightCountAndTestForAchievement(class ItemStack const&, class ItemStack const&); // NOLINT

protected:
private:
};
