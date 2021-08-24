#pragma once
#include "Core.h"
// MCAPI_ACTOR_EXTRA
class Actor {
public:
    enum InitializationMethod : int;
    Actor(const Actor&) = delete;
    Actor& operator=(const Actor&) = delete;
    Actor()                        = delete;
#ifdef MCAPI_ACTOR_EXTRA
    MCINLINE class Vec3 getAttachPos(enum ActorLocation a0, float a1) const {
        class Vec3 (Actor::*rv)(enum ActorLocation, float) const;
        *((void**)&rv) = dlsym("?getAttachPos@Actor@@UEBA?AVVec3@@W4ActorLocation@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void markHurt() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?markHurt@Actor@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class HashedString const& queryEntityRenderer() const {
        class HashedString const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?queryEntityRenderer@Actor@@UEBAAEBVHashedString@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setSeatDescription(class Vec3 const& a0, struct SeatDescription const& a1) {
        void (Actor::*rv)(class Vec3 const&, struct SeatDescription const&);
        *((void**)&rv) =
            dlsym("?setSeatDescription@Actor@@QEAAXAEBVVec3@@AEBUSeatDescription@@@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE float getCameraOffset() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getCameraOffset@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool isDamageBlocked(class ActorDamageSource const& a0) const {
        bool (Actor::*rv)(class ActorDamageSource const&) const;
        *((void**)&rv) = dlsym("?isDamageBlocked@Actor@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onLightningHit() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?onLightningHit@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _doAutoAttackOnTouch(class Actor& a0) {
        void (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?_doAutoAttackOnTouch@Actor@@EEAAXAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class ItemActor* spawnAtLocation(class Block const& a0, int a1, float a2) {
        class ItemActor* (Actor::*rv)(class Block const&, int, float);
        *((void**)&rv) = dlsym("?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVBlock@@HM@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class AttributeInstance const& getAttribute(class Attribute const& a0) const {
        class AttributeInstance const& (Actor::*rv)(class Attribute const&) const;
        *((void**)&rv) =
            dlsym("?getAttribute@Actor@@UEBAAEBVAttributeInstance@@AEBVAttribute@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isFireImmune() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isFireImmune@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3) {
        bool (Actor::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?hurt@Actor@@QEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool canDestroyBlock(class Block const& a0) const {
        bool (Actor::*rv)(class Block const&) const;
        *((void**)&rv) = dlsym("?canDestroyBlock@Actor@@UEBA_NAEBVBlock@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canSee(class Actor const& a0) const {
        bool (Actor::*rv)(class Actor const&) const;
        *((void**)&rv) = dlsym("?canSee@Actor@@UEBA_NAEBV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateTickingData() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateTickingData@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void changeDimension(class ChangeDimensionPacket const& a0) {
        void (Actor::*rv)(class ChangeDimensionPacket const&);
        *((void**)&rv) = dlsym("?changeDimension@Actor@@UEAAXAEBVChangeDimensionPacket@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class MerchantRecipeList* getTradeOffers() {
        class MerchantRecipeList* (Actor::*rv)();
        *((void**)&rv) = dlsym("?getTradeOffers@Actor@@QEAAPEAVMerchantRecipeList@@XZ");
        return (this->*rv)();
    }
    MCINLINE enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot a0) const {
        enum ArmorTextureType (Actor::*rv)(enum ArmorSlot) const;
        *((void**)&rv) = dlsym(
            "?getArmorMaterialTextureTypeInSlot@Actor@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setCanFly(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setCanFly@Actor@@QEAAX_N@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void setAuxValue(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setAuxValue@Actor@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void checkInsideBlocks(float a0) {
        void (Actor::*rv)(float);
        *((void**)&rv) = dlsym("?checkInsideBlocks@Actor@@MEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onAboveBubbleColumn(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?onAboveBubbleColumn@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isUnderLiquid(enum MaterialType a0) const {
        bool (Actor::*rv)(enum MaterialType) const;
        *((void**)&rv) = dlsym("?isUnderLiquid@Actor@@UEBA_NW4MaterialType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _sendLinkPacket(struct ActorLink const& a0) const {
        void (Actor::*rv)(struct ActorLink const&) const;
        *((void**)&rv) = dlsym("?_sendLinkPacket@Actor@@AEBAXAEBUActorLink@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class LootTable* getDefaultLootTable() {
        class LootTable* (Actor::*rv)();
        *((void**)&rv) = dlsym("?getDefaultLootTable@Actor@@MEAAPEAVLootTable@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setDamageNearbyMobs(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setDamageNearbyMobs@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void rideLanded(class Vec3 const& a0, class Vec3 const& a1) {
        void (Actor::*rv)(class Vec3 const&, class Vec3 const&);
        *((void**)&rv) = dlsym("?rideLanded@Actor@@UEAAXAEBVVec3@@0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _refreshAABB() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_refreshAABB@Actor@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class Actor* findAttackTarget() {
        class Actor* (Actor::*rv)();
        *((void**)&rv) = dlsym("?findAttackTarget@Actor@@UEAAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE void setStrengthMax(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setStrengthMax@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void kill() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?kill@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setPreviousPosRot(class Vec3 const& a0, class Vec2 const& a1) {
        void (Actor::*rv)(class Vec3 const&, class Vec2 const&);
        *((void**)&rv) = dlsym("?setPreviousPosRot@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void startSpinAttack() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?startSpinAttack@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class ItemActor* spawnAtLocation(int a0, int a1) {
        class ItemActor* (Actor::*rv)(int, int);
        *((void**)&rv) = dlsym("?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HH@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _initializeLeashRopeSystem() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_initializeLeashRopeSystem@Actor@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void sendMotionToServer() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?sendMotionToServer@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class ItemStack const& getArmor(enum ArmorSlot a0) const {
        class ItemStack const& (Actor::*rv)(enum ArmorSlot) const;
        *((void**)&rv) = dlsym("?getArmor@Actor@@UEBAAEBVItemStack@@W4ArmorSlot@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool interactPreventDefault() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?interactPreventDefault@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _serializeComponents(class CompoundTag& a0) {
        void (Actor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?_serializeComponents@Actor@@AEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void actuallyHurt(int a0, class ActorDamageSource const* a1, bool a2) {
        void (Actor::*rv)(int, class ActorDamageSource const*, bool);
        *((void**)&rv) = dlsym("?actuallyHurt@Actor@@UEAAXHPEBVActorDamageSource@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE int getStrength() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getStrength@Actor@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE float getInterpolatedWalkAnimSpeed(float a0) const {
        float (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedWalkAnimSpeed@Actor@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isCreativeModeAllowed() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isCreativeModeAllowed@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void onEffectUpdated(class MobEffectInstance const& a0) {
        void (Actor::*rv)(class MobEffectInstance const&);
        *((void**)&rv) = dlsym("?onEffectUpdated@Actor@@UEAAXAEBVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool doFireHurt(int a0) {
        bool (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?doFireHurt@Actor@@UEAA_NH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void pushOutOfBlocks(class Vec3 const& a0) {
        void (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?pushOutOfBlocks@Actor@@MEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool inCaravan() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?inCaravan@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void setSkinID(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setSkinID@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSneaking() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isSneaking@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }

    MCINLINE class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
        getFormattedNameTag() const {
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (
            Actor::*rv)() const;
        *((void**)&rv) = dlsym(
            "?getFormattedNameTag@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
            "D@2@@std@@XZ");
        return (this->*rv)();
    } MCINLINE void removeEffect(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?removeEffect@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void teleportTo(class Vec3 const& a0, bool a1, int a2, int a3) {
        void (Actor::*rv)(class Vec3 const&, bool, int, int);
        *((void**)&rv) = dlsym("?teleportTo@Actor@@UEAAXAEBVVec3@@_NHH@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE float getYHeadRot() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getYHeadRot@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool _tryPlaceAt(class Vec3 const& a0) {
        bool (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?_tryPlaceAt@Actor@@QEAA_NAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getRiderYRotation(class Actor const& a0) const {
        float (Actor::*rv)(class Actor const&) const;
        *((void**)&rv) = dlsym("?getRiderYRotation@Actor@@UEBAMAEBV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setOwner(struct ActorUniqueID a0) {
        void (Actor::*rv)(struct ActorUniqueID);
        *((void**)&rv) = dlsym("?setOwner@Actor@@UEAAXUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSilent() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isSilent@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE int getEquipSlots() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getEquipSlots@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE int getPortalWaitTime() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getPortalWaitTime@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void setRot(class Vec2 const& a0) {
        void (Actor::*rv)(class Vec2 const&);
        *((void**)&rv) = dlsym("?setRot@Actor@@UEAAXAEBVVec2@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reset() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?reset@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void animateHurt() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?animateHurt@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int calculateAttackDamage(class Actor& a0) {
        int (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?calculateAttackDamage@Actor@@QEAAHAEAV1@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void setPos(class Vec3 const& a0) {
        void (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?setPos@Actor@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSurfaceMob() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isSurfaceMob@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE float getInterpolatedHeadRot(float a0) const {
        float (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedHeadRot@Actor@@UEBAMM@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void filterFormattedNameTag(class UIProfanityContext const& a0) {
        void (Actor::*rv)(class UIProfanityContext const&);
        *((void**)&rv) = dlsym("?filterFormattedNameTag@Actor@@UEAAXAEBVUIProfanityContext@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateInsideBlock() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateInsideBlock@Actor@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _spawnTreasureHuntingParticles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_spawnTreasureHuntingParticles@Actor@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canSeeInvisible() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canSeeInvisible@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInLava() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInLava@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasComponent(class Util::HashString const& a0) const {
        bool (Actor::*rv)(class Util::HashString const&) const;
        *((void**)&rv) = dlsym("?hasComponent@Actor@@UEBA_NAEBVHashString@Util@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canPowerJump() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canPowerJump@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE class BlockPos _getBlockOnPos() {
        class BlockPos (Actor::*rv)();
        *((void**)&rv) = dlsym("?_getBlockOnPos@Actor@@IEAA?AVBlockPos@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setEquippedSlot(enum ArmorSlot a0, class ItemStack const& a1) {
        void (Actor::*rv)(enum ArmorSlot, class ItemStack const&);
        *((void**)&rv) = dlsym("?setEquippedSlot@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setVariant(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setVariant@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }

    MCINLINE class ITickingArea* getTickingArea() {
        class ITickingArea* (Actor::*rv)();
        *((void**)&rv) = dlsym("?getTickingArea@Actor@@QEAAPEAVITickingArea@@XZ");
        return (this->*rv)();
    }
    MCINLINE void saveWithoutId(class CompoundTag& a0) {
        void (Actor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?saveWithoutId@Actor@@UEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool drop(class ItemStack const& a0, bool a1) {
        bool (Actor::*rv)(class ItemStack const&, bool);
        *((void**)&rv) = dlsym("?drop@Actor@@UEAA_NAEBVItemStack@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void onTame() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?onTame@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setMarkVariant(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setMarkVariant@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isImmersedInWater() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isImmersedInWater@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isJumping() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isJumping@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void stopSwimming() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?stopSwimming@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setStanding(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setStanding@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getChestSlots() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getChestSlots@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void setLimitedLife(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setLimitedLife@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onEffectAdded(class MobEffectInstance& a0) {
        void (Actor::*rv)(class MobEffectInstance&);
        *((void**)&rv) = dlsym("?onEffectAdded@Actor@@UEAAXAEAVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getShadowRadius() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getShadowRadius@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE int getEquipmentCount() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getEquipmentCount@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void positionAllRiders() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?positionAllRiders@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInsideBorderBlock(float a0) const {
        bool (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?isInsideBorderBlock@Actor@@QEBA_NM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void doWaterSplashEffect() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?doWaterSplashEffect@Actor@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getStructuralIntegrity() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getStructuralIntegrity@Actor@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void startSwimming() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?startSwimming@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void killed(class Actor& a0) {
        void (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?killed@Actor@@UEAAXAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void sendMotionPacketIfNeeded() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?sendMotionPacketIfNeeded@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getShadowHeightOffs() {
        float (Actor::*rv)();
        *((void**)&rv) = dlsym("?getShadowHeightOffs@Actor@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void setHurtTime(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setHurtTime@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setStrength(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setStrength@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 getInterpolatedRidingOffset(float a0) const {
        class Vec3 (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedRidingOffset@Actor@@UEBA?AVVec3@@M@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void moveTo(class Vec3 const& a0, class Vec2 const& a1) {
        void (Actor::*rv)(class Vec3 const&, class Vec2 const&);
        *((void**)&rv) = dlsym("?moveTo@Actor@@QEAAXAEBVVec3@@AEBVVec2@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isOnHotBlock() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isOnHotBlock@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void changeDimension(class AutomaticID<class Dimension, int> a0, bool a1) {
        void (Actor::*rv)(class AutomaticID<class Dimension, int>, bool);
        *((void**)&rv) = dlsym("?changeDimension@Actor@@UEAAXV?$AutomaticID@VDimension@@H@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE float getInterpolatedBodyRot(float a0) const {
        float (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedBodyRot@Actor@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void addRider(class Actor& a0) {
        void (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?addRider@Actor@@UEAAXAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isLeashableType() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isLeashableType@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1) {
        void (Actor::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) =
            dlsym("?readAdditionalSaveData@Actor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setPersistent() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?setPersistent@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void reloadHardcoded(enum Actor::InitializationMethod  a0,
                                  class VariantParameterList const& a1) {
        void (Actor::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?reloadHardcoded@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setSize(float a0, float a1) {
        void (Actor::*rv)(float, float);
        *((void**)&rv) = dlsym("?setSize@Actor@@UEAAXMM@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void checkBlockCollisions() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?checkBlockCollisions@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isAlive() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isAlive@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canSynchronizeNewEntity() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canSynchronizeNewEntity@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void saveEntityFlags(class CompoundTag& a0) {
        void (Actor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?saveEntityFlags@Actor@@QEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void loadLinks(
        class CompoundTag const&                                                     a0,
        class std::vector<struct ActorLink, class std::allocator<struct ActorLink>>& a1,
        class DataLoadHelper&                                                        a2) {
        void (Actor::*rv)(
            class CompoundTag const&,
            class std::vector<struct ActorLink, class std::allocator<struct ActorLink>>&,
            class DataLoadHelper&);
        *((void**)&rv) = dlsym(
            "?loadLinks@Actor@@UEAAXAEBVCompoundTag@@AEAV?$vector@UActorLink@@V?$allocator@"
            "UActorLink@@@std@@@std@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isInvulnerableTo(class ActorDamageSource const& a0) const {
        bool (Actor::*rv)(class ActorDamageSource const&) const;
        *((void**)&rv) = dlsym("?isInvulnerableTo@Actor@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&
        getScoreTag() const {
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym(
            "?getScoreTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@XZ");
        return (this->*rv)();
    } MCINLINE bool isCreative() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isCreative@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void spawnTrailBubbles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?spawnTrailBubbles@Actor@@MEAAXXZ");
        return (this->*rv)();
    }

    MCINLINE float getRidingHeight() {
        float (Actor::*rv)();
        *((void**)&rv) = dlsym("?getRidingHeight@Actor@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void buildDebugInfo(
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>& a0) const {
        void (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>>&) const;
        *((void**)&rv) = dlsym(
            "?buildDebugInfo@Actor@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@"
            "2@@std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void handleInsidePortal(class BlockPos const& a0) {
        void (Actor::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?handleInsidePortal@Actor@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool hasTickingArea() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?hasTickingArea@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canShowNameTag() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canShowNameTag@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isWorldBuilder() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isWorldBuilder@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE class Vec3 getInterpolatedRidingPosition(float a0) const {
        class Vec3 (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedRidingPosition@Actor@@UEBA?AVVec3@@M@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void transferTickingArea(class Dimension& a0) {
        void (Actor::*rv)(class Dimension&);
        *((void**)&rv) = dlsym("?transferTickingArea@Actor@@QEAAXAEAVDimension@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setColor(enum PaletteColor a0) {
        void (Actor::*rv)(enum PaletteColor);
        *((void**)&rv) = dlsym("?setColor@Actor@@QEAAXW4PaletteColor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE enum PaletteColor getColor() const {
        enum PaletteColor (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getColor@Actor@@QEBA?AW4PaletteColor@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool load(class CompoundTag const& a0, class DataLoadHelper& a1) {
        bool (Actor::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) = dlsym("?load@Actor@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isEnchanted() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isEnchanted@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool pullInEntity(class Actor& a0) {
        bool (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?pullInEntity@Actor@@QEAA_NAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool consumeTotem() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?consumeTotem@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canExistInPeaceful() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canExistInPeaceful@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void addEffect(class MobEffectInstance const& a0) {
        void (Actor::*rv)(class MobEffectInstance const&);
        *((void**)&rv) = dlsym("?addEffect@Actor@@QEAAXAEBVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canChangeDimensions() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canChangeDimensions@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _playMovementSound(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?_playMovementSound@Actor@@IEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onSynchedDataUpdate(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?onSynchedDataUpdate@Actor@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void positionRider(class Actor& a0, float a1) {
        void (Actor::*rv)(class Actor&, float);
        *((void**)&rv) = dlsym("?positionRider@Actor@@UEAAXAEAV1@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool updateWaterState() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateWaterState@Actor@@MEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canBeAffectedByArrow(class MobEffectInstance const& a0) const {
        bool (Actor::*rv)(class MobEffectInstance const&) const;
        *((void**)&rv) = dlsym("?canBeAffectedByArrow@Actor@@UEBA_NAEBVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE static void checkEntityOnewayCollision(class BlockSource&    a0,
                                                    class BlockPos const& a1) {
        return ((void (*)(class BlockSource&, class BlockPos const&))dlsym(
            "?checkEntityOnewayCollision@Actor@@SAXAEAVBlockSource@@AEBVBlockPos@@@Z"))(a0, a1);
    }
    MCINLINE void setSneaking(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setSneaking@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE unsigned __int64 getNameTagAsHash() const {
        unsigned __int64 (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getNameTagAsHash@Actor@@UEBA_KXZ");
        return (this->*rv)();
    }
    MCINLINE void onInsideBubbleColumn(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?onInsideBubbleColumn@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void heal(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?heal@Actor@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void dropLeash(bool a0, bool a1) {
        void (Actor::*rv)(bool, bool);
        *((void**)&rv) = dlsym("?dropLeash@Actor@@QEAAX_N0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void die(class ActorDamageSource const& a0) {
        void (Actor::*rv)(class ActorDamageSource const&);
        *((void**)&rv) = dlsym("?die@Actor@@UEAAXAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reloadLootTable(struct EquipmentTableDescription const* a0) {
        void (Actor::*rv)(struct EquipmentTableDescription const*);
        *((void**)&rv) = dlsym("?reloadLootTable@Actor@@UEAAXPEBUEquipmentTableDescription@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool shouldOrphan(class BlockSource& a0) {
        bool (Actor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?shouldOrphan@Actor@@QEAA_NAEAVBlockSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setJumpDuration(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setJumpDuration@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 const getPosExtrapolated(float a0) const {
        class Vec3 const (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getPosExtrapolated@Actor@@UEBA?BVVec3@@M@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isTargetable() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isTargetable@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void playerTouch(class Player& a0) {
        void (Actor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?playerTouch@Actor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool hasEnteredWater() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?hasEnteredWater@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasPlayerRider() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?hasPlayerRider@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void playSynchronizedSound(enum LevelSoundEvent a0,
                                        class Vec3 const&    a1,
                                        int                  a2,
                                        bool                 a3) {
        void (Actor::*rv)(enum LevelSoundEvent, class Vec3 const&, int, bool);
        *((void**)&rv) =
            dlsym("?playSynchronizedSound@Actor@@UEAAXW4LevelSoundEvent@@AEBVVec3@@H_N@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool isControlledByLocalInstance() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isControlledByLocalInstance@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasFamily(class Util::HashString const& a0) const {
        bool (Actor::*rv)(class Util::HashString const&) const;
        *((void**)&rv) = dlsym("?hasFamily@Actor@@QEBA_NAEBVHashString@Util@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void spawnBalloonPopParticles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?spawnBalloonPopParticles@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool setStatusFlag(enum ActorFlags a0, bool a1) {
        bool (Actor::*rv)(enum ActorFlags, bool);
        *((void**)&rv) = dlsym("?setStatusFlag@Actor@@QEAA_NW4ActorFlags@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class ItemActor* spawnAtLocation(class Block const& a0, int a1) {
        class ItemActor* (Actor::*rv)(class Block const&, int);
        *((void**)&rv) = dlsym("?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVBlock@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool canBePulledIntoVehicle() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canBePulledIntoVehicle@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void teleportRidersTo(class Vec3 const& a0, int a1, int a2) {
        void (Actor::*rv)(class Vec3 const&, int, int);
        *((void**)&rv) = dlsym("?teleportRidersTo@Actor@@QEAAXAEBVVec3@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void reloadComponents(enum Actor::InitializationMethod  a0,
                                   class VariantParameterList const& a1) {
        void (Actor::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?reloadComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool canAddRider(class Actor& a0) const {
        bool (Actor::*rv)(class Actor&) const;
        *((void**)&rv) = dlsym("?canAddRider@Actor@@UEBA_NAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool getAlwaysShowNameTag() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getAlwaysShowNameTag@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void handleEntityEvent(enum ActorEvent a0, int a1) {
        void (Actor::*rv)(enum ActorEvent, int);
        *((void**)&rv) = dlsym("?handleEntityEvent@Actor@@UEAAXW4ActorEvent@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool wasHurt() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?wasHurt@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot a0) const {
        enum ArmorMaterialType (Actor::*rv)(enum ArmorSlot) const;
        *((void**)&rv) =
            dlsym("?getArmorMaterialTypeInSlot@Actor@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void checkBlockCollisions(class AABB const& a0) {
        void (Actor::*rv)(class AABB const&);
        *((void**)&rv) = dlsym("?checkBlockCollisions@Actor@@UEAAXAEBVAABB@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void normalTick() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?normalTick@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void stopRiding(bool a0, bool a1, bool a2) {
        void (Actor::*rv)(bool, bool, bool);
        *((void**)&rv) = dlsym("?stopRiding@Actor@@UEAAX_N00@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void spawnDeathParticles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?spawnDeathParticles@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setBaseDefinition(struct ActorDefinitionIdentifier const& a0, bool a1, bool a2) {
        void (Actor::*rv)(struct ActorDefinitionIdentifier const&, bool, bool);
        *((void**)&rv) =
            dlsym("?setBaseDefinition@Actor@@QEAAXAEBUActorDefinitionIdentifier@@_N1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class AnimationComponent& getAnimationComponent() {
        class AnimationComponent& (Actor::*rv)();
        *((void**)&rv) = dlsym("?getAnimationComponent@Actor@@UEAAAEAVAnimationComponent@@XZ");
        return (this->*rv)();
    }
    MCINLINE void stopSpinAttack() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?stopSpinAttack@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setEquippedSlot(enum ArmorSlot a0, int a1, int a2) {
        void (Actor::*rv)(enum ArmorSlot, int, int);
        *((void**)&rv) = dlsym("?setEquippedSlot@Actor@@UEAAXW4ArmorSlot@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void getDebugText(
        class std::vector<
            class std::
                basic_string<char, struct std::char_traits<char>, class std::allocator<char>>,
            class std::allocator<class std::basic_string<char,
                                                         struct std::char_traits<char>,
                                                         class std::allocator<char>>>>& a0) {
        void (Actor::*rv)(
            class std::vector<class std::basic_string<char, struct std::char_traits<char>,
                                                      class std::allocator<char>>,
                              class std::allocator<class std::basic_string<
                                  char, struct std::char_traits<char>, class std::allocator<char>>>>&);
        *((void**)&rv) = dlsym(
            "?getDebugText@Actor@@UEAAXAEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
            "D@2@@std@@@2@@std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getYawSpeedInDegreesPerSecond() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getYawSpeedInDegreesPerSecond@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE class Vec3 getHeadLookVector(float a0) {
        class Vec3 (Actor::*rv)(float);
        *((void**)&rv) = dlsym("?getHeadLookVector@Actor@@UEAA?AVVec3@@M@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 getFiringPos() const {
        class Vec3 (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getFiringPos@Actor@@UEBA?AVVec3@@XZ");
        return (this->*rv)();
    }
    MCINLINE void spawnEatParticles(class ItemStack const& a0, int a1) {
        void (Actor::*rv)(class ItemStack const&, int);
        *((void**)&rv) = dlsym("?spawnEatParticles@Actor@@QEAAXAEBVItemStack@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isFishable() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isFishable@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isFree(class Vec3 const& a0, float a1) {
        bool (Actor::*rv)(class Vec3 const&, float);
        *((void**)&rv) = dlsym("?isFree@Actor@@UEAA_NAEBVVec3@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void removeAllEffects() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?removeAllEffects@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasSubBBInLava() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?hasSubBBInLava@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInvertedHealAndHarm() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInvertedHealAndHarm@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasOutputSignal(unsigned char a0) const {
        bool (Actor::*rv)(unsigned char) const;
        *((void**)&rv) = dlsym("?hasOutputSignal@Actor@@UEBA_NE@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateDescription() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateDescription@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void baseTick() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?baseTick@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void removeAllRiders(bool a0, bool a1) {
        void (Actor::*rv)(bool, bool);
        *((void**)&rv) = dlsym("?removeAllRiders@Actor@@QEAAX_N0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool tryTeleportTo(class Vec3 const& a0, bool a1, bool a2, int a3, int a4) {
        bool (Actor::*rv)(class Vec3 const&, bool, bool, int, int);
        *((void**)&rv) = dlsym("?tryTeleportTo@Actor@@UEAA_NAEBVVec3@@_N1HH@Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE bool isInvisible() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInvisible@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void onBounceStarted(class BlockPos const& a0, class Block const& a1) {
        void (Actor::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?onBounceStarted@Actor@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void swing() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?swing@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class LootTable* getLootTable() {
        class LootTable* (Actor::*rv)();
        *((void**)&rv) = dlsym("?getLootTable@Actor@@MEAAPEAVLootTable@@XZ");
        return (this->*rv)();
    }
    MCINLINE float getArmorColorInSlot(enum ArmorSlot a0, int a1) const {
        float (Actor::*rv)(enum ArmorSlot, int) const;
        *((void**)&rv) = dlsym("?getArmorColorInSlot@Actor@@UEBAMW4ArmorSlot@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class Actor* getRideRoot() const {
        class Actor* (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getRideRoot@Actor@@QEBAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE void setNameTagVisible(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setNameTagVisible@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isAdventure() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isAdventure@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void checkFallDamage(float a0, bool a1) {
        void (Actor::*rv)(float, bool);
        *((void**)&rv) = dlsym("?checkFallDamage@Actor@@UEAAXM_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isBlocking() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isBlocking@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasTag(class std::basic_string<char,
                                                 struct std::char_traits<char>,
                                                 class std::allocator<char>> const& a0) const {
        bool (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>> const&) const;
        *((void**)&rv) = dlsym(
            "?hasTag@Actor@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
            "@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _updateOwnerChunk() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_updateOwnerChunk@Actor@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _playStepSound(class BlockPos const& a0, class Block const& a1) {
        void (Actor::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?_playStepSound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _spawnPukeParticles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_spawnPukeParticles@Actor@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getInventorySize() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getInventorySize@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void initEntity(class EntityRegistryOwned& a0) {
        void (Actor::*rv)(class EntityRegistryOwned&);
        *((void**)&rv) = dlsym("?initEntity@Actor@@QEAAXAEAVEntityRegistryOwned@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool intersects(class Vec3 const& a0, class Vec3 const& a1) const {
        bool (Actor::*rv)(class Vec3 const&, class Vec3 const&) const;
        *((void**)&rv) = dlsym("?intersects@Actor@@UEBA_NAEBVVec3@@0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE int getPortalCooldown() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getPortalCooldown@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void lerpMotion(class Vec3 const& a0) {
        void (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?lerpMotion@Actor@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setStructuralIntegrity(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setStructuralIntegrity@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reloadHardcodedClient(enum Actor::InitializationMethod  a0,
                                        class VariantParameterList const& a1) {
        void (Actor::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?reloadHardcodedClient@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@"
            "@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool moveChunks() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?moveChunks@Actor@@QEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasEffect(class MobEffect const& a0) const {
        bool (Actor::*rv)(class MobEffect const&) const;
        *((void**)&rv) = dlsym("?hasEffect@Actor@@QEBA_NAEBVMobEffect@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class AutomaticID<class Dimension, int> getDimensionId() const {
        class AutomaticID<class Dimension, int> (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getDimensionId@Actor@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ");
        return (this->*rv)();
    } MCINLINE void _sendDirtyActorData() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_sendDirtyActorData@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void loadEntityFlags(class CompoundTag const& a0, class DataLoadHelper& a1) {
        void (Actor::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) =
            dlsym("?loadEntityFlags@Actor@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void move(class Vec3 const& a0) {
        void (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?move@Actor@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSleeping() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isSleeping@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateEntitySpecificMolangVariables(class RenderParams& a0) {
        void (Actor::*rv)(class RenderParams&);
        *((void**)&rv) =
            dlsym("?updateEntitySpecificMolangVariables@Actor@@MEAAXAEAVRenderParams@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setOffhandSlot(class ItemStack const& a0) {
        void (Actor::*rv)(class ItemStack const&);
        *((void**)&rv) = dlsym("?setOffhandSlot@Actor@@UEAAXAEBVItemStack@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setInvisible(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setInvisible@Actor@@QEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool startRiding(class Actor& a0) {
        bool (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?startRiding@Actor@@UEAA_NAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isWithinRestriction(class BlockPos const& a0) const {
        bool (Actor::*rv)(class BlockPos const&) const;
        *((void**)&rv) = dlsym("?isWithinRestriction@Actor@@QEBA_NAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void removeEffectParticles() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?removeEffectParticles@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE struct ActorUniqueID getControllingPlayer() const {
        struct ActorUniqueID (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getControllingPlayer@Actor@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setTarget(class Actor* a0) {
        void (Actor::*rv)(class Actor*);
        *((void**)&rv) = dlsym("?setTarget@Actor@@UEAAXPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getMapDecorationRotation() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getMapDecorationRotation@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool isOnFire() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isOnFire@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateInBubbleColumnState() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateInBubbleColumnState@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void moveRelative(float a0, float a1, float a2, float a3) {
        void (Actor::*rv)(float, float, float, float);
        *((void**)&rv) = dlsym("?moveRelative@Actor@@UEAAXMMMM@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void outOfWorld() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?outOfWorld@Actor@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canBeAffected(int a0) const {
        bool (Actor::*rv)(int) const;
        *((void**)&rv) = dlsym("?canBeAffected@Actor@@UEBA_NH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setColor2(enum PaletteColor a0) {
        void (Actor::*rv)(enum PaletteColor);
        *((void**)&rv) = dlsym("?setColor2@Actor@@QEAAXW4PaletteColor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE struct ActorUniqueID getSourceUniqueID() const {
        struct ActorUniqueID (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getSourceUniqueID@Actor@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool _countFood(int a0) {
        bool (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?_countFood@Actor@@AEAA_NH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void moveBBs(class Vec3 const& a0) {
        void (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?moveBBs@Actor@@QEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 _randomHeartPos() {
        class Vec3 (Actor::*rv)();
        *((void**)&rv) = dlsym("?_randomHeartPos@Actor@@QEAA?AVVec3@@XZ");
        return (this->*rv)();
    }
    MCINLINE void playSynchronizedSound(enum LevelSoundEvent a0,
                                        class Vec3 const&    a1,
                                        class Block const&   a2,
                                        bool                 a3) {
        void (Actor::*rv)(enum LevelSoundEvent, class Vec3 const&, class Block const&, bool);
        *((void**)&rv) = dlsym(
            "?playSynchronizedSound@Actor@@UEAAXW4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@_N@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE int getOnDeathExperience() {
        int (Actor::*rv)();
        *((void**)&rv) = dlsym("?getOnDeathExperience@Actor@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool isImmobile() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isImmobile@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE float getInterpolatedBodyYaw(float a0) const {
        float (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedBodyYaw@Actor@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isOverWater() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isOverWater@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void setLeashHolder(struct ActorUniqueID a0) {
        void (Actor::*rv)(struct ActorUniqueID);
        *((void**)&rv) = dlsym("?setLeashHolder@Actor@@QEAAXUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 getViewVector(float a0) const {
        class Vec3 (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getViewVector@Actor@@QEBA?AVVec3@@M@Z");
        return (this->*rv)(a0);
    }
    MCINLINE enum CommandPermissionLevel getCommandPermissionLevel() const {
        enum CommandPermissionLevel (Actor::*rv)() const;
        *((void**)&rv) =
            dlsym("?getCommandPermissionLevel@Actor@@UEBA?AW4CommandPermissionLevel@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool shouldRender() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?shouldRender@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool onLadder(bool a0) const {
        bool (Actor::*rv)(bool) const;
        *((void**)&rv) = dlsym("?onLadder@Actor@@QEBA_N_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reloadLootTable() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?reloadLootTable@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getDeletionDelayTimeSeconds() const {
        float (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getDeletionDelayTimeSeconds@Actor@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool save(class CompoundTag& a0) {
        bool (Actor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?save@Actor@@UEAA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isUnderWaterfall() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isUnderWaterfall@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void causeFallDamage(float a0) {
        void (Actor::*rv)(float);
        *((void**)&rv) = dlsym("?causeFallDamage@Actor@@UEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateBBFromDescription() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateBBFromDescription@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void renderDebugServerState(class Options const& a0) {
        void (Actor::*rv)(class Options const&);
        *((void**)&rv) = dlsym("?renderDebugServerState@Actor@@UEAAXAEBVOptions@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void rideJumped() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?rideJumped@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class Player* getTradingPlayer() const {
        class Player* (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getTradingPlayer@Actor@@QEBAPEAVPlayer@@XZ");
        return (this->*rv)();
    }
    MCINLINE void _removeRider(struct ActorUniqueID const& a0, bool a1, bool a2) {
        void (Actor::*rv)(struct ActorUniqueID const&, bool, bool);
        *((void**)&rv) = dlsym("?_removeRider@Actor@@MEAAXAEBUActorUniqueID@@_N1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void onFailedTame() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?onFailedTame@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isShootable() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isShootable@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE enum PaletteColor getColor2() const {
        enum PaletteColor (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getColor2@Actor@@QEBA?AW4PaletteColor@@XZ");
        return (this->*rv)();
    }

    MCINLINE void pickUpItem(class ItemActor& a0, int a1) {
        void (Actor::*rv)(class ItemActor&, int);
        *((void**)&rv) = dlsym("?pickUpItem@Actor@@QEAAXAEAVItemActor@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void useItem(class ItemStack& a0, enum ItemUseMethod a1, bool a2) {
        void (Actor::*rv)(class ItemStack&, enum ItemUseMethod, bool);
        *((void**)&rv) = dlsym("?useItem@Actor@@UEAAXAEAVItemStack@@W4ItemUseMethod@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void flagRiderToRemove(class Actor& a0) {
        void (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?flagRiderToRemove@Actor@@UEAAXAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canMakeStepSound() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canMakeStepSound@Actor@@MEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE class ItemStack const& getEquippedTotem() const {
        class ItemStack const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getEquippedTotem@Actor@@UEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setTradingPlayer(class Player* a0) {
        void (Actor::*rv)(class Player*);
        *((void**)&rv) = dlsym("?setTradingPlayer@Actor@@QEAAXPEAVPlayer@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void feed(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?feed@Actor@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openContainerComponent(class Player& a0) {
        void (Actor::*rv)(class Player&);
        *((void**)&rv) = dlsym("?openContainerComponent@Actor@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canSee(class Vec3 const& a0) const {
        bool (Actor::*rv)(class Vec3 const&) const;
        *((void**)&rv) = dlsym("?canSee@Actor@@UEBA_NAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void testForCollidableMobs(
        class BlockSource&                                               a0,
        class AABB const&                                                a1,
        class std::vector<class AABB, class std::allocator<class AABB>>& a2) {
        void (Actor::*rv)(class BlockSource&, class AABB const&,
                          class std::vector<class AABB, class std::allocator<class AABB>>&);
        *((void**)&rv) = dlsym(
            "?testForCollidableMobs@Actor@@QEAAXAEAVBlockSource@@AEBVAABB@@AEAV?$vector@VAABB@@V?$"
            "allocator@VAABB@@@std@@@std@@@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isValidTarget(class Actor* a0) const {
        bool (Actor::*rv)(class Actor*) const;
        *((void**)&rv) = dlsym("?isValidTarget@Actor@@UEBA_NPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateInvisibilityStatus() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?updateInvisibilityStatus@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canAttack(class Actor* a0, bool a1) const {
        bool (Actor::*rv)(class Actor*, bool) const;
        *((void**)&rv) = dlsym("?canAttack@Actor@@UEBA_NPEAV1@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void playSound(enum LevelSoundEvent a0, class Vec3 const& a1, int a2) {
        void (Actor::*rv)(enum LevelSoundEvent, class Vec3 const&, int);
        *((void**)&rv) = dlsym("?playSound@Actor@@QEAAXW4LevelSoundEvent@@AEBVVec3@@H@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void tickLeash() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?tickLeash@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void wobble() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?wobble@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool breaksFallingBlocks() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?breaksFallingBlocks@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasRestriction() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?hasRestriction@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool shouldTick() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?shouldTick@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _manageRiders(class BlockSource& a0) {
        void (Actor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?_manageRiders@Actor@@AEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getControllingSeat() {
        int (Actor::*rv)();
        *((void**)&rv) = dlsym("?getControllingSeat@Actor@@QEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool _makeFlySound() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?_makeFlySound@Actor@@MEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _tryPlantWitherRose() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_tryPlantWitherRose@Actor@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canBeginOrContinueClimbingLadder(bool a0) const {
        bool (Actor::*rv)(bool) const;
        *((void**)&rv) = dlsym("?canBeginOrContinueClimbingLadder@Actor@@QEBA_N_N@Z");
        return (this->*rv)(a0);
    }

    MCINLINE class ItemActor* spawnAtLocation(class ItemStack const& a0, float a1) {
        class ItemActor* (Actor::*rv)(class ItemStack const&, float);
        *((void**)&rv) = dlsym("?spawnAtLocation@Actor@@UEAAPEAVItemActor@@AEBVItemStack@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setHurtDir(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setHurtDir@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void despawn() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?despawn@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isPickable() {
        bool (Actor::*rv)();
        *((void**)&rv) = dlsym("?isPickable@Actor@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isRiding() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isRiding@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool getInteraction(class Player&           a0,
                                 class ActorInteraction& a1,
                                 class Vec3 const&       a2) {
        bool (Actor::*rv)(class Player&, class ActorInteraction&, class Vec3 const&);
        *((void**)&rv) =
            dlsym("?getInteraction@Actor@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void awardKillScore(class Actor& a0, int a1) {
        void (Actor::*rv)(class Actor&, int);
        *((void**)&rv) = dlsym("?awardKillScore@Actor@@UEAAXAEAV1@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void adjustDamageAmount(int& a0) const {
        void (Actor::*rv)(int&) const;
        *((void**)&rv) = dlsym("?adjustDamageAmount@Actor@@UEBAXAEAH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void remove() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?remove@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void blockedByShield(class ActorDamageSource const& a0, class Actor& a1) {
        void (Actor::*rv)(class ActorDamageSource const&, class Actor&);
        *((void**)&rv) = dlsym("?blockedByShield@Actor@@UEAAXAEBVActorDamageSource@@AEAV1@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE int getRiderIndex(class Actor& a0) const {
        int (Actor::*rv)(class Actor&) const;
        *((void**)&rv) = dlsym("?getRiderIndex@Actor@@QEBAHAEAV1@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool isRider(class Actor const& a0) const {
        bool (Actor::*rv)(class Actor const&) const;
        *((void**)&rv) = dlsym("?isRider@Actor@@QEBA_NAEBV1@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool _hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3) {
        bool (Actor::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?_hurt@Actor@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool attack(class Actor& a0) {
        bool (Actor::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?attack@Actor@@UEAA_NAEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getOutputSignal() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getOutputSignal@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void initializeComponents(enum Actor::InitializationMethod  a0,
                                       class VariantParameterList const& a1) {
        void (Actor::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?initializeComponents@Actor@@MEAAXW4InitializationMethod@1@AEBVVariantParameterList@@@"
            "Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void addAdditionalSaveData(class CompoundTag& a0) {
        void (Actor::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@Actor@@MEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getLifeSpan() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getLifeSpan@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE int getDeathTime() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getDeathTime@Actor@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool tick(class BlockSource& a0) {
        bool (Actor::*rv)(class BlockSource&);
        *((void**)&rv) = dlsym("?tick@Actor@@QEAA_NAEAVBlockSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void dropTowards(class ItemStack const& a0, class Vec3 a1) {
        void (Actor::*rv)(class ItemStack const&, class Vec3);
        *((void**)&rv) = dlsym("?dropTowards@Actor@@QEAAXAEBVItemStack@@VVec3@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class AttributeInstance* getMutableAttribute(class Attribute const& a0) {
        class AttributeInstance* (Actor::*rv)(class Attribute const&);
        *((void**)&rv) =
            dlsym("?getMutableAttribute@Actor@@UEAAPEAVAttributeInstance@@AEBVAttribute@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getSkinID() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getSkinID@Actor@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE class Actor* getTarget() const {
        class Actor* (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getTarget@Actor@@QEBAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE void setScoreTag(class std::basic_string<char,
                                                      struct std::char_traits<char>,
                                                      class std::allocator<char>> const& a0) {
        void (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>> const&);
        *((void**)&rv) = dlsym(
            "?setScoreTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onOrphan() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?onOrphan@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canBeAffected(class MobEffectInstance const& a0) const {
        bool (Actor::*rv)(class MobEffectInstance const&) const;
        *((void**)&rv) = dlsym("?canBeAffected@Actor@@UEBA_NAEBVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void lerpTo(class Vec3 const& a0, class Vec2 const& a1, int a2) {
        void (Actor::*rv)(class Vec3 const&, class Vec2 const&, int);
        *((void**)&rv) = dlsym("?lerpTo@Actor@@UEAAXAEBVVec3@@AEBVVec2@@H@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE int getMarkVariant() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getMarkVariant@Actor@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void rideTick() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?rideTick@Actor@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void chorusFruitTeleport(class Vec3& a0) {
        void (Actor::*rv)(class Vec3&);
        *((void**)&rv) = dlsym("?chorusFruitTeleport@Actor@@UEAAXAEAVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void performRangedAttack(class Actor& a0, float a1) {
        void (Actor::*rv)(class Actor&, float);
        *((void**)&rv) = dlsym("?performRangedAttack@Actor@@UEAAXAEAV1@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void sendActorDefinitionEventTriggered(
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const& a0) {
        void (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>> const&);
        *((void**)&rv) = dlsym(
            "?sendActorDefinitionEventTriggered@Actor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@"
            "std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class ItemActor* spawnAtLocation(int a0, int a1, float a2) {
        class ItemActor* (Actor::*rv)(int, int, float);
        *((void**)&rv) = dlsym("?spawnAtLocation@Actor@@UEAAPEAVItemActor@@HHM@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool getStatusFlag(enum ActorFlags a0) const {
        bool (Actor::*rv)(enum ActorFlags) const;
        *((void**)&rv) = dlsym("?getStatusFlag@Actor@@QEBA_NW4ActorFlags@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getBrightness(float a0) const {
        float (Actor::*rv)(float) const;
        *((void**)&rv) = dlsym("?getBrightness@Actor@@UEBAMM@Z");
        return (this->*rv)(a0);
    }

    MCINLINE int getVariant() const {
        int (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getVariant@Actor@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE enum ActorType getOwnerEntityType() {
        enum ActorType (Actor::*rv)();
        *((void**)&rv) = dlsym("?getOwnerEntityType@Actor@@UEAA?AW4ActorType@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool isInWaterOrRain() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInWaterOrRain@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }

    MCINLINE bool isSkyLit(float a0) {
        bool (Actor::*rv)(float);
        *((void**)&rv) = dlsym("?isSkyLit@Actor@@UEAA_NM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _onSizeUpdated() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?_onSizeUpdated@Actor@@EEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canCurrentlySwim() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?canCurrentlySwim@Actor@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void makeStuckInBlock(float a0) {
        void (Actor::*rv)(float);
        *((void**)&rv) = dlsym("?makeStuckInBlock@Actor@@UEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void spawnDustParticles(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?spawnDustParticles@Actor@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isFree(class Vec3 const& a0) {
        bool (Actor::*rv)(class Vec3 const&);
        *((void**)&rv) = dlsym("?isFree@Actor@@UEAA_NAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _setNetherPortalData(class AutomaticID<class Dimension, int> a0,
                                       class AutomaticID<class Dimension, int> a1,
                                       int                                     a2) {
        void (Actor::*rv)(class AutomaticID<class Dimension, int>,
                          class AutomaticID<class Dimension, int>, int);
        *((void**)&rv) =
            dlsym("?_setNetherPortalData@Actor@@IEAAXV?$AutomaticID@VDimension@@H@@0H@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void setCanClimb(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setCanClimb@Actor@@QEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setInLove(class Actor* a0) {
        void (Actor::*rv)(class Actor*);
        *((void**)&rv) = dlsym("?setInLove@Actor@@QEAAXPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _playFlySound(class BlockPos const& a0, class Block const& a1) {
        void (Actor::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?_playFlySound@Actor@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void reload() {
        void (Actor::*rv)();
        *((void**)&rv) = dlsym("?reload@Actor@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
        getExitTip(class std::basic_string<char,
                                           struct std::char_traits<char>,
                                           class std::allocator<char>> const& a0,
                   enum InputMode                                             a1) const {
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (
            Actor::*rv)(class std::basic_string<char,
                                                struct std::char_traits<char>,
                                                class std::allocator<char>> const&,
                        enum InputMode) const;
        *((void**)&rv) = dlsym(
            "?getExitTip@Actor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@"
            "@AEBV23@W4InputMode@@@Z");
        return (this->*rv)(a0, a1);
    } MCINLINE float getPickRadius() {
        float (Actor::*rv)();
        *((void**)&rv) = dlsym("?getPickRadius@Actor@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void onEffectRemoved(class MobEffectInstance& a0) {
        void (Actor::*rv)(class MobEffectInstance&);
        *((void**)&rv) = dlsym("?onEffectRemoved@Actor@@UEAAXAEAVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void spawnTamingParticles(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?spawnTamingParticles@Actor@@QEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void handleFallDistanceOnServer(float a0, bool a1) {
        void (Actor::*rv)(float, bool);
        *((void**)&rv) = dlsym("?handleFallDistanceOnServer@Actor@@UEAAXM_N@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE void setCanPowerJump(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setCanPowerJump@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
#endif
    MCINLINE void setOnFire(int a0) {
        void (Actor::*rv)(int);
        *((void**)&rv) = dlsym("?setOnFire@Actor@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Player* getPlayerOwner() const {
        class Player* (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getPlayerOwner@Actor@@QEBAPEAVPlayer@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool isInWater() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInWater@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInWall() const {
        bool (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?isInWall@Actor@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE class ItemStack const& getCarriedItem() const {
        class ItemStack const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getCarriedItem@Actor@@UEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool add(class ItemStack& a0) {
        bool (Actor::*rv)(class ItemStack&);
        *((void**)&rv) = dlsym("?add@Actor@@UEAA_NAEAVItemStack@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool addTag(class std::basic_string<char,
                                                 struct std::char_traits<char>,
                                                 class std::allocator<char>> const& a0) {
        bool (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>> const&);
        *((void**)&rv) = dlsym(
            "?addTag@Actor@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
            "@Z");
        return (this->*rv)(a0);
    }
    MCINLINE struct ActorUniqueID const& getUniqueID() const {
        struct ActorUniqueID const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getUniqueID@Actor@@QEBAAEBUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    MCINLINE class AutomaticID<class Dimension, int> getDimensionId() const {
        class AutomaticID<class Dimension, int> (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getDimensionId@Actor@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ");
        return (this->*rv)();
    } MCINLINE void setSitting(bool a0) {
        void (Actor::*rv)(bool);
        *((void**)&rv) = dlsym("?setSitting@Actor@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Vec3 const& getPos() const {
        class Vec3 const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getPos@Actor@@UEBAAEBVVec3@@XZ");
        return (this->*rv)();
    }
    MCINLINE void setCarriedItem(class ItemStack const& a0) {
        void (Actor::*rv)(class ItemStack const&);
        *((void**)&rv) = dlsym("?setCarriedItem@Actor@@UEAAXAEBVItemStack@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE enum ActorType getEntityTypeId() const {
        enum ActorType (Actor::*rv)() const;
        *((void**)&rv) = dlsym("?getEntityTypeId@Actor@@UEBA?AW4ActorType@@XZ");
        return (this->*rv)();
    }
    MCINLINE class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&
        getNameTag() const {
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const& (Actor::*rv)() const;
        *((void**)&rv) = dlsym(
            "?getNameTag@Actor@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@XZ");
        return (this->*rv)();
    }
    //MCINLINE class MobEffectInstance const* getEffect(class MobEffect const& a0) const {
    //    class MobEffectInstance const* (Actor::*rv)(class MobEffect const&) const;
    //    *((void**)&rv) = dlsym("?getEffect@Actor@@QEBAPEBVMobEffectInstance@@AEBVMobEffect@@@Z");
    //    return (this->*rv)(a0);
    //}
    MCINLINE void setNameTag(class std::basic_string<char,
                                                     struct std::char_traits<char>,
                                                     class std::allocator<char>> const& a0) {
        void (Actor::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                  class std::allocator<char>> const&);
        *((void**)&rv) = dlsym(
            "?setNameTag@Actor@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setArmor(enum ArmorSlot a0, class ItemStack const& a1) {
        void (Actor::*rv)(enum ArmorSlot, class ItemStack const&);
        *((void**)&rv) = dlsym("?setArmor@Actor@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
#if 0
	MCINLINE void  savePersistingTrade(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > a0,int a1){
void (Actor::*rv)(class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >,int); *((void**)&rv) = dlsym("?savePersistingTrade@Actor@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@H@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> >  getPersistingTradeOffers(){
class std::unique_ptr<class CompoundTag,struct std::default_delete<class CompoundTag> > (Actor::*rv)(); *((void**)&rv) = dlsym("?getPersistingTradeOffers@Actor@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE class std::unique_ptr<class ListTag,struct std::default_delete<class ListTag> >  saveLinks()const {
class std::unique_ptr<class ListTag,struct std::default_delete<class ListTag> > (Actor::*rv)()const ; *((void**)&rv) = dlsym("?saveLinks@Actor@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::unique_ptr<class Packet,struct std::default_delete<class Packet> >  getAddPacket(){
 class std::unique_ptr<class Packet,struct std::default_delete<class Packet> > (Actor::*rv)(); *((void**)&rv) = dlsym("?getAddPacket@Actor@@UEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE class std::vector<struct DistanceSortedActor,class std::allocator<struct DistanceSortedActor> >  fetchNearbyActorsSorted(class Vec3 const & a0,enum ActorType a1){
class std::vector<struct DistanceSortedActor,class std::allocator<struct DistanceSortedActor> > (Actor::*rv)(class Vec3 const &,enum ActorType); *((void**)&rv) = dlsym("?fetchNearbyActorsSorted@Actor@@QEAA?AV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@std@@AEBVVec3@@W4ActorType@@@Z"); return (this->*rv)(a0,a1);}
	MCINLINE class std::vector<struct ActorLink,class std::allocator<struct ActorLink> >  getLinks()const {
class std::vector<struct ActorLink,class std::allocator<struct ActorLink> > (Actor::*rv)()const ; *((void**)&rv) = dlsym("?getLinks@Actor@@QEBA?AV?$vector@UActorLink@@V?$allocator@UActorLink@@@std@@@std@@XZ"); return (this->*rv)();}
//   bad fun  

	// ??0Actor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@@Z
	// Actor::Actor(class ActorDefinitionGroup *,struct ActorDefinitionIdentifier const &)
	// ??0Actor@@QEAA@AEAVLevel@@@Z
	// Actor::Actor(class Level &)
	MCINLINE  class AABB  getHandleWaterAABB()const {
 class AABB (Actor::*rv)()const ; *((void**)&rv) = dlsym("?getHandleWaterAABB@Actor@@UEBA?AVAABB@@XZ"); return (this->*rv)();}
	MCINLINE void  forEachLeashedActor(class std::function<void > a0){
void (Actor::*rv)(class std::function<void >); *((void**)&rv) = dlsym("?forEachLeashedActor@Actor@@QEAAXV?$function@$$A6AXPEAVActor@@@Z@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE void  pushBackActionEventToActionQueue(class ActionEvent a0){
void (Actor::*rv)(class ActionEvent); *((void**)&rv) = dlsym("?pushBackActionEventToActionQueue@Actor@@QEAAXVActionEvent@@@Z"); return (this->*rv)(a0);}
#endif
};
#pragma once
#include "Core.h"
class Mob : public Actor {
public:
    enum TravelType : int;
    Mob(const Mob&) = delete;
    Mob& operator=(const Mob&) = delete;
    Mob()                      = delete;
#ifdef MCAPI_MOB_EXTRA
    MCINLINE void _applyRidingRotationLimits() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_applyRidingRotationLimits@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void updateGliding() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?updateGliding@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void attackAnimation(class Actor* a0, float a1) {
        void (Mob::*rv)(class Actor*, float);
        *((void**)&rv) = dlsym("?attackAnimation@Mob@@UEAAXPEAVActor@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setEatCounter(int a0) {
        void (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?setEatCounter@Mob@@QEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void travel(float a0, float a1, float a2) {
        void (Mob::*rv)(float, float, float);
        *((void**)&rv) = dlsym("?travel@Mob@@UEAAXMMM@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void updateAttackAnim() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?updateAttackAnim@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool checkSpawnRules(bool a0) {
        bool (Mob::*rv)(bool);
        *((void**)&rv) = dlsym("?checkSpawnRules@Mob@@UEAA_N_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void dropBags() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?dropBags@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasComponent(class Util::HashString const& a0) const {
        bool (Mob::*rv)(class Util::HashString const&) const;
        *((void**)&rv) = dlsym("?hasComponent@Mob@@UEBA_NAEBVHashString@Util@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSprinting() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isSprinting@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE struct ActorUniqueID getCaravanHead() const {
        struct ActorUniqueID (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getCaravanHead@Mob@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    MCINLINE void actuallyHurt(int a0, class ActorDamageSource const* a1, bool a2) {
        void (Mob::*rv)(int, class ActorDamageSource const*, bool);
        *((void**)&rv) = dlsym("?actuallyHurt@Mob@@UEAAXHPEBVActorDamageSource@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE float getItemUseIntervalProgress() {
        float (Mob::*rv)();
        *((void**)&rv) = dlsym("?getItemUseIntervalProgress@Mob@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE float getItemUseStartupProgress() {
        float (Mob::*rv)();
        *((void**)&rv) = dlsym("?getItemUseStartupProgress@Mob@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void setSleeping(bool a0) {
        void (Mob::*rv)(bool);
        *((void**)&rv) = dlsym("?setSleeping@Mob@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void ate() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?ate@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getArmorColorInSlot(enum ArmorSlot a0, int a1) const {
        float (Mob::*rv)(enum ArmorSlot, int) const;
        *((void**)&rv) = dlsym("?getArmorColorInSlot@Mob@@UEBAMW4ArmorSlot@@H@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE void spawnAnim() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?spawnAnim@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getJumpMultiplier() {
        float (Mob::*rv)();
        *((void**)&rv) = dlsym("?getJumpMultiplier@Mob@@IEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE enum Mob::TravelType getTravelType() {
        enum Mob::TravelType (Mob::*rv)();
        *((void**)&rv) = dlsym("?getTravelType@Mob@@QEAA?AW4TravelType@1@XZ");
        return (this->*rv)();
    }
    MCINLINE void aiStep() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?aiStep@Mob@@UEAAXXZ");
        return (this->*rv)();
    }

    MCINLINE bool canBeControlledByRider() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?canBeControlledByRider@Mob@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool checkSpawnObstruction() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?checkSpawnObstruction@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE float _getWalkTargetValue(class BlockPos const& a0) {
        float (Mob::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?_getWalkTargetValue@Mob@@UEAAMAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateWalkAnim() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?updateWalkAnim@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void blockedByShield(class ActorDamageSource const& a0, class Actor& a1) {
        void (Mob::*rv)(class ActorDamageSource const&, class Actor&);
        *((void**)&rv) = dlsym("?blockedByShield@Mob@@UEAAXAEBVActorDamageSource@@AEAVActor@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _serverAiMobStep() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_serverAiMobStep@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void baseTick() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?baseTick@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getInterpolatedHeadRot(float a0) const {
        float (Mob::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedHeadRot@Mob@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setLastHurtByMob(class Mob* a0) {
        void (Mob::*rv)(class Mob*);
        *((void**)&rv) = dlsym("?setLastHurtByMob@Mob@@UEAAXPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool _isHeadInWater() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?_isHeadInWater@Mob@@AEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void tickEffects() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?tickEffects@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setEquippedSlot(enum ArmorSlot a0, class ItemStack const& a1) {
        void (Mob::*rv)(enum ArmorSlot, class ItemStack const&);
        *((void**)&rv) = dlsym("?setEquippedSlot@Mob@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot a0) const {
        enum ArmorTextureType (Mob::*rv)(enum ArmorSlot) const;
        *((void**)&rv) = dlsym(
            "?getArmorMaterialTextureTypeInSlot@Mob@@UEBA?AW4ArmorTextureType@@W4ArmorSlot@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setTarget(class Actor* a0) {
        void (Mob::*rv)(class Actor*);
        *((void**)&rv) = dlsym("?setTarget@Mob@@UEAAXPEAVActor@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE float getInterpolatedBodyRot(float a0) const {
        float (Mob::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedBodyRot@Mob@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Mob* getLastHurtByMob() {
        class Mob* (Mob::*rv)();
        *((void**)&rv) = dlsym("?getLastHurtByMob@Mob@@UEAAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE void setEquippedSlot(enum ArmorSlot a0, int a1, int a2) {
        void (Mob::*rv)(enum ArmorSlot, int, int);
        *((void**)&rv) = dlsym("?setEquippedSlot@Mob@@UEAAXW4ArmorSlot@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void _verifyAttributes() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_verifyAttributes@Mob@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot a0) const {
        enum ArmorMaterialType (Mob::*rv)(enum ArmorSlot) const;
        *((void**)&rv) =
            dlsym("?getArmorMaterialTypeInSlot@Mob@@UEBA?AW4ArmorMaterialType@@W4ArmorSlot@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getSpeed() const {
        float (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getSpeed@Mob@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE void jumpFromGround() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?jumpFromGround@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void tickDeath() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?tickDeath@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getAmbientSoundPostponeTicks() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getAmbientSoundPostponeTicks@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void _doSprintParticleEffect() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_doSprintParticleEffect@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool _hurt(class ActorDamageSource const& a0, int a1, bool a2, bool a3) {
        bool (Mob::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE float getYawSpeedInDegreesPerSecond() const {
        float (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getYawSpeedInDegreesPerSecond@Mob@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE void _onSizeUpdated() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_onSizeUpdated@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getDeathTime() const {
        int (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getDeathTime@Mob@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void calculateAmbientSoundTime(int a0) {
        void (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?calculateAmbientSoundTime@Mob@@IEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void lookAt(class Actor* a0, float a1, float a2) {
        void (Mob::*rv)(class Actor*, float, float);
        *((void**)&rv) = dlsym("?lookAt@Mob@@UEAAXPEAVActor@@MM@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE float getJumpPower() const {
        float (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getJumpPower@Mob@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool createAIGoals() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?createAIGoals@Mob@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool checkTotemDeathProtection(class ActorDamageSource const& a0) {
        bool (Mob::*rv)(class ActorDamageSource const&);
        *((void**)&rv) = dlsym("?checkTotemDeathProtection@Mob@@QEAA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void normalTick() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?normalTick@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void readAdditionalSaveData(class CompoundTag const& a0, class DataLoadHelper& a1) {
        void (Mob::*rv)(class CompoundTag const&, class DataLoadHelper&);
        *((void**)&rv) =
            dlsym("?readAdditionalSaveData@Mob@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void playAmbientSound() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?playAmbientSound@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _updateMobTravel() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_updateMobTravel@Mob@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void resolveDeathLoot(int a0, class ActorDamageSource const& a1) {
        void (Mob::*rv)(int, class ActorDamageSource const&);
        *((void**)&rv) = dlsym("?resolveDeathLoot@Mob@@UEAAXHAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool useNewAi() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE class Mob* getFirstCaravanHead() {
        class Mob* (Mob::*rv)();
        *((void**)&rv) = dlsym("?getFirstCaravanHead@Mob@@QEAAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE void addAdditionalSaveData(class CompoundTag& a0) {
        void (Mob::*rv)(class CompoundTag&);
        *((void**)&rv) = dlsym("?addAdditionalSaveData@Mob@@MEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reloadHardcoded(enum Actor::InitializationMethod  a0,
                                  class VariantParameterList const& a1) {
        void (Mob::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?reloadHardcoded@Mob@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@"
            "Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE int getAttackTime() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getAttackTime@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool isAlive() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isAlive@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasCaravanTail() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?hasCaravanTail@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE int getArmorValue() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getArmorValue@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE int getArmorTypeHash() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getArmorTypeHash@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void leaveCaravan() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?leaveCaravan@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canBePulledIntoVehicle() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?canBePulledIntoVehicle@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void ascendScaffolding() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?ascendScaffolding@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setOnFire(int a0) {
        void (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?setOnFire@Mob@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getYHeadRot() const {
        float (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getYHeadRot@Mob@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE int clearEquipment() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?clearEquipment@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void tickBlockDamage() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?tickBlockDamage@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool hurtEffects(class ActorDamageSource const& a0, int a1, bool a2, bool a3) {
        bool (Mob::*rv)(class ActorDamageSource const&, int, bool, bool);
        *((void**)&rv) = dlsym("?hurtEffects@Mob@@UEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE int getMeleeKnockbackBonus() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getMeleeKnockbackBonus@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void outOfWorld() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?outOfWorld@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isJumping() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isJumping@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _endJump() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?_endJump@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getDamageAfterArmorAbsorb(class ActorDamageSource const& a0, int a1) {
        int (Mob::*rv)(class ActorDamageSource const&, int);
        *((void**)&rv) = dlsym("?getDamageAfterArmorAbsorb@Mob@@MEAAHAEBVActorDamageSource@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void descendScaffolding() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?descendScaffolding@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void swing() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?swing@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void resetAttributes() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?resetAttributes@Mob@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void frostWalk() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?frostWalk@Mob@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void causeFallDamage(float a0) {
        void (Mob::*rv)(float);
        *((void**)&rv) = dlsym("?causeFallDamage@Mob@@MEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getCurrentSwingDuration() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getCurrentSwingDuration@Mob@@IEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void updateEntitySpecificMolangVariables(class RenderParams& a0) {
        void (Mob::*rv)(class RenderParams&);
        *((void**)&rv) =
            dlsym("?updateEntitySpecificMolangVariables@Mob@@MEAAXAEAVRenderParams@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void updateEquipment() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?updateEquipment@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isSleeping() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isSleeping@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE enum LevelSoundEvent getAmbientSound() {
        enum LevelSoundEvent (Mob::*rv)();
        *((void**)&rv) = dlsym("?getAmbientSound@Mob@@UEAA?AW4LevelSoundEvent@@XZ");
        return (this->*rv)();
    }
    MCINLINE int getCaravanSize() const {
        int (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getCaravanSize@Mob@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void _removeRider(struct ActorUniqueID const& a0, bool a1, bool a2) {
        void (Mob::*rv)(struct ActorUniqueID const&, bool, bool);
        *((void**)&rv) = dlsym("?_removeRider@Mob@@MEAAXAEBUActorUniqueID@@_N1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void hurtArmor(int a0) {
        void (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?hurtArmor@Mob@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setTransitioningSitting(bool a0) {
        void (Mob::*rv)(bool);
        *((void**)&rv) = dlsym("?setTransitioningSitting@Mob@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _playStepSound(class BlockPos const& a0, class Block const& a1) {
        void (Mob::*rv)(class BlockPos const&, class Block const&);
        *((void**)&rv) = dlsym("?_playStepSound@Mob@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isBlocking() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isBlocking@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool inCaravan() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?inCaravan@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void pushActors() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?pushActors@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void renderDebugServerState(class Options const& a0) {
        void (Mob::*rv)(class Options const&);
        *((void**)&rv) = dlsym("?renderDebugServerState@Mob@@UEAAXAEBVOptions@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isImmobile() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isImmobile@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateAi() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?updateAi@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getInterpolatedBodyYaw(float a0) const {
        float (Mob::*rv)(float) const;
        *((void**)&rv) = dlsym("?getInterpolatedBodyYaw@Mob@@UEBAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getItemuseIntervalAxis() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getItemuseIntervalAxis@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE float getArmorCoverPercentage() const {
        float (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?getArmorCoverPercentage@Mob@@UEBAMXZ");
        return (this->*rv)();
    }

    MCINLINE bool isLookingAtAnEntity() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?isLookingAtAnEntity@Mob@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canPowerJump() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?canPowerJump@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool attack(class Actor& a0) {
        bool (Mob::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?attack@Mob@@UEAA_NAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSurfaceMob() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?isSurfaceMob@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool doFireHurt(int a0) {
        bool (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?doFireHurt@Mob@@UEAA_NH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reloadHardcodedClient(enum Actor::InitializationMethod  a0,
                                        class VariantParameterList const& a1) {
        void (Mob::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?reloadHardcodedClient@Mob@@UEAAXW4InitializationMethod@Actor@@"
            "AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void newServerAiStep() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?newServerAiStep@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void animateHurt() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?animateHurt@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool setItemSlot(enum EquipmentSlot a0, class ItemStack const& a1) {
        bool (Mob::*rv)(enum EquipmentSlot, class ItemStack const&);
        *((void**)&rv) = dlsym("?setItemSlot@Mob@@UEAA_NW4EquipmentSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void goDownInWater() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?goDownInWater@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool shouldApplyWaterGravity() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?shouldApplyWaterGravity@Mob@@QEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void
        knockback(class Actor* a0, int a1, float a2, float a3, float a4, float a5, float a6) {
        void (Mob::*rv)(class Actor*, int, float, float, float, float, float);
        *((void**)&rv) = dlsym("?knockback@Mob@@UEAAXPEAVActor@@HMMMMM@Z");
        return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
    }
    MCINLINE bool shouldDespawn() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?shouldDespawn@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void teleportTo(class Vec3 const& a0, bool a1, int a2, int a3) {
        void (Mob::*rv)(class Vec3 const&, bool, int, int);
        *((void**)&rv) = dlsym("?teleportTo@Mob@@UEAAXAEBVVec3@@_NHH@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE bool doHurtTarget(class Actor* a0) {
        bool (Mob::*rv)(class Actor*);
        *((void**)&rv) = dlsym("?doHurtTarget@Mob@@UEAA_NPEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getItemUseDuration() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getItemUseDuration@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE void initializeComponents(enum Actor::InitializationMethod  a0,
                                       class VariantParameterList const& a1) {
        void (Mob::*rv)(enum Actor::InitializationMethod, class VariantParameterList const&);
        *((void**)&rv) = dlsym(
            "?initializeComponents@Mob@@UEAAXW4InitializationMethod@Actor@@"
            "AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isAlliedTo(class Mob* a0) {
        bool (Mob::*rv)(class Mob*);
        *((void**)&rv) = dlsym("?isAlliedTo@Mob@@UEAA_NPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void playerTouch(class Player& a0) {
        void (Mob::*rv)(class Player&);
        *((void**)&rv) = dlsym("?playerTouch@Mob@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setLastHurtMob(class Actor* a0) {
        void (Mob::*rv)(class Actor*);
        *((void**)&rv) = dlsym("?setLastHurtMob@Mob@@UEAAXPEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE struct TextureUVCoordinateSet const* getItemInHandIcon(class ItemStack const& a0,
                                                                    int                    a1) {
        struct TextureUVCoordinateSet const* (Mob::*rv)(class ItemStack const&, int);
        *((void**)&rv) =
            dlsym("?getItemInHandIcon@Mob@@UEAAPEBUTextureUVCoordinateSet@@AEBVItemStack@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE float getAttackAnim(float a0) {
        float (Mob::*rv)(float);
        *((void**)&rv) = dlsym("?getAttackAnim@Mob@@UEAAMM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setLastHurtByPlayer(class Player* a0) {
        void (Mob::*rv)(class Player*);
        *((void**)&rv) = dlsym("?setLastHurtByPlayer@Mob@@UEAAXPEAVPlayer@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void die(class ActorDamageSource const& a0) {
        void (Mob::*rv)(class ActorDamageSource const&);
        *((void**)&rv) = dlsym("?die@Mob@@UEAAXAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void dropEquipment() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?dropEquipment@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setSpeed(float a0) {
        void (Mob::*rv)(float);
        *((void**)&rv) = dlsym("?setSpeed@Mob@@UEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool _initHardCodedComponents() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?_initHardCodedComponents@Mob@@AEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE int getMeleeWeaponDamageBonus(class Mob* a0) {
        int (Mob::*rv)(class Mob*);
        *((void**)&rv) = dlsym("?getMeleeWeaponDamageBonus@Mob@@UEAAHPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setSprinting(bool a0) {
        void (Mob::*rv)(bool);
        *((void**)&rv) = dlsym("?setSprinting@Mob@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getTimeAlongSwing() {
        int (Mob::*rv)();
        *((void**)&rv) = dlsym("?getTimeAlongSwing@Mob@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool _tryApplyingLevitation(class Vec3& a0) const {
        bool (Mob::*rv)(class Vec3&) const;
        *((void**)&rv) = dlsym("?_tryApplyingLevitation@Mob@@AEBA_NAEAVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void rideTick() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?rideTick@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isPickable() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?isPickable@Mob@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void containerChanged(int a0) {
        void (Mob::*rv)(int);
        *((void**)&rv) = dlsym("?containerChanged@Mob@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canExistWhenDisallowMob() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?canExistWhenDisallowMob@Mob@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE float getMaxHeadXRot() {
        float (Mob::*rv)();
        *((void**)&rv) = dlsym("?getMaxHeadXRot@Mob@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE int getDamageAfterEnchantReduction(class ActorDamageSource const& a0, int a1) {
        int (Mob::*rv)(class ActorDamageSource const&, int);
        *((void**)&rv) =
            dlsym("?getDamageAfterEnchantReduction@Mob@@MEAAHAEBVActorDamageSource@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void joinCaravan(class Mob* a0) {
        void (Mob::*rv)(class Mob*);
        *((void**)&rv) = dlsym("?joinCaravan@Mob@@UEAAXPEAV1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void emitJumpPreventedEvent(class BlockPos const& a0) {
        void (Mob::*rv)(class BlockPos const&);
        *((void**)&rv) = dlsym("?emitJumpPreventedEvent@Mob@@IEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void lerpTo(class Vec3 const& a0, class Vec2 const& a1, int a2) {
        void (Mob::*rv)(class Vec3 const&, class Vec2 const&, int);
        *((void**)&rv) = dlsym("?lerpTo@Mob@@UEAAXAEBVVec3@@AEBVVec2@@H@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void sendArmor() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?sendArmor@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setIsPregnant(bool a0) {
        void (Mob::*rv)(bool);
        *((void**)&rv) = dlsym("?setIsPregnant@Mob@@QEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void buildDebugInfo(
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>>& a0) const {
        void (Mob::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                class std::allocator<char>>&) const;
        *((void**)&rv) = dlsym(
            "?buildDebugInfo@Mob@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool _allowAscendingScaffolding() const {
        bool (Mob::*rv)() const;
        *((void**)&rv) = dlsym("?_allowAscendingScaffolding@Mob@@MEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void handleEntityEvent(enum ActorEvent a0, int a1) {
        void (Mob::*rv)(enum ActorEvent, int);
        *((void**)&rv) = dlsym("?handleEntityEvent@Mob@@UEAAXW4ActorEvent@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void dropContainer() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?dropContainer@Mob@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float calcMoveRelativeSpeed(enum Mob::TravelType a0) {
        float (Mob::*rv)(enum Mob::TravelType);
        *((void**)&rv) = dlsym("?calcMoveRelativeSpeed@Mob@@QEAAMW4TravelType@1@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void registerAttributes() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?registerAttributes@Mob@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getDamageAfterMagicAbsorb(class ActorDamageSource const& a0, int a1) {
        int (Mob::*rv)(class ActorDamageSource const&, int);
        *((void**)&rv) = dlsym("?getDamageAfterMagicAbsorb@Mob@@UEAAHAEBVActorDamageSource@@H@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE class Mob* getLastHurtMob() {
        class Mob* (Mob::*rv)();
        *((void**)&rv) = dlsym("?getLastHurtMob@Mob@@UEAAPEAV1@XZ");
        return (this->*rv)();
    }
    MCINLINE bool isShootable() {
        bool (Mob::*rv)();
        *((void**)&rv) = dlsym("?isShootable@Mob@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void dropEquipment(class ActorDamageSource const& a0, int a1) {
        void (Mob::*rv)(class ActorDamageSource const&, int);
        *((void**)&rv) = dlsym("?dropEquipment@Mob@@MEAAXAEBVActorDamageSource@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void ascendLadder() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?ascendLadder@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void applyFinalFriction(float a0, bool a1) {
        void (Mob::*rv)(float, bool);
        *((void**)&rv) = dlsym("?applyFinalFriction@Mob@@UEAAXM_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void onBorn(class Actor& a0, class Actor& a1) {
        void (Mob::*rv)(class Actor&, class Actor&);
        *((void**)&rv) = dlsym("?onBorn@Mob@@UEAAXAEAVActor@@0@Z");
        return (this->*rv)(a0, a1);
    }
#endif
    MCINLINE void addRider(class Actor& a0) {
        void (Mob::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?addRider@Mob@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Player* getLastHurtByPlayer() {
        class Player* (Mob::*rv)();
        *((void**)&rv) = dlsym("?getLastHurtByPlayer@Mob@@UEAAPEAVPlayer@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool startRiding(class Actor& a0) {
        bool (Mob::*rv)(class Actor&);
        *((void**)&rv) = dlsym("?startRiding@Mob@@UEAA_NAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void kill() {
        void (Mob::*rv)();
        *((void**)&rv) = dlsym("?kill@Mob@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void stopRiding(bool a0, bool a1, bool a2) {
        void (Mob::*rv)(bool, bool, bool);
        *((void**)&rv) = dlsym("?stopRiding@Mob@@UEAAX_N00@Z");
        return (this->*rv)(a0, a1, a2);
    }
#if 0
	MCINLINE  class std::vector<int,class std::allocator<int> >  getAllArmorID()const {
 class std::vector<int,class std::allocator<int> > (Mob::*rv)()const ; *((void**)&rv) = dlsym("?getAllArmorID@Mob@@UEBA?AV?$vector@HV?$allocator@H@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> >  getAllEquipment()const {
 class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> > (Mob::*rv)()const ; *((void**)&rv) = dlsym("?getAllEquipment@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> >  getAllArmor()const {
 class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> > (Mob::*rv)()const ; *((void**)&rv) = dlsym("?getAllArmor@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE class std::unique_ptr<class ListTag,struct std::default_delete<class ListTag> >  saveOffhand()const {
class std::unique_ptr<class ListTag,struct std::default_delete<class ListTag> > (Mob::*rv)()const ; *((void**)&rv) = dlsym("?saveOffhand@Mob@@IEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::unique_ptr<class BodyControl,struct std::default_delete<class BodyControl> >  initBodyControl(){
 class std::unique_ptr<class BodyControl,struct std::default_delete<class BodyControl> > (Mob::*rv)(); *((void**)&rv) = dlsym("?initBodyControl@Mob@@MEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> >  getAllHand()const {
 class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> > (Mob::*rv)()const ; *((void**)&rv) = dlsym("?getAllHand@Mob@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ"); return (this->*rv)();}
//   bad fun  

	// ??0Mob@@QEAA@AEAVLevel@@@Z
	// Mob::Mob(class Level &)
	// ??0Mob@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@@Z
	// Mob::Mob(class ActorDefinitionGroup *,struct ActorDefinitionIdentifier const &)
	MCINLINE struct Mob::JumpPreventionResult  getJumpPrevention(){
struct Mob::JumpPreventionResult (Mob::*rv)(); *((void**)&rv) = dlsym("?getJumpPrevention@Mob@@IEAA?AUJumpPreventionResult@1@XZ"); return (this->*rv)();}
#endif
};
