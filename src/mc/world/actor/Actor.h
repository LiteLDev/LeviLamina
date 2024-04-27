#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/dataloadhelper/DefaultDataLoadHelper.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/math/Vec3.h"
#include "mc/world/actor/DistanceSortedActor.h"
#include "mc/world/actor/common/ClipDefaults.h"
#include "mc/world/phys/HitResult.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/entity/utilities/ActorStatusProvider.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/PaletteColor.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ActorDamageSource;

class Actor : public ::ActorStatusProvider {
public:
    // Actor inner types define
    enum class InitializationMethod : uchar {
        Invalid     = 0x0,
        Loaded      = 0x1,
        Spawned     = 0x2,
        Born        = 0x3,
        Transformed = 0x4,
        Updated     = 0x5,
        Event       = 0x6,
        Legacy      = 0x7,
    };

    // vptr 8
    uchar filler[1136 - 8]; // IDA BDS1.20.61.01 ItemActor::ItemActor line=29

public:
    LLNDAPI class EntityContext&       getEntityContext();
    LLNDAPI class EntityContext const& getEntityContext() const;

    LLAPI void refresh();

    LLAPI optional_ref<Actor> clone(Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt) const;

    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI class Vec3 getFeetPos() const;

    LLNDAPI class Vec3 getHeadPos() const;

    LLNDAPI class BlockPos getFeetBlockPos() const;

    LLNDAPI bool isSimulatedPlayer() const;

    LLNDAPI bool isOnGround() const;

