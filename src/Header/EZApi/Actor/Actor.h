#pragma once

#include <cstdint>

#include "../Command/CommandPermissionLevel.h"
#include "../Command/TeleportCommand.h"
#include "../Container/SimpleContainer.h"
#include "../Core/AutomaticID.h"
#include "../Core/RelativeFloat.h"
#include "../Core/Util.h"
#include "../Level/Dimension.h"
#include "../Math/Vec3.h"
#include "../dll.h"
#include "ActorRuntimeID.h"
#include "ActorType.h"
#include "ActorUniqueID.h"
#include "SynchedActorData.h"

#include "../Command/CommandUtils.h"
#include <loader/Loader.h>

class Dimension;
enum class ActorType;
enum class InputMode;
enum class ActorLocation;
enum class MaterialType;
enum class ActorEvent;
enum class ArmorSlot;
enum class ArmorMaterialType;
enum class ArmorTextureType;
enum class LevelSoundEvent;
enum class ItemUseMethod;
enum class PaletteColor;
enum class ActorFlags;
enum class ActorDamageCause;

enum class ActorFlags {
    ONFIRE               = 0,
    SNEAKING             = 1,
    RIDING               = 2,
    SPRINTING            = 3,
    ACTION               = 4,
    INVISIBLE            = 5,
    TEMPTED              = 6,
    INLOVE               = 7,
    SADDLED              = 8,
    POWERED              = 9,
    IGNITED              = 10,
    BABY                 = 11, // disable head scaling
    CONVERTING           = 12,
    CRITICAL             = 13,
    CAN_SHOW_NAMETAG     = 14,
    ALWAYS_SHOW_NAMETAG  = 15,
    IMMOBILE             = 16,
    NO_AI                = 16,
    SILENT               = 17,
    WALLCLIMBING         = 18,
    CAN_CLIMB            = 19,
    SWIMMER              = 20,
    CAN_FLY              = 21,
    WALKER               = 22,
    RESTING              = 23,
    SITTING              = 24, // VERIFIED
    ANGRY                = 25, // VERIFIED
    INTERESTED           = 26,
    CHARGED              = 27,
    TAMED                = 28, // VERIFIED
    ORPHANED             = 29, // VERIFIED
    LEASHED              = 30,
    SHEARED              = 31,
    GLIDING              = 32, // VERIFIED
    ELDER                = 33,
    MOVING               = 34,
    BREATHING            = 35,
    CHESTED              = 36, // VERIFIED
    STACKABLE            = 37,
    SHOWBASE             = 38, // VERIFIED
    STANDING             = 39,
    REARING              = 39,
    VIBRATING            = 40,
    IDLING               = 41,
    EVOKER_SPELL         = 42,
    CHARGE_ATTACK        = 43,
    WASD_CONTROLLED      = 44,
    CAN_POWER_JUMP       = 45, // VERIFIED
    LINGER               = 46,
    PHYSICAL             = 47,
    FIRE_RESISTANCE      = 49,
    DANCING              = 50,
    ENCHANTED            = 51,
    DAMAGE_NEAR_BY_MOBS  = 55,
    SWIMMING             = 56, // VERIFIED
    EATING               = 62,
    LAYING_DWON          = 63,
    TRUSTED              = 65,
    SCARED               = 67, // VERIFIED
    TRADE_INTEREST       = 77,
    DOOR_BREAKER         = 78,
    BREAKING_OBSTRUCTION = 79,
    DOOR_OPENER          = 80,
    ILLAGER_CAPTION      = 81,
    ROARING              = 83,
    DELAYED_ATTACKING    = 84,
    EMOTING              = 90,
};

class Actor {

public:
    enum class InitializationMethod;

