#pragma once

#include "ll/api/base/Macro.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkPeer.h"
#include "mc/server/volume/UserEntityIdentifierComponent.h"
#include "mc/world/actor/player/EnderChestContainer.h"

// auto generated inclusion list
#include "mc/common/wrapper/BedSleepingResult.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/optional_ref.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/BuildPlatform.h"
#include "mc/enums/GameType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MobSpawnMethod.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class NetworkIdentifier;
class Certificate;
class UserEntityIdentifierComponent;
class ConnectionRequest;
class Packet;
class PlayerEventCoordinator;

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct FixedSpawnPositionData;
    class PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    struct FixedSpawnPositionData {
    public:
        // prevent constructor by default
        FixedSpawnPositionData& operator=(FixedSpawnPositionData const&);
        FixedSpawnPositionData(FixedSpawnPositionData const&);
        FixedSpawnPositionData();
    };

    class PlayerSpawnPoint {
    public:
        // prevent constructor by default
        PlayerSpawnPoint& operator=(PlayerSpawnPoint const&);
        PlayerSpawnPoint(PlayerSpawnPoint const&);
        PlayerSpawnPoint();

    public:
        // NOLINTBEGIN
        // symbol: ?hasSpawnBlock@PlayerSpawnPoint@Player@@QEBA_NXZ
        MCAPI bool hasSpawnBlock() const;

        // NOLINTEND
    };

    union LevelSleepStatus {
        int data; // this+0x0
        struct {
            char unknown;
        } object; // this+0x0
    };

