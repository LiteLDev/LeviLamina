#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/ILevel.h"
#include "mc/world/level/IWorldRegistriesProvider.h"
#include "mc/world/level/storage/LevelData.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/data/Factory.h"
#include "mc/enums/CanJumpIntoNode.h"
#include "mc/enums/CrashDumpLogStringID.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/GameType.h"
#include "mc/enums/NodeType.h"
#include "mc/enums/ParticleType.h"
#include "mc/enums/StorageVersion.h"
#include "mc/enums/SubClientId.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/systems/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class BlockSource;
class Dimension;
class Player;
class Actor;
class BiomeRegistry;

class Level : public ILevel, public BlockSourceListener, public IWorldRegistriesProvider {
public:
    [[nodiscard]] inline std::string const& getLevelName() const { return getLevelData().getLevelName(); }
    [[nodiscard]] inline std::string        getLevelPath() const { return "./worlds/" + getLevelName(); }

    [[nodiscard]] inline optional_ref<Dimension> getDimensionOptRef(DimensionType dimId) const {
        return getDimension(dimId).get();
    }

    LLNDAPI optional_ref<Player> getPlayerByNameOrXUID(std::string const& info) const;

    // LLAPI bool executeCommandAs(Player* player, std::string const& cmd) const;
    // LLAPI std::pair<bool, std::string> executeCommandEx(std::string const& cmd) const;
    // LLAPI bool executeCommand(std::string const& cmd) const;

    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // NOLINTBEGIN
    // symbol: ?_clientHandleAddOwnedEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@@Z
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId);

    // symbol:
    // ?_clientHandleAddWeakRefEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@V?$WeakRefT@UEntityRefTraits@@@@@Z
    MCVAPI class StackRefResultT<struct EntityRefTraits>
        _clientHandleAddWeakRefEntity(class EntityNetId, class WeakRefT<struct EntityRefTraits>);

    // symbol: ?_clientHandleRemoveOwnedEntity@Level@@UEAAXVEntityNetId@@@Z
    MCVAPI void _clientHandleRemoveOwnedEntity(class EntityNetId);

    // symbol: ?_clientHandleRemoveWeakRefEntity@Level@@UEAAXVEntityNetId@@@Z
    MCVAPI void _clientHandleRemoveWeakRefEntity(class EntityNetId);

    // symbol: ?_destroyEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@H@Z
    MCVAPI void _destroyEffect(class BlockPos const&, class Block const&, int);

    // symbol: ?_getPlayerDeathManager@Level@@MEAAPEAVPlayerDeathManager@@XZ
    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();

    // symbol: ?_initializeMapDataManager@Level@@MEAAXXZ
    MCVAPI void _initializeMapDataManager();

    // symbol: ?_localPlayerChangedDimension@Level@@MEAAXXZ
    MCVAPI void _localPlayerChangedDimension();

    // symbol: ?_onPlayerDimensionChange@Level@@MEAAXXZ
    MCVAPI void _onPlayerDimensionChange();

    // symbol: ?_subTick@Level@@MEAAXXZ
    MCVAPI void _subTick();

    // symbol: ?addAutonomousEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI class Actor* addAutonomousEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?addBlockSourceForValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource*);

    // symbol: ?addBreakingItemParticleEffect@Level@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    // symbol: ?addChunkViewTracker@Level@@UEAAXV?$weak_ptr@VChunkViewSource@@@std@@@Z
    MCVAPI void addChunkViewTracker(std::weak_ptr<class ChunkViewSource>);

    // symbol: ?addDisplayEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI class Actor* addDisplayEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?addEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI class Actor* addEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?addGlobalEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI class Actor* addGlobalEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?addListener@Level@@UEAAXAEAVLevelListener@@@Z
    MCVAPI void addListener(class LevelListener&);

    // symbol: ?addParticle@Level@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
    MCVAPI class Particle*
    addParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int, class CompoundTag const*, bool);

    // symbol: ?addParticleEffect@Level@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCVAPI void addParticleEffect(class HashedString const&, class Vec3 const&, class MolangVariableMap const&);

    // symbol: ?addTerrainParticleEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void
    addTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?addTerrainSlideEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?addTickingAreaList@Level@@UEAAXV?$AutomaticID@VDimension@@H@@AEBV?$shared_ptr@VTickingAreaList@@@std@@@Z
    MCVAPI void addTickingAreaList(DimensionType, std::shared_ptr<class TickingAreaList> const&);

    // symbol: ?addUser@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI void addUser(class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?asLevel@Level@@UEAAPEAV1@XZ
    MCVAPI class Level* asLevel();

    // symbol: ?blockNetworkIdsAreHashes@Level@@UEAA_NXZ
    MCVAPI bool blockNetworkIdsAreHashes();

    // symbol: ?broadcastActorEvent@Level@@UEBAXAEAVActor@@W4ActorEvent@@H@Z
    MCVAPI void broadcastActorEvent(class Actor&, ::ActorEvent, int) const;

    // symbol: ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z
    MCVAPI void broadcastLevelEvent(::LevelEvent, class Vec3 const&, int, class UserEntityIdentifierComponent const*);

    // symbol: ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@PEBVUserEntityIdentifierComponent@@@Z
    MCVAPI void broadcastLevelEvent(::LevelEvent, class CompoundTag const&, class UserEntityIdentifierComponent const*);

    // symbol: ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@H@Z
    MCVAPI void broadcastLocalEvent(class BlockSource&, ::LevelEvent, class Vec3 const&, int);

    // symbol: ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@AEBVBlock@@@Z
    MCVAPI void broadcastLocalEvent(class BlockSource&, ::LevelEvent, class Vec3 const&, class Block const&);

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVDimension@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void broadcastSoundEvent(
        class Dimension&,
        ::LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z
    MCVAPI void broadcastSoundEvent(
        class BlockSource&,
        ::LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void broadcastSoundEvent(
        class BlockSource&,
        ::LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    );

    // symbol: ?canUseSkin@Level@@UEBA_NAEBVSerializedSkin@@AEBVNetworkIdentifier@@AEBVUUID@mce@@AEBUActorUniqueID@@@Z
    MCVAPI bool
    canUseSkin(class SerializedSkin const&, class NetworkIdentifier const&, class mce::UUID const&, struct ActorUniqueID const&)
        const;

    // symbol: ?copyAndLockMap@Level@@UEAA_NUActorUniqueID@@0@Z
    MCVAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);

    // symbol: ?countUsersWithMatchingNetworkId@Level@@UEBAHAEBVNetworkIdentifier@@@Z
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const&) const;

    // symbol:
    // ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCVAPI class MapItemSavedData&
    createMapSavedData(std::vector<struct ActorUniqueID> const&, class BlockPos const&, DimensionType, int);

    // symbol:
    // ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCVAPI class MapItemSavedData&
    createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType, int);

    // symbol: ?createPhotoStorage@Level@@UEAAXXZ
    MCVAPI void createPhotoStorage();

    // symbol:
    // ?decrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void
    decrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);

    // symbol: ?denyEffect@Level@@UEAAXAEAVBlockSource@@AEBVVec3@@@Z
    MCVAPI void denyEffect(class BlockSource&, class Vec3 const&);

    // symbol: ?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCVAPI bool destroyBlock(class BlockSource&, class BlockPos const&, bool dropResources);

    // symbol: ?digestServerItemComponents@Level@@UEAAXAEBVItemComponentPacket@@@Z
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const&);

    // symbol: ?directTickEntities@Level@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void directTickEntities(class BlockSource&);

    // symbol: ?entityChangeDimension@Level@@UEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@V?$optional@VVec3@@@std@@@Z
    MCVAPI void entityChangeDimension(class Actor&, DimensionType, std::optional<class Vec3>);

    // symbol: ?expandMapByID@Level@@UEAA?AUActorUniqueID@@U2@_N@Z
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool wasInit);

    // symbol: ?explode@Level@@UEAAXAEAVExplosion@@@Z
    MCVAPI void explode(class Explosion&);

    // symbol: ?explode@Level@@UEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z
    MCVAPI void explode(
        class BlockSource& blockSource,
        class Actor*       source,
        class Vec3 const&  pos,
        float              explosionRadius,
        bool               fire,
        bool               breaksBlocks,
        float              maxResistance,
        bool               allowUnderwater
    );

    // symbol: ?extinguishFire@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@EPEAVActor@@@Z
    MCVAPI bool extinguishFire(class BlockSource&, class BlockPos const&, uchar, class Actor*);

    // symbol: ?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z
    MCVAPI class Actor* fetchEntity(struct ActorUniqueID, bool getRemoved = false) const;

    // symbol:
    // ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHAEAVNavigationComponent@@@Z
    MCVAPI std::unique_ptr<class Path> findPath(class Actor&, int, int, int, class NavigationComponent&);

    // symbol:
    // ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0AEAVNavigationComponent@@@Z
    MCVAPI std::unique_ptr<class Path> findPath(class Actor&, class Actor&, class NavigationComponent&);

    // symbol: ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCVAPI class Player* findPlayer(std::function<bool(class Player const&)>) const;

    // symbol: ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVWeakEntityRef@@@Z@std@@@Z
    MCVAPI class Player* findPlayer(std::function<bool(class WeakEntityRef const&)>) const;

    // symbol: ?flushRunTimeLighting@Level@@UEAAXXZ
    MCVAPI void flushRunTimeLighting();

    // symbol: ?forEachDimension@Level@@UEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z
    MCVAPI void forEachDimension(std::function<bool(class Dimension const&)>) const;

    // symbol: ?forEachDimension@Level@@UEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z
    MCVAPI void forEachDimension(std::function<bool(class Dimension&)>);

    // symbol: ?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    MCVAPI void forEachPlayer(std::function<bool(class Player&)>);

    // symbol: ?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCVAPI void forEachPlayer(std::function<bool(class Player const&)>) const;

    // symbol: ?forEachUser@Level@@UEAAXV?$function@$$A6A_NAEAVEntityContext@@@Z@std@@@Z
    MCVAPI void forEachUser(std::function<bool(class EntityContext&)>);

    // symbol: ?forEachUser@Level@@UEBAXV?$function@$$A6A_NAEBVEntityContext@@@Z@std@@@Z
    MCVAPI void forEachUser(std::function<bool(class EntityContext const&)>) const;

    // symbol: ?forceFlushRemovedPlayers@Level@@UEAAXXZ
    MCVAPI void forceFlushRemovedPlayers();

    // symbol: ?forceRemoveEntity@Level@@UEAAXAEAVActor@@@Z
    MCVAPI void forceRemoveEntity(class Actor&);

    // symbol: ?forceRemoveEntityfromWorld@Level@@UEAAXAEAVActor@@@Z
    MCVAPI void forceRemoveEntityfromWorld(class Actor&);

    // symbol: ?getActivePlayerCount@Level@@UEBAHXZ
    MCVAPI int getActivePlayerCount() const;

    // symbol: ?getActiveUsers@Level@@UEBAAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
    MCVAPI std::vector<class WeakEntityRef> const& getActiveUsers() const;

    // symbol: ?getActiveUsersCount@Level@@UEBAHXZ
    MCVAPI int getActiveUsersCount() const;

    // symbol:
    // ?getActorAnimationControllerGroup@Level@@UEBA?AV?$NonOwnerPointer@VActorAnimationControllerGroup@@@Bedrock@@XZ
    MCVAPI class Bedrock::NonOwnerPointer<class ActorAnimationControllerGroup> getActorAnimationControllerGroup() const;

    // symbol:
    // ?getActorAnimationGroup@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VActorAnimationGroup@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class ActorAnimationGroup> getActorAnimationGroup() const;

    // symbol: ?getActorEventCoordinator@Level@@UEAAAEAVActorEventCoordinator@@XZ
    MCVAPI class ActorEventCoordinator& getActorEventCoordinator();

    // symbol: ?getActorFactory@Level@@UEAAAEAVActorFactory@@XZ
    MCVAPI class ActorFactory& getActorFactory();

    // symbol: ?getActorFactory@Level@@UEBAAEBVActorFactory@@XZ
    MCVAPI class ActorFactory const& getActorFactory() const;

    // symbol: ?getActorInfoRegistry@Level@@UEAAPEAVActorInfoRegistry@@XZ
    MCVAPI class ActorInfoRegistry* getActorInfoRegistry();

    // symbol: ?getActorPropertyGroup@Level@@UEBAAEAVPropertyGroupManager@@XZ
    MCVAPI class PropertyGroupManager& getActorPropertyGroup() const;

    // symbol: ?getAdventureSettings@Level@@UEAAAEAUAdventureSettings@@XZ
    MCVAPI struct AdventureSettings& getAdventureSettings();

    // symbol: ?getAdventureSettings@Level@@UEBAAEBUAdventureSettings@@XZ
    MCVAPI struct AdventureSettings const& getAdventureSettings() const;

    // symbol: ?getArmorTrimUnloader@Level@@UEAAPEAVArmorTrimUnloader@@XZ
    MCVAPI class ArmorTrimUnloader* getArmorTrimUnloader();

    // symbol: ?getAutomationBehaviorTreeGroup@Level@@UEBAAEAVAutomationBehaviorTreeGroup@@XZ
    MCVAPI class AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const;

    // symbol: ?getBehaviorFactory@Level@@UEBAAEAVBehaviorFactory@@XZ
    MCVAPI class BehaviorFactory& getBehaviorFactory() const;

    // symbol: ?getBiomeComponentFactory@Level@@UEAAAEAVBiomeComponentFactory@@XZ
    MCVAPI class BiomeComponentFactory& getBiomeComponentFactory();

    // symbol: ?getBiomeComponentFactory@Level@@UEBAAEBVBiomeComponentFactory@@XZ
    MCVAPI class BiomeComponentFactory const& getBiomeComponentFactory() const;

    // symbol: ?getBiomeManager@Level@@UEAAAEAVBiomeManager@@XZ
    MCVAPI class BiomeManager& getBiomeManager();

    // symbol: ?getBiomeManager@Level@@UEBAAEBVBiomeManager@@XZ
    MCVAPI class BiomeManager const& getBiomeManager() const;

    // symbol: ?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry& getBiomeRegistry();

    // symbol: ?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

    // symbol: ?getBlockComponentFactory@Level@@UEAAAEAVBlockComponentFactory@@XZ
    MCVAPI class BlockComponentFactory& getBlockComponentFactory();

    // symbol: ?getBlockComponentFactory@Level@@UEBAAEBVBlockComponentFactory@@XZ
    MCVAPI class BlockComponentFactory const& getBlockComponentFactory() const;

    // symbol: ?getBlockDefinitions@Level@@UEBAPEAVBlockDefinitionGroup@@XZ
    MCVAPI class BlockDefinitionGroup* getBlockDefinitions() const;

    // symbol: ?getBlockEventCoordinator@Level@@UEAAAEAVBlockEventCoordinator@@XZ
    MCVAPI class BlockEventCoordinator& getBlockEventCoordinator();

    // symbol: ?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ
    MCVAPI class BlockPalette& getBlockPalette();

    // symbol: ?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ
    MCVAPI class BlockPalette const& getBlockPalette() const;

    // symbol: ?getBlockReducer@Level@@UEBAPEAVBlockReducer@@XZ
    MCVAPI class BlockReducer* getBlockReducer() const;

    // symbol: ?getBlockRegistry@Level@@UEBA?AV?$weak_ptr@VBlockTypeRegistry@@@std@@XZ
    MCVAPI std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const;

    // symbol:
    // ?getBossEventSubscriptionManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VBossEventSubscriptionManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class BossEventSubscriptionManager> getBossEventSubscriptionManager();

    // symbol: ?getCameraPresets@Level@@UEAAAEAVCameraPresets@@XZ
    MCVAPI class CameraPresets& getCameraPresets();

    // symbol: ?getCameraPresets@Level@@UEBAAEBVCameraPresets@@XZ
    MCVAPI class CameraPresets const& getCameraPresets() const;

    // symbol: ?getCapabilities@Level@@UEBAAEBUISharedController@PlayerCapabilities@@XZ
    MCVAPI struct PlayerCapabilities::ISharedController const& getCapabilities() const;

    // symbol: ?getChunkTickRange@Level@@UEBAIXZ
    MCVAPI uint getChunkTickRange() const;

    // symbol: ?getChunkTickRangeManager@Level@@UEBAAEBVChunkTickRangeManager@@XZ
    MCVAPI class ChunkTickRangeManager const& getChunkTickRangeManager() const;

    // symbol: ?getClientPlayerEventCoordinator@Level@@UEAAAEAVClientPlayerEventCoordinator@@XZ
    MCVAPI class ClientPlayerEventCoordinator& getClientPlayerEventCoordinator();

    // symbol: ?getClientResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ
    MCVAPI class ResourcePackManager* getClientResourcePackManager() const;

    // symbol: ?getClientTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    MCVAPI std::vector<class ChunkPos> const& getClientTickingOffsets() const;

    // symbol: ?getCurrentServerTick@Level@@UEBA?BUTick@@XZ
    MCVAPI struct Tick const getCurrentServerTick() const;

    // symbol: ?getCurrentTick@Level@@UEBAAEBUTick@@XZ
    MCVAPI struct Tick const& getCurrentTick() const;

    // symbol: ?getDefaultAbilities@Level@@UEAAAEAVAbilities@@XZ
    MCVAPI class Abilities& getDefaultAbilities();

    // symbol: ?getDefaultGameType@Level@@UEBA?AW4GameType@@XZ
    MCVAPI ::GameType getDefaultGameType() const;

    // symbol: ?getDefaultPermissions@Level@@UEAAAEAVPermissionsHandler@@XZ
    MCVAPI class PermissionsHandler& getDefaultPermissions();

    // symbol: ?getDefaultPermissions@Level@@UEBAAEBVPermissionsHandler@@XZ
    MCVAPI class PermissionsHandler const& getDefaultPermissions() const;

    // symbol: ?getDefaultSpawn@Level@@UEBAAEBVBlockPos@@XZ
    MCVAPI class BlockPos const& getDefaultSpawn() const;

    // symbol: ?getDifficulty@Level@@UEBA?AW4Difficulty@@XZ
    MCVAPI ::Difficulty getDifficulty() const;

    // symbol:
    // ?getDimension@Level@@UEBA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getDimension(DimensionType) const;

    // symbol: ?getDimensionConversionData@Level@@UEBA?AVDimensionConversionData@@XZ
    MCVAPI class DimensionConversionData getDimensionConversionData() const;

    // symbol: ?getDimensionFactory@Level@@UEAAAEAV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionFactory();

    // symbol: ?getDimensionFactory@Level@@UEBAAEBV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const& getDimensionFactory() const;

    // symbol: ?getDimensionManager@Level@@UEBAAEBVDimensionManager@@XZ
    MCVAPI class DimensionManager const& getDimensionManager() const;

    // symbol: ?getDimensionManager@Level@@UEAAAEAVDimensionManager@@XZ
    MCVAPI class DimensionManager& getDimensionManager();

    // symbol: ?getDisablePlayerInteractions@Level@@UEBA_NXZ
    MCVAPI bool getDisablePlayerInteractions() const;

    // symbol: ?getEducationLevelSettings@Level@@UEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
    MCVAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    // symbol:
    // ?getEntities@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getEntities() const;

    // symbol: ?getEntityDefinitions@Level@@UEBAPEAVActorDefinitionGroup@@XZ
    MCVAPI class ActorDefinitionGroup* getEntityDefinitions() const;

    // symbol: ?getEntityRegistry@Level@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();

    // symbol: ?getEntityRegistry@Level@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;

    // symbol: ?getEntitySystems@Level@@UEAAAEAVEntitySystems@@XZ
    MCVAPI class EntitySystems& getEntitySystems();

    // symbol: ?getEventing@Level@@UEAAAEAVIMinecraftEventing@@XZ
    MCVAPI class IMinecraftEventing& getEventing();

    // symbol: ?getFeatureRegistry@Level@@UEBAAEBVFeatureRegistry@@XZ
    MCVAPI class FeatureRegistry const& getFeatureRegistry() const;

    // symbol: ?getFeatureRegistry@Level@@UEAAAEAVFeatureRegistry@@XZ
    MCVAPI class FeatureRegistry& getFeatureRegistry();

    // symbol: ?getFeatureTypeFactory@Level@@UEBAAEBVFeatureTypeFactory@@XZ
    MCVAPI class FeatureTypeFactory const& getFeatureTypeFactory() const;

    // symbol: ?getFeatureTypeFactory@Level@@UEAAAEAVFeatureTypeFactory@@XZ
    MCVAPI class FeatureTypeFactory& getFeatureTypeFactory();

    // symbol: ?getGameRules@Level@@UEBAAEBVGameRules@@XZ
    MCVAPI class GameRules const& getGameRules() const;

    // symbol: ?getGameRules@Level@@UEAAAEAVGameRules@@XZ
    MCVAPI class GameRules& getGameRules();

    // symbol: ?getHitResult@Level@@UEAAAEAVHitResult@@XZ
    MCVAPI class HitResult& getHitResult();

    // symbol: ?getIOTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ
    MCVAPI class TaskGroup& getIOTasksGroup();

    // symbol: ?getImmersiveReaderString@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& getImmersiveReaderString() const;

    // symbol: ?getInternalComponentRegistry@Level@@UEBAAEAVInternalComponentRegistry@@XZ
    MCVAPI class InternalComponentRegistry& getInternalComponentRegistry() const;

    // symbol: ?getItemEventCoordinator@Level@@UEAAAEAVItemEventCoordinator@@XZ
    MCVAPI class ItemEventCoordinator& getItemEventCoordinator();

    // symbol: ?getItemRegistry@Level@@UEBA?AVItemRegistryRef@@XZ
    MCVAPI class ItemRegistryRef getItemRegistry() const;

    // symbol: ?getJigsawStructureRegistry@Level@@UEAAAEAVJigsawStructureRegistry@@XZ
    MCVAPI class JigsawStructureRegistry& getJigsawStructureRegistry();

    // symbol: ?getJigsawStructureRegistry@Level@@UEBAAEBVJigsawStructureRegistry@@XZ
    MCVAPI class JigsawStructureRegistry const& getJigsawStructureRegistry() const;

    // symbol: ?getLANBroadcast@Level@@UEBA_NXZ
    MCVAPI bool getLANBroadcast() const;

    // symbol: ?getLANBroadcastIntent@Level@@UEBA_NXZ
    MCVAPI bool getLANBroadcastIntent() const;

    // symbol: ?getLastOrDefaultSpawnDimensionId@Level@@UEBA?AV?$AutomaticID@VDimension@@H@@V2@@Z
    MCVAPI DimensionType getLastOrDefaultSpawnDimensionId(DimensionType) const;

    // symbol: ?getLevelChunkMetaDataManager@Level@@UEAAPEAVLevelChunkMetaDataManager@@XZ
    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    // symbol: ?getLevelData@Level@@UEAAAEAVLevelData@@XZ
    MCVAPI class LevelData& getLevelData();

    // symbol: ?getLevelData@Level@@UEBAAEBVLevelData@@XZ
    MCVAPI class LevelData const& getLevelData() const;

    // symbol: ?getLevelEntity@Level@@UEAA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
    MCVAPI class WeakRefT<struct EntityRefTraits> getLevelEntity();

    // symbol: ?getLevelEventCoordinator@Level@@UEAAAEAVLevelEventCoordinator@@XZ
    MCVAPI class LevelEventCoordinator& getLevelEventCoordinator();

    // symbol: ?getLevelId@Level@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getLevelId() const;

    // symbol: ?getLevelSoundManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VLevelSoundManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class LevelSoundManager> getLevelSoundManager();

    // symbol: ?getLevelStorage@Level@@UEAAAEAVLevelStorage@@XZ
    MCVAPI class LevelStorage& getLevelStorage();

    // symbol: ?getLevelStorage@Level@@UEBAAEBVLevelStorage@@XZ
    MCVAPI class LevelStorage const& getLevelStorage() const;

    // symbol:
    // ?getLightTextureImageBuilderFactory@Level@@UEAAAEAV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>&
    getLightTextureImageBuilderFactory();

    // symbol:
    // ?getLightTextureImageBuilderFactory@Level@@UEBAAEBV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const&
    getLightTextureImageBuilderFactory() const;

    // symbol: ?getLiquidHitResult@Level@@UEAAAEAVHitResult@@XZ
    MCVAPI class HitResult& getLiquidHitResult();

    // symbol: ?getLootTables@Level@@UEAAAEAVLootTables@@XZ
    MCVAPI class LootTables& getLootTables();

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID);

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@PEBVCompoundTag@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const*);

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@AEBVCompoundTag@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const&);

    // symbol: ?getMob@Level@@UEBAPEAVMob@@UActorUniqueID@@@Z
    MCVAPI class Mob* getMob(struct ActorUniqueID) const;

    // symbol: ?getMultiplayerGameIntent@Level@@UEBA_NXZ
    MCVAPI bool getMultiplayerGameIntent() const;

    // symbol: ?getNetEventCallback@Level@@UEBA?AV?$NonOwnerPointer@VNetEventCallback@@@Bedrock@@XZ
    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const;

    // symbol: ?getNetherScale@Level@@UEBAHXZ
    MCVAPI int getNetherScale() const;

    // symbol: ?getNewUniqueID@Level@@UEAA?AUActorUniqueID@@XZ
    MCVAPI struct ActorUniqueID getNewUniqueID();

    // symbol: ?getNextRuntimeID@Level@@UEAA?AVActorRuntimeID@@XZ
    MCVAPI class ActorRuntimeID getNextRuntimeID();

    // symbol: ?getNumRemotePlayers@Level@@UEAAHXZ
    MCVAPI int getNumRemotePlayers();

    // symbol:
    // ?getOrCreateDimension@Level@@UEAA?AV?$WeakRefT@U?$SharePtrRefTraits@VDimension@@@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(DimensionType);

    // symbol: ?getPacketSender@Level@@UEBAPEAVPacketSender@@XZ
    MCVAPI class PacketSender* getPacketSender() const;

    // symbol: ?getPauseManager@Level@@UEAA?AV?$StackRefResultT@U?$SharePtrRefTraits@VPauseManager@@@@@@XZ
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager>> getPauseManager();

    // symbol: ?getPauseManager@Level@@UEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@$$CBVPauseManager@@@@@@XZ
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>> getPauseManager() const;

    // symbol: ?getPhotoStorage@Level@@UEAAAEAVPhotoStorage@@XZ
    MCVAPI class PhotoStorage& getPhotoStorage();

    // symbol: ?getPlatformBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    // symbol: ?getPlatformBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    // symbol:
    // ?getPlatformPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlatformPlayer(std::string const&) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayer(std::string const&) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@AEBVUUID@mce@@@Z
    MCVAPI class Player* getPlayer(class mce::UUID const&) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@UActorUniqueID@@@Z
    MCVAPI class Player* getPlayer(struct ActorUniqueID) const;

    // symbol: ?getPlayerAbilities@Level@@UEAAPEAVLayeredAbilities@@AEBUActorUniqueID@@@Z
    MCVAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const&);

    // symbol:
    // ?getPlayerByXuid@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayerByXuid(std::string const&) const;

    // symbol: ?getPlayerColor@Level@@UEBA?AVColor@mce@@AEBVPlayer@@@Z
    MCVAPI class mce::Color getPlayerColor(class Player const&) const;

    // symbol:
    // ?getPlayerFromServerId@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayerFromServerId(std::string const&) const;

    // symbol:
    // ?getPlayerList@Level@@UEBAAEBV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
    MCVAPI std::unordered_map<class mce::UUID, class PlayerListEntry> const& getPlayerList() const;

    // symbol:
    // ?getPlayerList@Level@@UEAAAEAV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
    MCVAPI std::unordered_map<class mce::UUID, class PlayerListEntry>& getPlayerList();

    // symbol: ?getPlayerMovementSettings@Level@@UEBAAEBUPlayerMovementSettings@@XZ
    MCVAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const;

    // symbol:
    // ?getPlayerPlatformOnlineId@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCVAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const&) const;

    // symbol:
    // ?getPlayerXUID@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
    MCVAPI std::string const& getPlayerXUID(class mce::UUID const&) const;

    // symbol: ?getPortalForcer@Level@@UEAAAEAVPortalForcer@@XZ
    MCVAPI class PortalForcer& getPortalForcer();

    // symbol: ?getPositionTrackerDBClient@Level@@UEBAPEAVPositionTrackingDBClient@PositionTrackingDB@@XZ
    MCVAPI class PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const;

    // symbol: ?getPositionTrackerDBServer@Level@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    // symbol: ?getPrimaryLocalPlayer@Level@@UEBAPEAVPlayer@@XZ
    MCVAPI class Player* getPrimaryLocalPlayer() const;

    // symbol: ?getProjectileFactory@Level@@UEBAAEAVProjectileFactory@@XZ
    MCVAPI class ProjectileFactory& getProjectileFactory() const;

    // symbol: ?getRandom@Level@@UEBAAEAVRandom@@XZ
    MCVAPI class Random& getRandom() const;

    // symbol: ?getRecipes@Level@@UEBAAEAVRecipes@@XZ
    MCVAPI class Recipes& getRecipes() const;

    // symbol: ?getRegisteredBorderBlock@Level@@UEBAAEBVBlockLegacy@@XZ
    MCVAPI class BlockLegacy const& getRegisteredBorderBlock() const;

    // symbol: ?getRemotePlayerEventCoordinator@Level@@UEAAAEAVPlayerEventCoordinator@@XZ
    MCVAPI class PlayerEventCoordinator& getRemotePlayerEventCoordinator();

    // symbol: ?getRuntimeActorList@Level@@UEBA?AV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@XZ
    MCVAPI std::vector<class Actor*> getRuntimeActorList() const;

    // symbol: ?getRuntimeEntity@Level@@UEBAPEAVActor@@VActorRuntimeID@@_N@Z
    MCVAPI class Actor* getRuntimeEntity(class ActorRuntimeID, bool getRemoved = false) const;

    // symbol: ?getRuntimePlayer@Level@@UEBAPEAVPlayer@@VActorRuntimeID@@@Z
    MCVAPI class Player* getRuntimePlayer(class ActorRuntimeID) const;

    // symbol: ?getSavedData@Level@@UEAAAEAVSavedDataStorage@@XZ
    MCVAPI class SavedDataStorage& getSavedData();

    // symbol: ?getScoreboard@Level@@UEAAAEAVScoreboard@@XZ
    MCVAPI class Scoreboard& getScoreboard();

    // symbol: ?getScoreboard@Level@@UEBAAEBVScoreboard@@XZ
    MCVAPI class Scoreboard const& getScoreboard() const;

    // symbol:
    // ?getScreenshotsFolder@Level@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const;

    // symbol: ?getScriptDeferredEventCoordinator@Level@@UEAAAEAVScriptDeferredEventCoordinator@@XZ
    MCVAPI class ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator();

    // symbol: ?getScriptingEventCoordinator@Level@@UEAAAEAVScriptingEventCoordinator@@XZ
    MCVAPI class ScriptingEventCoordinator& getScriptingEventCoordinator();

    // symbol: ?getSeed@Level@@UEAAIXZ
    MCVAPI uint getSeed();

    // symbol: ?getServerNetworkEventCoordinator@Level@@UEAAAEAVServerNetworkEventCoordinator@@XZ
    MCVAPI class ServerNetworkEventCoordinator& getServerNetworkEventCoordinator();

    // symbol: ?getServerPlayerEventCoordinator@Level@@UEAAAEAVServerPlayerEventCoordinator@@XZ
    MCVAPI class ServerPlayerEventCoordinator& getServerPlayerEventCoordinator();

    // symbol: ?getServerResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ
    MCVAPI class ResourcePackManager* getServerResourcePackManager() const;

    // symbol: ?getSharedSpawnPos@Level@@UEBAAEBVBlockPos@@XZ
    MCVAPI class BlockPos const& getSharedSpawnPos() const;

    // symbol: ?getSimPaused@Level@@UEAA_NXZ
    MCVAPI bool getSimPaused();

    // symbol: ?getSleepStatus@Level@@UEBA?AUPlayerSleepStatus@@XZ
    MCVAPI struct PlayerSleepStatus getSleepStatus() const;

    // symbol: ?getSoundPlayer@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> getSoundPlayer() const;

    // symbol: ?getSpawnableTickedMobCountPrevious@Level@@UEBAIXZ
    MCVAPI uint getSpawnableTickedMobCountPrevious() const;

    // symbol: ?getSpawner@Level@@UEBAAEAVSpawner@@XZ
    MCVAPI class Spawner& getSpawner() const;

    // symbol: ?getSpecialMultiplier@Level@@UEBAMV?$AutomaticID@VDimension@@H@@@Z
    MCVAPI float getSpecialMultiplier(DimensionType) const;

    // symbol: ?getStructureManager@Level@@UEBA?BV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> const getStructureManager() const;

    // symbol: ?getStructureManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager();

    // symbol: ?getSubChunkRequestManager@Level@@UEAAPEAVSubChunkRequestManager@@XZ
    MCVAPI class SubChunkRequestManager* getSubChunkRequestManager();

    // symbol: ?getSurfaceBuilderRegistry@Level@@UEAAAEAVSurfaceBuilderRegistry@@XZ
    MCVAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry();

    // symbol: ?getSurfaceBuilderRegistry@Level@@UEBAAEBVSurfaceBuilderRegistry@@XZ
    MCVAPI class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const;

    // symbol: ?getSyncTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ
    MCVAPI class TaskGroup& getSyncTasksGroup();

    // symbol:
    // ?getTagRegistry@Level@@UEAAAEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@XZ
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&
    getTagRegistry();

    // symbol: ?getTearingDown@Level@@UEBA_NXZ
    MCVAPI bool getTearingDown() const;

    // symbol: ?getThreadRandom@Level@@UEBAAEAVRandom@@XZ
    MCVAPI class Random& getThreadRandom() const;

    // symbol: ?getTickingArea@Level@@UEBAPEAVITickingArea@@AEBVUUID@mce@@@Z
    MCVAPI class ITickingArea* getTickingArea(class mce::UUID const&) const;

    // symbol: ?getTickingAreasMgr@Level@@UEAAAEAVTickingAreasManager@@XZ
    MCVAPI class TickingAreasManager& getTickingAreasMgr();

    // symbol: ?getTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
    MCVAPI std::vector<class ChunkPos> const& getTickingOffsets() const;

    // symbol: ?getTime@Level@@UEBAHXZ
    MCVAPI int getTime() const;

    // symbol: ?getTradeTables@Level@@UEAAPEAVTradeTables@@XZ
    MCVAPI class TradeTables* getTradeTables();

    // symbol: ?getTrimMaterialRegistry@Level@@UEAA?AV?$weak_ptr@VTrimMaterialRegistry@@@std@@XZ
    MCVAPI std::weak_ptr<class TrimMaterialRegistry> getTrimMaterialRegistry();

    // symbol: ?getTrimMaterialRegistry@Level@@UEBA?AV?$weak_ptr@$$CBVTrimMaterialRegistry@@@std@@XZ
    MCVAPI std::weak_ptr<class TrimMaterialRegistry const> getTrimMaterialRegistry() const;

    // symbol: ?getTrimPatternRegistry@Level@@UEBA?AV?$weak_ptr@$$CBVTrimPatternRegistry@@@std@@XZ
    MCVAPI std::weak_ptr<class TrimPatternRegistry const> getTrimPatternRegistry() const;

    // symbol: ?getTrimPatternRegistry@Level@@UEAA?AV?$weak_ptr@VTrimPatternRegistry@@@std@@XZ
    MCVAPI std::weak_ptr<class TrimPatternRegistry> getTrimPatternRegistry();

    // symbol: ?getUnknownBlockTypeRegistry@Level@@UEAA?AV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@XZ
    MCVAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry();

    // symbol: ?getUserCount@Level@@UEBAHXZ
    MCVAPI int getUserCount() const;

    // symbol:
    // ?getUsers@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getUsers() const;

    // symbol: ?getWorldRegistriesProvider@Level@@UEBAAEBVIWorldRegistriesProvider@@XZ
    MCVAPI class IWorldRegistriesProvider const& getWorldRegistriesProvider() const;

    // symbol: ?getWorldRegistriesProvider@Level@@UEAAAEAVIWorldRegistriesProvider@@XZ
    MCVAPI class IWorldRegistriesProvider& getWorldRegistriesProvider();

    // symbol: ?getXBLBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    // symbol: ?getXBLBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    // symbol: ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    MCVAPI void handleLevelEvent(::LevelEvent, class CompoundTag const&);

    // symbol: ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    MCVAPI void handleLevelEvent(::LevelEvent, class Vec3 const&, int);

    // symbol: ?handleStopAllSounds@Level@@UEAAXXZ
    MCVAPI void handleStopAllSounds();

    // symbol: ?handleStopSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void handleStopSoundEvent(std::string const&);

    // symbol: ?hasCommandsEnabled@Level@@UEBA_NXZ
    MCVAPI bool hasCommandsEnabled() const;

    // symbol: ?hasLevelStorage@Level@@UEBA_NXZ
    MCVAPI bool hasLevelStorage() const;

    // symbol: ?hasPlatformBroadcast@Level@@UEBA_NXZ
    MCVAPI bool hasPlatformBroadcast() const;

    // symbol: ?hasPlatformBroadcastIntent@Level@@UEBA_NXZ
    MCVAPI bool hasPlatformBroadcastIntent() const;

    // symbol: ?hasStartWithMapEnabled@Level@@UEBA_NXZ
    MCVAPI bool hasStartWithMapEnabled() const;

    // symbol: ?hasXBLBroadcast@Level@@UEBA_NXZ
    MCVAPI bool hasXBLBroadcast() const;

    // symbol: ?hasXBLBroadcastIntent@Level@@UEBA_NXZ
    MCVAPI bool hasXBLBroadcastIntent() const;

    // symbol: ?incrementSpawnableTickedMob@Level@@UEAAXXZ
    MCVAPI void incrementSpawnableTickedMob();

    // symbol:
    // ?incrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void
    incrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);

    // symbol:
    // ?initialize@Level@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
    MCVAPI bool
    initialize(std::string const&, class LevelSettings const&, class LevelData*, class Experiments const&, std::string const*);

    // symbol: ?initializeBlockDefinitionGroup@Level@@UEAAXXZ
    MCVAPI void initializeBlockDefinitionGroup();

    // symbol: ?isClientSide@Level@@UEBA_NXZ
    MCVAPI bool isClientSide() const;

    // symbol: ?isClientSideGenerationEnabled@Level@@UEAA_NXZ
    MCVAPI bool isClientSideGenerationEnabled();

    // symbol: ?isEditorWorld@Level@@UEBA_NXZ
    MCVAPI bool isEditorWorld() const;

    // symbol: ?isEdu@Level@@UEBA_NXZ
    MCVAPI bool isEdu() const;

    // symbol: ?isExporting@Level@@UEBA_NXZ
    MCVAPI bool isExporting() const;

    // symbol: ?isLeaveGameDone@Level@@UEAA_NXZ
    MCVAPI bool isLeaveGameDone();

    // symbol: ?isMultiplayerGame@Level@@UEBA_NXZ
    MCVAPI bool isMultiplayerGame() const;

    // symbol: ?isPlayerSuspended@Level@@UEBA_NAEAVPlayer@@@Z
    MCVAPI bool isPlayerSuspended(class Player&) const;

    // symbol: ?levelCleanupQueueEntityRemoval@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?loadBlockDefinitionGroup@Level@@UEAAXAEBVExperiments@@@Z
    MCVAPI void loadBlockDefinitionGroup(class Experiments const&);

    // symbol: ?loadFunctionManager@Level@@UEAAXXZ
    MCVAPI void loadFunctionManager();

    // symbol: ?notifySubChunkRequestManager@Level@@UEAAXAEBVSubChunkPacket@@@Z
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const&);

    // symbol: ?onChunkDiscarded@Level@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkDiscarded(class LevelChunk&);

    // symbol: ?onChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?onChunkReload@Level@@UEAAXAEBUBounds@@@Z
    MCVAPI void onChunkReload(struct Bounds const&);

    // symbol: ?onChunkReloaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?onPlayerDeath@Level@@UEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z
    MCVAPI void onPlayerDeath(class Player&, class ActorDamageSource const&);

    // symbol: ?onSourceCreated@Level@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSourceCreated(class BlockSource&);

    // symbol: ?onSourceDestroyed@Level@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSourceDestroyed(class BlockSource&);

    // symbol: ?onSubChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool);

    // symbol: ?pauseAndFlushTaskGroups@Level@@UEAAXXZ
    MCVAPI void pauseAndFlushTaskGroups();

    // symbol: ?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@MM@Z
    MCVAPI void playSound(::LevelSoundEvent, class Vec3 const&, float, float);

    // symbol:
    // ?playSound@Level@@UEAAXAEBVIConstBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void playSound(
        class IConstBlockSource const&,
        ::LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool isBabyMob,
        bool isGlobal
    );

    // symbol:
    // ?playSound@Level@@UEAAXV?$AutomaticID@VDimension@@H@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void playSound(
        DimensionType,
        ::LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool isBabyMob,
        bool isGlobal
    );

    // symbol: ?playSound@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCVAPI void playSound(std::string const&, class Vec3 const&, float, float);

    // symbol: ?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCVAPI void
    playSound(::LevelSoundEvent, class Vec3 const&, int, struct ActorDefinitionIdentifier const&, bool, bool);

    // symbol: ?potionSplash@Level@@UEAAXAEBVVec3@@AEBVColor@mce@@_N@Z
    MCVAPI void potionSplash(class Vec3 const&, class mce::Color const&, bool);

    // symbol: ?queueEntityDestruction@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
    MCVAPI void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits>);

    // symbol: ?registerEventCoordinators@Level@@UEAAXXZ
    MCVAPI void registerEventCoordinators();

    // symbol: ?registerTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
    MCVAPI void registerTemporaryPointer(class _TickPtr&);

    // symbol: ?removeActorAndTakeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef);

    // symbol: ?removeActorFromWorldAndTakeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorFromWorldAndTakeEntity(class WeakEntityRef);

    // symbol: ?removeBlockSourceFromValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource*);

    // symbol: ?removeDisplayEntity@Level@@UEAAXVWeakEntityRef@@@Z
    MCVAPI void removeDisplayEntity(class WeakEntityRef);

    // symbol: ?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);

    // symbol: ?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEAVActor@@@Z
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor&);

    // symbol: ?removeListener@Level@@UEAAXAEAVLevelListener@@@Z
    MCVAPI void removeListener(class LevelListener&);

    // symbol: ?requestMapInfo@Level@@UEAAXUActorUniqueID@@_N@Z
    MCVAPI void requestMapInfo(struct ActorUniqueID, bool);

    // symbol:
    // ?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z
    MCVAPI void requestPlayerChangeDimension(class Player&, std::unique_ptr<class ChangeDimensionRequest>);

    // symbol: ?requestTimedStorageDeferment@Level@@UEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCVAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    // symbol: ?resumePlayer@Level@@UEAAXAEAVPlayer@@@Z
    MCVAPI void resumePlayer(class Player&);

    // symbol: ?runCommand@Level@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
    MCVAPI void runCommand(class Command&, class CommandOrigin&, ::CommandOriginSystem);

    // symbol:
    // ?runCommand@Level@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
    MCVAPI void runCommand(class HashedString const&, class CommandOrigin&, ::CommandOriginSystem, ::CurrentCmdVersion);

    // symbol: ?save@Level@@UEAAXXZ
    MCVAPI void save();

    // symbol: ?saveGameData@Level@@UEAAXXZ
    MCVAPI void saveGameData();

    // symbol: ?saveLevelData@Level@@UEAAXXZ
    MCVAPI void saveLevelData();

    // symbol: ?sendAllPlayerAbilities@Level@@UEAAXAEBVPlayer@@@Z
    MCVAPI void sendAllPlayerAbilities(class Player const&);

    // symbol: ?sendServerLegacyParticle@Level@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCVAPI void sendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // symbol:
    // ?setActorEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VActorEventCoordinator@@U?$default_delete@VActorEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator>&&);

    // symbol:
    // ?setBlockEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VBlockEventCoordinator@@U?$default_delete@VBlockEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator>&&);

    // symbol:
    // ?setClientPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VClientPlayerEventCoordinator@@U?$default_delete@VClientPlayerEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator>&&);

    // symbol: ?setCommandsEnabled@Level@@UEAAX_N@Z
    MCVAPI void setCommandsEnabled(bool);

    // symbol: ?setDefaultGameType@Level@@UEAAXW4GameType@@@Z
    MCVAPI void setDefaultGameType(::GameType);

    // symbol: ?setDefaultSpawn@Level@@UEAAXAEBVBlockPos@@@Z
    MCVAPI void setDefaultSpawn(class BlockPos const&);

    // symbol: ?setDifficulty@Level@@UEAAXW4Difficulty@@@Z
    MCVAPI void setDifficulty(::Difficulty);

    // symbol: ?setDisablePlayerInteractions@Level@@UEAAX_N@Z
    MCVAPI void setDisablePlayerInteractions(bool);

    // symbol: ?setEducationLevelSettings@Level@@UEAAXUEducationLevelSettings@@@Z
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings);

    // symbol: ?setFinishedInitializing@Level@@UEAAXXZ
    MCVAPI void setFinishedInitializing();

    // symbol: ?setHasLockedBehaviorPack@Level@@UEAAX_N@Z
    MCVAPI void setHasLockedBehaviorPack(bool);

    // symbol: ?setHasLockedResourcePack@Level@@UEAAX_N@Z
    MCVAPI void setHasLockedResourcePack(bool);

    // symbol: ?setImmersiveReaderString@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setImmersiveReaderString(std::string);

    // symbol: ?setIsExporting@Level@@UEAAX_N@Z
    MCVAPI void setIsExporting(bool);

    // symbol:
    // ?setItemEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VItemEventCoordinator@@U?$default_delete@VItemEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator>&&);

    // symbol: ?setLANBroadcast@Level@@UEAAX_N@Z
    MCVAPI void setLANBroadcast(bool);

    // symbol: ?setLANBroadcastIntent@Level@@UEAAX_N@Z
    MCVAPI void setLANBroadcastIntent(bool);

    // symbol: ?setLevelId@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setLevelId(std::string);

    // symbol: ?setMsaGamertagsOnly@Level@@UEAAX_N@Z
    MCVAPI void setMsaGamertagsOnly(bool);

    // symbol: ?setMultiplayerGame@Level@@UEAAX_N@Z
    MCVAPI void setMultiplayerGame(bool);

    // symbol: ?setMultiplayerGameIntent@Level@@UEAAX_N@Z
    MCVAPI void setMultiplayerGameIntent(bool);

    // symbol: ?setNetEventCallback@Level@@UEAAXV?$NonOwnerPointer@VNetEventCallback@@@Bedrock@@@Z
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback>);

    // symbol: ?setPacketSender@Level@@UEAAXPEAVPacketSender@@@Z
    MCVAPI void setPacketSender(class PacketSender*);

    // symbol: ?setPlatformBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting);

    // symbol: ?setPlatformBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setPlatformBroadcastMode(::Social::GamePublishSetting);

    // symbol: ?setPlayerAbilities@Level@@UEAAXAEBUActorUniqueID@@AEBVLayeredAbilities@@@Z
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const&, class LayeredAbilities const&);

    // symbol: ?setPlayerMovementSettings@Level@@UEAAXAEBUPlayerMovementSettings@@@Z
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const&);

    // symbol:
    // ?setRemotePlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VPlayerEventCoordinator@@U?$default_delete@VPlayerEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator>&&);

    // symbol:
    // ?setScriptDeferredEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VScriptDeferredEventCoordinator@@U?$default_delete@VScriptDeferredEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setScriptDeferredEventCoordinator(std::unique_ptr<class ScriptDeferredEventCoordinator>&&);

    // symbol:
    // ?setScriptingEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VScriptingEventCoordinator@@U?$default_delete@VScriptingEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setScriptingEventCoordinator(std::unique_ptr<class ScriptingEventCoordinator>&&);

    // symbol:
    // ?setServerNetworkEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerNetworkEventCoordinator@@U?$default_delete@VServerNetworkEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator>&&);

    // symbol:
    // ?setServerPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerPlayerEventCoordinator@@U?$default_delete@VServerPlayerEventCoordinator@@@std@@@std@@@Z
    MCVAPI void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator>&&);

    // symbol: ?setSimPaused@Level@@UEAAX_N@Z
    MCVAPI void setSimPaused(bool);

    // symbol: ?setSleepStatus@Level@@UEAAXAEBUPlayerSleepStatus@@@Z
    MCVAPI void setSleepStatus(struct PlayerSleepStatus const&);

    // symbol: ?setTime@Level@@UEAAXH@Z
    MCVAPI void setTime(int);

    // symbol: ?setWorldTemplateOptionsUnlocked@Level@@UEAAXXZ
    MCVAPI void setWorldTemplateOptionsUnlocked();

    // symbol: ?setXBLBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setXBLBroadcastIntent(::Social::GamePublishSetting);

    // symbol: ?setXBLBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setXBLBroadcastMode(::Social::GamePublishSetting);

    // symbol:
    // ?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z
    MCVAPI void spawnParticleEffect(std::string const&, class Vec3 const&, class Dimension*);

    // symbol: ?startLeaveGame@Level@@UEAAXXZ
    MCVAPI void startLeaveGame();

    // symbol: ?suspendAndSave@Level@@UEAAXXZ
    MCVAPI void suspendAndSave();

    // symbol: ?suspendPlayer@Level@@UEAAXAEAVPlayer@@@Z
    MCVAPI void suspendPlayer(class Player&);

    // symbol: ?takeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@AEAVLevelChunk@@@Z
    MCVAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk&);

    // symbol: ?takePicture@Level@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // symbol: ?tick@Level@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ?tickEntities@Level@@UEAAXXZ
    MCVAPI void tickEntities();

    // symbol: ?tickEntitySystems@Level@@UEAAXXZ
    MCVAPI void tickEntitySystems();

    // symbol: ?tryGetScoreboard@Level@@UEAAPEAVScoreboard@@XZ
    MCVAPI class Scoreboard* tryGetScoreboard();

    // symbol: ?unregisterTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
    MCVAPI void unregisterTemporaryPointer(class _TickPtr&);

    // symbol: ?updateSleepingPlayerList@Level@@UEAAXXZ
    MCVAPI void updateSleepingPlayerList();

    // symbol: ?updateWeather@Level@@UEAAXMHMH@Z
    MCVAPI void updateWeather(float, int, float, int);

    // symbol: ?upgradeStorageVersion@Level@@UEAAXW4StorageVersion@@@Z
    MCVAPI void upgradeStorageVersion(::StorageVersion);

    // symbol: ?use3DBiomeMaps@Level@@UEBA_NXZ
    MCVAPI bool use3DBiomeMaps() const;

    // symbol: ?useMsaGamertagsOnly@Level@@UEBA_NXZ
    MCVAPI bool useMsaGamertagsOnly() const;

    // symbol: ??1Level@@UEAA@XZ
    MCVAPI ~Level();

    // symbol:
    // ??0Level@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$OwnerPtrT@U?$SharePtrRefTraits@VLevelStorage@@@@@@AEAVIMinecraftEventing@@_NW4SubClientId@@AEAVScheduler@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVResourcePackManager@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@std@@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@std@@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@std@@33AEBUNetworkPermissions@@V?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI Level(Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const&, class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, class IMinecraftEventing&, bool, ::SubClientId, class Scheduler&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const&, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, std::weak_ptr<class BlockTypeRegistry>, bool, bool, struct NetworkPermissions const&, std::optional<class DimensionDefinitionGroup>);

    // symbol: ?canChangeDimension@Level@@QEAA_NAEAVActor@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI bool canChangeDimension(class Actor&, DimensionType);

    // symbol: ?earlyShutdownMainthread@Level@@QEAAXXZ
    MCAPI void earlyShutdownMainthread();

    // symbol: ?getActorManager@Level@@QEAAAEAVActorManager@@XZ
    MCAPI class ActorManager& getActorManager();

    // symbol: ?getAutonomousActorManager@Level@@QEBAAEBVAutonomousActorManager@@XZ
    MCAPI class AutonomousActorManager const& getAutonomousActorManager() const;

    // symbol: ?getLevelSeed64@Level@@QEBA?AVLevelSeed64@@XZ
    MCAPI class LevelSeed64 getLevelSeed64() const;

    // symbol: ?getNpcDialogueStorage@Level@@QEAAPEAVNpcDialogueStorage@@XZ
    MCAPI class NpcDialogueStorage* getNpcDialogueStorage();

    // symbol: ?getServerLevelEventCoordinator@Level@@QEAAAEAVServerLevelEventCoordinator@@XZ
    MCAPI class ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    // symbol:
    // ?getServerLevelEventCoordinatorAsSharedPointer@Level@@QEAA?AV?$shared_ptr@VServerLevelEventCoordinator@@@std@@XZ
    MCAPI std::shared_ptr<class ServerLevelEventCoordinator> getServerLevelEventCoordinatorAsSharedPointer();

    // symbol: ?getTickDeltaTime@Level@@QEBANXZ
    MCAPI double getTickDeltaTime() const;

    // symbol:
    // ?isFree@Level@@QEAA?AW4NodeType@@AEAVNavigationComponent@@AEAVActor@@AEBVBlockPos@@22W4CanJumpIntoNode@@@Z
    MCAPI ::NodeType isFree(
        class NavigationComponent&,
        class Actor&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        ::CanJumpIntoNode
    );

    // symbol: ?setClientLevelEventCoordinator@Level@@QEAAX$$QEAV?$shared_ptr@VClientLevelEventCoordinator@@@std@@@Z
    MCAPI void setClientLevelEventCoordinator(std::shared_ptr<class ClientLevelEventCoordinator>&&);

    // symbol:
    // ?setNpcEventCoordinator@Level@@QEAAXV?$unique_ptr@VNpcEventCoordinator@@U?$default_delete@VNpcEventCoordinator@@@std@@@std@@@Z
    MCAPI void setNpcEventCoordinator(std::unique_ptr<class NpcEventCoordinator>);

    // symbol: ?setPerformanceTelemetryPeriodicCallback@Level@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void setPerformanceTelemetryPeriodicCallback(std::function<void(void)>);

    // symbol: ?setServerLevelEventCoordinator@Level@@QEAAX$$QEAV?$shared_ptr@VServerLevelEventCoordinator@@@std@@@Z
    MCAPI void setServerLevelEventCoordinator(std::shared_ptr<class ServerLevelEventCoordinator>&&);

    // symbol: ?transferActorToOwnedEntityLimbo@Level@@QEAAXAEBVPlayer@@AEAVActor@@@Z
    MCAPI void transferActorToOwnedEntityLimbo(class Player const&, class Actor&);

    // symbol: ?addLevelComponents@Level@@SAXAEAVEntityContext@@AEAVIRandom@@_N@Z
    MCAPI static void addLevelComponents(class EntityContext&, class IRandom&, bool);

    // symbol: ?createRandomSeed@Level@@SAIXZ
    MCAPI static uint createRandomSeed();

    // symbol: ?isUsableLevel@Level@@SA_NAEBVILevel@@@Z
    MCAPI static bool isUsableLevel(class ILevel const&);

    // symbol:
    // ?parseLevelSeed64@Level@@SA?AVLevelSeed64@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const&);

    // symbol: ?IS_SLEEPING_POSSIBLE@Level@@2QBDB
    MCAPI static char const IS_SLEEPING_POSSIBLE[];

    // symbol: ?OVERWORLD_PLAYER_COUNT_TAG@Level@@2QBDB
    MCAPI static char const OVERWORLD_PLAYER_COUNT_TAG[];

    // symbol: ?SLEEPING_PLAYER_COUNT_TAG@Level@@2QBDB
    MCAPI static char const SLEEPING_PLAYER_COUNT_TAG[];

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getGameplayUserManager@Level@@IEAAAEAVGameplayUserManager@@XZ
    MCAPI class GameplayUserManager& _getGameplayUserManager();

    // symbol: ?_getLevelStorageManager@Level@@IEAAPEAVLevelStorageManager@@XZ
    MCAPI class LevelStorageManager* _getLevelStorageManager();

    // symbol: ?_getPlayerListManager@Level@@IEAAAEAVPlayerListManager@@XZ
    MCAPI class PlayerListManager& _getPlayerListManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkBlockSourceValidity@Level@@AEAAXXZ
    MCAPI void _checkBlockSourceValidity();

    // symbol: ?_clearOwnedEntityLimboForPlayer@Level@@AEAAXAEBVPlayer@@@Z
    MCAPI void _clearOwnedEntityLimboForPlayer(class Player const&);

    // symbol: ?_getCrashDumpLogCategory@Level@@AEAA?AW4CrashDumpLogStringID@@XZ
    MCAPI ::CrashDumpLogStringID _getCrashDumpLogCategory();

    // symbol: ?_handleChangeDimensionRequests@Level@@AEAAXXZ
    MCAPI void _handleChangeDimensionRequests();

    // symbol: ?_initializeActorManager@Level@@AEAAXXZ
    MCAPI void _initializeActorManager();

    // symbol: ?_initializeBiomeManager@Level@@AEAAXXZ
    MCAPI void _initializeBiomeManager();

    // symbol: ?_initializeGameplayUserManager@Level@@AEAAXXZ
    MCAPI void _initializeGameplayUserManager();

    // symbol: ?_initializeLevelStorageManager@Level@@AEAAXXZ
    MCAPI void _initializeLevelStorageManager();

    // symbol: ?_onAnyGameplayUsersRemoved@Level@@AEAAXXZ
    MCAPI void _onAnyGameplayUsersRemoved();

    // symbol: ?_onGameplayUserAdded@Level@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserAdded(class EntityContext&);

    // symbol: ?_onGameplayUserRemoved@Level@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext&);

    // symbol: ?_onRemoveActorEntityReferences@Level@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor&);

    // symbol: ?_onSaveLevelData@Level@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveLevelData(class LevelStorage&);

    // symbol: ?_playerChangeDimension@Level@@AEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@@Z
    MCAPI bool _playerChangeDimension(class Player&, class ChangeDimensionRequest&);

    // symbol: ?_playerChangeDimensionPrepareRegion@Level@@AEAAXAEAVPlayer@@AEAVChangeDimensionRequest@@@Z
    MCAPI void _playerChangeDimensionPrepareRegion(class Player&, class ChangeDimensionRequest&);

    // symbol: ?_playerChangeDimensionWaitingForChunks@Level@@AEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@@Z
    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player&, class ChangeDimensionRequest&);

    // symbol: ?_playerChangeDimensionWaitingForRespawn@Level@@AEAA_NAEAVPlayer@@AEAVChangeDimensionRequest@@@Z
    MCAPI bool _playerChangeDimensionWaitingForRespawn(class Player&, class ChangeDimensionRequest&);

    // symbol: ?_saveOwnedEntityLimboForPlayer@Level@@AEAAXAEBVPlayer@@@Z
    MCAPI void _saveOwnedEntityLimboForPlayer(class Player const&);

    // symbol: ?_saveSomeChunks@Level@@AEAAXXZ
    MCAPI void _saveSomeChunks();

    // symbol: ?_shouldStartGameSaveTimer@Level@@AEBA_NXZ
    MCAPI bool _shouldStartGameSaveTimer() const;

    // symbol: ?_syncTime@Level@@AEAAXH@Z
    MCAPI void _syncTime(int);

    // symbol: ?processOwnedEntityLimboForPlayer@Level@@AEAAXAEBVPlayer@@@Z
    MCAPI void processOwnedEntityLimboForPlayer(class Player const&);

    // symbol:
    // ?_createLevelStorageManager@Level@@CA?AV?$unique_ptr@VLevelStorageManager@@U?$default_delete@VLevelStorageManager@@@std@@@std@@V?$OwnerPtrT@U?$SharePtrRefTraits@VLevelStorage@@@@@@AEAVScheduler@@@Z
    MCAPI static std::unique_ptr<class LevelStorageManager>
    _createLevelStorageManager(class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, class Scheduler&);

    // symbol: ?_onPollSaveGameStatistics@Level@@CAXAEAVIMinecraftEventing@@AEAVLevelStorage@@@Z
    MCAPI static void _onPollSaveGameStatistics(class IMinecraftEventing&, class LevelStorage&);

    // NOLINTEND
};