    LLAPI void setOnFire(int time, bool isEffect = true);
    LLAPI void stopFire();

    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurtByCause(
        float               damage,
        ActorDamageCause    cause    = ActorDamageCause::Override,
        optional_ref<Actor> attacker = std::nullopt
    );

    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            ClipDefaults::CHECK_ALL_PICKABLE_BLOCKS
    ) const;

    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId);

    LLAPI void setName(std::string const& name);

    LLNDAPI float evalMolang(std::string const& expression);

    // prevent constructor by default
    Actor& operator=(Actor const&);
    Actor(Actor const&);
    Actor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?getStatusFlag@Actor@@UEBA_NW4ActorFlags@@@Z
    virtual bool getStatusFlag(::ActorFlags flag) const;

    // vIndex: 1, symbol: ?setStatusFlag@Actor@@UEAAXW4ActorFlags@@_N@Z
    virtual void setStatusFlag(::ActorFlags flag, bool value);

    // vIndex: 2, symbol: ?hasComponent@Actor@@UEBA_NAEBVHashedString@@@Z
    virtual bool hasComponent(class HashedString const& name) const;

    // vIndex: 3, symbol: ?outOfWorld@Actor@@UEAAXXZ
    virtual void outOfWorld();

    // vIndex: 4, symbol: ?reloadHardcoded@Actor@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol: ?reloadHardcodedClient@Actor@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6, symbol: ?initializeComponents@Actor@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 7, symbol: ?reloadComponents@Actor@@MEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 8, symbol: ?_serverInitItemStackIds@Actor@@MEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 9, symbol: ?_doInitialMove@Actor@@MEAAXXZ
    virtual void _doInitialMove();

    // vIndex: 10, symbol: ??1Actor@@UEAA@XZ
    virtual ~Actor();

    // vIndex: 11, symbol: ?resetUserPos@Actor@@UEAAX_N@Z
    virtual void resetUserPos(bool clearMore);

    // vIndex: 12, symbol: ?getOwnerEntityType@Actor@@UEAA?AW4ActorType@@XZ
    virtual ::ActorType getOwnerEntityType();

    // vIndex: 13, symbol: ?remove@Actor@@UEAAXXZ
    virtual void remove();

    // vIndex: 14, symbol: ?getFiringPos@Actor@@UEBA?AVVec3@@XZ
    virtual class Vec3 getFiringPos() const;

    // vIndex: 15, symbol: ?getInterpolatedBodyRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyRot(float a) const;

    // vIndex: 16, symbol: ?getInterpolatedHeadRot@Actor@@UEBAMM@Z
    virtual float getInterpolatedHeadRot(float lerpFactor = 0.0f) const;

    // vIndex: 17, symbol: ?getInterpolatedBodyYaw@Actor@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float lerpFactor = 0.0f) const;

    // vIndex: 18, symbol: ?getYawSpeedInDegreesPerSecond@Actor@@UEBAMXZ
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 19, symbol: ?getInterpolatedRidingOffset@Actor@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 20, symbol: ?isFireImmune@Actor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 21, symbol: ?blockedByShield@Actor@@UEAAXAEBVActorDamageSource@@AEAV1@@Z
    virtual void blockedByShield(class ActorDamageSource const& source, class Actor& blocker);

    // vIndex: 22, symbol: ?canDisableShield@Actor@@UEAA_NXZ
    virtual bool canDisableShield();

    // vIndex: 23, symbol: ?teleportTo@Actor@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int entityType, bool);

    // vIndex: 24, symbol: ?lerpMotion@Actor@@UEAAXAEBVVec3@@@Z
    virtual void lerpMotion(class Vec3 const& delta);

    // vIndex: 25, symbol:
    // ?tryCreateAddActorPacket@Actor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 26, symbol: ?normalTick@Actor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 27, symbol: ?baseTick@Actor@@UEAAXXZ
    virtual void baseTick();

    // vIndex: 28, symbol: ?passengerTick@Actor@@UEAAXXZ
    virtual void passengerTick();

    // vIndex: 29, symbol: ?startRiding@Actor@@UEAA_NAEAV1@@Z
    virtual bool startRiding(class Actor&);

    // vIndex: 30, symbol: ?addPassenger@Actor@@UEAAXAEAV1@@Z
    virtual void addPassenger(class Actor&);

    // vIndex: 31, symbol:
    // ?getExitTip@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@W4InputMode@@W4NewInteractionModel@@@Z
    virtual std::string getExitTip(std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    // vIndex: 32, symbol:
    // ?getEntityLocNameString@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getEntityLocNameString() const;

    // vIndex: 33, symbol: ?isInWall@Actor@@UEBA_NXZ
    virtual bool isInWall() const;

    // vIndex: 34, symbol: ?isInvisible@Actor@@UEBA_NXZ
    virtual bool isInvisible() const;

    // vIndex: 35, symbol: ?canShowNameTag@Actor@@UEBA_NXZ
    virtual bool canShowNameTag() const;

    // vIndex: 36, symbol:
    // ?getFormattedNameTag@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getFormattedNameTag() const;

    // vIndex: 37, symbol: ?getNameTagTextColor@Actor@@UEBA?AVColor@mce@@XZ
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 38, symbol: ?getShadowRadius@Actor@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 39, symbol: ?getHeadLookVector@Actor@@UEBA?AVVec3@@M@Z
    virtual class Vec3 getHeadLookVector(float lerpFactor = 0.0f) const;

    // vIndex: 40, symbol: ?canInteractWithOtherEntitiesInGame@Actor@@UEBA_NXZ
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 41, symbol: ?getBrightness@Actor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float a, class IConstBlockSource const& region) const;

    // vIndex: 42, symbol: ?playerTouch@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 43, symbol: ?isImmobile@Actor@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 44, symbol: ?isSilentObserver@Actor@@UEBA_NXZ
    virtual bool isSilentObserver() const;

    // vIndex: 45, symbol: ?isPickable@Actor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 46, symbol: ?isSleeping@Actor@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 47, symbol: ?setSleeping@Actor@@UEAAX_N@Z
    virtual void setSleeping(bool val);

    // vIndex: 48, symbol: ?setSneaking@Actor@@UEAAX_N@Z
    virtual void setSneaking(bool value);

    // vIndex: 49, symbol: ?isBlocking@Actor@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 50, symbol: ?isDamageBlocked@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isDamageBlocked(class ActorDamageSource const& source) const;

    // vIndex: 51, symbol: ?isAlive@Actor@@UEBA_NXZ
    virtual bool isAlive() const;

    // vIndex: 52, symbol: ?isOnFire@Actor@@UEBA_NXZ
    virtual bool isOnFire() const;

    // vIndex: 53, symbol: ?isSurfaceMob@Actor@@UEBA_NXZ
    virtual bool isSurfaceMob() const;

    // vIndex: 54, symbol: ?isTargetable@Actor@@UEBA_NXZ
    virtual bool isTargetable() const;

    // vIndex: 55, symbol: ?canAttack@Actor@@UEBA_NPEAV1@_N@Z
    virtual bool canAttack(class Actor* entity, bool allowInvulnerable) const;

    // vIndex: 56, symbol: ?setTarget@Actor@@UEAAXPEAV1@@Z
    virtual void setTarget(class Actor* entity);

    // vIndex: 57, symbol: ?isValidTarget@Actor@@UEBA_NPEAV1@@Z
    virtual bool isValidTarget(class Actor* attacker) const;

    // vIndex: 58, symbol: ?attack@Actor@@UEAA_NAEAV1@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor& target, ::ActorDamageCause const& cause);

    // vIndex: 59, symbol: ?performRangedAttack@Actor@@UEAAXAEAV1@M@Z
    virtual void performRangedAttack(class Actor& target, float power);

    // vIndex: 60, symbol: ?setOwner@Actor@@UEAAXUActorUniqueID@@@Z
    virtual void setOwner(struct ActorUniqueID ownerId);

    // vIndex: 61, symbol: ?setSitting@Actor@@UEAAX_N@Z
    virtual void setSitting(bool value);

    // vIndex: 62, symbol: ?onTame@Actor@@UEAAXXZ
    virtual void onTame();

    // vIndex: 63, symbol: ?onFailedTame@Actor@@UEAAXXZ
    virtual void onFailedTame();

    // vIndex: 64, symbol: ?setStanding@Actor@@UEAAX_N@Z
    virtual void setStanding(bool value);

    // vIndex: 65, symbol: ?canPowerJump@Actor@@UEBA_NXZ
    virtual bool canPowerJump() const;

    // vIndex: 66, symbol: ?isEnchanted@Actor@@UEBA_NXZ
    virtual bool isEnchanted() const;

    // vIndex: 67, symbol: ?shouldRender@Actor@@UEBA_NXZ
    virtual bool shouldRender() const;

    // vIndex: 68, symbol: ?playAmbientSound@Actor@@UEAAXXZ
    virtual void playAmbientSound();

    // vIndex: 69, symbol: ?getAmbientSound@Actor@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 70, symbol: ?isInvulnerableTo@Actor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 71, symbol: ?getBlockDamageCause@Actor@@UEBA?AW4ActorDamageCause@@AEBVBlock@@@Z
    virtual ::ActorDamageCause getBlockDamageCause(class Block const& block) const;

    // vIndex: 72, symbol: ?doFireHurt@Actor@@UEAA_NH@Z
    virtual bool doFireHurt(int amount);

    // vIndex: 73, symbol: ?onLightningHit@Actor@@UEAAXXZ
    virtual void onLightningHit();

    // vIndex: 74, symbol: ?feed@Actor@@UEAAXH@Z
    virtual void feed(int itemId);

    // vIndex: 75, symbol: ?handleEntityEvent@Actor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 76, symbol: ?getPickRadius@Actor@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 77, symbol: ?getActorRendererId@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 78, symbol: ?despawn@Actor@@UEAAXXZ
    virtual void despawn();

    // vIndex: 79, symbol: ?setArmor@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 80, symbol: ?getArmorMaterialTypeInSlot@Actor@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 81, symbol: ?getArmorMaterialTextureTypeInSlot@Actor@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z
    virtual ::ArmorTextureType getArmorMaterialTextureTypeInSlot(::ArmorSlot) const;

    // vIndex: 82, symbol: ?getArmorColorInSlot@Actor@@UEBAMW4ArmorSlot@@H@Z
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 83, symbol: ?setEquippedSlot@Actor@@UEAAXW4EquipmentSlot@Legacy@Puv@@AEBVItemStack@@@Z
    virtual void setEquippedSlot(::Puv::Legacy::EquipmentSlot, class ItemStack const&);

    // vIndex: 84, symbol: ?setCarriedItem@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const& item);

    // vIndex: 85, symbol: ?getCarriedItem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 86, symbol: ?setOffhandSlot@Actor@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 87, symbol: ?getEquippedTotem@Actor@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 88, symbol: ?consumeTotem@Actor@@UEAA_NXZ
    virtual bool consumeTotem();

    // vIndex: 89, symbol: ?save@Actor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& entityTag) const;

    // vIndex: 90, symbol: ?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 91, symbol: ?queryEntityRenderer@Actor@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& queryEntityRenderer() const;

    // vIndex: 92, symbol: ?getSourceUniqueID@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 93, symbol: ?canFreeze@Actor@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 94, symbol: ?getLiquidAABB@Actor@@UEBA?AVAABB@@W4MaterialType@@@Z
    virtual class AABB getLiquidAABB(::MaterialType liquidType) const;

    // vIndex: 95, symbol: ?handleInsidePortal@Actor@@UEAAXAEBVBlockPos@@@Z
    virtual void handleInsidePortal(class BlockPos const& portalPos);

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@Actor@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 97, symbol: ?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimension(DimensionType toId);

    // vIndex: 98, symbol: ?changeDimension@Actor@@UEAAXAEBVChangeDimensionPacket@@@Z
    virtual void changeDimension(class ChangeDimensionPacket const& packet);

    // vIndex: 99, symbol: ?getControllingPlayer@Actor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 100, symbol: ?causeFallDamageToActor@Actor@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 101, symbol: ?onSynchedDataUpdate@Actor@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 102, symbol: ?canAddPassenger@Actor@@UEBA_NAEAV1@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 103, symbol: ?canPickupItem@Actor@@UEBA_NAEBVItemStack@@@Z
    virtual bool canPickupItem(class ItemStack const& item) const;

    // vIndex: 104, symbol: ?canBePulledIntoVehicle@Actor@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 105, symbol: ?inCaravan@Actor@@UEBA_NXZ
    virtual bool inCaravan() const;

    // vIndex: 106, symbol: ?sendMotionPacketIfNeeded@Actor@@UEAAXAEBUPlayerMovementSettings@@@Z
    virtual void sendMotionPacketIfNeeded(struct PlayerMovementSettings const&);

    // vIndex: 107, symbol: ?canSynchronizeNewEntity@Actor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 108, symbol: ?startSwimming@Actor@@UEAAXXZ
    virtual void startSwimming();

    // vIndex: 109, symbol: ?stopSwimming@Actor@@UEAAXXZ
    virtual void stopSwimming();

    // vIndex: 110, symbol:
    // ?buildDebugInfo@Actor@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void buildDebugInfo(std::string& out) const;

    // vIndex: 111, symbol: ?getCommandPermissionLevel@Actor@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 112, symbol: ?getDeathTime@Actor@@UEBAHXZ
    virtual int getDeathTime() const;

    // vIndex: 113, symbol: ?canBeAffected@Actor@@UEBA_NI@Z
    virtual bool canBeAffected(uint id) const;

    // vIndex: 114, symbol: ?canBeAffectedByArrow@Actor@@UEBA_NAEBVMobEffectInstance@@@Z
    virtual bool canBeAffectedByArrow(class MobEffectInstance const& effect) const;

    // vIndex: 115, symbol: ?onEffectRemoved@Actor@@UEAAXAEAVMobEffectInstance@@@Z
    virtual void onEffectRemoved(class MobEffectInstance& effect);

    // vIndex: 116, symbol: ?canObstructSpawningAndBlockPlacement@Actor@@UEBA_NXZ
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 117, symbol: ?getAnimationComponent@Actor@@UEAAAEAVAnimationComponent@@XZ
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 118, symbol: ?openContainerComponent@Actor@@UEAAXAEAVPlayer@@@Z
    virtual void openContainerComponent(class Player& player);

    // vIndex: 119, symbol: ?swing@Actor@@UEAAXXZ
    virtual void swing();

    // vIndex: 120, symbol: ?useItem@Actor@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
    virtual void useItem(class ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    // vIndex: 121, symbol:
    // ?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual void getDebugText(std::vector<std::string>& outputInfo);

    // vIndex: 122, symbol: ?getMapDecorationRotation@Actor@@UEBAMXZ
    virtual float getMapDecorationRotation() const;

    // vIndex: 123, symbol: ?getPassengerYRotation@Actor@@UEBAMAEBV1@@Z
    virtual float getPassengerYRotation(class Actor const&) const;

    // vIndex: 124, symbol: ?add@Actor@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack& item);

    // vIndex: 125, symbol: ?drop@Actor@@UEAA_NAEBVItemStack@@_N@Z
    virtual bool drop(class ItemStack const& item, bool randomly);

    // vIndex: 126, symbol: ?getInteraction@Actor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
    virtual bool getInteraction(class Player& player, class ActorInteraction& interaction, class Vec3 const& location);

    // vIndex: 127, symbol: ?canDestroyBlock@Actor@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroyBlock(class Block const& block) const;

    // vIndex: 128, symbol: ?setAuxValue@Actor@@UEAAXH@Z
    virtual void setAuxValue(int val);

    // vIndex: 129, symbol: ?startSpinAttack@Actor@@UEAAXXZ
    virtual void startSpinAttack();

    // vIndex: 130, symbol: ?stopSpinAttack@Actor@@UEAAXXZ
    virtual void stopSpinAttack();

    // vIndex: 131, symbol: ?renderDebugServerState@Actor@@UEAAXAEBVOptions@@@Z
    virtual void renderDebugServerState(class Options const& options);

    // vIndex: 132, symbol: ?kill@Actor@@UEAAXXZ
    virtual void kill();

    // vIndex: 133, symbol: ?die@Actor@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 134, symbol: ?shouldDropDeathLoot@Actor@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 135, symbol: ?applySnapshot@Actor@@UEAAXAEBVEntityContext@@0@Z
    virtual void
    applySnapshot(class EntityContext const& snapshotEntity, class EntityContext const& originalSnapshotEntity);

    // vIndex: 136, symbol: ?getNextStep@Actor@@UEAAMM@Z
    virtual float getNextStep(float);

    // vIndex: 137, symbol: ?onPush@Actor@@UEAAXAEAV1@@Z
    virtual void onPush(class Actor&);

    // vIndex: 138, symbol: ?getLastDeathPos@Actor@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 139, symbol: ?getLastDeathDimension@Actor@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
    virtual std::optional<DimensionType> getLastDeathDimension() const;

    // vIndex: 140, symbol: ?hasDiedBefore@Actor@@UEBA_NXZ
    virtual bool hasDiedBefore() const;

    // vIndex: 141, symbol: ?doEnterWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doEnterWaterSplashEffect();

    // vIndex: 142, symbol: ?doExitWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doExitWaterSplashEffect();

    // vIndex: 143, symbol: ?doWaterSplashEffect@Actor@@UEAAXXZ
    virtual void doWaterSplashEffect();

    // vIndex: 144, symbol: ?_shouldProvideFeedbackOnHandContainerItemSet@Actor@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, class ItemStack const& item) const;

    // vIndex: 145, symbol: ?_shouldProvideFeedbackOnArmorSet@Actor@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, class ItemStack const& item) const;

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@Actor@@MEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 147, symbol: ?shouldTryMakeStepSound@Actor@@MEAA_NXZ
    virtual bool shouldTryMakeStepSound();

    // vIndex: 148, symbol: ?_hurt@Actor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Actor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Actor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151, symbol: ?_playStepSound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void _playStepSound(class BlockPos const& pos, class Block const& onBlock);

    // vIndex: 152, symbol: ?_doAutoAttackOnTouch@Actor@@EEAAXAEAV1@@Z
    virtual void _doAutoAttackOnTouch(class Actor& entity);

    // symbol: ??0Actor@@QEAA@AEAVILevel@@AEAVEntityContext@@@Z
    MCAPI Actor(class ILevel& level, class EntityContext& entityContext);

    // symbol: ??0Actor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Actor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?_sendDirtyActorData@Actor@@QEAAXXZ
    MCAPI void _sendDirtyActorData();

    // symbol: ?_setActorTypeId@Actor@@QEAAXW4ActorType@@@Z
    MCAPI void _setActorTypeId(::ActorType type);

    // symbol: ?_setLevelPtr@Actor@@QEAAXPEAVILevel@@@Z
    MCAPI void _setLevelPtr(class ILevel* level);

    // symbol: ?addCategory@Actor@@QEAAXAEBW4ActorCategory@@@Z
    MCAPI void addCategory(::ActorCategory const& category);

    // symbol: ?addDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addDefinitionGroup(std::string const& name);

    // symbol: ?addEffect@Actor@@QEAAXAEBVMobEffectInstance@@@Z
    MCAPI void addEffect(class MobEffectInstance const& effect);

    // symbol: ?addTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool addTag(std::string const& tag);

    // symbol: ?applyImpulse@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void applyImpulse(class Vec3 const&);

    // symbol: ?buildDebugGroupInfo@Actor@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void buildDebugGroupInfo(std::string& out) const;

    // symbol: ?buildForward@Actor@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 buildForward() const;

    // symbol: ?burn@Actor@@QEAAXH_N@Z
    MCAPI void burn(int dmg, bool bInFire);

    // symbol: ?calcCenterPos@Actor@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 calcCenterPos() const;

    // symbol: ?calculateAttackDamage@Actor@@QEAAMAEAV1@@Z
    MCAPI float calculateAttackDamage(class Actor& entity);

    // symbol: ?canBeginOrContinueClimbingLadder@Actor@@QEBA_NXZ
    MCAPI bool canBeginOrContinueClimbingLadder() const;

    // symbol: ?canCurrentlySwim@Actor@@QEBA_NXZ
    MCAPI bool canCurrentlySwim() const;

    // symbol: ?canFly@Actor@@QEBA_NXZ
    MCAPI bool canFly() const;

    // symbol: ?canMate@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool canMate(class Actor const& partner) const;

    // symbol: ?canReceiveMobEffectsFromGameplay@Actor@@QEBA_NXZ
    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    // symbol: ?canSee@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool canSee(class Actor const& target) const;

    // symbol: ?canSee@Actor@@QEBA_NAEBVVec3@@@Z
    MCAPI bool canSee(class Vec3 const& v) const;

    // symbol: ?canSeeDaylight@Actor@@QEBA_NXZ
    MCAPI bool canSeeDaylight() const;

    // symbol: ?celebrateHunt@Actor@@QEAAXH_N@Z
    MCAPI void celebrateHunt(int duration, bool special);

    // symbol: ?checkFallDamage@Actor@@QEAAXM_N0@Z
    MCAPI void checkFallDamage(float, bool, bool);

    // symbol: ?chorusFruitTeleport@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void chorusFruitTeleport(class Vec3 const& range);

    // symbol: ?clearFishingHookID@Actor@@QEAAXXZ
    MCAPI void clearFishingHookID();

    // symbol: ?closerThan@Actor@@QEBA_NAEBV1@M@Z
    MCAPI bool closerThan(class Actor const& e, float distance) const;

    // symbol: ?closerThan@Actor@@QEBA_NAEBV1@MM@Z
    MCAPI bool closerThan(class Actor const& e, float, float) const;

    // symbol: ?consumeItem@Actor@@QEAAXAEAVItemActor@@H@Z
    MCAPI void consumeItem(class ItemActor& itemActor, int count);

    // symbol: ?createUpdateEquipPacket@Actor@@QEAA?AVUpdateEquipPacket@@H@Z
    MCAPI class UpdateEquipPacket createUpdateEquipPacket(int containerID);

    // symbol: ?createUpdateTradePacket@Actor@@QEAA?AVUpdateTradePacket@@H@Z
    MCAPI class UpdateTradePacket createUpdateTradePacket(int containerID);

    // symbol: ?deregisterTagsFromLevelCache@Actor@@QEAAXXZ
    MCAPI void deregisterTagsFromLevelCache();

    // symbol: ?distanceSqrToBlockPosCenter@Actor@@QEBAMAEBVBlockPos@@@Z
    MCAPI float distanceSqrToBlockPosCenter(class BlockPos const& pos) const;

    // symbol: ?distanceTo@Actor@@QEBAMAEBV1@@Z
    MCAPI float distanceTo(class Actor const& e) const;

    // symbol: ?distanceTo@Actor@@QEBAMAEBVVec3@@@Z
    MCAPI float distanceTo(class Vec3 const& pos) const;

    // symbol: ?distanceToSqr@Actor@@QEBAMAEBV1@@Z
    MCAPI float distanceToSqr(class Actor const& e) const;

    // symbol: ?distanceToSqr@Actor@@QEBAMAEBVVec3@@@Z
    MCAPI float distanceToSqr(class Vec3 const& pos) const;

    // symbol: ?dropLeash@Actor@@QEAAX_N0@Z
    MCAPI void dropLeash(bool createItemDrop, bool cutRope);

    // symbol: ?dropTowards@Actor@@QEAAXAEBVItemStack@@VVec3@@@Z
    MCAPI void dropTowards(class ItemStack const& item, class Vec3 towards);

    // symbol: ?evaluateSeatRotation@Actor@@QEAAMAEBVRideableComponent@@_N@Z
    MCAPI float evaluateSeatRotation(class RideableComponent const& rideable, bool);

    // symbol:
    // ?executeEvent@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVariantParameterList@@@Z
    MCAPI bool executeEvent(std::string const& name, class VariantParameterList const& list);

    // symbol: ?exitVehicle@Actor@@QEAAX_N00@Z
    MCAPI void exitVehicle(bool, bool actorIsBeingDestroyed, bool);

    // symbol: ?fetchFishingHook@Actor@@QEAAPEAVFishingHook@@XZ
    MCAPI class FishingHook* fetchFishingHook();

    // symbol:
    // ?fetchNearbyActorsSorted@Actor@@QEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@AEBVVec3@@@Z
    MCAPI std::vector<struct DistanceSortedActor> fetchNearbyActorsSorted(class Vec3 const&);

    // symbol:
    // ?fetchNearbyActorsSorted@Actor@@QEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@AEBVVec3@@W4ActorType@@@Z
    MCAPI std::vector<struct DistanceSortedActor>
          fetchNearbyActorsSorted(class Vec3 const& distance, ::ActorType actorTypeId);

    // symbol: ?forEachLeashedActor@Actor@@QEBAXV?$function@$$A6AXV?$not_null@PEAVActor@@@gsl@@@Z@std@@@Z
    MCAPI void forEachLeashedActor(std::function<void(gsl::not_null<class Actor*>)> callback) const;

    // symbol: ?getAABB@Actor@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getAABB() const;

    // symbol: ?getAABBDim@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getAABBDim() const;

    // symbol: ?getActorIdentifier@Actor@@QEBAAEBUActorDefinitionIdentifier@@XZ
    MCAPI struct ActorDefinitionIdentifier const& getActorIdentifier() const;

    // symbol:
    // ?getAllEffects@Actor@@QEBAAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance> const& getAllEffects() const;

    // symbol: ?getArmor@Actor@@QEBAAEBVItemStack@@W4ArmorSlot@@@Z
    MCAPI class ItemStack const& getArmor(::ArmorSlot slot) const;

    // symbol: ?getAttachPos@Actor@@QEBA?AVVec3@@W4ActorLocation@@@Z
    MCAPI class Vec3 getAttachPos(::ActorLocation) const;

    // symbol: ?getAttachPos@Actor@@QEBA?AVVec3@@W4ActorLocation@@M@Z
    MCAPI class Vec3 getAttachPos(::ActorLocation, float lerpFactor) const;

    // symbol: ?getAttribute@Actor@@QEBAAEBVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance const& getAttribute(class Attribute const& attribute) const;

    // symbol: ?getAttributes@Actor@@QEAA?AV?$not_null@PEAVBaseAttributeMap@@@gsl@@XZ
    MCAPI gsl::not_null<class BaseAttributeMap*> getAttributes();

    // symbol: ?getAttributes@Actor@@QEBA?AV?$not_null@PEBVBaseAttributeMap@@@gsl@@XZ
    MCAPI gsl::not_null<class BaseAttributeMap const*> getAttributes() const;

    // symbol: ?getBlockPosCurrentlyStandingOn@Actor@@QEBA?AVBlockPos@@PEBV1@@Z
    MCAPI class BlockPos getBlockPosCurrentlyStandingOn(class Actor const* entity) const;

    // symbol: ?getBlockTarget@Actor@@QEBA?AVBlockPos@@XZ
    MCAPI class BlockPos getBlockTarget() const;

    // symbol: ?getBrightness@Actor@@QEBAMM@Z
    MCAPI float getBrightness(float a) const;

    // symbol: ?getCanPickupItems@Actor@@QEBA_NXZ
    MCAPI bool getCanPickupItems() const;

    // symbol: ?getCarriedItemInSlotPreferredBy@Actor@@QEBAAEBVItemStack@@AEBV2@@Z
    MCAPI class ItemStack const& getCarriedItemInSlotPreferredBy(class ItemStack const& item) const;

    // symbol: ?getCategories@Actor@@QEBA?AW4ActorCategory@@XZ
    MCAPI ::ActorCategory getCategories() const;

    // symbol: ?getChainedDamageEffects@Actor@@QEBA_NXZ
    MCAPI bool getChainedDamageEffects() const;

    // symbol: ?getChestSlots@Actor@@QEBAHXZ
    MCAPI int getChestSlots() const;

    // symbol: ?getCollidableMob@Actor@@QEBA_NXZ
    MCAPI bool getCollidableMob() const;

    // symbol: ?getColor@Actor@@QEBA?AW4PaletteColor@@XZ
    MCAPI ::PaletteColor getColor() const;

    // symbol: ?getColor2@Actor@@QEBA?AW4PaletteColor@@XZ
    MCAPI ::PaletteColor getColor2() const;

    // symbol: ?getCurrentSwimAmount@Actor@@QEBAMXZ
    MCAPI float getCurrentSwimAmount() const;

    // symbol: ?getDamageNearbyMobs@Actor@@QEBA_NXZ
    MCAPI bool getDamageNearbyMobs() const;

    // symbol: ?getDiffList@Actor@@QEBAPEBVActorDefinitionDiffList@@XZ
    MCAPI class ActorDefinitionDiffList const* getDiffList() const;

    // symbol: ?getDiffListNonConst@Actor@@QEAAPEAVActorDefinitionDiffList@@XZ
    MCAPI class ActorDefinitionDiffList* getDiffListNonConst();

    // symbol: ?getDimension@Actor@@QEBAAEAVDimension@@XZ
    MCAPI class Dimension& getDimension() const;

    // symbol: ?getDimensionBlockSource@Actor@@QEBAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getDimensionBlockSource() const;

    // symbol: ?getDimensionBlockSourceConst@Actor@@QEBAAEBVBlockSource@@XZ
    MCAPI class BlockSource const& getDimensionBlockSourceConst() const;

    // symbol: ?getDimensionConst@Actor@@QEBAAEBVDimension@@XZ
    MCAPI class Dimension const& getDimensionConst() const;

    // symbol: ?getDimensionId@Actor@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType getDimensionId() const;

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@AEBVMobEffect@@@Z
    MCAPI class MobEffectInstance const* getEffect(class MobEffect const& effect) const;

    // symbol: ?getEffect@Actor@@QEBAPEBVMobEffectInstance@@I@Z
    MCAPI class MobEffectInstance const* getEffect(uint effectId) const;

    // symbol: ?getEntityData@Actor@@QEAAAEAVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper& getEntityData();

    // symbol: ?getEntityData@Actor@@QEBAAEBVSynchedActorDataEntityWrapper@@XZ
    MCAPI class SynchedActorDataEntityWrapper const& getEntityData() const;

    // symbol: ?getEntityRegistry@Actor@@QEAA?AV?$StackRefResult@VEntityRegistry@@@@XZ
    MCAPI class StackRefResult<class EntityRegistry> getEntityRegistry();

    // symbol: ?getEntityTerrainInterlockData@Actor@@QEAAAEAVActorTerrainInterlockData@@XZ
    MCAPI class ActorTerrainInterlockData& getEntityTerrainInterlockData();

    // symbol: ?getEntityTypeId@Actor@@QEBA?AW4ActorType@@XZ
    MCAPI ::ActorType getEntityTypeId() const;

    // symbol: ?getEquipSlots@Actor@@QEBAHXZ
    MCAPI int getEquipSlots() const;

    // symbol: ?getEquipmentCount@Actor@@QEBAHXZ
    MCAPI int getEquipmentCount() const;

    // symbol: ?getEquipmentSlotForItem@Actor@@QEBA?AW4EquipmentSlot@Legacy@Puv@@AEBVItemStack@@@Z
    MCAPI ::Puv::Legacy::EquipmentSlot getEquipmentSlotForItem(class ItemStack const& item) const;

    // symbol: ?getEquippedSlot@Actor@@QEBAAEBVItemStack@@W4EquipmentSlot@Legacy@Puv@@@Z
    MCAPI class ItemStack const& getEquippedSlot(::Puv::Legacy::EquipmentSlot) const;

    // symbol: ?getEyePos@Actor@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getEyePos() const;

    // symbol: ?getFallDistance@Actor@@QEBAMXZ
    MCAPI float getFallDistance() const;

    // symbol: ?getFirstAvailableSeatPos@Actor@@QEBA_NAEAV1@AEAVVec3@@@Z
    MCAPI bool getFirstAvailableSeatPos(class Actor&, class Vec3& result) const;

    // symbol: ?getFirstPassenger@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getFirstPassenger() const;

    // symbol: ?getHealth@Actor@@QEBAHXZ
    MCAPI int getHealth() const;

    // symbol: ?getHurtDir@Actor@@QEBAHXZ
    MCAPI int getHurtDir() const;

    // symbol: ?getHurtTime@Actor@@QEBAHXZ
    MCAPI int getHurtTime() const;

    // symbol: ?getILevel@Actor@@QEAAAEAVILevel@@XZ
    MCAPI class ILevel& getILevel();

    // symbol: ?getInitializationMethod@Actor@@QEAA?AW4ActorInitializationMethod@@XZ
    MCAPI ::ActorInitializationMethod getInitializationMethod();

    // symbol: ?getInterpolatedPosition@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getInterpolatedPosition(float lerpFactor = 0.0f) const;

    // symbol: ?getInterpolatedRidingPosition@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getInterpolatedRidingPosition(float a) const;

    // symbol: ?getInterpolatedRotation@Actor@@QEBA?AVVec2@@M@Z
    MCAPI class Vec2 getInterpolatedRotation(float lerpFactor = 0.0f) const;

    // symbol: ?getInventorySize@Actor@@QEBAHXZ
    MCAPI int getInventorySize() const;

    // symbol: ?getIsExperienceDropEnabled@Actor@@QEBA_NXZ
    MCAPI bool getIsExperienceDropEnabled() const;

    // symbol: ?getLastHurtByMob@Actor@@QEAAPEAVMob@@XZ
    MCAPI class Mob* getLastHurtByMob();

    // symbol: ?getLastHurtByMobID@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getLastHurtByMobID() const;

    // symbol: ?getLastHurtByMobTime@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTime();

    // symbol: ?getLastHurtByMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtByMobTimestamp();

    // symbol: ?getLastHurtByPlayer@Actor@@QEAAPEAVPlayer@@XZ
    MCAPI class Player* getLastHurtByPlayer();

    // symbol: ?getLastHurtByPlayerID@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getLastHurtByPlayerID() const;

    // symbol: ?getLastHurtCause@Actor@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getLastHurtCause() const;

    // symbol: ?getLastHurtDamage@Actor@@QEBAMXZ
    MCAPI float getLastHurtDamage() const;

    // symbol: ?getLastHurtMob@Actor@@QEAAPEAVMob@@XZ
    MCAPI class Mob* getLastHurtMob();

    // symbol: ?getLastHurtMobTimestamp@Actor@@QEAAHXZ
    MCAPI int getLastHurtMobTimestamp();

    // symbol: ?getLastHurtTimestamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLastHurtTimestamp() const;

    // symbol: ?getLeashHolder@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getLeashHolder() const;

    // symbol: ?getLevel@Actor@@QEAAAEAVLevel@@XZ
    MCAPI class Level& getLevel();

    // symbol: ?getLevel@Actor@@QEBAAEBVLevel@@XZ
    MCAPI class Level const& getLevel() const;

    // symbol: ?getLevelTimeStamp@Actor@@QEBA_KXZ
    MCAPI uint64 getLevelTimeStamp() const;

    // symbol: ?getLimitedLifetimeTicks@Actor@@QEBAHXZ
    MCAPI int getLimitedLifetimeTicks() const;

    // symbol: ?getLinks@Actor@@QEBA?AV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorLink> getLinks() const;

    // symbol: ?getLootTable@Actor@@QEAAPEAVLootTable@@XZ
    MCAPI class LootTable* getLootTable();

    // symbol: ?getMarkVariant@Actor@@QEBAHXZ
    MCAPI int getMarkVariant() const;

    // symbol: ?getMaxAutoStep@Actor@@QEBAMXZ
    MCAPI float getMaxAutoStep() const;

    // symbol: ?getMaxHealth@Actor@@QEBAHXZ
    MCAPI int getMaxHealth() const;

    // symbol: ?getMolangVariables@Actor@@QEAAAEAVMolangVariableMap@@XZ
    MCAPI class MolangVariableMap& getMolangVariables();

    // symbol: ?getMutableAttribute@Actor@@QEAAPEAVAttributeInstance@@AEBVAttribute@@@Z
    MCAPI class AttributeInstance* getMutableAttribute(class Attribute const& attribute);

    // symbol: ?getNameTag@Actor@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNameTag() const;

    // symbol: ?getNameTagAsHash@Actor@@QEBA_KXZ
    MCAPI uint64 getNameTagAsHash() const;

    // symbol: ?getOffhandSlot@Actor@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getOffhandSlot() const;

    // symbol: ?getOnDeathExperience@Actor@@QEAAHXZ
    MCAPI int getOnDeathExperience();

    // symbol: ?getOrAddDynamicProperties@Actor@@QEAAAEAVDynamicProperties@@XZ
    MCAPI class DynamicProperties& getOrAddDynamicProperties();

    // symbol: ?getOrCreateUniqueID@Actor@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& getOrCreateUniqueID() const;

    // symbol: ?getOwner@Actor@@QEBAPEAVMob@@XZ
    MCAPI class Mob* getOwner() const;

    // symbol: ?getOwnerId@Actor@@QEBA?BUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const getOwnerId() const;

    // symbol: ?getPassengerIndex@Actor@@QEBAHAEBV1@@Z
    MCAPI int getPassengerIndex(class Actor const&) const;

    // symbol:
    // ?getPersistingTradeOffers@Actor@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> getPersistingTradeOffers();

    // symbol: ?getPersistingTradeRiches@Actor@@QEAAHXZ
    MCAPI int getPersistingTradeRiches();

    // symbol: ?getPlayerOwner@Actor@@QEBAPEAVPlayer@@XZ
    MCAPI class Player* getPlayerOwner() const;

    // symbol: ?getPosDelta@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosDelta() const;

    // symbol: ?getPosDeltaNonConst@Actor@@QEAAAEAVVec3@@XZ
    MCAPI class Vec3& getPosDeltaNonConst();

    // symbol: ?getPosPrev@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosPrev() const;

    // symbol: ?getPosition@Actor@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getPosition() const;

    // symbol: ?getRadius@Actor@@QEBAMXZ
    MCAPI float getRadius() const;

    // symbol: ?getRandom@Actor@@QEBAAEAVRandom@@XZ
    MCAPI class Random& getRandom() const;

    // symbol: ?getRenderParams@Actor@@QEAAAEAVRenderParams@@XZ
    MCAPI class RenderParams& getRenderParams();

    // symbol: ?getRidingHeight@Actor@@QEBAMXZ
    MCAPI float getRidingHeight() const;

    // symbol: ?getRotation@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getRotation() const;

    // symbol: ?getRotationPrev@Actor@@QEBAAEBVVec2@@XZ
    MCAPI class Vec2 const& getRotationPrev() const;

    // symbol: ?getRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
    MCAPI class ActorRuntimeID getRuntimeID() const;

    // symbol: ?getShakeTime@Actor@@QEBAHXZ
    MCAPI int getShakeTime() const;

    // symbol: ?getSkinID@Actor@@QEBAHXZ
    MCAPI int getSkinID() const;

    // symbol: ?getSpatialNetworkData@Actor@@QEAAAEAVSpatialActorNetworkData@@XZ
    MCAPI class SpatialActorNetworkData& getSpatialNetworkData();

    // symbol: ?getSpeedInMetersPerSecond@Actor@@QEBAMXZ
    MCAPI float getSpeedInMetersPerSecond() const;

    // symbol: ?getStrength@Actor@@QEBAHXZ
    MCAPI int getStrength() const;

    // symbol: ?getStrengthMax@Actor@@QEBAHXZ
    MCAPI int getStrengthMax() const;

    // symbol: ?getStructuralIntegrity@Actor@@QEBAHXZ
    MCAPI int getStructuralIntegrity() const;

    // symbol: ?getSwimAmount@Actor@@QEBAMM@Z
    MCAPI float getSwimAmount(float a) const;

    // symbol:
    // ?getTags@Actor@@QEBA?BV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> const getTags() const;

    // symbol: ?getTarget@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getTarget() const;

    // symbol: ?getTargetId@Actor@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetId() const;

    // symbol: ?getTradeInterest@Actor@@QEBA_NXZ
    MCAPI bool getTradeInterest() const;

    // symbol: ?getTradeOffers@Actor@@QEAAPEAVMerchantRecipeList@@XZ
    MCAPI class MerchantRecipeList* getTradeOffers();

    // symbol: ?getTradingPlayer@Actor@@QEBAPEAVPlayer@@XZ
    MCAPI class Player* getTradingPlayer() const;

    // symbol: ?getVariant@Actor@@QEBAHXZ
    MCAPI int getVariant() const;

    // symbol: ?getVehicle@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getVehicle() const;

    // symbol: ?getVehicleRoot@Actor@@QEBAPEAV1@XZ
    MCAPI class Actor* getVehicleRoot() const;

    // symbol: ?getVehicleRuntimeID@Actor@@QEBA?AVActorRuntimeID@@XZ
    MCAPI class ActorRuntimeID getVehicleRuntimeID() const;

    // symbol: ?getVerticalSpeedInMetersPerSecond@Actor@@QEBAMXZ
    MCAPI float getVerticalSpeedInMetersPerSecond() const;

    // symbol: ?getViewVector@Actor@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 getViewVector(float lerpFactor = 0.0f) const;

    // symbol: ?getWeakEntity@Actor@@QEBA?BV?$WeakRef@VEntityContext@@@@XZ
    MCAPI class WeakRef<class EntityContext> const getWeakEntity() const;

    // symbol: ?getYHeadRot@Actor@@QEBAMXZ
    MCAPI float getYHeadRot() const;

    // symbol: ?getYHeadRotationsNewOld@Actor@@QEBA?AUInterpolationPair@@XZ
    MCAPI struct InterpolationPair getYHeadRotationsNewOld() const;

    // symbol: ?handleFallDamage@Actor@@QEAAXMMVActorDamageSource@@@Z
    MCAPI void handleFallDamage(float, float, class ActorDamageSource);

    // symbol: ?handleLeftoverFallDamage@Actor@@QEAAXMVActorDamageSource@@@Z
    MCAPI void handleLeftoverFallDamage(float, class ActorDamageSource);

    // symbol: ?hasAnyEffects@Actor@@QEBA_NXZ
    MCAPI bool hasAnyEffects() const;

    // symbol: ?hasAnyVisibleEffects@Actor@@QEBA_NXZ
    MCAPI bool hasAnyVisibleEffects() const;

    // symbol: ?hasBeenHurtByMobInLastTicks@Actor@@QEBA_NH@Z
    MCAPI bool hasBeenHurtByMobInLastTicks(int) const;

    // symbol: ?hasCategory@Actor@@QEBA_NW4ActorCategory@@@Z
    MCAPI bool hasCategory(::ActorCategory categories) const;

    // symbol: ?hasDefinitionGroup@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasDefinitionGroup(std::string const& name) const;

    // symbol: ?hasDimension@Actor@@QEBA_NXZ
    MCAPI bool hasDimension() const;

    // symbol: ?hasEffect@Actor@@QEBA_NAEBVMobEffect@@@Z
    MCAPI bool hasEffect(class MobEffect const& effect) const;

    // symbol: ?hasFamily@Actor@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasFamily(class HashedString const& family) const;

    // symbol: ?hasFishingHook@Actor@@QEBA_NXZ
    MCAPI bool hasFishingHook() const;

    // symbol: ?hasLevel@Actor@@QEBA_NXZ
    MCAPI bool hasLevel() const;

    // symbol: ?hasPassenger@Actor@@QEBA_NXZ
    MCAPI bool hasPassenger() const;

    // symbol: ?hasPersistingTrade@Actor@@QEBA_NXZ
    MCAPI bool hasPersistingTrade() const;

    // symbol: ?hasPlayerPassenger@Actor@@QEBA_NXZ
    MCAPI bool hasPlayerPassenger() const;

    // symbol: ?hasPriorityAmmunition@Actor@@QEBA_NXZ
    MCAPI bool hasPriorityAmmunition() const;

    // symbol: ?hasRuntimeID@Actor@@QEBA_NXZ
    MCAPI bool hasRuntimeID() const;

    // symbol: ?hasSaddle@Actor@@QEBA_NXZ
    MCAPI bool hasSaddle() const;

    // symbol: ?hasTag@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasTag(std::string const& tag) const;

    // symbol: ?hasTags@Actor@@QEBA_NXZ
    MCAPI bool hasTags() const;

    // symbol: ?hasTeleported@Actor@@QEBA_NXZ
    MCAPI bool hasTeleported() const;

    // symbol: ?hasTotemEquipped@Actor@@QEBA_NXZ
    MCAPI bool hasTotemEquipped() const;

    // symbol: ?hasType@Actor@@QEBA_NW4ActorType@@@Z
    MCAPI bool hasType(::ActorType types) const;

    // symbol: ?hasUniqueID@Actor@@QEBA_NXZ
    MCAPI bool hasUniqueID() const;

    // symbol: ?heal@Actor@@QEAAXH@Z
    MCAPI void heal(int heal);

    // symbol: ?healEffects@Actor@@QEAAXH@Z
    MCAPI void healEffects(int amountHealed);

    // symbol: ?hurt@Actor@@QEAA_NAEBVActorDamageSource@@M_N1@Z
    MCAPI bool hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // symbol: ?inDownwardFlowingLiquid@Actor@@QEBA_NXZ
    MCAPI bool inDownwardFlowingLiquid() const;

    // symbol: ?initActorProperties@Actor@@QEAAXXZ
    MCAPI void initActorProperties();

    // symbol: ?initParams@Actor@@QEAAXAEAVRenderParams@@@Z
    MCAPI void initParams(class RenderParams& params);

    // symbol: ?initParams@Actor@@QEAAXAEAVVariantParameterList@@@Z
    MCAPI void initParams(class VariantParameterList& params);

    // symbol: ?intersects@Actor@@QEBA_NAEBVVec3@@0@Z
    MCAPI bool intersects(class Vec3 const& pos1, class Vec3 const& pos2) const;

    // symbol: ?isActorLocationInMaterial@Actor@@QEBA_NW4ActorLocation@@W4MaterialType@@@Z
    MCAPI bool isActorLocationInMaterial(::ActorLocation, ::MaterialType type) const;

    // symbol: ?isAdventure@Actor@@QEBA_NXZ
    MCAPI bool isAdventure() const;

    // symbol: ?isAffectedByWaterBottle@Actor@@QEBA_NXZ
    MCAPI bool isAffectedByWaterBottle() const;

    // symbol: ?isAngry@Actor@@QEBA_NXZ
    MCAPI bool isAngry() const;

    // symbol: ?isAttackableGamemode@Actor@@QEBA_NXZ
    MCAPI bool isAttackableGamemode() const;

    // symbol: ?isAutonomous@Actor@@QEBA_NXZ
    MCAPI bool isAutonomous() const;

    // symbol: ?isBaby@Actor@@QEBA_NXZ
    MCAPI bool isBaby() const;

    // symbol: ?isBodyRotationBlocked@Actor@@QEBA_NXZ
    MCAPI bool isBodyRotationBlocked() const;

    // symbol: ?isBreakingObstruction@Actor@@QEBA_NXZ
    MCAPI bool isBreakingObstruction() const;

    // symbol: ?isBribed@Actor@@QEBA_NXZ
    MCAPI bool isBribed() const;

    // symbol: ?isCharged@Actor@@QEBA_NXZ
    MCAPI bool isCharged() const;

    // symbol: ?isChested@Actor@@QEBA_NXZ
    MCAPI bool isChested() const;

    // symbol: ?isClientSide@Actor@@QEBA_NXZ
    MCAPI bool isClientSide() const;

    // symbol: ?isClimbing@Actor@@QEBA_NXZ
    MCAPI bool isClimbing() const;

    // symbol: ?isControlledByLocalInstance@Actor@@QEBA_NXZ
    MCAPI bool isControlledByLocalInstance() const;

    // symbol: ?isCreative@Actor@@QEBA_NXZ
    MCAPI bool isCreative() const;

    // symbol: ?isDancing@Actor@@QEBA_NXZ
    MCAPI bool isDancing() const;

    // symbol: ?isDead@Actor@@QEBA_NXZ
    MCAPI bool isDead() const;

    // symbol: ?isDoorBreaker@Actor@@QEBA_NXZ
    MCAPI bool isDoorBreaker() const;

    // symbol: ?isDoorOpener@Actor@@QEBA_NXZ
    MCAPI bool isDoorOpener() const;

    // symbol: ?isGlobal@Actor@@QEBA_NXZ
    MCAPI bool isGlobal() const;

    // symbol: ?isIgnited@Actor@@QEBA_NXZ
    MCAPI bool isIgnited() const;

    // symbol: ?isImmersedInWater@Actor@@QEBA_NXZ
    MCAPI bool isImmersedInWater() const;

    // symbol: ?isInClouds@Actor@@QEBA_NXZ
    MCAPI bool isInClouds() const;

    // symbol: ?isInContactWithWater@Actor@@QEBA_NXZ
    MCAPI bool isInContactWithWater() const;

    // symbol: ?isInLava@Actor@@QEBA_NXZ
    MCAPI bool isInLava() const;

    // symbol: ?isInLove@Actor@@QEBA_NXZ
    MCAPI bool isInLove() const;

    // symbol: ?isInPrecipitation@Actor@@QEBA_NXZ
    MCAPI bool isInPrecipitation() const;

    // symbol: ?isInRain@Actor@@QEBA_NXZ
    MCAPI bool isInRain() const;

    // symbol: ?isInScaffolding@Actor@@QEBA_NXZ
    MCAPI bool isInScaffolding() const;

    // symbol: ?isInSnow@Actor@@QEBA_NXZ
    MCAPI bool isInSnow() const;

    // symbol: ?isInThunderstorm@Actor@@QEBA_NXZ
    MCAPI bool isInThunderstorm() const;

    // symbol: ?isInWater@Actor@@QEBA_NXZ
    MCAPI bool isInWater() const;

    // symbol: ?isInWaterOrRain@Actor@@QEBA_NXZ
    MCAPI bool isInWaterOrRain() const;

    // symbol: ?isInWorld@Actor@@QEBA_NXZ
    MCAPI bool isInWorld() const;

    // symbol: ?isInsidePortal@Actor@@QEBA_NXZ
    MCAPI bool isInsidePortal() const;

    // symbol: ?isInvertedHealAndHarm@Actor@@QEBA_NXZ
    MCAPI bool isInvertedHealAndHarm() const;

    // symbol: ?isJumping@Actor@@QEBA_NXZ
    MCAPI bool isJumping() const;

    // symbol: ?isLayingDown@Actor@@QEBA_NXZ
    MCAPI bool isLayingDown() const;

    // symbol: ?isLeashed@Actor@@QEBA_NXZ
    MCAPI bool isLeashed() const;

    // symbol: ?isLocalPlayer@Actor@@QEBA_NXZ
    MCAPI bool isLocalPlayer() const;

    // symbol: ?isMovedToLimbo@Actor@@QEBA_NXZ
    MCAPI bool isMovedToLimbo() const;

    // symbol: ?isMovedToUnloadedChunk@Actor@@QEBA_NXZ
    MCAPI bool isMovedToUnloadedChunk() const;

    // symbol: ?isMoving@Actor@@QEBA_NXZ
    MCAPI bool isMoving() const;

    // symbol: ?isOnHotBlock@Actor@@QEBA_NXZ
    MCAPI bool isOnHotBlock() const;

    // symbol: ?isOrphan@Actor@@QEBA_NXZ
    MCAPI bool isOrphan() const;

    // symbol: ?isOutOfControl@Actor@@QEBA_NXZ
    MCAPI bool isOutOfControl() const;

    // symbol: ?isOverScaffolding@Actor@@QEBA_NXZ
    MCAPI bool isOverScaffolding() const;

    // symbol: ?isOverWater@Actor@@QEBA_NXZ
    MCAPI bool isOverWater() const;

    // symbol: ?isPacified@Actor@@QEBA_NXZ
    MCAPI bool isPacified() const;

    // symbol: ?isPassenger@Actor@@QEBA_NAEBV1@@Z
    MCAPI bool isPassenger(class Actor const&) const;

    // symbol: ?isPersistent@Actor@@QEBA_NXZ
    MCAPI bool isPersistent() const;

    // symbol: ?isPlayer@Actor@@QEBA_NXZ
    MCAPI bool isPlayer() const;

    // symbol: ?isPlayingDead@Actor@@QEBA_NXZ
    MCAPI bool isPlayingDead() const;

    // symbol: ?isPowered@Actor@@QEBA_NXZ
    MCAPI bool isPowered() const;

    // symbol: ?isRemotePlayer@Actor@@QEBA_NXZ
    MCAPI bool isRemotePlayer() const;

    // symbol: ?isRemoved@Actor@@QEBA_NXZ
    MCAPI bool isRemoved() const;

    // symbol: ?isResting@Actor@@QEBA_NXZ
    MCAPI bool isResting() const;

    // symbol: ?isRiding@Actor@@QEBA_NXZ
    MCAPI bool isRiding() const;

    // symbol: ?isRiding@Actor@@QEBA_NPEAV1@@Z
    MCAPI bool isRiding(class Actor*) const;

    // symbol: ?isSheared@Actor@@QEBA_NXZ
    MCAPI bool isSheared() const;

    // symbol: ?isSilent@Actor@@QEBA_NXZ
    MCAPI bool isSilent() const;

    // symbol: ?isSitting@Actor@@QEBA_NXZ
    MCAPI bool isSitting() const;

    // symbol: ?isSneaking@Actor@@QEBA_NXZ
    MCAPI bool isSneaking() const;

    // symbol: ?isSpectator@Actor@@QEBA_NXZ
    MCAPI bool isSpectator() const;

    // symbol: ?isStanding@Actor@@QEBA_NXZ
    MCAPI bool isStanding() const;

    // symbol: ?isSurvival@Actor@@QEBA_NXZ
    MCAPI bool isSurvival() const;

    // symbol: ?isSwimmer@Actor@@QEBA_NXZ
    MCAPI bool isSwimmer() const;

    // symbol: ?isSwimming@Actor@@QEBA_NXZ
    MCAPI bool isSwimming() const;

    // symbol: ?isTame@Actor@@QEBA_NXZ
    MCAPI bool isTame() const;

    // symbol: ?isTickingEntity@Actor@@QEBA_NXZ
    MCAPI bool isTickingEntity() const;

    // symbol: ?isTouchingDamageBlock@Actor@@QEBA_NXZ
    MCAPI bool isTouchingDamageBlock() const;

    // symbol: ?isTrading@Actor@@QEBA_NXZ
    MCAPI bool isTrading() const;

    // symbol: ?isTrusting@Actor@@QEBA_NXZ
    MCAPI bool isTrusting() const;

    // symbol: ?isType@Actor@@QEBA_NW4ActorType@@@Z
    MCAPI bool isType(::ActorType type) const;

    // symbol: ?isUnderLiquid@Actor@@QEBA_NW4MaterialType@@@Z
    MCAPI bool isUnderLiquid(::MaterialType type) const;

    // symbol: ?isUseNewTradeScreen@Actor@@QEBA_NXZ
    MCAPI bool isUseNewTradeScreen() const;

    // symbol: ?isWalker@Actor@@QEBA_NXZ
    MCAPI bool isWalker() const;

    // symbol: ?isWearingLeatherArmor@Actor@@QEBA?B_NXZ
    MCAPI bool const isWearingLeatherArmor() const;

    // symbol: ?isWorldBuilder@Actor@@QEBA_NXZ
    MCAPI bool isWorldBuilder() const;

    // symbol: ?killed@Actor@@QEAAXAEAV1@@Z
    MCAPI void killed(class Actor& entity);

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@H@Z
    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, int steps);

    // symbol: ?lerpTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@MH@Z
    MCAPI void lerpTo(class Vec3 const& pos, class Vec2 const& rot, float headYaw, int steps);

    // symbol: ?loadEntityFlags@Actor@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void loadEntityFlags(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol:
    // ?loadLinks@Actor@@QEAAXAEBVCompoundTag@@AEAV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@AEAVDataLoadHelper@@@Z
    MCAPI void loadLinks(
        class CompoundTag const&       entityTag,
        std::vector<struct ActorLink>& links,
        class DataLoadHelper&          dataLoadHelper
    );

    // symbol: ?lovePartnerId@Actor@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& lovePartnerId() const;

    // symbol: ?migrateUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void migrateUniqueID(struct ActorUniqueID id);

    // symbol: ?move@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void move(class Vec3 const& posIn);

    // symbol: ?moveRelative@Actor@@QEAAXMMMM@Z
    MCAPI void moveRelative(float xa, float ya, float za, float speed);

    // symbol: ?moveTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z
    MCAPI void moveTo(class Vec3 const& pos, class Vec2 const& rot);

    // symbol: ?onAffectedByWaterBottle@Actor@@QEAAXXZ
    MCAPI void onAffectedByWaterBottle();

    // symbol: ?onClimbableBlock@Actor@@QEBA_NXZ
    MCAPI bool onClimbableBlock() const;

    // symbol: ?onOnewayCollision@Actor@@QEAAXAEBVAABB@@@Z
    MCAPI void onOnewayCollision(class AABB const& oneWayVolume);

    // symbol: ?onOrphan@Actor@@QEAAXXZ
    MCAPI void onOrphan();

    // symbol: ??9Actor@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class Actor const& rhs) const;

    // symbol: ??8Actor@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Actor const& rhs) const;

    // symbol: ?pickUpItem@Actor@@QEAAXAEAVItemActor@@H@Z
    MCAPI void pickUpItem(class ItemActor& itemActor, int count);

    // symbol: ?playMovementSound@Actor@@QEAAXXZ
    MCAPI void playMovementSound();

    // symbol: ?playSound@Actor@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@AEBVBlock@@@Z
    MCAPI void playSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, class Block const& block);

    // symbol: ?playSound@Actor@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@H@Z
    MCAPI void playSound(::Puv::Legacy::LevelSoundEvent, class Vec3 const&, int);

    // symbol: ?playSynchronizedSound@Actor@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@AEBVBlock@@_N@Z
    MCAPI void playSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent type,
        class Vec3 const&              pos,
        class Block const&             block,
        bool                           isGlobal
    );

    // symbol: ?playSynchronizedSound@Actor@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@H_N@Z
    MCAPI void
    playSynchronizedSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, int data, bool isGlobal);

    // symbol: ?positionAllPassengers@Actor@@QEAAXXZ
    MCAPI void positionAllPassengers();

    // symbol: ?postGameEvent@Actor@@QEAAXAEBVGameEvent@@AEBVVec3@@PEBVBlock@@@Z
    MCAPI void postGameEvent(class GameEvent const&, class Vec3 const&, class Block const*);

    // symbol: ?postSplashGameEvent@Actor@@QEAAXXZ
    MCAPI void postSplashGameEvent();

    // symbol: ?pullInEntity@Actor@@QEAA_NAEAV1@@Z
    MCAPI bool pullInEntity(class Actor& e);

    // symbol: ?pushBackActionEventToActionQueue@Actor@@QEAAXVActionEvent@@@Z
    MCAPI void pushBackActionEventToActionQueue(class ActionEvent actionEvent);

    // symbol: ?queueBBUpdateFromDefinition@Actor@@QEAAXXZ
    MCAPI void queueBBUpdateFromDefinition();

    // symbol: ?queueBBUpdateFromValue@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void queueBBUpdateFromValue(class Vec2 const& value);

    // symbol: ?refreshComponents@Actor@@QEAAXXZ
    MCAPI void refreshComponents();

    // symbol: ?reload@Actor@@QEAAXXZ
    MCAPI void reload();

    // symbol: ?reloadLootTable@Actor@@QEAAXXZ
    MCAPI void reloadLootTable();

    // symbol: ?reloadLootTable@Actor@@QEAAXAEBUEquipmentTableDefinition@@@Z
    MCAPI void reloadLootTable(struct EquipmentTableDefinition const& def);

    // symbol: ?removeAllEffects@Actor@@QEAAXXZ
    MCAPI void removeAllEffects();

    // symbol: ?removeAllPassengers@Actor@@QEAAX_N@Z
    MCAPI void removeAllPassengers(bool);

    // symbol: ?removeDefinitionGroup@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeDefinitionGroup(std::string const& name);

    // symbol: ?removeEffect@Actor@@QEAAXH@Z
    MCAPI void removeEffect(int effectId);

    // symbol: ?removeEffectParticles@Actor@@QEAAXXZ
    MCAPI void removeEffectParticles();

    // symbol: ?removePersistingTrade@Actor@@QEAAXXZ
    MCAPI void removePersistingTrade();

    // symbol: ?removeTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool removeTag(std::string const& tag);

    // symbol: ?saveEntityFlags@Actor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveEntityFlags(class CompoundTag& entityTag) const;

    // symbol: ?saveLinks@Actor@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class ListTag> saveLinks() const;

    // symbol:
    // ?savePersistingTrade@Actor@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@H@Z
    MCAPI void savePersistingTrade(std::unique_ptr<class CompoundTag> offersTag, int riches);

    // symbol: ?saveWithoutId@Actor@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveWithoutId(class CompoundTag& entityTag) const;

    // symbol:
    // ?sendActorDefinitionEventTriggered@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void sendActorDefinitionEventTriggered(std::string const& event);

    // symbol: ?sendMotionToServer@Actor@@QEAAXXZ
    MCAPI void sendMotionToServer();

    // symbol: ?serializationSetHealth@Actor@@QEAAXH@Z
    MCAPI void serializationSetHealth(int newHealth);

    // symbol: ?setAABB@Actor@@QEAAXAEBVAABB@@@Z
    MCAPI void setAABB(class AABB const& aabb);

    // symbol: ?setAABBDim@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setAABBDim(class Vec2 const& dim);

    // symbol: ?setActorRendererId@Actor@@QEAAXVHashedString@@@Z
    MCAPI void setActorRendererId(class HashedString actorRendererId);

    // symbol: ?setAutonomous@Actor@@QEAAX_N@Z
    MCAPI void setAutonomous(bool g);

    // symbol: ?setBaseDefinition@Actor@@QEAAXAEBUActorDefinitionIdentifier@@_N1@Z
    MCAPI void setBaseDefinition(struct ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    // symbol: ?setBlockTarget@Actor@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setBlockTarget(class BlockPos const& target);

    // symbol: ?setBodyRotationBlocked@Actor@@QEAAX_N@Z
    MCAPI void setBodyRotationBlocked(bool);

    // symbol: ?setBreakingObstruction@Actor@@QEAAX_N@Z
    MCAPI void setBreakingObstruction(bool breaking);

    // symbol: ?setCanClimb@Actor@@QEAAX_N@Z
    MCAPI void setCanClimb(bool value);

    // symbol: ?setCanFly@Actor@@QEAAX_N@Z
    MCAPI void setCanFly(bool value);

    // symbol: ?setCanPowerJump@Actor@@QEAAX_N@Z
    MCAPI void setCanPowerJump(bool value);

    // symbol: ?setChainedDamageEffects@Actor@@QEAAX_N@Z
    MCAPI void setChainedDamageEffects(bool active);

    // symbol: ?setCharged@Actor@@QEAAX_N@Z
    MCAPI void setCharged(bool value);

    // symbol: ?setClimbing@Actor@@QEAAX_N@Z
    MCAPI void setClimbing(bool value);

    // symbol: ?setColor@Actor@@QEAAXW4PaletteColor@@@Z
    MCAPI void setColor(::PaletteColor color);

    // symbol: ?setColor2@Actor@@QEAAXW4PaletteColor@@@Z
    MCAPI void setColor2(::PaletteColor color);

    // symbol: ?setDamageNearbyMobs@Actor@@QEAAX_N@Z
    MCAPI void setDamageNearbyMobs(bool damageNearbyMobs);

    // symbol: ?setDancing@Actor@@QEAAX_N@Z
    MCAPI void setDancing(bool dancing);

    // symbol: ?setDead@Actor@@QEAAX_N@Z
    MCAPI void setDead(bool);

    // symbol: ?setDimension@Actor@@QEAAXV?$WeakRef@VDimension@@@@@Z
    MCAPI void setDimension(class WeakRef<class Dimension>);

    // symbol: ?setDoorBreaker@Actor@@QEAAX_N@Z
    MCAPI void setDoorBreaker(bool breaker);

    // symbol: ?setDoorOpener@Actor@@QEAAX_N@Z
    MCAPI void setDoorOpener(bool opener);

    // symbol: ?setEnchanted@Actor@@QEAAX_N@Z
    MCAPI void setEnchanted(bool value);

    // symbol: ?setFallDistance@Actor@@QEAAXM@Z
    MCAPI void setFallDistance(float distance);

    // symbol: ?setFishingHookID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setFishingHookID(struct ActorUniqueID newUniqueID);

    // symbol: ?setGlobal@Actor@@QEAAX_N@Z
    MCAPI void setGlobal(bool g);

    // symbol: ?setHurtDir@Actor@@QEAAXH@Z
    MCAPI void setHurtDir(int hurtDir);

    // symbol: ?setHurtTime@Actor@@QEAAXH@Z
    MCAPI void setHurtTime(int hurtTime);

    // symbol: ?setInLove@Actor@@QEAAXPEAV1@@Z
    MCAPI void setInLove(class Actor* lovePartner);

    // symbol: ?setInterpolation@Actor@@QEAAX_N@Z
    MCAPI void setInterpolation(bool val);

    // symbol: ?setInvisible@Actor@@QEAAX_N@Z
    MCAPI void setInvisible(bool value);

    // symbol: ?setIsExperienceDropEnabled@Actor@@QEAAX_N@Z
    MCAPI void setIsExperienceDropEnabled(bool);

    // symbol: ?setJumping@Actor@@QEAAX_N@Z
    MCAPI void setJumping(bool jump);

    // symbol: ?setLastHitBB@Actor@@QEAAXAEBVVec3@@0@Z
    MCAPI void setLastHitBB(class Vec3 const& pos, class Vec3 const& radius);

    // symbol: ?setLastHurtByMob@Actor@@QEAAXPEAVMob@@@Z
    MCAPI void setLastHurtByMob(class Mob* mob);

    // symbol: ?setLastHurtByPlayer@Actor@@QEAAXPEAVPlayer@@@Z
    MCAPI void setLastHurtByPlayer(class Player* player);

    // symbol: ?setLastHurtMob@Actor@@QEAAXPEAV1@@Z
    MCAPI void setLastHurtMob(class Actor* target);

    // symbol: ?setLayingDown@Actor@@QEAAX_N@Z
    MCAPI void setLayingDown(bool value);

    // symbol: ?setLeashHolder@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setLeashHolder(struct ActorUniqueID leashHolder);

    // symbol: ?setLimitedLifetimeTicks@Actor@@QEAAXH@Z
    MCAPI void setLimitedLifetimeTicks(int);

    // symbol: ?setMarkVariant@Actor@@QEAAXH@Z
    MCAPI void setMarkVariant(int value);

    // symbol: ?setMovedToLimbo@Actor@@QEAAX_N@Z
    MCAPI void setMovedToLimbo(bool);

    // symbol: ?setMovedToUnloadedChunk@Actor@@QEAAX_N@Z
    MCAPI void setMovedToUnloadedChunk(bool);

    // symbol: ?setMovementSoundDistanceOffset@Actor@@QEAAXM@Z
    MCAPI void setMovementSoundDistanceOffset(float);

    // symbol: ?setMoving@Actor@@QEAAX_N@Z
    MCAPI void setMoving(bool value);

    // symbol: ?setNameTag@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setNameTag(std::string const& name);

    // symbol: ?setNameTagVisible@Actor@@QEAAX_N@Z
    MCAPI void setNameTagVisible(bool visible);

    // symbol: ?setPersistent@Actor@@QEAAXXZ
    MCAPI void setPersistent();

    // symbol: ?setPos@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPos(class Vec3 const& pos);

    // symbol: ?setPosDelta@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosDelta(class Vec3 const& posDelta);

    // symbol: ?setPosDirectLegacy@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosDirectLegacy(class Vec3 const& pos);

    // symbol: ?setPosPrev@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosPrev(class Vec3 const& posPrev);

    // symbol: ?setPrevPosRotSetThisTick@Actor@@QEAAX_N@Z
    MCAPI void setPrevPosRotSetThisTick(bool value);

    // symbol: ?setPreviousPosRot@Actor@@QEAAXXZ
    MCAPI void setPreviousPosRot();

    // symbol: ?setResting@Actor@@QEAAX_N@Z
    MCAPI void setResting(bool value);

    // symbol: ?setRotationDirectly@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationDirectly(class Vec2 const& rot);

    // symbol: ?setRotationPrev@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationPrev(class Vec2 const& rotation);

    // symbol: ?setRotationPrevY@Actor@@QEAAXM@Z
    MCAPI void setRotationPrevY(float rotY);

    // symbol: ?setRotationWrapped@Actor@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotationWrapped(class Vec2 const& rot);

    // symbol: ?setRotationX@Actor@@QEAAXM@Z
    MCAPI void setRotationX(float rotX);

    // symbol: ?setRotationY@Actor@@QEAAXM@Z
    MCAPI void setRotationY(float rotY);

    // symbol: ?setRuntimeID@Actor@@QEAAXVActorRuntimeID@@@Z
    MCAPI void setRuntimeID(class ActorRuntimeID id);

    // symbol: ?setSaddle@Actor@@QEAAX_N@Z
    MCAPI void setSaddle(bool saddled);

    // symbol: ?setScared@Actor@@QEAAX_N@Z
    MCAPI void setScared(bool status);

    // symbol: ?setScoreTag@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setScoreTag(std::string const& score);

    // symbol: ?setShakeTime@Actor@@QEAAXH@Z
    MCAPI void setShakeTime(int time);

    // symbol: ?setSkinID@Actor@@QEAAXH@Z
    MCAPI void setSkinID(int value);

    // symbol: ?setStrength@Actor@@QEAAXH@Z
    MCAPI void setStrength(int strength);

    // symbol: ?setStrengthMax@Actor@@QEAAXH@Z
    MCAPI void setStrengthMax(int strength);

    // symbol: ?setStructuralIntegrity@Actor@@QEAAXH@Z
    MCAPI void setStructuralIntegrity(int damage);

    // symbol: ?setStunned@Actor@@QEAAX_N@Z
    MCAPI void setStunned(bool value);

    // symbol: ?setSwimmer@Actor@@QEAAX_N@Z
    MCAPI void setSwimmer(bool swimmer);

    // symbol: ?setTempted@Actor@@QEAAX_N@Z
    MCAPI void setTempted(bool tempted);

    // symbol: ?setTradeInterest@Actor@@QEAAX_N@Z
    MCAPI void setTradeInterest(bool interested);

    // symbol: ?setTradingPlayer@Actor@@QEAAXPEAVPlayer@@@Z
    MCAPI void setTradingPlayer(class Player* player);

    // symbol: ?setUniqueID@Actor@@QEAAXUActorUniqueID@@@Z
    MCAPI void setUniqueID(struct ActorUniqueID id);

    // symbol: ?setVariant@Actor@@QEAAXH@Z
    MCAPI void setVariant(int value);

    // symbol: ?setVelocity@Actor@@QEAAXAEBVVec3@@@Z
    MCAPI void setVelocity(class Vec3 const&);

    // symbol: ?setWASDControlled@Actor@@QEAAX_N@Z
    MCAPI void setWASDControlled(bool value);

    // symbol: ?setWalker@Actor@@QEAAX_N@Z
    MCAPI void setWalker(bool isWalker);

    // symbol: ?setYHeadRot@Actor@@QEAAXM@Z
    MCAPI void setYHeadRot(float yHeadRot);

    // symbol: ?setYHeadRotations@Actor@@QEAAXMM@Z
    MCAPI void setYHeadRotations(float yHeadRot, float);

    // symbol: ?shouldOrphan@Actor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool shouldOrphan(class BlockSource& source);

    // symbol: ?shouldTick@Actor@@QEBA_NXZ
    MCAPI bool shouldTick() const;

    // symbol: ?shouldUpdateEffects@Actor@@QEBA_NXZ
    MCAPI bool shouldUpdateEffects() const;

    // symbol: ?spawnAtLocation@Actor@@QEAAPEAVItemActor@@AEBVItemStack@@M@Z
    MCAPI class ItemActor* spawnAtLocation(class ItemStack const& item, float yOffs);

    // symbol: ?spawnEatParticles@Actor@@QEAAXAEBVItemStack@@H@Z
    MCAPI void spawnEatParticles(class ItemStack const& itemInUse, int count);

    // symbol: ?spinAttack@Actor@@QEAAXXZ
    MCAPI void spinAttack();

    // symbol: ?stopRiding@Actor@@QEAAX_N00@Z
    MCAPI void stopRiding(bool, bool actorIsBeingDestroyed, bool);

    // symbol: ?synchronousSetSize@Actor@@QEAAXMM@Z
    MCAPI void synchronousSetSize(float, float);

    // symbol: ?teleportPassengersTo@Actor@@QEAAXAEBVVec3@@HH@Z
    MCAPI void teleportPassengersTo(class Vec3 const& pos, int cause, int entityType);

    // symbol: ?thawFreezeEffect@Actor@@QEAAXXZ
    MCAPI void thawFreezeEffect();

    // symbol: ?tick@Actor@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool tick(class BlockSource& region);

    // symbol: ?transferTickingArea@Actor@@QEAAXAEAVDimension@@@Z
    MCAPI void transferTickingArea(class Dimension& toDimension);

    // symbol:
    // ?tryGetEquippableSlotAllowedItems@Actor@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
    MCAPI std::vector<class ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    // symbol: ?tryGetEquippableSlotForItem@Actor@@QEBA?AV?$optional@H@std@@VItemDescriptor@@@Z
    MCAPI std::optional<int> tryGetEquippableSlotForItem(class ItemDescriptor item) const;

    // symbol: ?tryTeleportTo@Actor@@QEAA_NAEBVVec3@@_N1HH@Z
    MCAPI bool tryTeleportTo(class Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    // symbol: ?updateAnimationComponentOnServer@Actor@@QEAAXXZ
    MCAPI void updateAnimationComponentOnServer();

    // symbol: ?updateDescription@Actor@@QEAAXXZ
    MCAPI void updateDescription();

    // symbol: ?updateDimensionChunkMove@Actor@@QEAAXXZ
    MCAPI void updateDimensionChunkMove();

    // symbol: ?updateInvisibilityStatus@Actor@@QEAAXXZ
    MCAPI void updateInvisibilityStatus();

    // symbol: ?updateMolangVariables@Actor@@QEAAXAEAVRenderParams@@@Z
    MCAPI void updateMolangVariables(class RenderParams& renderParams);

    // symbol: ?updateTickingData@Actor@@QEAAXXZ
    MCAPI void updateTickingData();

    // symbol: ?useSaddle@Actor@@QEAA_NAEAVItemStackBase@@PEAVPlayer@@@Z
    MCAPI bool useSaddle(class ItemStackBase& item, class Player* player);

    // symbol: ?wasHurt@Actor@@QEAA_NXZ
    MCAPI bool wasHurt();

    // symbol: ?wasLastHitByPlayer@Actor@@QEAA_NXZ
    MCAPI bool wasLastHitByPlayer();

    // symbol: ?wasLoadedFromNBTThisFrame@Actor@@QEBA_NXZ
    MCAPI bool wasLoadedFromNBTThisFrame() const;

    // symbol: ?wobble@Actor@@QEAAXXZ
    MCAPI void wobble();

    // symbol: ?_moveRelative@Actor@@SAXAEAVVec3@@MMMMM@Z
    MCAPI static void _moveRelative(class Vec3& posDelta, float, float xa, float ya, float za, float speed);

    // symbol: ?buildForward@Actor@@SA?AVVec3@@VVec2@@@Z
    MCAPI static class Vec3 buildForward(class Vec2);

    // symbol:
    // ?getBlockPosCurrentlyStandingOn@Actor@@SA?AVBlockPos@@AEBVVec3@@VAABB@@AEBVIConstBlockSource@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    MCAPI static class BlockPos getBlockPosCurrentlyStandingOn(
        class Vec3 const&                                          pos,
        class AABB                                                 box,
        class IConstBlockSource const&                             region,
        class optional_ref<class GetCollisionShapeInterface const> other
    );

    // symbol: ?getCenter@Actor@@SA?AVVec3@@MAEBUAABBShapeComponent@@AEBUStateVectorComponent@@M@Z
    MCAPI static class Vec3
    getCenter(float a, struct AABBShapeComponent const&, struct StateVectorComponent const&, float heightOffset);

    // symbol:
    // ?getEffect@Actor@@SAPEBVMobEffectInstance@@AEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEBVMobEffect@@@Z
    MCAPI static class MobEffectInstance const*
    getEffect(std::vector<class MobEffectInstance> const& effects, class MobEffect const& effect);

    // symbol: ?getInterpolatedPosition@Actor@@SA?AVVec3@@MAEBUStateVectorComponent@@@Z
    MCAPI static class Vec3 getInterpolatedPosition(float a, struct StateVectorComponent const&);

    // symbol: ?getInterpolatedRotation@Actor@@SA?AVVec2@@AEBV2@0M@Z
    MCAPI static class Vec2 getInterpolatedRotation(class Vec2 const&, class Vec2 const& rot, float a);

    // symbol: ?getLiquidAABB@Actor@@SA?AVAABB@@AEBV2@W4MaterialType@@@Z
    MCAPI static class AABB getLiquidAABB(class AABB const& aabb, ::MaterialType liquidType);

    // symbol: ?getLiquidFlowStrength@Actor@@SAMW4MaterialType@@@Z
    MCAPI static float getLiquidFlowStrength(::MaterialType liquidType);

    // symbol: ?getViewVector@Actor@@SA?AVVec3@@AEBUActorRotationComponent@@M@Z
    MCAPI static class Vec3 getViewVector(struct ActorRotationComponent const&, float);

    // symbol: ?getViewVector@Actor@@SA?AVVec3@@AEBVVec2@@0M@Z
    MCAPI static class Vec3 getViewVector(class Vec2 const&, class Vec2 const& rot, float a);

    // symbol: ?isImmobile@Actor@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool isImmobile(class EntityContext const&);

    // symbol:
    // ?isInLiquid@Actor@@SA_NW4MaterialType@@AEBVIConstBlockSource@@AEBVAABB@@AEBV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    MCAPI static bool
    isInLiquid(::MaterialType liquidType, class IConstBlockSource const& region, class AABB const&, std::vector<class AABB> const&);

    // symbol: ?tryGetFromComponent@Actor@@SAPEAV1@AEAVActorOwnerComponent@@_N@Z
    MCAPI static class Actor* tryGetFromComponent(class ActorOwnerComponent& component, bool);

    // symbol: ?tryGetFromComponent@Actor@@SAPEBV1@AEBVActorOwnerComponent@@_N@Z
    MCAPI static class Actor const* tryGetFromComponent(class ActorOwnerComponent const& component, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class EntityContext& entity, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@V?$StackRefResult@VEntityContext@@@@_N@Z
    MCAPI static class Actor* tryGetFromEntity(class StackRefResult<class EntityContext>, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEAV1@AEBVStrictEntityContext@@AEAVEntityRegistry@@_N@Z
    MCAPI static class Actor*
    tryGetFromEntity(class StrictEntityContext const& entity, class EntityRegistry& registry, bool);

    // symbol: ?tryGetFromEntity@Actor@@SAPEBV1@AEBVEntityContext@@_N@Z
    MCAPI static class Actor const* tryGetFromEntity(class EntityContext const& entity, bool);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z
    MCAPI class ItemActor const* _drop(class ItemStack const& item, bool randomly);

    // symbol:
    // ?_getAllEffectsNonConst@Actor@@IEAAAEAV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@XZ
    MCAPI std::vector<class MobEffectInstance>& _getAllEffectsNonConst();

    // symbol:
    // ?_getAnimationComponent@Actor@@IEAAAEAVAnimationComponent@@AEAV?$shared_ptr@VAnimationComponent@@@std@@W4AnimationComponentGroupType@@@Z
    MCAPI class AnimationComponent& _getAnimationComponent(
        std::shared_ptr<class AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType              group
    );

    // symbol: ?_initializeMaxAutoStep@Actor@@IEAAXM@Z
    MCAPI void _initializeMaxAutoStep(float);

    // symbol: ?_isDeathLootAllowed@Actor@@IEBA_NXZ
    MCAPI bool _isDeathLootAllowed() const;

    // symbol: ?_isHeadInWater@Actor@@IEBA_NXZ
    MCAPI bool _isHeadInWater() const;

    // symbol: ?_setDimensionTransitionComponent@Actor@@IEAAXV?$AutomaticID@VDimension@@H@@0H@Z
    MCAPI void _setDimensionTransitionComponent(DimensionType fromId, DimensionType toId, int portalCooldown);

    // symbol: ?_setHandContainerItem@Actor@@IEAAXAEBVItemStack@@W4HandSlot@@@Z
    MCAPI void _setHandContainerItem(class ItemStack const& item, ::HandSlot handSlot);

    // symbol: ?_setHeightOffset@Actor@@IEAAXM@Z
    MCAPI void _setHeightOffset(float heightOffset);

    // symbol: ?_setPos@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void _setPos(class Vec3 const& pos);

    // symbol: ?_setPosPrev@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void _setPosPrev(class Vec3 const& posPrev);

    // symbol: ?enableAutoSendPosRot@Actor@@IEAAX_N@Z
    MCAPI void enableAutoSendPosRot(bool enable);

    // symbol: ?getBlockWhenClimbing@Actor@@IEAAAEBVBlock@@XZ
    MCAPI class Block const& getBlockWhenClimbing();

    // symbol: ?markHurt@Actor@@IEAAXXZ
    MCAPI void markHurt();

    // symbol: ?pushOutOfBlocks@Actor@@IEAAXAEBVVec3@@@Z
    MCAPI void pushOutOfBlocks(class Vec3 const& vec);

    // symbol: ?spawnTrailBubbles@Actor@@IEAAXXZ
    MCAPI void spawnTrailBubbles();

    // symbol: ?updateInsideBlock@Actor@@IEAAXXZ
    MCAPI void updateInsideBlock();

    // symbol: ?updateWaterState@Actor@@IEAAXXZ
    MCAPI void updateWaterState();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addActorBuiltInComponents@Actor@@AEAA?AUBuiltInActorComponents@@XZ
    MCAPI struct BuiltInActorComponents _addActorBuiltInComponents();

    // symbol: ?_addActorNonBuiltInComponents@Actor@@AEAAXXZ
    MCAPI void _addActorNonBuiltInComponents();

    // symbol: ?_damageNearbyMobs@Actor@@AEAAXXZ
    MCAPI void _damageNearbyMobs();

    // symbol: ?_defaultInitEquipmentDropChances@Actor@@AEAAXXZ
    MCAPI void _defaultInitEquipmentDropChances();

    // symbol: ?_initializeLeashRopeSystem@Actor@@AEAAXPEAV1@@Z
    MCAPI void _initializeLeashRopeSystem(class Actor* holder);

    // symbol: ?_isItemStackNetManagerEnabled@Actor@@AEBA_NXZ
    MCAPI bool _isItemStackNetManagerEnabled() const;

    // symbol: ?_moveHitboxTo@Actor@@AEAAXAEBVVec3@@@Z
    MCAPI void _moveHitboxTo(class Vec3 const& pos);

    // symbol: ?_serializeComponents@Actor@@AEBAXAEAVCompoundTag@@@Z
    MCAPI void _serializeComponents(class CompoundTag& tag) const;

    // symbol: ?_setupServerAnimationComponent@Actor@@AEAAXXZ
    MCAPI void _setupServerAnimationComponent();

    // symbol: ?_tryPlantWitherRose@Actor@@AEAAXXZ
    MCAPI void _tryPlantWitherRose();

    // symbol: ?_updateComposition@Actor@@AEAAX_N@Z
    MCAPI void _updateComposition(bool reload);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DAMAGE_NEARBY_MOBS_DURATION@Actor@@0HB
    MCAPI static int const DAMAGE_NEARBY_MOBS_DURATION;

    // symbol: ?DEFAULT_MAX_DISTANCE_OPTIMIZATION@Actor@@0MB
    MCAPI static float const DEFAULT_MAX_DISTANCE_OPTIMIZATION;

    // symbol: ?DEFAULT_MAX_TICK_DELAY_OPTIMIZATION@Actor@@0_KB
    MCAPI static uint64 const DEFAULT_MAX_TICK_DELAY_OPTIMIZATION;

    // NOLINTEND
};