public:
    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    LLNDAPI optional_ref<Certificate const> getCertificate() const;

    LLNDAPI SubClientId const& getClientSubId() const;

    /**
     * @brief Get the player's uuid
     * @return Player's uuid
     */
    LLNDAPI mce::UUID const& getUuid() const;

    /**
     * @brief Get the player's IP and port
     * @return player's IP and port
     */
    LLNDAPI std::string getIPAndPort() const;

    /**
     * @brief Determine if a player is an administrator of the server
     * @return Returns true if the player is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Get the player's real in-game nickname
     * @return player's real in-game nickname
     */
    LLNDAPI std::string getRealName() const;

    /**
     * @brief Get the name of the player's langtext.
     * @return The name of the player's langtext.
     * @warning This is not the player's in-game nickname.
     */
    LLNDAPI std::string getLocaleName() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief Disconnect player's client
     */
    LLAPI void disconnect(std::string_view reason) const;

    /**
     * @brief Send a message to player
     */
    LLAPI void sendMessage(std::string_view msg) const;

    LLAPI void setAbility(::AbilitiesIndex index, bool value);

    /**
     * @brief Give player item and refresh.
     * @return Whether it is a complete success
     *         (e.g. returning false if the quantity of items given to the player does not match the expectation).
     * @warning The return value does not take into account whether the refresh was successful.
     *          You can use Player::add, but it will not refresh the item, which may lead to potential issues.
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer();

    LLNDAPI optional_ref<EnderChestContainer const> getEnderChestContainer() const;

    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Player@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 6, symbol: ?initializeComponents@Player@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 8, symbol: ?_serverInitItemStackIds@Player@@MEAAXXZ
    virtual void _serverInitItemStackIds();

    // vIndex: 10, symbol: ??1Player@@UEAA@XZ
    virtual ~Player();

    // vIndex: 11, symbol: ?resetUserPos@Player@@UEAAX_N@Z
    virtual void resetUserPos(bool clearMore);

    // vIndex: 13, symbol: ?remove@Player@@UEAAXXZ
    virtual void remove();

    // vIndex: 19, symbol: ?getInterpolatedRidingOffset@Player@@UEBA?AVVec3@@MH@Z
    virtual class Vec3 getInterpolatedRidingOffset(float, int) const;

    // vIndex: 20, symbol: ?isFireImmune@Player@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 23, symbol: ?teleportTo@Player@@UEAAXAEBVVec3@@_NHH1@Z
    virtual void teleportTo(class Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool);

    // vIndex: 25, symbol:
    // ?tryCreateAddActorPacket@Player@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 26, symbol: ?normalTick@Player@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 28, symbol: ?passengerTick@Player@@UEAAXXZ
    virtual void passengerTick();

    // vIndex: 37, symbol: ?getNameTagTextColor@Player@@UEBA?AVColor@mce@@XZ
    virtual class mce::Color getNameTagTextColor() const;

    // vIndex: 38, symbol: ?getShadowRadius@Player@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 40, symbol: ?canInteractWithOtherEntitiesInGame@Player@@UEBA_NXZ
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 43, symbol: ?isImmobile@Player@@UEBA_NXZ
    virtual bool isImmobile() const;

    // vIndex: 44, symbol: ?isSilentObserver@Player@@UEBA_NXZ
    virtual bool isSilentObserver() const;

    // vIndex: 46, symbol: ?isSleeping@Player@@UEBA_NXZ
    virtual bool isSleeping() const;

    // vIndex: 47, symbol: ?setSleeping@Player@@UEAAX_N@Z
    virtual void setSleeping(bool val);

    // vIndex: 49, symbol: ?isBlocking@Player@@UEBA_NXZ
    virtual bool isBlocking() const;

    // vIndex: 50, symbol: ?isDamageBlocked@Player@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isDamageBlocked(class ActorDamageSource const& source) const;

    // vIndex: 58, symbol: ?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z
    virtual bool attack(class Actor& actor, ::ActorDamageCause const& cause);

    // vIndex: 70, symbol: ?isInvulnerableTo@Player@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 74, symbol: ?feed@Player@@UEAAXH@Z
    virtual void feed(int itemId);

    // vIndex: 75, symbol: ?handleEntityEvent@Player@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 77, symbol: ?getActorRendererId@Player@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getActorRendererId() const;

    // vIndex: 79, symbol: ?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z
    virtual void setArmor(::ArmorSlot slot, class ItemStack const& item);

    // vIndex: 84, symbol: ?setCarriedItem@Player@@UEAAXAEBVItemStack@@@Z
    virtual void setCarriedItem(class ItemStack const& item);

    // vIndex: 85, symbol: ?getCarriedItem@Player@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getCarriedItem() const;

    // vIndex: 86, symbol: ?setOffhandSlot@Player@@UEAAXAEBVItemStack@@@Z
    virtual void setOffhandSlot(class ItemStack const& item);

    // vIndex: 87, symbol: ?getEquippedTotem@Player@@UEBAAEBVItemStack@@XZ
    virtual class ItemStack const& getEquippedTotem() const;

    // vIndex: 88, symbol: ?consumeTotem@Player@@UEAA_NXZ
    virtual bool consumeTotem();

    // vIndex: 93, symbol: ?canFreeze@Player@@UEBA_NXZ
    virtual bool canFreeze() const;

    // vIndex: 96, symbol: ?canChangeDimensionsUsingPortal@Player@@UEBA_NXZ
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 100, symbol: ?causeFallDamageToActor@Player@@UEAAMMMVActorDamageSource@@@Z
    virtual float causeFallDamageToActor(float, float, class ActorDamageSource);

    // vIndex: 101, symbol: ?onSynchedDataUpdate@Player@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 102, symbol: ?canAddPassenger@Player@@UEBA_NAEAVActor@@@Z
    virtual bool canAddPassenger(class Actor&) const;

    // vIndex: 104, symbol: ?canBePulledIntoVehicle@Player@@UEBA_NXZ
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 106, symbol: ?sendMotionPacketIfNeeded@Player@@UEAAXAEBUPlayerMovementSettings@@@Z
    virtual void sendMotionPacketIfNeeded(struct PlayerMovementSettings const&);

    // vIndex: 108, symbol: ?startSwimming@Player@@UEAAXXZ
    virtual void startSwimming();

    // vIndex: 109, symbol: ?stopSwimming@Player@@UEAAXXZ
    virtual void stopSwimming();

    // vIndex: 111, symbol: ?getCommandPermissionLevel@Player@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 116, symbol: ?canObstructSpawningAndBlockPlacement@Player@@UEBA_NXZ
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 117, symbol: ?getAnimationComponent@Player@@UEAAAEAVAnimationComponent@@XZ
    virtual class AnimationComponent& getAnimationComponent();

    // vIndex: 120, symbol: ?useItem@Player@@UEAAXAEAVItemStackBase@@W4ItemUseMethod@@_N@Z
    virtual void useItem(class ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem);

    // vIndex: 122, symbol: ?getMapDecorationRotation@Player@@UEBAMXZ
    virtual float getMapDecorationRotation() const;

    // vIndex: 124, symbol: ?add@Player@@UEAA_NAEAVItemStack@@@Z
    virtual bool add(class ItemStack& item);

    // vIndex: 125, symbol: ?drop@Player@@UEAA_NAEBVItemStack@@_N@Z
    virtual bool drop(class ItemStack const& item, bool randomly);

    // vIndex: 129, symbol: ?startSpinAttack@Player@@UEAAXXZ
    virtual void startSpinAttack();

    // vIndex: 130, symbol: ?stopSpinAttack@Player@@UEAAXXZ
    virtual void stopSpinAttack();

    // vIndex: 133, symbol: ?die@Player@@UEAAXAEBVActorDamageSource@@@Z
    virtual void die(class ActorDamageSource const& source);

    // vIndex: 134, symbol: ?shouldDropDeathLoot@Player@@UEBA_NXZ
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 138, symbol: ?getLastDeathPos@Player@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getLastDeathPos() const;

    // vIndex: 139, symbol: ?getLastDeathDimension@Player@@UEBA?AV?$optional@V?$AutomaticID@VDimension@@H@@@std@@XZ
    virtual std::optional<DimensionType> getLastDeathDimension() const;

    // vIndex: 140, symbol: ?hasDiedBefore@Player@@UEBA_NXZ
    virtual bool hasDiedBefore() const;

    // vIndex: 141, symbol: ?doEnterWaterSplashEffect@Player@@UEAAXXZ
    virtual void doEnterWaterSplashEffect();

    // vIndex: 142, symbol: ?doExitWaterSplashEffect@Player@@UEAAXXZ
    virtual void doExitWaterSplashEffect();

    // vIndex: 144, symbol: ?_shouldProvideFeedbackOnHandContainerItemSet@Player@@MEBA_NW4HandSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot, class ItemStack const&) const;

    // vIndex: 145, symbol: ?_shouldProvideFeedbackOnArmorSet@Player@@MEBA_NW4ArmorSlot@@AEBVItemStack@@@Z
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, class ItemStack const& item) const;

    // vIndex: 148, symbol: ?_hurt@Player@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Player@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Player@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // vIndex: 157, symbol: ?getSpeed@Player@@UEBAMXZ
    virtual float getSpeed() const;

    // vIndex: 158, symbol: ?setSpeed@Player@@UEAAXM@Z
    virtual void setSpeed(float _speed);

    // vIndex: 160, symbol: ?aiStep@Player@@UEAAXXZ
    virtual void aiStep();

    // vIndex: 164, symbol: ?getItemUseDuration@Player@@UEBAHXZ
    virtual int getItemUseDuration() const;

    // vIndex: 165, symbol: ?getItemUseStartupProgress@Player@@UEBAMXZ
    virtual float getItemUseStartupProgress() const;

    // vIndex: 166, symbol: ?getItemUseIntervalProgress@Player@@UEBAMXZ
    virtual float getItemUseIntervalProgress() const;

    // vIndex: 175, symbol:
    // ?getAllHand@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllHand() const;

    // vIndex: 176, symbol:
    // ?getAllEquipment@Player@@UEBA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@XZ
    virtual std::vector<class ItemStack const*> getAllEquipment() const;

    // vIndex: 177, symbol: ?dropEquipmentOnDeath@Player@@UEAAXAEBVActorDamageSource@@H@Z
    virtual void dropEquipmentOnDeath(class ActorDamageSource const& source, int lootBonusLevel);

    // vIndex: 178, symbol: ?dropEquipmentOnDeath@Player@@UEAAXXZ
    virtual void dropEquipmentOnDeath();

    // vIndex: 179, symbol: ?clearVanishEnchantedItemsOnDeath@Player@@UEAAXXZ
    virtual void clearVanishEnchantedItemsOnDeath();

    // vIndex: 180, symbol: ?sendInventory@Player@@UEAAX_N@Z
    virtual void sendInventory(bool shouldSelectSlot);

    // vIndex: 187, symbol: ?canExistWhenDisallowMob@Player@@UEBA_NXZ
    virtual bool canExistWhenDisallowMob() const;

    // vIndex: 188, symbol:
    // ?initBodyControl@Player@@EEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
    virtual std::unique_ptr<class BodyControl> initBodyControl();

    // vIndex: 192, symbol: ?prepareRegion@Player@@UEAAXAEAVChunkSource@@@Z
    virtual void prepareRegion(class ChunkSource& mainChunkSource);

    // vIndex: 193, symbol: ?destroyRegion@Player@@UEAAXXZ
    virtual void destroyRegion();

    // vIndex: 194, symbol: ?suspendRegion@Player@@UEAAXXZ
    virtual void suspendRegion();

    // vIndex: 195, symbol: ?_fireDimensionChanged@Player@@UEAAXXZ
    virtual void _fireDimensionChanged();

    // vIndex: 196, symbol: ?changeDimensionWithCredits@Player@@UEAAXV?$AutomaticID@VDimension@@H@@@Z
    virtual void changeDimensionWithCredits(DimensionType dimension);

    // vIndex: 197, symbol: ?tickWorld@Player@@UEAAXAEBUTick@@@Z
    virtual void tickWorld(struct Tick const&);

    // vIndex: 198, symbol: ?frameUpdate@ServerPlayer@@UEAAXAEAVFrameUpdateContextBase@@@Z
    virtual void frameUpdate(class FrameUpdateContextBase&) = 0;

    // vIndex: 199, symbol:
    // ?getTickingOffsets@Player@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    virtual std::vector<class ChunkPos> const& getTickingOffsets() const;

    // vIndex: 200, symbol: ?moveView@Player@@UEAAXXZ
    virtual void moveView();

    // vIndex: 201, symbol: ?moveSpawnView@Player@@UEAAXAEBVVec3@@V?$AutomaticID@VDimension@@H@@@Z
    virtual void moveSpawnView(class Vec3 const& spawnPosition, DimensionType dimensionType);

    // vIndex: 202, symbol: ?checkMovementStats@Player@@UEAAXAEBVVec3@@@Z
    virtual void checkMovementStats(class Vec3 const& d);

    // vIndex: 203, symbol: ?getCurrentStructureFeature@Player@@UEBA?AW4StructureFeatureType@@XZ
    virtual ::StructureFeatureType getCurrentStructureFeature() const;

    // vIndex: 204, symbol: ?isAutoJumpEnabled@Player@@UEBA_NXZ
    virtual bool isAutoJumpEnabled() const;

    // vIndex: 205, symbol: ?respawn@Player@@UEAAXXZ
    virtual void respawn();

    // vIndex: 206, symbol: ?resetRot@Player@@UEAAXXZ
    virtual void resetRot();

    // vIndex: 207, symbol: ?isInTrialMode@Player@@UEAA_NXZ
    virtual bool isInTrialMode();

    // vIndex: 208, symbol: ?openPortfolio@Player@@UEAAXXZ
    virtual void openPortfolio();

    // vIndex: 209, symbol: ?openBook@Player@@UEAAXH_NHPEAVBlockActor@@@Z
    virtual void openBook(int bookSlot, bool editable, int page, class BlockActor* lectern);

    // vIndex: 210, symbol: ?openTrading@Player@@UEAAXAEBUActorUniqueID@@_N@Z
    virtual void openTrading(struct ActorUniqueID const& uniqueID, bool useNewScreen);

    // vIndex: 211, symbol: ?openChalkboard@Player@@UEAAXAEAVChalkboardBlockActor@@_N@Z
    virtual void openChalkboard(class ChalkboardBlockActor& chalkboard, bool showLockToggle);

    // vIndex: 212, symbol: ?openNpcInteractScreen@Player@@UEAAXV?$shared_ptr@UINpcDialogueData@@@std@@@Z
    virtual void openNpcInteractScreen(std::shared_ptr<struct INpcDialogueData> npc);

    // vIndex: 213, symbol: ?openInventory@Player@@UEAAXXZ
    virtual void openInventory();

    // vIndex: 214, symbol:
    // ?displayChatMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    virtual void displayChatMessage(std::string const& author, std::string const& message);

    // vIndex: 215, symbol:
    // ?displayClientMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void displayClientMessage(std::string const& message);

    // vIndex: 216, symbol:
    // ?displayTextObjectMessage@Player@@UEAAXAEBVTextObjectRoot@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void
    displayTextObjectMessage(class TextObjectRoot const& textObject, std::string const&, std::string const&);

    // vIndex: 217, symbol:
    // ?displayTextObjectWhisperMessage@Player@@UEAAXAEBVResolvedTextObject@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    virtual void displayTextObjectWhisperMessage(
        class ResolvedTextObject const& resolvedTextObject,
        std::string const&              xuid,
        std::string const&              platformId
    );

    // vIndex: 218, symbol:
    // ?displayTextObjectWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    virtual void
    displayTextObjectWhisperMessage(std::string const& message, std::string const& xuid, std::string const& platformId);

    // vIndex: 219, symbol:
    // ?displayWhisperMessage@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@000@Z
    virtual void displayWhisperMessage(
        std::string const& author,
        std::string const& message,
        std::string const& xuid,
        std::string const& platformId
    );

    // vIndex: 220, symbol: ?startSleepInBed@Player@@UEAA?AW4BedSleepingResult@@AEBVBlockPos@@@Z
    virtual ::BedSleepingResult startSleepInBed(class BlockPos const&);

    // vIndex: 221, symbol: ?stopSleepInBed@Player@@UEAAX_N0@Z
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 222, symbol: ?canStartSleepInBed@Player@@UEAA_NXZ
    virtual bool canStartSleepInBed();

    // vIndex: 223, symbol: ?openSign@Player@@UEAAXAEBVBlockPos@@_N@Z
    virtual void openSign(class BlockPos const&, bool);

    // vIndex: 224, symbol:
    // ?playEmote@Player@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void playEmote(std::string const& pieceId, bool);

    // vIndex: 225, symbol: ?isLoading@Player@@UEBA_NXZ
    virtual bool isLoading() const;

    // vIndex: 226, symbol: ?isPlayerInitialized@Player@@UEBA_NXZ
    virtual bool isPlayerInitialized() const;

    // vIndex: 227, symbol: ?stopLoading@Player@@UEAAXXZ
    virtual void stopLoading();

    // vIndex: 228, symbol: ?setPlayerGameType@Player@@UEAAXW4GameType@@@Z
    virtual void setPlayerGameType(::GameType gameType);

    // vIndex: 229, symbol: ?initHUDContainerManager@Player@@UEAAXXZ
    virtual void initHUDContainerManager();

    // vIndex: 230, symbol: ?_crit@Player@@UEAAXAEAVActor@@@Z
    virtual void _crit(class Actor& actor);

    // vIndex: 231, symbol: ?getEventing@Player@@UEBAPEAVIMinecraftEventing@@XZ
    virtual class IMinecraftEventing* getEventing() const;

    // vIndex: 232, symbol: ?getUserId@Player@@UEBAIXZ
    virtual uint getUserId() const;

    // vIndex: 233, symbol: ?addExperience@Player@@UEAAXH@Z
    virtual void addExperience(int xp);

    // vIndex: 234, symbol: ?addLevels@Player@@UEAAXH@Z
    virtual void addLevels(int levels);

    // vIndex: 235, symbol: ?setContainerData@ServerPlayer@@UEAAXAEAVIContainerManager@@HH@Z
    virtual void setContainerData(class IContainerManager& menu, int id, int value) = 0;

    // vIndex: 236, symbol: ?slotChanged@ServerPlayer@@UEAAXAEAVIContainerManager@@AEAVContainer@@HAEBVItemStack@@2_N@Z
    virtual void slotChanged(
        class IContainerManager& menu,
        class Container&         container,
        int                      slot,
        class ItemStack const&   oldItem,
        class ItemStack const&   newItem,
        bool                     isResultSlot
    ) = 0;

    // vIndex: 237, symbol: ?refreshContainer@ServerPlayer@@UEAAXAEAVIContainerManager@@@Z
    virtual void refreshContainer(class IContainerManager& menu) = 0;

    // vIndex: 238, symbol: ?deleteContainerManager@Player@@UEAAXXZ
    virtual void deleteContainerManager();

    // vIndex: 239, symbol: ?isActorRelevant@Player@@UEAA_NAEBVActor@@@Z
    virtual bool isActorRelevant(class Actor const& actor);

    // vIndex: 240, symbol: ?isTeacher@ServerPlayer@@UEBA_NXZ
    virtual bool isTeacher() const = 0;

    // vIndex: 241, symbol: ?onSuspension@Player@@UEAAXXZ
    virtual void onSuspension();

    // vIndex: 242, symbol: ?onLinkedSlotsChanged@Player@@UEAAXXZ
    virtual void onLinkedSlotsChanged();

    // vIndex: 243, symbol: ?sendInventoryTransaction@ServerPlayer@@UEBAXAEBVInventoryTransaction@@@Z
    virtual void sendInventoryTransaction(class InventoryTransaction const& transaction) const = 0;

    // vIndex: 244, symbol:
    // ?sendComplexInventoryTransaction@ServerPlayer@@UEBAXV?$unique_ptr@VComplexInventoryTransaction@@U?$default_delete@VComplexInventoryTransaction@@@std@@@std@@@Z
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction> transaction
    ) const = 0;

    // vIndex: 245, symbol: ?sendNetworkPacket@Player@@UEBAXAEAVPacket@@@Z
    virtual void sendNetworkPacket(class Packet& packet) const;

    // vIndex: 246, symbol: ?getPlayerEventCoordinator@ServerPlayer@@UEAAAEAVPlayerEventCoordinator@@XZ
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 247, symbol: ?isSimulated@Player@@UEBA_NXZ
    virtual bool isSimulated() const;

    // vIndex: 248, symbol: ?getXuid@Player@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getXuid() const;

    // vIndex: 249, symbol: ?getMovementSettings@Player@@UEBAAEBUPlayerMovementSettings@@XZ
    virtual struct PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 250, symbol: ?requestMissingSubChunk@Player@@UEAAXAEBVSubChunkPos@@@Z
    virtual void requestMissingSubChunk(class SubChunkPos const&);

    // vIndex: 251, symbol: ?getMaxChunkBuildRadius@Player@@UEBAEXZ
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 252, symbol: ?onMovePlayerPacketNormal@Player@@MEAAXAEBVVec3@@AEBVVec2@@M@Z
    virtual void onMovePlayerPacketNormal(class Vec3 const& pos, class Vec2 const& rot, float yHeadRot);

    // vIndex: 253, symbol: ?_createChunkSource@Player@@MEAA?AV?$shared_ptr@VChunkViewSource@@@std@@AEAVChunkSource@@@Z
    virtual std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource& mainChunkSource);

    // vIndex: 254, symbol: ?setAbilities@Player@@UEAAXAEBVLayeredAbilities@@@Z
    virtual void setAbilities(class LayeredAbilities const&);

    // vIndex: 255, symbol: ?getEditorPlayer@ServerPlayer@@UEBA?AV?$NonOwnerPointer@VIEditorPlayer@Editor@@@Bedrock@@XZ
    virtual class Bedrock::NonOwnerPointer<class Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 256, symbol: ?destroyEditorPlayer@ServerPlayer@@UEAAXXZ
    virtual void destroyEditorPlayer() = 0;

    // symbol:
    // ??0Player@@QEAA@AEAVLevel@@AEAVPacketSender@@W4GameType@@_NAEBVNetworkIdentifier@@W4SubClientId@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@7V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@9@AEAVEntityContext@@77@Z
    MCAPI
    Player(class Level&, class PacketSender&, ::GameType, bool, class NetworkIdentifier const&, ::SubClientId, class mce::UUID, std::string const&, std::string const&, std::unique_ptr<class Certificate>, class EntityContext&, std::string const&, std::string const&);

    // symbol: ?_fireWillChangeDimension@Player@@QEAAXXZ
    MCAPI void _fireWillChangeDimension();

    // symbol: ?broadcastPlayerSpawnedMobEvent@Player@@QEAAXW4ActorType@@W4MobSpawnMethod@@@Z
    MCAPI void broadcastPlayerSpawnedMobEvent(::ActorType spawnedType, ::MobSpawnMethod spawnMethod);

    // symbol: ?canBeSeenOnMap@Player@@QEBA_NXZ
    MCAPI bool canBeSeenOnMap() const;

    // symbol: ?canDestroy@Player@@QEBA_NAEBVBlock@@@Z
    MCAPI bool canDestroy(class Block const& block) const;

    // symbol: ?canJump@Player@@QEAA_NXZ
    MCAPI bool canJump();

    // symbol: ?canOpenContainerScreen@Player@@QEAA_NXZ
    MCAPI bool canOpenContainerScreen();

    // symbol: ?canSleep@Player@@QEBA_NXZ
    MCAPI bool canSleep() const;

    // symbol: ?canStackInOffhand@Player@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool canStackInOffhand(class ItemStack const& item) const;

    // symbol: ?canUseAbility@Player@@QEBA_NW4AbilitiesIndex@@@Z
    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    // symbol: ?canUseOperatorBlocks@Player@@QEBA_NXZ
    MCAPI bool canUseOperatorBlocks() const;

    // symbol: ?causeFoodExhaustion@Player@@QEAAXM@Z
    MCAPI void causeFoodExhaustion(float exhaustionAmount);

    // symbol: ?checkNeedAutoJump@Player@@QEAA_NMM@Z
    MCAPI bool checkNeedAutoJump(float, float);

    // symbol: ?clearRespawnPosition@Player@@QEAAXXZ
    MCAPI void clearRespawnPosition();

    // symbol: ?completeUsingItem@Player@@QEAAXXZ
    MCAPI void completeUsingItem();

    // symbol: ?dropCursorSelectedItemOnDeath@Player@@QEAAXXZ
    MCAPI void dropCursorSelectedItemOnDeath();

    // symbol: ?eat@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void eat(class ItemStack const& instance);

    // symbol: ?eat@Player@@QEAAXHM@Z
    MCAPI void eat(int hungerValue, float saturationModifier);

    // symbol: ?equippedArmorItemCanBeMoved@Player@@QEBA_NAEBVItemStack@@@Z
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const& item) const;

    // symbol: ?fireDimensionChangedEvent@Player@@QEAAXV?$AutomaticID@VDimension@@H@@0@Z
    MCAPI void fireDimensionChangedEvent(DimensionType fromDimension, DimensionType toDimension);

    // symbol: ?forceAllowEating@Player@@QEBA_NXZ
    MCAPI bool forceAllowEating() const;

    // symbol: ?getAbilities@Player@@QEAAAEAVLayeredAbilities@@XZ
    MCAPI class LayeredAbilities& getAbilities();

    // symbol: ?getAbilities@Player@@QEBAAEBVLayeredAbilities@@XZ
    MCAPI class LayeredAbilities const& getAbilities() const;

    // symbol: ?getAgent@Player@@QEBAPEAVAgent@@XZ
    MCAPI class Agent* getAgent() const;

    // symbol: ?getAgentID@Player@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getAgentID() const;

    // symbol: ?getAgentIfAllowed@Player@@QEBAPEAVAgent@@_NUActorUniqueID@@@Z
    MCAPI class Agent* getAgentIfAllowed(bool callerCanAccessOtherAgents, struct ActorUniqueID callerAgentID) const;

    // symbol: ?getBedPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getBedPosition() const;

    // symbol: ?getBlockedUsingDamagedShieldTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockedUsingDamagedShieldTimeStamp() const;

    // symbol: ?getBlockedUsingShieldTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockedUsingShieldTimeStamp() const;

    // symbol: ?getBlockingStartTimeStamp@Player@@QEBA_JXZ
    MCAPI int64 getBlockingStartTimeStamp() const;

    // symbol: ?getCapePos@Player@@QEAA?AVVec3@@M@Z
    MCAPI class Vec3 getCapePos(float a);

    // symbol: ?getChunkRadius@Player@@QEBAIXZ
    MCAPI uint getChunkRadius() const;

    // symbol: ?getContainerManager@Player@@QEAA?AV?$weak_ptr@VIContainerManager@@@std@@XZ
    MCAPI std::weak_ptr<class IContainerManager> getContainerManager();

    // symbol: ?getCurrentActiveShield@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getCurrentActiveShield() const;

    // symbol: ?getDestroyProgress@Player@@QEBAMAEBVBlock@@@Z
    MCAPI float getDestroyProgress(class Block const& block) const;

    // symbol: ?getDestroySpeed@Player@@QEBAMAEBVBlock@@@Z
    MCAPI float getDestroySpeed(class Block const& block) const;

    // symbol: ?getDirection@Player@@QEBAHXZ
    MCAPI int getDirection() const;

    // symbol: ?getEnchantmentSeed@Player@@QEBAHXZ
    MCAPI int getEnchantmentSeed() const;

    // symbol: ?getExpectedSpawnDimensionId@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType getExpectedSpawnDimensionId() const;

    // symbol: ?getExpectedSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getExpectedSpawnPosition() const;

    // symbol: ?getGameMode@Player@@QEBAAEAVGameMode@@XZ
    MCAPI class GameMode& getGameMode() const;

    // symbol: ?getInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getInteractText() const;

    // symbol: ?getInventory@Player@@QEAAAEAVContainer@@XZ
    MCAPI class Container& getInventory();

    // symbol: ?getItemCooldownLeft@Player@@QEBAHAEBVHashedString@@@Z
    MCAPI int getItemCooldownLeft(class HashedString const& type) const;

    // symbol: ?getItemCooldownLeft@Player@@QEBAH_K@Z
    MCAPI int getItemCooldownLeft(uint64) const;

    // symbol: ?getItemInUse@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getItemInUse() const;

    // symbol:
    // ?getItemInteractText@Player@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItem@@@Z
    MCAPI std::string getItemInteractText(class Item const&) const;

    // symbol: ?getItemStackNetManager@Player@@QEAAPEAVItemStackNetManagerBase@@XZ
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();

    // symbol: ?getItemStackNetManager@Player@@QEBAPEBVItemStackNetManagerBase@@XZ
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;

    // symbol: ?getLuck@Player@@QEAAMXZ
    MCAPI float getLuck();

    // symbol: ?getMapIndex@Player@@QEAAHXZ
    MCAPI int getMapIndex();

    // symbol: ?getMaxItemCooldownLeft@Player@@QEBAHXZ
    MCAPI int getMaxItemCooldownLeft() const;

    // symbol: ?getName@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getNewEnchantmentSeed@Player@@QEAAXXZ
    MCAPI void getNewEnchantmentSeed();

    // symbol: ?getPickupArea@Player@@QEBA?AVAABB@@XZ
    MCAPI class AABB getPickupArea() const;

    // symbol: ?getPlatform@Player@@QEBA?AW4BuildPlatform@@XZ
    MCAPI ::BuildPlatform getPlatform() const;

    // symbol: ?getPlatformOnlineId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPlatformOnlineId() const;

    // symbol: ?getPlayerGameType@Player@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getPlayerGameType() const;

    // symbol: ?getPlayerIndex@Player@@QEBAHXZ
    MCAPI int getPlayerIndex() const;

    // symbol: ?getPlayerLevel@Player@@QEBAHXZ
    MCAPI int getPlayerLevel() const;

    // symbol: ?getPlayerPermissionLevel@Player@@QEBA?AW4PlayerPermissionLevel@@XZ
    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    // symbol: ?getPlayerSessionId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPlayerSessionId() const;

    // symbol: ?getPlayerUIItem@Player@@QEAAAEBVItemStack@@W4PlayerUISlot@@@Z
    MCAPI class ItemStack const& getPlayerUIItem(::PlayerUISlot slot);

    // symbol: ?getRespawnAnchorPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getRespawnAnchorPosition() const;

    // symbol: ?getSelectedItem@Player@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getSelectedItem() const;

    // symbol: ?getSelectedItemSlot@Player@@QEBAHXZ
    MCAPI int getSelectedItemSlot() const;

    // symbol: ?getServerId@Player@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getServerId() const;

    // symbol: ?getSkin@Player@@QEAAAEAVSerializedSkin@@XZ
    MCAPI class SerializedSkin& getSkin();

    // symbol: ?getSkin@Player@@QEBAAEBVSerializedSkin@@XZ
    MCAPI class SerializedSkin const& getSkin() const;

    // symbol: ?getSleepRotation@Player@@QEBAMXZ
    MCAPI float getSleepRotation() const;

    // symbol: ?getSpawnDimension@Player@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
    MCAPI DimensionType getSpawnDimension() const;

    // symbol: ?getSpawnPosition@Player@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getSpawnPosition() const;

    // symbol: ?getSupplies@Player@@QEAAAEAVPlayerInventory@@XZ
    MCAPI class PlayerInventory& getSupplies();

    // symbol: ?getSupplies@Player@@QEBAAEBVPlayerInventory@@XZ
    MCAPI class PlayerInventory const& getSupplies() const;

    // symbol: ?getTrackedBosses@Player@@QEAAAEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@XZ
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();

    // symbol: ?getUsedPotion@Player@@QEAA_NXZ
    MCAPI bool getUsedPotion();

    // symbol: ?getXpEarnedAtCurrentLevel@Player@@QEBAHXZ
    MCAPI int getXpEarnedAtCurrentLevel() const;

    // symbol: ?getXpNeededForLevelRange@Player@@QEBAIHH@Z
    MCAPI uint getXpNeededForLevelRange(int startlevel, int endlevel) const;

    // symbol: ?getXpNeededForNextLevel@Player@@QEBAHXZ
    MCAPI int getXpNeededForNextLevel() const;

    // symbol: ?handleJumpEffects@Player@@QEAAXXZ
    MCAPI void handleJumpEffects();

    // symbol: ?hasBedPosition@Player@@QEBA_NXZ
    MCAPI bool hasBedPosition() const;

    // symbol: ?hasOpenContainer@Player@@QEBA_NXZ
    MCAPI bool hasOpenContainer() const;

    // symbol: ?hasOpenContainerOfContainerType@Player@@QEBA_NW4ContainerType@@@Z
    MCAPI bool hasOpenContainerOfContainerType(::ContainerType containerType) const;

    // symbol: ?hasOwnedChunkSource@Player@@QEBA_NXZ
    MCAPI bool hasOwnedChunkSource() const;

    // symbol: ?hasResource@Player@@QEAA_NAEBVItemDescriptor@@@Z
    MCAPI bool hasResource(class ItemDescriptor const& resource);

    // symbol: ?hasRespawnAnchorPosition@Player@@QEBA_NXZ
    MCAPI bool hasRespawnAnchorPosition() const;

    // symbol: ?hasRespawnPosition@Player@@QEBA_NXZ
    MCAPI bool hasRespawnPosition() const;

    // symbol: ?interact@Player@@QEAA_NAEAVActor@@AEBVVec3@@@Z
    MCAPI bool interact(class Actor& actor, class Vec3 const& location);

    // symbol: ?inventoryChanged@Player@@QEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z
    MCAPI void inventoryChanged(
        class Container&       container,
        int                    slot,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool                   forceBalanced
    );

    // symbol: ?is2DPositionRelevant@Player@@QEAA_NV?$AutomaticID@VDimension@@H@@AEBVBlockPos@@@Z
    MCAPI bool is2DPositionRelevant(DimensionType dimension, class BlockPos const& position);

    // symbol: ?isEmoting@Player@@QEBA_NXZ
    MCAPI bool isEmoting() const;

    // symbol: ?isFlying@Player@@QEBA_NXZ
    MCAPI bool isFlying() const;

    // symbol: ?isForcedRespawn@Player@@QEBA_NXZ
    MCAPI bool isForcedRespawn() const;

    // symbol: ?isHiddenFrom@Player@@QEBA_NAEAVMob@@@Z
    MCAPI bool isHiddenFrom(class Mob& target) const;

    // symbol: ?isHostingPlayer@Player@@QEBA_NXZ
    MCAPI bool isHostingPlayer() const;

    // symbol: ?isHungry@Player@@QEBA_NXZ
    MCAPI bool isHungry() const;

    // symbol: ?isHurt@Player@@QEAA_NXZ
    MCAPI bool isHurt();

    // symbol: ?isInRaid@Player@@QEBA_NXZ
    MCAPI bool isInRaid() const;

    // symbol: ?isItemOnCooldown@Player@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool isItemOnCooldown(class HashedString const& type) const;

    // symbol: ?isRespawningFromTheEnd@Player@@QEBA_NXZ
    MCAPI bool isRespawningFromTheEnd() const;

    // symbol: ?isSleepingLongEnough@Player@@QEBA_NXZ
    MCAPI bool isSleepingLongEnough() const;

    // symbol: ?isSpawned@Player@@QEBA_NXZ
    MCAPI bool isSpawned() const;

    // symbol: ?isUsingItem@Player@@QEBA_NXZ
    MCAPI bool isUsingItem() const;

    // symbol: ?isValidSpawn@Player@@QEBA_NXZ
    MCAPI bool isValidSpawn() const;

    // symbol: ?passengerCheckMovementStats@Player@@QEAAXXZ
    MCAPI void passengerCheckMovementStats();

    // symbol:
    // ?playPredictiveSynchronizedSound@Player@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N@Z
    MCAPI void playPredictiveSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool
    );

    // symbol:
    // ?playPredictiveSynchronizedSound@Player@@QEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@AEBUActorDefinitionIdentifier@@H_N@Z
    MCAPI void playPredictiveSynchronizedSound(
        ::Puv::Legacy::LevelSoundEvent,
        class Vec3 const&,
        struct ActorDefinitionIdentifier const&,
        int,
        bool
    );

    // symbol: ?recheckSpawnPosition@Player@@QEAAXXZ
    MCAPI void recheckSpawnPosition();

    // symbol: ?registerTrackedBoss@Player@@QEAAXUActorUniqueID@@@Z
    MCAPI void registerTrackedBoss(struct ActorUniqueID mob);

    // symbol: ?releaseUsingItem@Player@@QEAAXXZ
    MCAPI void releaseUsingItem();

    // symbol: ?resendAllChunks@Player@@QEAAXXZ
    MCAPI void resendAllChunks();

    // symbol: ?resetPlayerLevel@Player@@QEAAXXZ
    MCAPI void resetPlayerLevel();

    // symbol: ?resetPublisherInitialSpawn@Player@@QEAAXXZ
    MCAPI void resetPublisherInitialSpawn();

    // symbol: ?resetToDefaultGameMode@Player@@QEAAXXZ
    MCAPI void resetToDefaultGameMode();

    // symbol: ?saveLastDeathLocation@Player@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void saveLastDeathLocation(class CompoundTag& tag) const;

    // symbol: ?sendEventPacket@Player@@QEBAXAEAVLegacyTelemetryEventPacket@@@Z
    MCAPI void sendEventPacket(class LegacyTelemetryEventPacket&) const;

    // symbol: ?sendPlayerTeleported@Player@@QEAAXXZ
    MCAPI void sendPlayerTeleported();

    // symbol: ?sendSpawnExperienceOrbPacketToServer@Player@@QEAAXAEBVVec3@@H@Z
    MCAPI void sendSpawnExperienceOrbPacketToServer(class Vec3 const& pos, int count);

    // symbol: ?setAgent@Player@@QEAAXPEAVAgent@@@Z
    MCAPI void setAgent(class Agent* agent);

    // symbol: ?setBedRespawnPosition@Player@@QEAAXAEBVBlockPos@@@Z
    MCAPI void setBedRespawnPosition(class BlockPos const& bedPosition);

    // symbol: ?setBlockRespawnUntilClientMessage@Player@@QEAAX_N@Z
    MCAPI void setBlockRespawnUntilClientMessage(bool val);

    // symbol: ?setChunkRadius@Player@@QEAAXI@Z
    MCAPI void setChunkRadius(uint chunkRadius);

    // symbol: ?setContainerManager@Player@@QEAAXV?$shared_ptr@VIContainerManager@@@std@@@Z
    MCAPI void setContainerManager(std::shared_ptr<class IContainerManager> manager);

    // symbol: ?setCursorSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void setCursorSelectedItem(class ItemStack const& item);

    // symbol: ?setCursorSelectedItemGroup@Player@@QEAAXAEBVItemGroup@@@Z
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const& itemGroup);

    // symbol: ?setEnchantmentSeed@Player@@QEAAXH@Z
    MCAPI void setEnchantmentSeed(int newSeed);

    // symbol: ?setHasDied@Player@@QEAAX_N@Z
    MCAPI void setHasDied(bool);

    // symbol: ?setHasSeenCredits@Player@@QEAAX_N@Z
    MCAPI void setHasSeenCredits(bool value);

    // symbol: ?setInventoryOptions@Player@@QEAAXAEBUInventoryOptions@@@Z
    MCAPI void setInventoryOptions(struct InventoryOptions const&);

    // symbol: ?setLastDeathDimension@Player@@QEAAXV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setLastDeathDimension(DimensionType dimension);

    // symbol: ?setLastDeathPos@Player@@QEAAXVBlockPos@@@Z
    MCAPI void setLastDeathPos(class BlockPos pos);

    // symbol: ?setLastHurtBy@Player@@QEAAXW4ActorType@@@Z
    MCAPI void setLastHurtBy(::ActorType lastHurtBy);

    // symbol: ?setMapIndex@Player@@QEAAXH@Z
    MCAPI void setMapIndex(int mapIndex);

    // symbol: ?setName@Player@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setName(std::string const& newName);

    // symbol: ?setPermissions@Player@@QEAAXW4CommandPermissionLevel@@@Z
    MCAPI void setPermissions(::CommandPermissionLevel permissions);

    // symbol: ?setPlatformOnlineId@Player@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setPlatformOnlineId(std::string const& platformOnlineId);

    // symbol: ?setPlayerIndex@Player@@QEAAXH@Z
    MCAPI void setPlayerIndex(int index);

    // symbol: ?setPlayerUIItem@Player@@QEAAXW4PlayerUISlot@@AEBVItemStack@@@Z
    MCAPI void setPlayerUIItem(::PlayerUISlot slot, class ItemStack const& item);

    // symbol: ?setRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setRespawnPosition(class BlockPos const& inRespawnPosition, DimensionType dimension);

    // symbol: ?setRespawnPositionCandidate@Player@@QEAAXXZ
    MCAPI void setRespawnPositionCandidate();

    // symbol: ?setRespawnReady@Player@@QEAAXAEBVVec3@@@Z
    MCAPI void setRespawnReady(class Vec3 const&);

    // symbol: ?setSelectedItem@Player@@QEAAXAEBVItemStack@@@Z
    MCAPI void setSelectedItem(class ItemStack const& item);

    // symbol: ?setSelectedSlot@Player@@QEAAAEBVItemStack@@H@Z
    MCAPI class ItemStack const& setSelectedSlot(int slot);

    // symbol: ?setSpawnBlockRespawnPosition@Player@@QEAAXAEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const& spawnBlockPosition, DimensionType dimension);

    // symbol: ?setUsedPotion@Player@@QEAAX_N@Z
    MCAPI void setUsedPotion(bool used);

    // symbol: ?shouldShowCredits@Player@@QEBA_NXZ
    MCAPI bool shouldShowCredits() const;

    // symbol: ?startCooldown@Player@@QEAAXPEBVItem@@_N@Z
    MCAPI void startCooldown(class Item const* item, bool);

    // symbol: ?startCooldown@Player@@QEAAXAEBVHashedString@@H_N@Z
    MCAPI void startCooldown(class HashedString const& type, int, bool);

    // symbol: ?startItemUseOn@Player@@QEAAXEAEBVBlockPos@@0AEBVItemStack@@@Z
    MCAPI void
    startItemUseOn(uchar face, class BlockPos const& blockPos, class BlockPos const&, class ItemStack const& item);

    // symbol: ?startUsingItem@Player@@QEAAXAEBVItemStack@@H@Z
    MCAPI void startUsingItem(class ItemStack const& instance, int duration);

    // symbol: ?stopGliding@Player@@QEAAXXZ
    MCAPI void stopGliding();

    // symbol: ?stopItemUseOn@Player@@QEAAXAEBVBlockPos@@AEBVItemStack@@@Z
    MCAPI void stopItemUseOn(class BlockPos const& blockPos, class ItemStack const& item);

    // symbol: ?stopUsingItem@Player@@QEAAXXZ
    MCAPI void stopUsingItem();

    // symbol: ?take@Player@@QEAA_NAEAVActor@@HH@Z
    MCAPI bool take(class Actor& actor, int orgCount, int favoredSlot);

    // symbol: ?tryDisableShield@Player@@QEAAXXZ
    MCAPI void tryDisableShield();

    // symbol: ?tryStartGliding@Player@@QEAA_NXZ
    MCAPI bool tryStartGliding();

    // symbol: ?unRegisterTrackedBoss@Player@@QEAAXUActorUniqueID@@@Z
    MCAPI void unRegisterTrackedBoss(struct ActorUniqueID mob);

    // symbol: ?updateBlockSourceTick@Player@@QEAAXXZ
    MCAPI void updateBlockSourceTick();

    // symbol: ?updateInventoryTransactions@Player@@QEAAXXZ
    MCAPI void updateInventoryTransactions();

    // symbol: ?updateSkin@Player@@QEAAXAEBVSerializedSkin@@H@Z
    MCAPI void updateSkin(class SerializedSkin const& skin, int clientSubID);

    // symbol: ?updateSpawnChunkView@Player@@QEAAXXZ
    MCAPI void updateSpawnChunkView();

    // symbol: ?updateTrackedBosses@Player@@QEAAXXZ
    MCAPI void updateTrackedBosses();

    // symbol: ?useSelectedItem@Player@@QEAAXW4ItemUseMethod@@_N@Z
    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);

    // symbol:
    // ?checkAndFixSpawnPosition@Player@@SA?AV?$optional@UFixedSpawnPositionData@Player@@@std@@AEBVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@3@VAABB@@_N3333F@Z
    MCAPI static std::optional<struct Player::FixedSpawnPositionData> checkAndFixSpawnPosition(
        class Vec3 const&,
        std::vector<gsl::not_null<class BlockSource*>>,
        class AABB,
        bool,
        bool,
        bool,
        bool,
        bool,
        short
    );

    // symbol:
    // ?checkNeedAutoJump@Player@@SA_NAEBVIConstBlockSource@@AEBUAABBShapeComponent@@AEBUActorRotationComponent@@MAEBUStateVectorComponent@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@MM@Z
    MCAPI static bool checkNeedAutoJump(
        class IConstBlockSource const&,
        struct AABBShapeComponent const&,
        struct ActorRotationComponent const&,
        float,
        struct StateVectorComponent const&,
        class optional_ref<class GetCollisionShapeInterface const>,
        float,
        float
    );

    // symbol:
    // ?getCustomHurtSound@Player@@SA?AV?$optional@W4LevelSoundEvent@Legacy@Puv@@@std@@AEAVMob@@W4ActorDamageCause@@@Z
    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&, ::ActorDamageCause);

    // symbol: ?isDangerousVolume@Player@@SA_NAEAVBlockSource@@AEBVAABB@@_N@Z
    MCAPI static bool isDangerousVolume(class BlockSource& region, class AABB const& centeredAABB, bool);

    // symbol:
    // ?tryGetFromComponent@Player@@SAPEAV1@AEBV?$FlagComponent@UPlayerComponentFlag@@@@AEAVActorOwnerComponent@@_N@Z
    MCAPI static class Player*
    tryGetFromComponent(class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent& actor, bool);

    // symbol: ?tryGetFromEntity@Player@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class Player* tryGetFromEntity(class EntityContext& entity, bool);

    // symbol: ?tryGetFromEntity@Player@@SAPEAV1@V?$StackRefResult@VEntityContext@@@@_N@Z
    MCAPI static class Player* tryGetFromEntity(class StackRefResult<class EntityContext>, bool);

    // symbol: ?updatePlayerGameTypeEntityData@Player@@SAXAEAVEntityContext@@W4GameType@@1@Z
    MCAPI static void updatePlayerGameTypeEntityData(class EntityContext&, ::GameType, ::GameType);

    // symbol: ?DEFAULT_BB_HEIGHT@Player@@2MB
    MCAPI static float const DEFAULT_BB_HEIGHT;

    // symbol: ?DEFAULT_BB_WIDTH@Player@@2MB
    MCAPI static float const DEFAULT_BB_WIDTH;

    // symbol: ?DEFAULT_PLAYER_EYE_OFFSET@Player@@2MB
    MCAPI static float const DEFAULT_PLAYER_EYE_OFFSET;

    // symbol: ?DEFAULT_PLAYER_HEIGHT_OFFSET@Player@@2MB
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;

    // symbol: ?DEFAULT_WALK_SPEED@Player@@2MB
    MCAPI static float const DEFAULT_WALK_SPEED;

    // symbol: ?DISTANCE_TO_TRANSFORM_EVENT@Player@@2MB
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;

    // symbol: ?DISTANCE_TO_TRAVELLED_EVENT@Player@@2MB
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;

    // symbol: ?EXHAUSTION@Player@@2VAttribute@@B
    MCAPI static class Attribute const EXHAUSTION;

    // symbol: ?EXPERIENCE@Player@@2VAttribute@@B
    MCAPI static class Attribute const EXPERIENCE;

    // symbol: ?GLIDE_STOP_DELAY@Player@@2HB
    MCAPI static int const GLIDE_STOP_DELAY;

    // symbol: ?HUNGER@Player@@2VAttribute@@B
    MCAPI static class Attribute const HUNGER;

    // symbol: ?LEVEL@Player@@2VAttribute@@B
    MCAPI static class Attribute const LEVEL;

    // symbol: ?PLAYER_ALIVE_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_ALIVE_HEIGHT;

    // symbol: ?PLAYER_ALIVE_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_ALIVE_WIDTH;

    // symbol: ?PLAYER_DEAD_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_DEAD_HEIGHT;

    // symbol: ?PLAYER_DEAD_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_DEAD_WIDTH;

    // symbol: ?PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS@Player@@2HB
    MCAPI static int const PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS;

    // symbol: ?PLAYER_SLEEPING_HEIGHT@Player@@2MB
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;

    // symbol: ?PLAYER_SLEEPING_WIDTH@Player@@2MB
    MCAPI static float const PLAYER_SLEEPING_WIDTH;

    // symbol: ?SATURATION@Player@@2VAttribute@@B
    MCAPI static class Attribute const SATURATION;

    // symbol: ?SPAWN_CHUNK_LARGE_JUMP@Player@@2IB
    MCAPI static uint const SPAWN_CHUNK_LARGE_JUMP;

    // symbol: ?SPAWN_CHUNK_RADIUS@Player@@2IB
    MCAPI static uint const SPAWN_CHUNK_RADIUS;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canChangeGameType@Player@@IEBA_NW4GameType@@@Z
    MCAPI bool _canChangeGameType(::GameType newGameType) const;

    // symbol:
    // ?_checkAndFixSpawnPosition@Player@@IEAA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@_N222@Z
    MCAPI bool
    _checkAndFixSpawnPosition(class Vec3&, std::vector<gsl::not_null<class BlockSource*>>, bool, bool, bool, bool);

    // symbol: ?_chooseSpawnArea@Player@@IEAAXXZ
    MCAPI void _chooseSpawnArea();

    // symbol: ?_chooseSpawnPositionWithinArea@Player@@IEAA_NXZ
    MCAPI bool _chooseSpawnPositionWithinArea();

    // symbol: ?_registerPlayerAttributes@Player@@IEAAXXZ
    MCAPI void _registerPlayerAttributes();

    // symbol: ?_setPreDimensionTransferSpawnPosition@Player@@IEAAXVVec3@@@Z
    MCAPI void _setPreDimensionTransferSpawnPosition(class Vec3 pos);

    // symbol: ?_updateInteraction@Player@@IEAAXXZ
    MCAPI void _updateInteraction();

    // symbol: ?_validateSpawnPositionAvailability@Player@@IEBA_NAEBVVec3@@PEAVBlockSource@@QEBV2@@Z
    MCAPI bool _validateSpawnPositionAvailability(
        class Vec3 const&       pos,
        class BlockSource*      blockSourceChunkCheck,
        class Vec3 const* const AABBoffset
    ) const;

    // symbol: ?checkBed@Player@@IEAA_NPEAVBlockSource@@QEBVVec3@@@Z
    MCAPI bool checkBed(class BlockSource* spawnBlockSource, class Vec3 const* const positionToCheck);

    // symbol: ?checkSpawnBlock@Player@@IEBA_NAEBVBlockSource@@@Z
    MCAPI bool checkSpawnBlock(class BlockSource const& region) const;

    // symbol: ?_isDangerousBlock@Player@@KA_NAEBVBlock@@_N@Z
    MCAPI static bool _isDangerousBlock(class Block const& block, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addLevels@Player@@AEAAXH@Z
    MCAPI void _addLevels(int levels);

    // symbol: ?_blockUsingShield@Player@@AEAA_NAEBVActorDamageSource@@M@Z
    MCAPI bool _blockUsingShield(class ActorDamageSource const& source, float damage);

    // symbol: ?_ensureSafeSpawnPosition@Player@@AEAAXAEAVVec3@@@Z
    MCAPI void _ensureSafeSpawnPosition(class Vec3& pos);

    // symbol:
    // ?_findFallbackSpawnPosition@Player@@AEAA_NAEAVVec3@@V?$vector@V?$not_null@PEAVBlockSource@@@gsl@@V?$allocator@V?$not_null@PEAVBlockSource@@@gsl@@@std@@@std@@I@Z
    MCAPI bool _findFallbackSpawnPosition(
        class Vec3&                                    spawnPosition,
        std::vector<gsl::not_null<class BlockSource*>> regions,
        uint                                           maxDistance
    );

    // symbol: ?_handleCarriedItemInteractText@Player@@AEAAXXZ
    MCAPI void _handleCarriedItemInteractText();

    // symbol: ?_isChunkSourceLoaded@Player@@AEBA_NAEBVVec3@@AEBVBlockSource@@@Z
    MCAPI bool _isChunkSourceLoaded(class Vec3 const& spawnPosition, class BlockSource const& region) const;

    // symbol: ?_registerElytraLoopSound@Player@@AEAAXXZ
    MCAPI void _registerElytraLoopSound();

    // symbol: ?_sendShieldUpdatePacket@Player@@AEAAXAEBVShieldItem@@AEBVItemStack@@1W4ContainerID@@H@Z
    MCAPI void _sendShieldUpdatePacket(
        class ShieldItem const& shieldItem,
        class ItemStack const&  before,
        class ItemStack const&  after,
        ::ContainerID           container,
        int                     slot
    );

    // symbol: ?_setPlayerGameType@Player@@AEAAXW4GameType@@@Z
    MCAPI void _setPlayerGameType(::GameType);

    // symbol: ?_shouldCrit@Player@@AEBA_NAEBVActor@@@Z
    MCAPI bool _shouldCrit(class Actor const& target) const;

    // symbol: ?_updateFroglightCountAndTestForAchievement@Player@@AEAA_NAEBVItemStack@@0@Z
    MCAPI bool
    _updateFroglightCountAndTestForAchievement(class ItemStack const& oldItem, class ItemStack const& newItem);

    // NOLINTEND
};
