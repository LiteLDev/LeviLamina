#pragma once
#include "Actor.h"
#include "Core.h"
class Player : public Mob {
  public:
    Player(const Player &) = delete;
    Player &operator=(const Player &) = delete;
    Player()                          = delete;
#ifdef MCAPI_PLAYER_EXTRA
    MCINLINE void sendNetworkPacket(class Packet &a0) const {
        void (Player::*rv)(class Packet &) const;
        *((void **)&rv) = dlsym("?sendNetworkPacket@Player@@UEBAXAEAVPacket@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setPlayerGameType(enum GameType a0) {
        void (Player::*rv)(enum GameType);
        *((void **)&rv) = dlsym("?setPlayerGameType@Player@@UEAAXW4GameType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setArmor(enum ArmorSlot a0, class ItemStack const &a1) {
        void (Player::*rv)(enum ArmorSlot, class ItemStack const &);
        *((void **)&rv) = dlsym("?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isPositionRelevant(class AutomaticID<class Dimension, int> a0,
                                     class BlockPos const &a1) {
        bool (Player::*rv)(class AutomaticID<class Dimension, int>, class BlockPos const &);
        *((void **)&rv) = dlsym(
            "?isPositionRelevant@Player@@UEAA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void updateTeleportDestPos() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?updateTeleportDestPos@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE class IMinecraftEventing *getEventing() const {
        class IMinecraftEventing *(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getEventing@Player@@UEBAPEAVIMinecraftEventing@@XZ");
        return (this->*rv)();
    }
    MCINLINE void stopSwimming() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopSwimming@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void stopSleepInBed(bool a0, bool a1) {
        void (Player::*rv)(bool, bool);
        *((void **)&rv) = dlsym("?stopSleepInBed@Player@@UEAAX_N0@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE void startSpinAttack() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?startSpinAttack@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool take(class Actor &a0, int a1, int a2) {
        bool (Player::*rv)(class Actor &, int, int);
        *((void **)&rv) = dlsym("?take@Player@@QEAA_NAEAVActor@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void changeDimensionWithCredits(class AutomaticID<class Dimension, int> a0) {
        void (Player::*rv)(class AutomaticID<class Dimension, int>);
        *((void **)&rv) =
            dlsym("?changeDimensionWithCredits@Player@@UEAAXV?$AutomaticID@VDimension@@H@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void registerTrackedBoss(struct ActorUniqueID a0) {
        void (Player::*rv)(struct ActorUniqueID);
        *((void **)&rv) = dlsym("?registerTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openBlastFurnace(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBlastFurnace@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onSuspension() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?onSuspension@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _handleCarriedItemInteractText() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_handleCarriedItemInteractText@Player@@AEAAXXZ");
        return (this->*rv)();
    }

    MCINLINE float getRidingHeight() {
        float (Player::*rv)();
        *((void **)&rv) = dlsym("?getRidingHeight@Player@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void setSpeed(float a0) {
        void (Player::*rv)(float);
        *((void **)&rv) = dlsym("?setSpeed@Player@@UEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getDestroyProgress(class Block const &a0) const {
        float (Player::*rv)(class Block const &) const;
        *((void **)&rv) = dlsym("?getDestroyProgress@Player@@QEBAMAEBVBlock@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setSleeping(bool a0) {
        void (Player::*rv)(bool);
        *((void **)&rv) = dlsym("?setSleeping@Player@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getDirection() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getDirection@Player@@QEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void openInventory() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?openInventory@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canOpenContainerScreen() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?canOpenContainerScreen@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void onLinkedSlotsChanged() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?onLinkedSlotsChanged@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void startDestroying() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?startDestroying@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openFurnace(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openFurnace@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openCommandBlockMinecart(struct ActorUniqueID const &a0) {
        void (Player::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openCommandBlockMinecart@Player@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool _hurt(class ActorDamageSource const &a0, int a1, bool a2, bool a3) {
        bool (Player::*rv)(class ActorDamageSource const &, int, bool, bool);
        *((void **)&rv) = dlsym("?_hurt@Player@@MEAA_NAEBVActorDamageSource@@H_N1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void awardKillScore(class Actor &a0, int a1) {
        void (Player::*rv)(class Actor &, int);
        *((void **)&rv) = dlsym("?awardKillScore@Player@@UEAAXAEAVActor@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isCreativeModeAllowed() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?isCreativeModeAllowed@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool attack(class Actor &a0) {
        bool (Player::*rv)(class Actor &);
        *((void **)&rv) = dlsym("?attack@Player@@UEAA_NAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _chooseSpawnArea() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_chooseSpawnArea@Player@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openPortfolio() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?openPortfolio@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getPortalCooldown() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getPortalCooldown@Player@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void openStructureEditor(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openStructureEditor@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE enum GameType getPlayerGameType() const {
        enum GameType (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getPlayerGameType@Player@@QEBA?AW4GameType@@XZ");
        return (this->*rv)();
    }
    MCINLINE void displayWhisperMessage(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a1,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a2,
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a3) {
        void (Player::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@000@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void _addLevels(int a0) {
        void (Player::*rv)(int);
        *((void **)&rv) = dlsym("?_addLevels@Player@@AEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void destroyRegion() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?destroyRegion@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void sendInventory(bool a0) {
        void (Player::*rv)(bool);
        *((void **)&rv) = dlsym("?sendInventory@Player@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void registerAttributes() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?registerAttributes@Player@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInTrialMode() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?isInTrialMode@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void completeUsingItem() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?completeUsingItem@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openNpcInteractScreen(class Actor &a0) {
        void (Player::*rv)(class Actor &);
        *((void **)&rv) = dlsym("?openNpcInteractScreen@Player@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openStonecutter(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openStonecutter@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isJumping() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isJumping@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE enum ActorType getEntityTypeId() const {
        enum ActorType (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getEntityTypeId@Player@@UEBA?AW4ActorType@@XZ");
        return (this->*rv)();
    }
    MCINLINE void aiStep() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?aiStep@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void stopLoading() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopLoading@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _sendShieldUpdatePacket(class ShieldItem const *a0,
                                          class ItemStack const &a1,
                                          class ItemStack const &a2,
                                          enum ContainerID a3,
                                          int a4) {
        void (Player::*rv)(class ShieldItem const *, class ItemStack const &,
                           class ItemStack const &, enum ContainerID, int);
        *((void **)&rv) = dlsym(
            "?_sendShieldUpdatePacket@Player@@AEAAXPEBVShieldItem@@AEBVItemStack@@1W4ContainerID@@"
            "H@Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE void startCrafting(class BlockPos const &a0, bool a1) {
        void (Player::*rv)(class BlockPos const &, bool);
        *((void **)&rv) = dlsym("?startCrafting@Player@@UEAAXAEBVBlockPos@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _ensureSafeSpawnPosition(class Vec3 &a0) {
        void (Player::*rv)(class Vec3 &);
        *((void **)&rv) = dlsym("?_ensureSafeSpawnPosition@Player@@AEAAXAEAVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void resetPos(bool a0) {
        void (Player::*rv)(bool);
        *((void **)&rv) = dlsym("?resetPos@Player@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isLocalPlayer() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isLocalPlayer@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void stopSpinAttack() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopSpinAttack@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openDispenser(class BlockPos const &a0, bool a1) {
        void (Player::*rv)(class BlockPos const &, bool);
        *((void **)&rv) = dlsym("?openDispenser@Player@@UEAAXAEBVBlockPos@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void normalTick() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?normalTick@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void eat(int a0, float a1) {
        void (Player::*rv)(int, float);
        *((void **)&rv) = dlsym("?eat@Player@@QEAAXHM@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool useNewAi() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?useNewAi@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void displayLocalizableMessage(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::vector<
            class std::
                basic_string<char, struct std::char_traits<char>, class std::allocator<char>>,
            class std::allocator<class std::basic_string<char,
                                                         struct std::char_traits<char>,
                                                         class std::allocator<char>>>> const &a1) {
        void (Player::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::vector<
                class std::basic_string<char, struct std::char_traits<char>,
                                        class std::allocator<char>>,
                class std::allocator<class std::basic_string<char, struct std::char_traits<char>,
                                                             class std::allocator<char>>>> const &);
        *((void **)&rv) = dlsym(
            "?displayLocalizableMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
            "D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@"
            "2@@3@@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE bool _blockUsingShield(class ActorDamageSource const &a0, float a1) {
        bool (Player::*rv)(class ActorDamageSource const &, float);
        *((void **)&rv) = dlsym("?_blockUsingShield@Player@@AEAA_NAEBVActorDamageSource@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool canUseOperatorBlocks() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?canUseOperatorBlocks@Player@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void recheckSpawnPosition() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?recheckSpawnPosition@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openBook(int a0, bool a1, int a2, class BlockActor *a3) {
        void (Player::*rv)(int, bool, int, class BlockActor *);
        *((void **)&rv) = dlsym("?openBook@Player@@UEAAXH_NHPEAVBlockActor@@@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void moveView() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?moveView@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void causeFoodExhaustion(float a0) {
        void (Player::*rv)(float);
        *((void **)&rv) = dlsym("?causeFoodExhaustion@Player@@QEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void displayClientMessage(
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a0) {
        void (Player::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayClientMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isWorldBuilder() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?isWorldBuilder@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void stopGliding() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopGliding@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void reportMovementTelemetry(enum MovementEventType a0) {
        void (Player::*rv)(enum MovementEventType);
        *((void **)&rv) = dlsym("?reportMovementTelemetry@Player@@UEAAXW4MovementEventType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void resetRot() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?resetRot@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setFieldOfViewModifier(float a0) {
        void (Player::*rv)(float);
        *((void **)&rv) = dlsym("?setFieldOfViewModifier@Player@@UEAAXM@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getItemUseIntervalProgress() {
        float (Player::*rv)();
        *((void **)&rv) = dlsym("?getItemUseIntervalProgress@Player@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void useItem(class ItemStack &a0, enum ItemUseMethod a1, bool a2) {
        void (Player::*rv)(class ItemStack &, enum ItemUseMethod, bool);
        *((void **)&rv) = dlsym("?useItem@Player@@UEAAXAEAVItemStack@@W4ItemUseMethod@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class ItemStack const &getCurrentActiveShield() const {
        class ItemStack const &(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getCurrentActiveShield@Player@@QEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool canBePulledIntoVehicle() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?canBePulledIntoVehicle@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void setPermissions(enum CommandPermissionLevel a0) {
        void (Player::*rv)(enum CommandPermissionLevel);
        *((void **)&rv) = dlsym("?setPermissions@Player@@UEAAXW4CommandPermissionLevel@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isAutoJumpEnabled() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isAutoJumpEnabled@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void sendEventPacket(class EventPacket &a0) const {
        void (Player::*rv)(class EventPacket &) const;
        *((void **)&rv) = dlsym("?sendEventPacket@Player@@UEBAXAEAVEventPacket@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openLabTable(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openLabTable@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void initializeComponents(enum Actor::InitializationMethod a0,
                                       class VariantParameterList const &a1) {
        void (Player::*rv)(enum Actor::InitializationMethod, class VariantParameterList const &);
        *((void **)&rv) = dlsym(
            "?initializeComponents@Player@@UEAAXW4InitializationMethod@Actor@@"
            "AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void _updateInteraction() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_updateInteraction@Player@@IEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE enum StructureFeatureType getCurrentStructureFeature() const {
        enum StructureFeatureType (Player::*rv)() const;
        *((void **)&rv) =
            dlsym("?getCurrentStructureFeature@Player@@UEBA?AW4StructureFeatureType@@XZ");
        return (this->*rv)();
    }
    MCINLINE void displayChatMessage(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a1) {
        void (Player::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayChatMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool _validateSpawnPositionAvailability(class Vec3 const &a0,
                                                     class BlockSource *a1,
                                                     class Vec3 const *const a2) const {
        bool (Player::*rv)(class Vec3 const &, class BlockSource *, class Vec3 const *const) const;
        *((void **)&rv) = dlsym(
            "?_validateSpawnPositionAvailability@Player@@IEBA_NAEBVVec3@@PEAVBlockSource@@QEBV2@@"
            "Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void dropEquipment() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?dropEquipment@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void stopUsingItem() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopUsingItem@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE enum BedSleepingResult startSleepInBed(class BlockPos const &a0) {
        enum BedSleepingResult (Player::*rv)(class BlockPos const &);
        *((void **)&rv) =
            dlsym("?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isEntityRelevant(class Actor const &a0) {
        bool (Player::*rv)(class Actor const &);
        *((void **)&rv) = dlsym("?isEntityRelevant@Player@@UEAA_NAEBVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void releaseUsingItem() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?releaseUsingItem@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void unRegisterTrackedBoss(struct ActorUniqueID a0) {
        void (Player::*rv)(struct ActorUniqueID);
        *((void **)&rv) = dlsym("?unRegisterTrackedBoss@Player@@UEAAXUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void prepareRegion(class ChunkSource &a0) {
        void (Player::*rv)(class ChunkSource &);
        *((void **)&rv) = dlsym("?prepareRegion@Player@@UEAAXAEAVChunkSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getCameraOffset() const {
        float (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getCameraOffset@Player@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool hasResource(int a0) {
        bool (Player::*rv)(int);
        *((void **)&rv) = dlsym("?hasResource@Player@@UEAA_NH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void sendMotionPacketIfNeeded() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?sendMotionPacketIfNeeded@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void displayTextObjectMessage(
        class TextObjectRoot const &a0,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a1,
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a2) {
        void (Player::*rv)(class TextObjectRoot const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayTextObjectMessage@Player@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$"
            "char_traits@D@std@@V?$allocator@D@2@@std@@1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isCreative() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isCreative@Player@@UEBA_NXZ");
        return (this->*rv)();
    }

    MCINLINE bool checkBed(class BlockSource *a0, class Vec3 const *const a1) {
        bool (Player::*rv)(class BlockSource *, class Vec3 const *const);
        *((void **)&rv) = dlsym("?checkBed@Player@@IEAA_NPEAVBlockSource@@QEBVVec3@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openHorseInventory(struct ActorUniqueID const &a0) {
        void (Player::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openHorseInventory@Player@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isHiddenFrom(class Mob &a0) const {
        bool (Player::*rv)(class Mob &) const;
        *((void **)&rv) = dlsym("?isHiddenFrom@Player@@QEBA_NAEAVMob@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void addAdditionalSaveData(class CompoundTag &a0) {
        void (Player::*rv)(class CompoundTag &);
        *((void **)&rv) = dlsym("?addAdditionalSaveData@Player@@MEAAXAEAVCompoundTag@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isImmobile() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isImmobile@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateTrackedBosses() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?updateTrackedBosses@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openChalkboard(class ChalkboardBlockActor &a0, bool a1) {
        void (Player::*rv)(class ChalkboardBlockActor &, bool);
        *((void **)&rv) = dlsym("?openChalkboard@Player@@UEAAXAEAVChalkboardBlockActor@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void die(class ActorDamageSource const &a0) {
        void (Player::*rv)(class ActorDamageSource const &);
        *((void **)&rv) = dlsym("?die@Player@@UEAAXAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isItemInCooldown(enum CooldownType a0) const {
        bool (Player::*rv)(enum CooldownType) const;
        *((void **)&rv) = dlsym("?isItemInCooldown@Player@@UEBA_NW4CooldownType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void move(class Vec3 const &a0) {
        void (Player::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?move@Player@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void moveSpawnView(class Vec3 const &a0) {
        void (Player::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?moveSpawnView@Player@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void openContainer(struct ActorUniqueID const &a0) {
        void (Player::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openContainer@Player@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openHopper(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openHopper@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void adjustDamageAmount(int &a0) const {
        void (Player::*rv)(int &) const;
        *((void **)&rv) = dlsym("?adjustDamageAmount@Player@@UEBAXAEAH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE float getSpeed() const {
        float (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getSpeed@Player@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE void openAnvil(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openAnvil@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSurvival() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isSurvival@Player@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool drop(class ItemStack const &a0, bool a1) {
        bool (Player::*rv)(class ItemStack const &, bool);
        *((void **)&rv) = dlsym("?drop@Player@@UEAA_NAEBVItemStack@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isInRaid() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isInRaid@Player@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void openHopper(struct ActorUniqueID const &a0) {
        void (Player::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openHopper@Player@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int getPortalWaitTime() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getPortalWaitTime@Player@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE int getXpNeededForNextLevel() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getXpNeededForNextLevel@Player@@QEBAHXZ");
        return (this->*rv)();
    }

    MCINLINE int tickWorld(struct Tick const &a0) {
        int (Player::*rv)(struct Tick const &);
        *((void **)&rv) = dlsym("?tickWorld@Player@@UEAAHAEBUTick@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setBedRespawnPosition(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?setBedRespawnPosition@Player@@QEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void clearRespawnPosition() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?clearRespawnPosition@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void updateAi() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?updateAi@Player@@MEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canAddRider(class Actor &a0) const {
        bool (Player::*rv)(class Actor &) const;
        *((void **)&rv) = dlsym("?canAddRider@Player@@UEBA_NAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void handleEntityEvent(enum ActorEvent a0, int a1) {
        void (Player::*rv)(enum ActorEvent, int);
        *((void **)&rv) = dlsym("?handleEntityEvent@Player@@UEAAXW4ActorEvent@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void startCooldown(class Item const *a0) {
        void (Player::*rv)(class Item const *);
        *((void **)&rv) = dlsym("?startCooldown@Player@@UEAAXPEBVItem@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void teleportTo(class Vec3 const &a0, bool a1, int a2, int a3) {
        void (Player::*rv)(class Vec3 const &, bool, int, int);
        *((void **)&rv) = dlsym("?teleportTo@Player@@UEAAXAEBVVec3@@_NHH@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE int getItemUseDuration() {
        int (Player::*rv)();
        *((void **)&rv) = dlsym("?getItemUseDuration@Player@@UEAAHXZ");
        return (this->*rv)();
    }
    MCINLINE bool checkNeedAutoJump(float a0, float a1) {
        bool (Player::*rv)(float, float);
        *((void **)&rv) = dlsym("?checkNeedAutoJump@Player@@QEAA_NMM@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isAdventure() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isAdventure@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateGliding() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?updateGliding@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool _isDangerousSpawn(class BlockSource &a0, class AABB const &a1) const {
        bool (Player::*rv)(class BlockSource &, class AABB const &) const;
        *((void **)&rv) = dlsym("?_isDangerousSpawn@Player@@IEBA_NAEAVBlockSource@@AEBVAABB@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void stopDestroying() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?stopDestroying@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void respawn() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?respawn@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setOffhandSlot(class ItemStack const &a0) {
        void (Player::*rv)(class ItemStack const &);
        *((void **)&rv) = dlsym("?setOffhandSlot@Player@@UEAAXAEBVItemStack@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setAgent(class Agent *a0) {
        void (Player::*rv)(class Agent *);
        *((void **)&rv) = dlsym("?setAgent@Player@@QEAAXPEAVAgent@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void dropEquipment(class ActorDamageSource const &a0, int a1) {
        void (Player::*rv)(class ActorDamageSource const &, int);
        *((void **)&rv) = dlsym("?dropEquipment@Player@@UEAAXAEBVActorDamageSource@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openContainer(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openContainer@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isInvulnerableTo(class ActorDamageSource const &a0) const {
        bool (Player::*rv)(class ActorDamageSource const &) const;
        *((void **)&rv) = dlsym("?isInvulnerableTo@Player@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onMovePlayerPacketNormal(class Vec3 const &a0, class Vec2 const &a1, float a2) {
        void (Player::*rv)(class Vec3 const &, class Vec2 const &, float);
        *((void **)&rv) = dlsym("?onMovePlayerPacketNormal@Player@@MEAAXAEBVVec3@@AEBVVec2@@M@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE class Vec3 getAttachPos(enum ActorLocation a0, float a1) const {
        class Vec3 (Player::*rv)(enum ActorLocation, float) const;
        *((void **)&rv) = dlsym("?getAttachPos@Player@@UEBA?AVVec3@@W4ActorLocation@@M@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openEnchanter(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openEnchanter@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isSleeping() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isSleeping@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void addLevels(int a0) {
        void (Player::*rv)(int);
        *((void **)&rv) = dlsym("?addLevels@Player@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _fireWillChangeDimension() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_fireWillChangeDimension@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openBeacon(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBeacon@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openCommandBlock(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openCommandBlock@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void openSign(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openSign@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isLoading() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isLoading@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _crit(class Actor &a0) {
        void (Player::*rv)(class Actor &);
        *((void **)&rv) = dlsym("?_crit@Player@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isBlocking() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isBlocking@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isHostingPlayer() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isHostingPlayer@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void playEmote(class std::basic_string<char,
                                                    struct std::char_traits<char>,
                                                    class std::allocator<char>> const &a0,
                            bool a1) {
        void (Player::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &,
                           bool);
        *((void **)&rv) = dlsym(
            "?playEmote@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@"
            "std@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openElementConstructor(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openElementConstructor@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openLoom(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openLoom@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void openCompoundCreator(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openCompoundCreator@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool getAlwaysShowNameTag() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getAlwaysShowNameTag@Player@@UEBA_NXZ");
        return (this->*rv)();
    }

    MCINLINE void openSmoker(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openSmoker@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _onSizeUpdated() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_onSizeUpdated@Player@@EEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canExistWhenDisallowMob() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?canExistWhenDisallowMob@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void updateSkin(class SerializedSkin const &a0, int a1) {
        void (Player::*rv)(class SerializedSkin const &, int);
        *((void **)&rv) = dlsym("?updateSkin@Player@@QEAAXAEBVSerializedSkin@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void updateInventoryTransactions() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?updateInventoryTransactions@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void _registerElytraLoopSound() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_registerElytraLoopSound@Player@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getItemCooldownLeft(enum CooldownType a0) const {
        int (Player::*rv)(enum CooldownType) const;
        *((void **)&rv) = dlsym("?getItemCooldownLeft@Player@@UEBAHW4CooldownType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void rideTick() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?rideTick@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE float getMapDecorationRotation() const {
        float (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getMapDecorationRotation@Player@@UEBAMXZ");
        return (this->*rv)();
    }
    MCINLINE bool consumeTotem() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?consumeTotem@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void setPlayerUIItem(enum PlayerUISlot a0, class ItemStack const &a1) {
        void (Player::*rv)(enum PlayerUISlot, class ItemStack const &);
        *((void **)&rv) = dlsym("?setPlayerUIItem@Player@@QEAAXW4PlayerUISlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void handleJumpEffects() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?handleJumpEffects@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void inventoryChanged(class Container &a0,
                                   int a1,
                                   class ItemStack const &a2,
                                   class ItemStack const &a3) {
        void (Player::*rv)(class Container &, int, class ItemStack const &,
                           class ItemStack const &);
        *((void **)&rv) =
            dlsym("?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void onSynchedDataUpdate(int a0) {
        void (Player::*rv)(int);
        *((void **)&rv) = dlsym("?onSynchedDataUpdate@Player@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void jumpFromGround() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?jumpFromGround@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setCarriedItem(class ItemStack const &a0) {
        void (Player::*rv)(class ItemStack const &);
        *((void **)&rv) = dlsym("?setCarriedItem@Player@@UEAAXAEBVItemStack@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class ItemStack const &getEquippedTotem() const {
        class ItemStack const &(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getEquippedTotem@Player@@UEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool canBeSeenOnMap() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?canBeSeenOnMap@Player@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isInCreativeMode() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isInCreativeMode@Player@@QEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void suspendRegion() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?suspendRegion@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void feed(int a0) {
        void (Player::*rv)(int);
        *((void **)&rv) = dlsym("?feed@Player@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isShootable() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?isShootable@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void startStonecutting(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?startStonecutting@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openTrading(struct ActorUniqueID const &a0, bool a1) {
        void (Player::*rv)(struct ActorUniqueID const &, bool);
        *((void **)&rv) = dlsym("?openTrading@Player@@UEAAXAEBUActorUniqueID@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>>
        getFormattedNameTag() const {
        class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> (
            Player::*rv)() const;
        *((void **)&rv) = dlsym(
            "?getFormattedNameTag@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@XZ");
        return (this->*rv)();
    } MCINLINE class AnimationComponent &getAnimationComponent() {
        class AnimationComponent &(Player::*rv)();
        *((void **)&rv) = dlsym("?getAnimationComponent@Player@@UEAAAEAVAnimationComponent@@XZ");
        return (this->*rv)();
    }
    MCINLINE void actuallyHurt(int a0, class ActorDamageSource const *a1, bool a2) {
        void (Player::*rv)(int, class ActorDamageSource const *, bool);
        *((void **)&rv) = dlsym("?actuallyHurt@Player@@UEAAXHPEBVActorDamageSource@@_N@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE int getSleepTimer() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getSleepTimer@Player@@UEBAHXZ");
        return (this->*rv)();
    }
    MCINLINE void openBrewingStand(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBrewingStand@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void checkMovementStats(class Vec3 const &a0) {
        void (Player::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?checkMovementStats@Player@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool canDestroy(class Block const &a0) const {
        bool (Player::*rv)(class Block const &) const;
        *((void **)&rv) = dlsym("?canDestroy@Player@@QEBA_NAEBVBlock@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void startSwimming() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?startSwimming@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void remove() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?remove@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void resetPlayerLevel() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?resetPlayerLevel@Player@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE int getPreviousTickSleepTimer() const {
        int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getPreviousTickSleepTimer@Player@@UEBAHXZ");
        return (this->*rv)();
    }

    MCINLINE bool _chooseSpawnPositionWithinArea() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?_chooseSpawnPositionWithinArea@Player@@IEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool canStartSleepInBed() {
        bool (Player::*rv)();
        *((void **)&rv) = dlsym("?canStartSleepInBed@Player@@UEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void _fireDimensionChanged() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?_fireDimensionChanged@Player@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void reloadHardcoded(enum Actor::InitializationMethod a0,
                                  class VariantParameterList const &a1) {
        void (Player::*rv)(enum Actor::InitializationMethod, class VariantParameterList const &);
        *((void **)&rv) = dlsym(
            "?reloadHardcoded@Player@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@"
            "@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE float getItemUseStartupProgress() {
        float (Player::*rv)();
        *((void **)&rv) = dlsym("?getItemUseStartupProgress@Player@@UEAAMXZ");
        return (this->*rv)();
    }
    MCINLINE void openGrindstone(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openGrindstone@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isDamageBlocked(class ActorDamageSource const &a0) const {
        bool (Player::*rv)(class ActorDamageSource const &) const;
        *((void **)&rv) = dlsym("?isDamageBlocked@Player@@UEBA_NAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void readAdditionalSaveData(class CompoundTag const &a0, class DataLoadHelper &a1) {
        void (Player::*rv)(class CompoundTag const &, class DataLoadHelper &);
        *((void **)&rv) =
            dlsym("?readAdditionalSaveData@Player@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openCartographyTable(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openCartographyTable@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void travel(float a0, float a1, float a2) {
        void (Player::*rv)(float, float, float);
        *((void **)&rv) = dlsym("?travel@Player@@UEAAXMMM@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void openMaterialReducer(class BlockPos const &a0) {
        void (Player::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openMaterialReducer@Player@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class Agent *getAgent() const {
        class Agent *(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getAgent@Player@@QEBAPEAVAgent@@XZ");
        return (this->*rv)();
    }
    MCINLINE void startUsingItem(class ItemStack const &a0, int a1) {
        void (Player::*rv)(class ItemStack const &, int);
        *((void **)&rv) = dlsym("?startUsingItem@Player@@QEAAXAEBVItemStack@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setRespawnPosition(class BlockPos const &a0, bool a1) {
        void (Player::*rv)(class BlockPos const &, bool);
        *((void **)&rv) = dlsym("?setRespawnPosition@Player@@QEAAXAEBVBlockPos@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE class std::vector<class ChunkPos, class std::allocator<class ChunkPos>> const &
    getTickingOffsets() const {
        class std::vector<class ChunkPos, class std::allocator<class ChunkPos>> const &(
            Player::*rv)() const;
        *((void **)&rv) = dlsym(
            "?getTickingOffsets@Player@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@"
            "std@@XZ");
        return (this->*rv)();
    }

    MCINLINE void
    onBounceStarted(class BlockPos const &a0, class Block const &a1) {
        void (Player::*rv)(class BlockPos const &, class Block const &);
        *((void **)&rv) = dlsym("?onBounceStarted@Player@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void deleteContainerManager() {
        void (Player::*rv)();
        *((void **)&rv) = dlsym("?deleteContainerManager@Player@@UEAAXXZ");
        return (this->*rv)();
    }
#endif
    MCINLINE enum CommandPermissionLevel getCommandPermissionLevel() const {
        enum CommandPermissionLevel (Player::*rv)() const;
        *((void **)&rv) =
            dlsym("?getCommandPermissionLevel@Player@@UEBA?AW4CommandPermissionLevel@@XZ");
        return (this->*rv)();
    }
    MCINLINE class ItemStack const &getCarriedItem() const {
        class ItemStack const &(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getCarriedItem@Player@@UEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
    MCINLINE unsigned int getUserId() const {
        unsigned int (Player::*rv)() const;
        *((void **)&rv) = dlsym("?getUserId@Player@@UEBAIXZ");
        return (this->*rv)();
    }
    MCINLINE bool canUseAbility(enum AbilitiesIndex a0) const {
        bool (Player::*rv)(enum AbilitiesIndex) const;
        *((void **)&rv) = dlsym("?canUseAbility@Player@@QEBA_NW4AbilitiesIndex@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class EnderChestContainer *getEnderChestContainer() {
        class EnderChestContainer *(Player::*rv)();
        *((void **)&rv) = dlsym("?getEnderChestContainer@Player@@QEAAPEAVEnderChestContainer@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool add(class ItemStack &a0) {
        bool (Player::*rv)(class ItemStack &);
        *((void **)&rv) = dlsym("?add@Player@@UEAA_NAEAVItemStack@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void setName(class std::basic_string<char,
                                                  struct std::char_traits<char>,
                                                  class std::allocator<char>> const &a0) {
        void (Player::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                   class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?setName@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@"
            "@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool isPlayerInitialized() const {
        bool (Player::*rv)() const;
        *((void **)&rv) = dlsym("?isPlayerInitialized@Player@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE float getDestroySpeed(class Block const &a0) const {
        float (Player::*rv)(class Block const &) const;
        *((void **)&rv) = dlsym("?getDestroySpeed@Player@@QEBAMAEBVBlock@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void addExperience(int a0) {
        void (Player::*rv)(int);
        *((void **)&rv) = dlsym("?addExperience@Player@@UEAAXH@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class ItemStack const &getSelectedItem() const {
        class ItemStack const &(Player::*rv)() const;
        *((void **)&rv) = dlsym("?getSelectedItem@Player@@QEBAAEBVItemStack@@XZ");
        return (this->*rv)();
    }
#if 0
	MCINLINE  class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> >  getAllEquipment()const {
 class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> > (Player::*rv)()const ; *((void**)&rv) = dlsym("?getAllEquipment@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE void  setContainerManager(class std::shared_ptr<class IContainerManager> a0){
void (Player::*rv)(class std::shared_ptr<class IContainerManager>); *((void**)&rv) = dlsym("?setContainerManager@Player@@QEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> >  getAllHand()const {
 class std::vector<class ItemStack const *,class std::allocator<class ItemStack const *> > (Player::*rv)()const ; *((void**)&rv) = dlsym("?getAllHand@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE  class std::unique_ptr<class Packet,struct std::default_delete<class Packet> >  getAddPacket(){
 class std::unique_ptr<class Packet,struct std::default_delete<class Packet> > (Player::*rv)(); *((void**)&rv) = dlsym("?getAddPacket@Player@@UEAA?AV?$unique_ptr@VPacket@@U?$default_delete@VPacket@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE bool  checkAndfixSpawnPosition(class Vec3 & a0,class std::vector<class BlockSource *,class std::allocator<class BlockSource *> > a1,bool a2,bool a3,bool a4,bool a5)const {
bool (Player::*rv)(class Vec3 &,class std::vector<class BlockSource *,class std::allocator<class BlockSource *> >,bool,bool,bool,bool)const ; *((void**)&rv) = dlsym("?checkAndfixSpawnPosition@Player@@IEBA_NAEAVVec3@@V?$vector@PEAVBlockSource@@V?$allocator@PEAVBlockSource@@@std@@@std@@_N222@Z"); return (this->*rv)(a0,a1,a2,a3,a4,a5);}
	MCINLINE  class std::unique_ptr<class BodyControl,struct std::default_delete<class BodyControl> >  initBodyControl(){
 class std::unique_ptr<class BodyControl,struct std::default_delete<class BodyControl> > (Player::*rv)(); *((void**)&rv) = dlsym("?initBodyControl@Player@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ"); return (this->*rv)();}
	MCINLINE bool  _findFallbackSpawnPosition(class Vec3 & a0,class std::vector<class BlockSource *,class std::allocator<class BlockSource *> > a1,unsigned int a2){
bool (Player::*rv)(class Vec3 &,class std::vector<class BlockSource *,class std::allocator<class BlockSource *> >,unsigned int); *((void**)&rv) = dlsym("?_findFallbackSpawnPosition@Player@@AEAA_NAEAVVec3@@V?$vector@PEAVBlockSource@@V?$allocator@PEAVBlockSource@@@std@@@std@@I@Z"); return (this->*rv)(a0,a1,a2);}
//   bad fun  

	// ??0Player@@QEAA@AEAVLevel@@AEAVPacketSender@@W4GameType@@AEBVNetworkIdentifier@@EVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@8@55@Z
	// Player::Player(class Level &,class PacketSender &,enum GameType,class NetworkIdentifier const &,unsigned char,class mce::UUID,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::unique_ptr<class Certificate,struct std::default_delete<class Certificate> >,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
#endif
};
#pragma once
#include "Core.h"
class ServerPlayer : public Player {
  public:
    ServerPlayer(const ServerPlayer &) = delete;
    ServerPlayer &operator=(const ServerPlayer &) = delete;
    ServerPlayer()                                = delete;
#ifdef MCAPI_PLAYER_EXTRA
    MCINLINE void openDispenser(class BlockPos const &a0, bool a1) {
        void (ServerPlayer::*rv)(class BlockPos const &, bool);
        *((void **)&rv) = dlsym("?openDispenser@ServerPlayer@@UEAAXAEBVBlockPos@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE bool isTeacher() const {
        bool (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?isTeacher@ServerPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE bool isPositionRelevant(class AutomaticID<class Dimension, int> a0,
                                     class BlockPos const &a1) {
        bool (ServerPlayer::*rv)(class AutomaticID<class Dimension, int>, class BlockPos const &);
        *((void **)&rv) = dlsym(
            "?isPositionRelevant@ServerPlayer@@UEAA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@"
            "Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void onEffectUpdated(class MobEffectInstance const &a0) {
        void (ServerPlayer::*rv)(class MobEffectInstance const &);
        *((void **)&rv) = dlsym("?onEffectUpdated@ServerPlayer@@MEAAXAEBVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void refreshContainer(class IContainerManager &a0) {
        void (ServerPlayer::*rv)(class IContainerManager &);
        *((void **)&rv) = dlsym("?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openBeacon(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBeacon@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE enum ClientPlayMode getPlayMode() const {
        enum ClientPlayMode (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?getPlayMode@ServerPlayer@@UEBA?AW4ClientPlayMode@@XZ");
        return (this->*rv)();
    }
    MCINLINE bool recoverR5LostInventoryAndXP() {
        bool (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?recoverR5LostInventoryAndXP@ServerPlayer@@QEAA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void setClientChunkRadius(unsigned int a0) {
        void (ServerPlayer::*rv)(unsigned int);
        *((void **)&rv) = dlsym("?setClientChunkRadius@ServerPlayer@@QEAAXI@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void prepareRegion(class ChunkSource &a0) {
        void (ServerPlayer::*rv)(class ChunkSource &);
        *((void **)&rv) = dlsym("?prepareRegion@ServerPlayer@@UEAAXAEAVChunkSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void changeDimension(class AutomaticID<class Dimension, int> a0, bool a1) {
        void (ServerPlayer::*rv)(class AutomaticID<class Dimension, int>, bool);
        *((void **)&rv) =
            dlsym("?changeDimension@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openTrading(struct ActorUniqueID const &a0, bool a1) {
        void (ServerPlayer::*rv)(struct ActorUniqueID const &, bool);
        *((void **)&rv) = dlsym("?openTrading@ServerPlayer@@UEAAXAEBUActorUniqueID@@_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void stopSleepInBed(bool a0, bool a1) {
        void (ServerPlayer::*rv)(bool, bool);
        *((void **)&rv) = dlsym("?stopSleepInBed@ServerPlayer@@UEAAX_N0@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void checkCheating(class Vec3 const &a0) {
        void (ServerPlayer::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?checkCheating@ServerPlayer@@QEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void aiStep() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?aiStep@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openHopper(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openHopper@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void checkFallDamage(float a0, bool a1) {
        void (ServerPlayer::*rv)(float, bool);
        *((void **)&rv) = dlsym("?checkFallDamage@ServerPlayer@@UEAAXM_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void changeDimensionWithCredits(class AutomaticID<class Dimension, int> a0) {
        void (ServerPlayer::*rv)(class AutomaticID<class Dimension, int>);
        *((void **)&rv) = dlsym(
            "?changeDimensionWithCredits@ServerPlayer@@UEAAXV?$AutomaticID@VDimension@@H@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openBlastFurnace(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBlastFurnace@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isPlayerInitialized() const {
        bool (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?isPlayerInitialized@ServerPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void normalTick() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?normalTick@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void openHorseInventory(struct ActorUniqueID const &a0) {
        void (ServerPlayer::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openHorseInventory@ServerPlayer@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void displayWhisperMessage(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a1,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a2,
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a3) {
        void (ServerPlayer::*rv)(class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &,
                                 class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &,
                                 class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &,
                                 class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayWhisperMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?"
            "$allocator@D@2@@std@@000@Z");
        return (this->*rv)(a0, a1, a2, a3);
    }
    MCINLINE void openEnchanter(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openEnchanter@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openInventory() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?openInventory@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }

    MCINLINE bool isHostingPlayer() const {
        bool (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?isHostingPlayer@ServerPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void openGrindstone(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openGrindstone@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool load(class CompoundTag const &a0, class DataLoadHelper &a1) {
        bool (ServerPlayer::*rv)(class CompoundTag const &, class DataLoadHelper &);
        *((void **)&rv) =
            dlsym("?load@ServerPlayer@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openContainer(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openContainer@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openStructureEditor(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openStructureEditor@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE int tickWorld(struct Tick const &a0) {
        int (ServerPlayer::*rv)(struct Tick const &);
        *((void **)&rv) = dlsym("?tickWorld@ServerPlayer@@UEAAHAEBUTick@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openContainer(struct ActorUniqueID const &a0) {
        void (ServerPlayer::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openContainer@ServerPlayer@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openFurnace(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openFurnace@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openLabTable(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openLabTable@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE bool isValidTarget(class Actor *a0) const {
        bool (ServerPlayer::*rv)(class Actor *) const;
        *((void **)&rv) = dlsym("?isValidTarget@ServerPlayer@@UEBA_NPEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void handleEntityEvent(enum ActorEvent a0, int a1) {
        void (ServerPlayer::*rv)(enum ActorEvent, int);
        *((void **)&rv) = dlsym("?handleEntityEvent@ServerPlayer@@UEAAXW4ActorEvent@@H@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openSmoker(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openSmoker@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void destroyRegion() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?destroyRegion@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void initializeComponents(enum Actor::InitializationMethod a0,
                                       class VariantParameterList const &a1) {
        void (ServerPlayer::*rv)(enum Actor::InitializationMethod,
                                 class VariantParameterList const &);
        *((void **)&rv) = dlsym(
            "?initializeComponents@ServerPlayer@@UEAAXW4InitializationMethod@Actor@@"
            "AEBVVariantParameterList@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void openAnvil(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openAnvil@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openElementConstructor(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openElementConstructor@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openPortfolio() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?openPortfolio@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE bool canChangeDimensions() const {
        bool (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?canChangeDimensions@ServerPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE void openCommandBlock(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openCommandBlock@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void onSuspension() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?onSuspension@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void suspendRegion() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?suspendRegion@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE enum InputMode getInputMode() const {
        enum InputMode (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?getInputMode@ServerPlayer@@UEBA?AW4InputMode@@XZ");
        return (this->*rv)();
    }
    MCINLINE void openMaterialReducer(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openMaterialReducer@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void onLinkedSlotsChanged() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?onLinkedSlotsChanged@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void handleFallDistanceOnServer(float a0, bool a1) {
        void (ServerPlayer::*rv)(float, bool);
        *((void **)&rv) = dlsym("?handleFallDistanceOnServer@ServerPlayer@@UEAAXM_N@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void
    knockback(class Actor *a0, int a1, float a2, float a3, float a4, float a5, float a6) {
        void (ServerPlayer::*rv)(class Actor *, int, float, float, float, float, float);
        *((void **)&rv) = dlsym("?knockback@ServerPlayer@@UEAAXPEAVActor@@HMMMMM@Z");
        return (this->*rv)(a0, a1, a2, a3, a4, a5, a6);
    }
    MCINLINE void sendInventoryTransaction(class InventoryTransaction const &a0) const {
        void (ServerPlayer::*rv)(class InventoryTransaction const &) const;
        *((void **)&rv) =
            dlsym("?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void reportMovementTelemetry(enum MovementEventType a0) {
        void (ServerPlayer::*rv)(enum MovementEventType);
        *((void **)&rv) =
            dlsym("?reportMovementTelemetry@ServerPlayer@@UEAAXW4MovementEventType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openCommandBlockMinecart(struct ActorUniqueID const &a0) {
        void (ServerPlayer::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) =
            dlsym("?openCommandBlockMinecart@ServerPlayer@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openHopper(struct ActorUniqueID const &a0) {
        void (ServerPlayer::*rv)(struct ActorUniqueID const &);
        *((void **)&rv) = dlsym("?openHopper@ServerPlayer@@UEAAXAEBUActorUniqueID@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openCompoundCreator(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openCompoundCreator@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void displayLocalizableMessage(
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a0,
        class std::vector<
            class std::
                basic_string<char, struct std::char_traits<char>, class std::allocator<char>>,
            class std::allocator<class std::basic_string<char,
                                                         struct std::char_traits<char>,
                                                         class std::allocator<char>>>> const &a1) {
        void (ServerPlayer::*rv)(
            class std::basic_string<char, struct std::char_traits<char>,
                                    class std::allocator<char>> const &,
            class std::vector<
                class std::basic_string<char, struct std::char_traits<char>,
                                        class std::allocator<char>>,
                class std::allocator<class std::basic_string<char, struct std::char_traits<char>,
                                                             class std::allocator<char>>>> const &);
        *((void **)&rv) = dlsym(
            "?displayLocalizableMessage@ServerPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@"
            "std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$"
            "allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@"
            "D@2@@std@@@2@@3@@Z");
        return (this->*rv)(a0, a1);
    }

    MCINLINE void _scanForNearbyActors() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?_scanForNearbyActors@ServerPlayer@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void slotChanged(class IContainerManager &a0,
                              int a1,
                              class ItemStack const &a2,
                              class ItemStack const &a3,
                              bool a4) {
        void (ServerPlayer::*rv)(class IContainerManager &, int, class ItemStack const &,
                                 class ItemStack const &, bool);
        *((void **)&rv) =
            dlsym("?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@HAEBVItemStack@@1_N@Z");
        return (this->*rv)(a0, a1, a2, a3, a4);
    }
    MCINLINE void onEffectAdded(class MobEffectInstance &a0) {
        void (ServerPlayer::*rv)(class MobEffectInstance &);
        *((void **)&rv) = dlsym("?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void hurtArmor(int a0) {
        void (ServerPlayer::*rv)(int);
        *((void **)&rv) = dlsym("?hurtArmor@ServerPlayer@@UEAAXH@Z");
        return (this->*rv)(a0);
    }

    MCINLINE void setContainerData(class IContainerManager &a0, int a1, int a2) {
        void (ServerPlayer::*rv)(class IContainerManager &, int, int);
        *((void **)&rv) = dlsym("?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE bool isLoading() const {
        bool (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?isLoading@ServerPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    MCINLINE struct ActorUniqueID getControllingPlayer() const {
        struct ActorUniqueID (ServerPlayer::*rv)() const;
        *((void **)&rv) = dlsym("?getControllingPlayer@ServerPlayer@@UEBA?AUActorUniqueID@@XZ");
        return (this->*rv)();
    }
    MCINLINE void openNpcInteractScreen(class Actor &a0) {
        void (ServerPlayer::*rv)(class Actor &);
        *((void **)&rv) = dlsym("?openNpcInteractScreen@ServerPlayer@@UEAAXAEAVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void openBrewingStand(class BlockPos const &a0) {
        void (ServerPlayer::*rv)(class BlockPos const &);
        *((void **)&rv) = dlsym("?openBrewingStand@ServerPlayer@@UEAAXAEBVBlockPos@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void _removeNearbyEntities() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?_removeNearbyEntities@ServerPlayer@@AEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void die(class ActorDamageSource const &a0) {
        void (ServerPlayer::*rv)(class ActorDamageSource const &);
        *((void **)&rv) = dlsym("?die@ServerPlayer@@UEAAXAEBVActorDamageSource@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE bool isEntityRelevant(class Actor const &a0) {
        bool (ServerPlayer::*rv)(class Actor const &);
        *((void **)&rv) = dlsym("?isEntityRelevant@ServerPlayer@@UEAA_NAEBVActor@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void displayTextObjectMessage(
        class TextObjectRoot const &a0,
        class std::
            basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const &a1,
        class std::basic_string<char,
                                struct std::char_traits<char>,
                                class std::allocator<char>> const &a2) {
        void (ServerPlayer::*rv)(class TextObjectRoot const &,
                                 class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &,
                                 class std::basic_string<char, struct std::char_traits<char>,
                                                         class std::allocator<char>> const &);
        *((void **)&rv) = dlsym(
            "?displayTextObjectMessage@ServerPlayer@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@"
            "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z");
        return (this->*rv)(a0, a1, a2);
    }
    MCINLINE void selectItem(class ItemStack const &a0, int const &a1) {
        void (ServerPlayer::*rv)(class ItemStack const &, int const &);
        *((void **)&rv) = dlsym("?selectItem@ServerPlayer@@QEAAXAEBVItemStack@@AEBH@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void onEffectRemoved(class MobEffectInstance &a0) {
        void (ServerPlayer::*rv)(class MobEffectInstance &);
        *((void **)&rv) = dlsym("?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void checkMovementStats(class Vec3 const &a0) {
        void (ServerPlayer::*rv)(class Vec3 const &);
        *((void **)&rv) = dlsym("?checkMovementStats@ServerPlayer@@UEAAXAEBVVec3@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void frameUpdate(class FrameUpdateContextBase &a0) {
        void (ServerPlayer::*rv)(class FrameUpdateContextBase &);
        *((void **)&rv) = dlsym("?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class MoveInputHandler *getMoveInputHandler() {
        class MoveInputHandler *(ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?getMoveInputHandler@ServerPlayer@@UEAAPEAVMoveInputHandler@@XZ");
        return (this->*rv)();
    }
    MCINLINE void _updateNearbyActors() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?_updateNearbyActors@ServerPlayer@@AEAAXXZ");
        return (this->*rv)();
    }

    MCINLINE unsigned int findClientChunkRadius(unsigned int a0) const {
        unsigned int (ServerPlayer::*rv)(unsigned int) const;
        *((void **)&rv) = dlsym("?findClientChunkRadius@ServerPlayer@@QEBAII@Z");
        return (this->*rv)(a0);
    }
    MCINLINE class PlayerEventCoordinator &getPlayerEventCoordinator() {
        class PlayerEventCoordinator &(ServerPlayer::*rv)();
        *((void **)&rv) =
            dlsym("?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ");
        return (this->*rv)();
    }
    MCINLINE void deleteContainerManager() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?deleteContainerManager@ServerPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
#endif
    MCINLINE void sendMobEffectPackets() {
        void (ServerPlayer::*rv)();
        *((void **)&rv) = dlsym("?sendMobEffectPackets@ServerPlayer@@QEAAXXZ");
        return (this->*rv)();
    }
    MCINLINE void setPermissions(enum CommandPermissionLevel a0) {
        void (ServerPlayer::*rv)(enum CommandPermissionLevel);
        *((void **)&rv) = dlsym("?setPermissions@ServerPlayer@@UEAAXW4CommandPermissionLevel@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void sendNetworkPacket(class Packet &a0) const {
        void (ServerPlayer::*rv)(class Packet &) const;
        *((void **)&rv) = dlsym("?sendNetworkPacket@ServerPlayer@@UEBAXAEAVPacket@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void setArmor(enum ArmorSlot a0, class ItemStack const &a1) {
        void (ServerPlayer::*rv)(enum ArmorSlot, class ItemStack const &);
        *((void **)&rv) = dlsym("?setArmor@ServerPlayer@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z");
        return (this->*rv)(a0, a1);
    }
    MCINLINE void setPlayerGameType(enum GameType a0) {
        void (ServerPlayer::*rv)(enum GameType);
        *((void **)&rv) = dlsym("?setPlayerGameType@ServerPlayer@@UEAAXW4GameType@@@Z");
        return (this->*rv)(a0);
    }
    MCINLINE void sendInventory(bool a0) {
        void (ServerPlayer::*rv)(bool);
        *((void **)&rv) = dlsym("?sendInventory@ServerPlayer@@UEAAX_N@Z");
        return (this->*rv)(a0);
    }
#if 0
	MCINLINE void  _setContainerManager(class std::shared_ptr<class IContainerManager> a0){
void (ServerPlayer::*rv)(class std::shared_ptr<class IContainerManager>); *((void**)&rv) = dlsym("?_setContainerManager@ServerPlayer@@AEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z"); return (this->*rv)(a0);}
	MCINLINE  void  sendComplexInventoryTransaction(class std::unique_ptr<class ComplexInventoryTransaction,struct std::default_delete<class ComplexInventoryTransaction> > a0)const {
 void (ServerPlayer::*rv)(class std::unique_ptr<class ComplexInventoryTransaction,struct std::default_delete<class ComplexInventoryTransaction> >)const ; *((void**)&rv) = dlsym("?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z"); return (this->*rv)(a0);}
//   bad fun  

	// ??0ServerPlayer@@QEAA@AEAVLevel@@AEAVPacketSender@@AEAVNetworkHandler@@AEAVActiveTransfersManager@Server@ClientBlobCache@@W4GameType@@AEBVNetworkIdentifier@@EV?$function@$$A6AXAEAVServerPlayer@@@Z@std@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@H@Z
	// ServerPlayer::ServerPlayer(class Level &,class PacketSender &,class NetworkHandler &,class ClientBlobCache::Server::ActiveTransfersManager &,enum GameType,class NetworkIdentifier const &,unsigned char,class std::function<void >,class mce::UUID,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::unique_ptr<class Certificate,struct std::default_delete<class Certificate> >,int)
#endif
};