    virtual void reloadHardcoded(enum InitializationMethod, class VariantParameterList const&);
    virtual void reloadHardcodedClient(enum InitializationMethod, class VariantParameterList const&);
    virtual void initializeComponents(enum InitializationMethod, class VariantParameterList const&);
    virtual void reloadComponents(enum InitializationMethod, class VariantParameterList const&);
    virtual void _serverInitItemStackIds(void);
    virtual void _doInitialMove(void);
    virtual bool hasComponent(HashedString const&) const;
    virtual ~Actor();
    virtual void                                        reset(void);
    virtual int                                         getOnDeathExperience(void);
    virtual enum ActorType                              getOwnerEntityType(void);
    virtual void                                        remove(void);
    virtual void                                        setPos(Vec3 const&);
    virtual bool                                        isRuntimePredictedMovementEnabled(void) const;
    virtual struct PredictedMovementValues const&       getPredictedMovementValues(void) const;
    virtual class Vec3 const&                           getPos(void) const;
    virtual class Vec3 const&                           getPosOld(void) const;
    virtual class Vec3 const                            getPosExtrapolated(float) const;
    virtual class Vec3                                  getAttachPos(enum ActorLocation, float) const;
    virtual class Vec3                                  getFiringPos(void) const;
    virtual void                                        setRot(class Vec2 const&);
    virtual void                                        move(Vec3 const&);
    virtual void                                        move(struct IActorMovementProxy&, Vec3 const&) const;
    virtual class Vec3                                  getInterpolatedRidingPosition(float) const;
    virtual float                                       getInterpolatedBodyRot(float) const;
    virtual float                                       getInterpolatedHeadRot(float) const;
    virtual float                                       getInterpolatedBodyYaw(float) const;
    virtual float                                       getYawSpeedInDegreesPerSecond(void) const;
    virtual float                                       getInterpolatedWalkAnimSpeed(float) const;
    virtual class Vec3                                  getInterpolatedRidingOffset(float) const;
    virtual void                                        checkBlockCollisions(class AABB const&, class std::function<void(class BlockSource&, class Block const&, class BlockPos const&, class Actor&)>);
    virtual void                                        updateEntityInside(class AABB const&);
    virtual void                                        updateEntityInside(void);
    virtual bool                                        isFireImmune(void) const;
    virtual void                                        breaksFallingBlocks(void) const;
    virtual void                                        blockedByShield(class ActorDamageSource const&, class Actor&);
    virtual void                                        teleportTo(class Vec3 const&, bool, int, int);
    virtual bool                                        tryTeleportTo(class Vec3 const&, bool, bool, int, int);
    virtual void                                        chorusFruitTeleport(class Vec3&);
    virtual void                                        lerpTo(class Vec3 const&, class Vec2 const&, int);
    virtual void                                        lerpMotion(Vec3 const&);
    virtual std::unique_ptr<class AddActorBasePacket>   tryCreateAddActorPacket(void);
    virtual void                                        normalTick(void);
    virtual void                                        baseTick(void);
    virtual void                                        rideTick(void);
    virtual void                                        positionRider(Actor&, float);
    virtual float                                       getRidingHeight(void);
    virtual bool                                        startRiding(Actor&);
    virtual void                                        addRider(Actor&);
    virtual void                                        flagRiderToRemove(Actor&);
    virtual std::string                                 getExitTip(std::string const&, enum InputMode) const;
    virtual void                                        intersects(Vec3 const&, Vec3 const&) const;
    virtual bool                                        isFree(Vec3 const&, float);
    virtual bool                                        isFree(Vec3 const&);
    virtual bool                                        isInWall(void) const;
    virtual bool                                        isInvisible(void) const;
    virtual bool                                        canShowNameTag(void) const;
    virtual bool                                        canExistInPeaceful(void) const;
    virtual void                                        setNameTagVisible(bool);
    virtual std::string const&                          getNameTag(void) const;
    virtual __int64                                     getNameTagAsHash(void) const;
    virtual std::string                                 getFormattedNameTag(void) const;
    virtual void                                        filterFormattedNameTag(class UIProfanityContext const&);
    virtual void                                        setNameTag(std::string const&);
    virtual bool                                        getAlwaysShowNameTag(void) const;
    virtual void                                        setScoreTag(std::string const&);
    virtual std::string const&                          getScoreTag(void) const;
    virtual bool                                        isInWater(void) const;
    virtual bool                                        hasEnteredWater(void) const;
    virtual bool                                        isImmersedInWater(void) const;
    virtual bool                                        isInLava(void) const;
    virtual bool                                        isUnderLiquid(MaterialType) const;
    virtual bool                                        isOverWater(void) const;
    virtual void                                        setBlockMovementSlowdownMultiplier(Vec3 const&);
    virtual void                                        resetBlockMovementSlowdownMultiplier(void);
    virtual float                                       getCameraOffset(void) const;
    virtual float                                       getShadowHeightOffs(void);
    virtual float                                       getShadowRadius(void) const;
    virtual class Vec3                                  getHeadLookVector(float);
    virtual bool                                        canSeeInvisible(void) const;
    virtual bool                                        canSee(Actor const&) const;
    virtual bool                                        canSee(Vec3 const&) const;
    virtual bool                                        isSkyLit(float);
    virtual float                                       getBrightness(float) const;
    virtual void                                        interactPreventDefault(void);
    virtual void                                        playerTouch(Player&);
    virtual void                                        onAboveBubbleColumn(bool);
    virtual void                                        onInsideBubbleColumn(bool);
    virtual bool                                        isImmobile(void) const;
    virtual bool                                        isSilent(void);
    virtual bool                                        isPickable(void);
    virtual bool                                        isFishable(void) const;
    virtual bool                                        isSleeping(void) const;
    virtual bool                                        isShootable(void);
    virtual bool                                        setSneaking(bool);
    virtual bool                                        isBlocking(void) const;
    virtual bool                                        isDamageBlocked(ActorDamageSource const&) const;
    virtual bool                                        isAlive(void) const;
    virtual bool                                        isOnFire(void) const;
    virtual bool                                        isOnHotBlock(void) const;
    virtual bool                                        isCreativeModeAllowed(void);
    virtual bool                                        isSurfaceMob(void) const;
    virtual bool                                        isTargetable(void) const;
    virtual bool                                        isLocalPlayer(void) const;
    virtual bool                                        isPlayer(void) const;
    virtual bool                                        isAffectedByWaterBottle(void) const;
    virtual bool                                        canAttack(Actor*, bool) const;
    virtual void                                        setTarget(Actor*);
    virtual Actor*                                      findAttackTarget(void);
    virtual void                                        isValidTarget(Actor*) const;
    virtual bool                                        attack(Actor&, ActorDamageCause const&);
    virtual void                                        performRangedAttack(Actor&, float);
    virtual void                                        adjustDamageAmount(int&) const;
    virtual int                                         getEquipmentCount(void) const;
    virtual void                                        setOwner(ActorUniqueID);
    virtual void                                        setSitting(bool);
    virtual void                                        onTame(void);
    virtual void                                        onFailedTame(void);
    virtual int                                         getInventorySize(void) const;
    virtual int                                         getEquipSlots(void) const;
    virtual int                                         getChestSlots(void) const;
    virtual void                                        setStanding(bool);
    virtual bool                                        canPowerJump(void) const;
    virtual void                                        setCanPowerJump(bool);
    virtual bool                                        isJumping(void) const;
    virtual bool                                        isEnchanted(void) const;
    virtual void                                        rideJumped(void);
    virtual void                                        rideLanded(Vec3 const&, Vec3 const&);
    virtual bool                                        shouldRender(void) const;
    virtual bool                                        isInvulnerableTo(ActorDamageSource const&) const;
    virtual enum ActorDamageCause                       getBlockDamageCause(Block const&) const;
    virtual void                                        actuallyHurt(int, ActorDamageSource const&, bool);
    virtual void                                        animateHurt(void);
    virtual bool                                        doFireHurt(int);
    virtual void                                        onLightningHit(void);
    virtual void                                        onBounceStarted(BlockPos const&, Block const&);
    virtual void                                        feed(int);
    virtual void                                        handleEntityEvent(ActorEvent, int);
    virtual float                                       getPickRadius(void);
    virtual class HashedString const&                   getActorRendererId(void) const;
    virtual class ItemActor*                            spawnAtLocation(int, int);
    virtual class ItemActor*                            spawnAtLocation(int, int, float);
    virtual class ItemActor*                            spawnAtLocation(Block const&, int);
    virtual class ItemActor*                            spawnAtLocation(Block const&, int, float);
    virtual class ItemActor*                            spawnAtLocation(ItemStack const&, float);
    virtual void                                        despawn(void);
    virtual void                                        killed(Actor&);
    virtual void                                        awardKillScore(Actor&, int);
    virtual void                                        setArmor(ArmorSlot, ItemStack const&);
    virtual class ItemStack const&                      getArmor(ArmorSlot) const;
    virtual enum ArmorMaterialType                      getArmorMaterialTypeInSlot(ArmorSlot) const;
    virtual enum ArmorTextureType                       getArmorMaterialTextureTypeInSlot(ArmorSlot) const;
    virtual float                                       getArmorColorInSlot(ArmorSlot, int) const;
    virtual void                                        getEquippedSlot(enum EquipmentSlot) const;
    virtual void                                        setEquippedSlot(enum EquipmentSlot, ItemStack const&);
    virtual class ItemStack const&                      getCarriedItem(void) const;
    virtual void                                        setCarriedItem(ItemStack const&);
    virtual void                                        setOffhandSlot(ItemStack const&);
    virtual class ItemStack const&                      getEquippedTotem(void) const;
    virtual bool                                        consumeTotem(void);
    virtual bool                                        save(CompoundTag&);
    virtual void                                        saveWithoutId(CompoundTag&);
    virtual bool                                        load(CompoundTag const&, class DataLoadHelper&);
    virtual void                                        loadLinks(CompoundTag const&, std::vector<struct ActorLink>&, DataLoadHelper&);
    virtual enum ActorType                              getEntityTypeId(void) const;
    virtual class HashedString const&                   queryEntityRenderer(void) const;
    virtual ActorUniqueID                               getSourceUniqueID(void) const;
    virtual void                                        setOnFire(int);
    virtual void                                        extinguishFire(void);
    virtual void                                        thawFreezeEffect(void);
    virtual bool                                        canFreeze(void) const;
    virtual bool const                                  isWearingLeatherArmor(void) const;
    virtual class AABB                                  getHandleWaterAABB(void) const;
    virtual void                                        handleInsidePortal(BlockPos const&);
    virtual int                                         getPortalCooldown(void) const;
    virtual int                                         getPortalWaitTime(void) const;
    virtual class AutomaticID<class Dimension, int>     getDimensionId(void) const;
    virtual bool                                        canChangeDimensions(void) const;
    virtual void                                        changeDimension(AutomaticID<Dimension, int>, bool);
    virtual void                                        changeDimension(class ChangeDimensionPacket const&);
    virtual ActorUniqueID                               getControllingPlayer(void) const;
    virtual void                                        checkFallDamage(float, bool);
    virtual void                                        causeFallDamage(float, float, ActorDamageSource);
    virtual void                                        handleFallDistanceOnServer(float, float, bool);
    virtual void                                        playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool);
    virtual void                                        playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool);
    virtual void                                        onSynchedDataUpdate(int);
    virtual bool                                        canAddRider(Actor&) const;
    virtual bool                                        canPickupItem(ItemStack const&) const;
    virtual bool                                        canBePulledIntoVehicle(void) const;
    virtual bool                                        inCaravan(void) const;
    virtual bool                                        isLeashableType(void);
    virtual void                                        tickLeash(void);
    virtual void                                        sendMotionPacketIfNeeded(void);
    virtual bool                                        canSynchronizeNewEntity(void) const;
    virtual void                                        stopRiding(bool, bool, bool);
    virtual void                                        startSwimming(void);
    virtual void                                        stopSwimming(void);
    virtual void                                        buildDebugInfo(std::string&) const;
    virtual enum CommandPermissionLevel                 getCommandPermissionLevel(void) const;
    virtual bool                                        isClientSide(void) const;
    virtual void                                        getMutableAttribute(class Attribute const&);
    virtual void                                        getAttribute(class Attribute const&) const;
    virtual int                                         getDeathTime(void) const;
    virtual void                                        heal(int);
    virtual bool                                        isInvertedHealAndHarm(void) const;
    virtual bool                                        canBeAffected(int) const;
    virtual bool                                        canBeAffected(class MobEffectInstance const&) const;
    virtual bool                                        canBeAffectedByArrow(class MobEffectInstance const&) const;
    virtual void                                        onEffectAdded(class MobEffectInstance&);
    virtual void                                        onEffectUpdated(class MobEffectInstance const&);
    virtual void                                        onEffectRemoved(class MobEffectInstance&);
    virtual class AnimationComponent                    getAnimationComponent(void);
    virtual void                                        openContainerComponent(Player&);
    virtual void                                        swing(void);
    virtual void                                        useItem(ItemStackBase&, ItemUseMethod, bool);
    virtual bool                                        hasOutputSignal(unsigned char) const;
    virtual int                                         getOutputSignal(void) const;
    virtual void                                        getDebugText(std::vector<std::string>&);
    virtual float                                       getMapDecorationRotation(void) const;
    virtual float                                       getRiderYRotation(Actor const&) const;
    virtual float                                       getYHeadRot(void) const;
    virtual bool                                        isWorldBuilder(void);
    virtual bool                                        isCreative(void) const;
    virtual bool                                        isAdventure(void) const;
    virtual bool                                        add(ItemStack&);
    virtual bool                                        drop(ItemStack const&, bool);
    virtual bool                                        getInteraction(Player&, class ActorInteraction&, Vec3 const&);
    virtual bool                                        canDestroyBlock(Block const&) const;
    virtual void                                        setAuxValue(int);
    virtual void                                        setSize(float, float);
    virtual int                                         getLifeSpan(void) const;
    virtual void                                        onOrphan(void);
    virtual void                                        wobble(void);
    virtual bool                                        wasHurt(void);
    virtual void                                        startSpinAttack(void);
    virtual void                                        stopSpinAttack(void);
    virtual void                                        setDamageNearbyMobs(bool);
    virtual void                                        renderDebugServerState(class Options const&);
    virtual void                                        reloadLootTable(void);
    virtual void                                        reloadLootTable(class EquipmentTableDefinition const&);
    virtual class LootTable*                            getLootTable(void);
    virtual class LootTable*                            getDefaultLootTable(void);
    virtual float                                       getDeletionDelayTimeSeconds(void) const;
    virtual void                                        kill(void);
    virtual void                                        die(ActorDamageSource const&);
    virtual bool                                        shouldTick(void) const;
    virtual std::shared_ptr<struct IActorMovementProxy> createMovementProxy(void);
    virtual std::shared_ptr<struct IActorMovementProxy> getMovementProxy(void) const;
    virtual float                                       getNextStep(float);
    virtual void                                        updateEntitySpecificMolangVariables(class RenderParams&);
    virtual bool                                        shouldTryMakeStepSound(void);
    virtual bool                                        canMakeStepSound(void) const;
    virtual void                                        outOfWorld(void);
    virtual bool                                        _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void                                        markHurt(void);
    virtual class AnimationComponent&                   _getAnimationComponent(std::shared_ptr<AnimationComponent>&, enum AnimationComponentGroup);
    virtual void                                        readAdditionalSaveData(CompoundTag const&, DataLoadHelper&);
    virtual void                                        addAdditionalSaveData(CompoundTag&);
    virtual void                                        _playStepSound(BlockPos const&, Block const&);
    virtual void                                        _playFlySound(BlockPos const&, Block const&);
    virtual void                                        _makeFlySound(void) const;
    virtual void                                        checkInsideBlocks(float);
    virtual void                                        pushOutOfBlocks(Vec3 const&);
    virtual bool                                        updateWaterState(void);
    virtual void                                        doWaterSplashEffect(void);
    virtual void                                        spawnTrailBubbles(void);
    virtual void                                        updateInsideBlock(void);
    virtual void                                        _removeRider(ActorUniqueID const&, bool, bool, bool);
    virtual void                                        _onSizeUpdated(void);
    virtual void                                        _doAutoAttackOnTouch(Actor&);

    MCAPI bool isRiding(void) const;
    MCAPI bool isSneaking(void) const;
    MCAPI bool isRider(class Actor const&) const;
    MCAPI bool isUnderWaterfall(void) const;
    MCAPI bool isInsideBorderBlock(float) const;
    MCAPI bool isControlledByLocalInstance(void) const;
    MCAPI bool isWithinRestriction(class BlockPos const&) const;

    MCAPI int                        getSkinID(void) const;
    MCAPI int                        getVariant(void) const;
    MCAPI int                        getStrength(void) const;
    MCAPI int                        getMarkVariant(void) const;
    MCAPI int                        getControllingSeat(void);
    MCAPI class Dimension&           getDimension(void) const;
    MCAPI class SimpleContainer&     getHandContainer(void);
    MCAPI ActorRuntimeID             getRuntimeID(void) const;
    MCAPI int                        getRiderIndex(class Actor&) const;
    MCAPI int                        getStructuralIntegrity(void) const;
    MCAPI class Vec3                 getViewVector(float) const;
    MCAPI enum PaletteColor          getColor(void) const;
    MCAPI enum PaletteColor          getColor2(void) const;
    MCAPI struct ActorUniqueID const getOwnerId(void) const;
    MCAPI bool                       getStatusFlag(enum ActorFlags) const;
    MCAPI std::vector<struct ActorLink> getLinks(void) const;
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers(void);
    MCAPI class Actor*                       getTarget(void) const;
    MCAPI class Mob*                         getOwner(void) const;
    MCAPI class Actor*                       getRideRoot(void) const;
    MCAPI class Player*                      getTradingPlayer(void) const;
    MCAPI class Player*                      getPlayerOwner(void) const;
    MCAPI class ITickingArea*                getTickingArea(void);
    MCAPI class MerchantRecipeList*          getTradeOffers(void);
    MCAPI class MobEffectInstance const*     getEffect(class MobEffect const&) const;
    MCAPI struct ActorUniqueID const&        getUniqueID(void) const;
    MCAPI void                               setSkinID(int);
    MCAPI void                               setCanFly(bool);
    MCAPI void                               setHurtDir(int);
    MCAPI void                               setVariant(int);
    MCAPI void                               setHurtTime(int);
    MCAPI void                               setStrength(int);
    MCAPI void                               setCanClimb(bool);
    MCAPI void                               setPersistent(void);
    MCAPI void                               setInvisible(bool);
    MCAPI void                               setInLove(class Actor*);
    MCAPI void                               setLimitedLife(int);
    MCAPI void                               setMarkVariant(int);
    MCAPI void                               setStrengthMax(int);
    MCAPI void                               setJumpDuration(int);
    MCAPI void                               setStructuralIntegrity(int);
    MCAPI void                               setColor(enum PaletteColor);
    MCAPI void                               setColor2(enum PaletteColor);
    MCAPI void                               setTradingPlayer(class Player*);
    MCAPI void                               setLeashHolder(struct ActorUniqueID);
    MCAPI bool                               setStatusFlag(enum ActorFlags, bool);
    MCAPI void                               setActorRendererId(class HashedString);
    MCAPI void                               setPreviousPosRot(class Vec3 const&, class Vec2 const&);
    MCAPI void                               setSeatDescription(class Vec3 const&, struct SeatDescription const&);
    MCAPI void                               setBaseDefinition(struct ActorDefinitionIdentifier const&, bool, bool);

    MCAPI bool hasPlayerRider(void) const;
    MCAPI bool hasRestriction(void) const;
    MCAPI bool hasSubBBInLava(void) const;
    MCAPI bool hasTickingArea(void) const;
    MCAPI bool hasEffect(class MobEffect const&) const;
    MCAPI bool hasFamily(class HashedString const&) const;
    MCAPI bool hasTag(std::string const&) const;

    MCAPI void addEffect(class MobEffectInstance const&);
    MCAPI bool addTag(std::string const&);

    MCAPI bool removeTag(std::string const&);
    MCAPI void removeEffect(int);
    MCAPI void removeAllEffects(void);
    MCAPI void removeAllRiders(bool, bool);
    MCAPI void removeEffectParticles(void);

    MCAPI void updateDescription(void);
    MCAPI void updateTickingData(void);
    MCAPI void updateBBFromDescription(void);
    MCAPI void updateInvisibilityStatus(void);
    MCAPI void updateInBubbleColumnState(void);

    MCAPI void moveTo(class Vec3 const&, class Vec2 const&);
    MCAPI void teleportRidersTo(class Vec3 const&, int, int);

    MCAPI void saveEntityFlags(class CompoundTag&);
    MCAPI std::unique_ptr<class ListTag> saveLinks(void) const;
    MCAPI void                           savePersistingTrade(std::unique_ptr<class CompoundTag>, int);

    MCAPI bool canCurrentlySwim(void) const;
    MCAPI bool canBeginOrContinueClimbingLadder(bool) const;

    MCAPI void spawnDeathParticles(void);
    MCAPI void spawnDustParticles(int);
    MCAPI void spawnTamingParticles(bool);
    MCAPI void spawnBalloonPopParticles(void);
    MCAPI void spawnEatParticles(class ItemStack const&, int);

    MCAPI void sendMotionToServer(void);
    MCAPI void sendActorDefinitionEventTriggered(std::string const&);
    MCAPI void _sendDirtyActorData(void);

    MCAPI void forEachLeashedActor(class A6AXPEAVfunction);

    MCAPI bool               shouldOrphan(class BlockSource&);
    MCAPI class BlockSource const& getRegionConst(void)const;

    MCAPI bool       onLadder(bool) const;
    MCAPI void       reload(void);
    MCAPI bool       moveChunks(void);
    MCAPI void       dropLeash(bool, bool);
    MCAPI void       moveBBs(class Vec3 const&);
    MCAPI void       positionAllRiders(void);
    MCAPI bool       pullInEntity(class Actor&);
    MCAPI bool       _tryPlaceAt(class Vec3 const&);
    MCAPI bool       tick(class BlockSource&);
    MCAPI class Vec3 _randomHeartPos(void);
    MCAPI void       pickUpItem(class ItemActor&, int);
    MCAPI int        calculateAttackDamage(class Actor&);
    MCAPI bool       hurt(class ActorDamageSource const&, int, bool, bool);
    MCAPI void       dropTowards(class ItemStack const&, class Vec3);
    MCAPI void       transferTickingArea(class Dimension&);
    MCAPI void       initEntity(class EntityRegistryOwned&);
    MCAPI void       playSound(enum LevelSoundEvent, class Vec3 const&, int);
    MCAPI void       pushBackActionEventToActionQueue(class ActionEvent);
    MCAPI void       loadEntityFlags(class CompoundTag const&, class DataLoadHelper&);
    MCAPI void       testForCollidableMobs(class BlockSource&, class AABB const&, std::vector<class AABB>&);
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const&, enum ActorType);

    template <typename T>
    MCAPI T* tryGetComponent(void);
    template <typename T>
    MCAPI T const* tryGetComponent(void) const;

    std::string getEntityName() const {
        return CommandUtils::getActorName(*this);
    }

    void teleport(Vec3 target, Vec3 old, AutomaticID<Dimension, int> dim, RelativeFloat yaw = {0}, RelativeFloat pitch = {0}, int flag = 15) {
        auto tpTarget = TeleportCommand::computeTarget(*this, target, &old, dim, yaw, pitch, flag);
        TeleportCommand::applyTarget(*this, tpTarget);
    }

    //AS_FIELD(ActorRuntimeID, RuntimeID, getRuntimeID);
    //BUILD_ACCESS_COMPAT(SimpleContainer&, EquipmentContainer);
    //BUILD_ACCESS_COMPAT(SimpleContainer&, HandContainer);
    //BUILD_ACCESS_COMPAT(SynchedActorData&, EntityData);
};