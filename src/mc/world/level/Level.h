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
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/data/Factory.h"
#include "mc/entity/systems/common/CommandOriginSystem.h"
#include "mc/enums/CanJumpIntoNode.h"
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
class ServerLevel;

class Level : public ILevel, public BlockSourceListener, public IWorldRegistriesProvider {
public:
    [[nodiscard]] ServerLevel& asServer() { return *reinterpret_cast<ServerLevel*>(this); }

    // prevent constructor by default
    Level& operator=(Level const&);
    Level(Level const&);
    Level();

public:
    // NOLINTBEGIN
    // symbol: ?_destroyEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@H@Z
    MCVAPI void _destroyEffect(class BlockPos const& pos, class Block const& block, int intensityFactor);

    // symbol: ?_getPlayerDeathManager@Level@@MEAAPEAVPlayerDeathManager@@XZ
    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();

    // symbol: ?_initializeMapDataManager@Level@@MEAAXXZ
    MCVAPI void _initializeMapDataManager();

    // symbol: ?_subTick@Level@@MEAAXXZ
    MCVAPI void _subTick();

    // symbol: ?addAutonomousEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI class Actor* addAutonomousEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    // symbol: ?addBlockSourceForValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource* blockSource);

    // symbol: ?addBreakingItemParticleEffect@Level@@UEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    MCVAPI void addBreakingItemParticleEffect(
        class Vec3 const&                  pos,
        ::ParticleType                     type,
        struct ResolvedItemIconInfo const& textureInfo
    );

    // symbol: ?addChunkViewTracker@Level@@UEAAXV?$weak_ptr@VChunkViewSource@@@std@@@Z
    MCVAPI void addChunkViewTracker(std::weak_ptr<class ChunkViewSource> chunkViewSource);

    // symbol: ?addDisplayEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI class Actor* addDisplayEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    // symbol: ?addEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI class Actor* addEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    // symbol: ?addGlobalEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI class Actor* addGlobalEntity(class BlockSource&, class OwnerPtr<class EntityContext>);

    // symbol: ?addListener@Level@@UEAAXAEAVLevelListener@@@Z
    MCVAPI void addListener(class LevelListener& listener);

    // symbol: ?addParticle@Level@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
    MCVAPI class Particle* addParticle(
        ::ParticleType           id,
        class Vec3 const&        pos,
        class Vec3 const&        dir,
        int                      data,
        class CompoundTag const* tag,
        bool                     isGlobal
    );

    // symbol: ?addParticleEffect@Level@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
    MCVAPI void addParticleEffect(
        class HashedString const&      effect,
        class Vec3 const&              emitterPosition,
        class MolangVariableMap const& molangVariables
    );

    // symbol: ?addTerrainParticleEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void addTerrainParticleEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // symbol: ?addTerrainSlideEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCVAPI void addTerrainSlideEffect(
        class BlockPos const& pos,
        class Block const&    block,
        class Vec3 const&     emitterPosition,
        float                 intensity,
        float                 velocityScalar,
        float                 emitterRadius
    );

    // symbol: ?addTickingAreaList@Level@@UEAAXV?$AutomaticID@VDimension@@H@@AEBV?$shared_ptr@VTickingAreaList@@@std@@@Z
    MCVAPI void
    addTickingAreaList(DimensionType dimensionId, std::shared_ptr<class TickingAreaList> const& tickingAreas);

    // symbol: ?addUser@Level@@UEAAXV?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI void addUser(class OwnerPtr<class EntityContext>);

    // symbol: ?asLevel@Level@@UEAAPEAV1@XZ
    MCVAPI class Level* asLevel();

    // symbol: ?blockNetworkIdsAreHashes@Level@@UEAA_NXZ
    MCVAPI bool blockNetworkIdsAreHashes();

    // symbol: ?broadcastActorEvent@Level@@UEBAXAEAVActor@@W4ActorEvent@@H@Z
    MCVAPI void broadcastActorEvent(class Actor& e, ::ActorEvent eventId, int data) const;

    // symbol: ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@PEBVUserEntityIdentifierComponent@@@Z
    MCVAPI void broadcastLevelEvent(
        ::LevelEvent                               type,
        class CompoundTag const&                   tag,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    // symbol: ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z
    MCVAPI void broadcastLevelEvent(
        ::LevelEvent                               type,
        class Vec3 const&                          pos,
        int                                        data,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    // symbol: ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@AEBVBlock@@@Z
    MCVAPI void
    broadcastLocalEvent(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, class Block const& block);

    // symbol: ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@H@Z
    MCVAPI void broadcastLocalEvent(class BlockSource& region, ::LevelEvent type, class Vec3 const& pos, int data);

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void broadcastSoundEvent(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z
    MCVAPI void broadcastSoundEvent(
        class BlockSource&                      region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        class Block const&                      block,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol:
    // ?broadcastSoundEvent@Level@@UEAAXAEAVDimension@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void broadcastSoundEvent(
        class Dimension&                        dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& identifier,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol: ?canUseSkin@Level@@UEBA_NAEBVSerializedSkin@@AEBVNetworkIdentifier@@AEBVUUID@mce@@AEBUActorUniqueID@@@Z
    MCVAPI bool canUseSkin(
        class SerializedSkin const&    skin,
        class NetworkIdentifier const& networkIdentifier,
        class mce::UUID const&         clientId,
        struct ActorUniqueID const&    playerId
    ) const;

    // symbol: ?copyAndLockMap@Level@@UEAA_NUActorUniqueID@@0@Z
    MCVAPI bool copyAndLockMap(struct ActorUniqueID originalMapUuid, struct ActorUniqueID newMapUuid);

    // symbol: ?countUsersWithMatchingNetworkId@Level@@UEBAHAEBVNetworkIdentifier@@@Z
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const& networkId) const;

    // symbol:
    // ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCVAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const& uuid,
        class BlockPos const&       origin,
        DimensionType               dimension,
        int                         returnScaleLevel
    );

    // symbol:
    // ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
    MCVAPI class MapItemSavedData& createMapSavedData(
        std::vector<struct ActorUniqueID> const& mapIds,
        class BlockPos const&                    origin,
        DimensionType                            dimension,
        int                                      returnScaleLevel
    );

    // symbol: ?createPhotoStorage@Level@@UEAAXXZ
    MCVAPI void createPhotoStorage();

    // symbol:
    // ?decrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void decrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    // symbol: ?denyEffect@Level@@UEAAXAEAVBlockSource@@AEBVVec3@@@Z
    MCVAPI void denyEffect(class BlockSource& region, class Vec3 const& pos);

    // symbol: ?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCVAPI bool destroyBlock(class BlockSource& region, class BlockPos const& pos, bool dropResources);

    // symbol: ?digestServerItemComponents@Level@@UEAAXAEBVItemComponentPacket@@@Z
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const& packet);

    // symbol: ?entityChangeDimension@Level@@UEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@V?$optional@VVec3@@@std@@@Z
    MCVAPI void entityChangeDimension(class Actor& entity, DimensionType toId, std::optional<class Vec3> entityPos);

    // symbol: ?expandMapByID@Level@@UEAA?AUActorUniqueID@@U2@_N@Z
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID uuid, bool wasInit);

    // symbol: ?explode@Level@@UEAA_NAEAVExplosion@@@Z
    MCVAPI bool explode(class Explosion& explosion);

    // symbol: ?explode@Level@@UEAA_NAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z
    MCVAPI bool explode(
        class BlockSource& region,
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

    // symbol: ?fetchStrictEntity@Level@@UEBA?AVStrictEntityContext@@UActorUniqueID@@_N@Z
    MCVAPI class StrictEntityContext fetchStrictEntity(struct ActorUniqueID, bool) const;

    // symbol:
    // ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0AEAVNavigationComponent@@@Z
    MCVAPI std::unique_ptr<class Path>
           findPath(class Actor& from, class Actor& to, class NavigationComponent& navigation);

    // symbol:
    // ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHAEAVNavigationComponent@@@Z
    MCVAPI std::unique_ptr<class Path>
           findPath(class Actor& from, int xBest, int yBest, int zBest, class NavigationComponent& navigation);

    // symbol: ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCVAPI class Player* findPlayer(std::function<bool(class Player const&)> pred) const;

    // symbol: ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVWeakEntityRef@@@Z@std@@@Z
    MCVAPI class Player* findPlayer(std::function<bool(class WeakEntityRef const&)> pred) const;

    // symbol: ?flushRunTimeLighting@Level@@UEAAXXZ
    MCVAPI void flushRunTimeLighting();

    // symbol: ?forEachDimension@Level@@UEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z
    MCVAPI void forEachDimension(std::function<bool(class Dimension&)> callback);

    // symbol: ?forEachDimension@Level@@UEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z
    MCVAPI void forEachDimension(std::function<bool(class Dimension const&)> callback) const;

    // symbol: ?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
    MCVAPI void forEachPlayer(std::function<bool(class Player&)> callback);

    // symbol: ?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
    MCVAPI void forEachPlayer(std::function<bool(class Player const&)> callback) const;

    // symbol: ?forEachUser@Level@@UEAAXV?$function@$$A6A_NAEAVEntityContext@@@Z@std@@@Z
    MCVAPI void forEachUser(std::function<bool(class EntityContext&)> callback);

    // symbol: ?forEachUser@Level@@UEBAXV?$function@$$A6A_NAEBVEntityContext@@@Z@std@@@Z
    MCVAPI void forEachUser(std::function<bool(class EntityContext const&)> callback) const;

    // symbol: ?forceFlushRemovedPlayers@Level@@UEAAXXZ
    MCVAPI void forceFlushRemovedPlayers();

    // symbol: ?forceRemoveEntity@Level@@UEAAXAEAVActor@@@Z
    MCVAPI void forceRemoveEntity(class Actor& actor);

    // symbol: ?forceRemoveEntityfromWorld@Level@@UEAAXAEAVActor@@@Z
    MCVAPI void forceRemoveEntityfromWorld(class Actor& actor);

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

    // symbol: ?getActorFactory@Level@@UEBAAEBVActorFactory@@XZ
    MCVAPI class ActorFactory const& getActorFactory() const;

    // symbol: ?getActorFactory@Level@@UEAAAEAVActorFactory@@XZ
    MCVAPI class ActorFactory& getActorFactory();

    // symbol: ?getActorInfoRegistry@Level@@UEAAPEAVActorInfoRegistry@@XZ
    MCVAPI class ActorInfoRegistry* getActorInfoRegistry();

    // symbol: ?getActorPropertyGroup@Level@@UEBAAEAVPropertyGroupManager@@XZ
    MCVAPI class PropertyGroupManager& getActorPropertyGroup() const;

    // symbol: ?getAdventureSettings@Level@@UEBAAEBUAdventureSettings@@XZ
    MCVAPI struct AdventureSettings const& getAdventureSettings() const;

    // symbol: ?getAdventureSettings@Level@@UEAAAEAUAdventureSettings@@XZ
    MCVAPI struct AdventureSettings& getAdventureSettings();

    // symbol: ?getArmorTrimUnloader@Level@@UEAAPEAVArmorTrimUnloader@@XZ
    MCVAPI class ArmorTrimUnloader* getArmorTrimUnloader();

    // symbol: ?getAutomationBehaviorTreeGroup@Level@@UEBAAEAVAutomationBehaviorTreeGroup@@XZ
    MCVAPI class AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const;

    // symbol: ?getBehaviorFactory@Level@@UEBAAEAVBehaviorFactory@@XZ
    MCVAPI class BehaviorFactory& getBehaviorFactory() const;

    // symbol: ?getBiomeComponentFactory@Level@@UEBAAEBVBiomeComponentFactory@@XZ
    MCVAPI class BiomeComponentFactory const& getBiomeComponentFactory() const;

    // symbol: ?getBiomeComponentFactory@Level@@UEAAAEAVBiomeComponentFactory@@XZ
    MCVAPI class BiomeComponentFactory& getBiomeComponentFactory();

    // symbol: ?getBiomeManager@Level@@UEBAAEBVBiomeManager@@XZ
    MCVAPI class BiomeManager const& getBiomeManager() const;

    // symbol: ?getBiomeManager@Level@@UEAAAEAVBiomeManager@@XZ
    MCVAPI class BiomeManager& getBiomeManager();

    // symbol: ?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry const& getBiomeRegistry() const;

    // symbol: ?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ
    MCVAPI class BiomeRegistry& getBiomeRegistry();

    // symbol: ?getBlockComponentFactory@Level@@UEBAAEBVBlockComponentFactory@@XZ
    MCVAPI class BlockComponentFactory const& getBlockComponentFactory() const;

    // symbol: ?getBlockComponentFactory@Level@@UEAAAEAVBlockComponentFactory@@XZ
    MCVAPI class BlockComponentFactory& getBlockComponentFactory();

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

    // symbol: ?getDefaultPermissions@Level@@UEBAAEBVPermissionsHandler@@XZ
    MCVAPI class PermissionsHandler const& getDefaultPermissions() const;

    // symbol: ?getDefaultPermissions@Level@@UEAAAEAVPermissionsHandler@@XZ
    MCVAPI class PermissionsHandler& getDefaultPermissions();

    // symbol: ?getDefaultSpawn@Level@@UEBAAEBVBlockPos@@XZ
    MCVAPI class BlockPos const& getDefaultSpawn() const;

    // symbol: ?getDifficulty@Level@@UEBA?AW4Difficulty@@XZ
    MCVAPI ::Difficulty getDifficulty() const;

    // symbol: ?getDimension@Level@@UEBA?AV?$WeakRef@VDimension@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI class WeakRef<class Dimension> getDimension(DimensionType id) const;

    // symbol: ?getDimensionConversionData@Level@@UEBA?AVDimensionConversionData@@XZ
    MCVAPI class DimensionConversionData getDimensionConversionData() const;

    // symbol: ?getDimensionFactory@Level@@UEBAAEBV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const& getDimensionFactory() const;

    // symbol: ?getDimensionFactory@Level@@UEAAAEAV?$OwnerPtrFactory@VDimension@@AEAVILevel@@AEAVScheduler@@@@XZ
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionFactory();

    // symbol: ?getDimensionManager@Level@@UEAAAEAVDimensionManager@@XZ
    MCVAPI class DimensionManager& getDimensionManager();

    // symbol: ?getDimensionManager@Level@@UEBAAEBVDimensionManager@@XZ
    MCVAPI class DimensionManager const& getDimensionManager() const;

    // symbol: ?getDisablePlayerInteractions@Level@@UEBA_NXZ
    MCVAPI bool getDisablePlayerInteractions() const;

    // symbol: ?getEducationLevelSettings@Level@@UEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
    MCVAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    // symbol:
    // ?getEntities@Level@@UEBAAEBV?$vector@V?$OwnerPtr@VEntityContext@@@@V?$allocator@V?$OwnerPtr@VEntityContext@@@@@std@@@std@@XZ
    MCVAPI std::vector<class OwnerPtr<class EntityContext>> const& getEntities() const;

    // symbol: ?getEntityDefinitions@Level@@UEBAPEAVActorDefinitionGroup@@XZ
    MCVAPI class ActorDefinitionGroup* getEntityDefinitions() const;

    // symbol: ?getEntityRegistry@Level@@UEAA?AV?$StackRefResult@VEntityRegistry@@@@XZ
    MCVAPI class StackRefResult<class EntityRegistry> getEntityRegistry();

    // symbol: ?getEntityRegistry@Level@@UEBA?AV?$StackRefResult@$$CBVEntityRegistry@@@@XZ
    MCVAPI class StackRefResult<class EntityRegistry const> getEntityRegistry() const;

    // symbol: ?getEntitySystems@Level@@UEAAAEAVEntitySystems@@XZ
    MCVAPI class EntitySystems& getEntitySystems();

    // symbol: ?getEventing@Level@@UEAAAEAVIMinecraftEventing@@XZ
    MCVAPI class IMinecraftEventing& getEventing();

    // symbol: ?getFeatureRegistry@Level@@UEAAAEAVFeatureRegistry@@XZ
    MCVAPI class FeatureRegistry& getFeatureRegistry();

    // symbol: ?getFeatureRegistry@Level@@UEBAAEBVFeatureRegistry@@XZ
    MCVAPI class FeatureRegistry const& getFeatureRegistry() const;

    // symbol: ?getFeatureTypeFactory@Level@@UEAAAEAVFeatureTypeFactory@@XZ
    MCVAPI class FeatureTypeFactory& getFeatureTypeFactory();

    // symbol: ?getFeatureTypeFactory@Level@@UEBAAEBVFeatureTypeFactory@@XZ
    MCVAPI class FeatureTypeFactory const& getFeatureTypeFactory() const;

    // symbol: ?getGameRules@Level@@UEAAAEAVGameRules@@XZ
    MCVAPI class GameRules& getGameRules();

    // symbol: ?getGameRules@Level@@UEBAAEBVGameRules@@XZ
    MCVAPI class GameRules const& getGameRules() const;

    // symbol: ?getHitResult@Level@@UEAAAEAVHitResult@@XZ
    MCVAPI class HitResult& getHitResult();

    // symbol: ?getIOTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ
    MCVAPI class TaskGroup& getIOTasksGroup();

    // symbol: ?getIRandom@Level@@UEBAAEAVIRandom@@XZ
    MCVAPI class IRandom& getIRandom() const;

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
    MCVAPI DimensionType getLastOrDefaultSpawnDimensionId(DimensionType lastDimensionId) const;

    // symbol: ?getLevelChunkMetaDataManager@Level@@UEAAPEAVLevelChunkMetaDataManager@@XZ
    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    // symbol: ?getLevelData@Level@@UEBAAEBVLevelData@@XZ
    MCVAPI class LevelData const& getLevelData() const;

    // symbol: ?getLevelData@Level@@UEAAAEAVLevelData@@XZ
    MCVAPI class LevelData& getLevelData();

    // symbol: ?getLevelEntity@Level@@UEAA?AV?$WeakRef@VEntityContext@@@@XZ
    MCVAPI class WeakRef<class EntityContext> getLevelEntity();

    // symbol: ?getLevelEventCoordinator@Level@@UEAAAEAVLevelEventCoordinator@@XZ
    MCVAPI class LevelEventCoordinator& getLevelEventCoordinator();

    // symbol: ?getLevelId@Level@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getLevelId() const;

    // symbol: ?getLevelSoundManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VLevelSoundManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class LevelSoundManager> getLevelSoundManager();

    // symbol: ?getLevelStorage@Level@@UEBAAEBVLevelStorage@@XZ
    MCVAPI class LevelStorage const& getLevelStorage() const;

    // symbol: ?getLevelStorage@Level@@UEAAAEAVLevelStorage@@XZ
    MCVAPI class LevelStorage& getLevelStorage();

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

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@PEBVCompoundTag@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const* instance);

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@AEBVCompoundTag@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const& instance);

    // symbol: ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z
    MCVAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID uuid);

    // symbol: ?getMob@Level@@UEBAPEAVMob@@UActorUniqueID@@@Z
    MCVAPI class Mob* getMob(struct ActorUniqueID mobId) const;

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

    // symbol: ?getOrCreateDimension@Level@@UEAA?AV?$WeakRef@VDimension@@@@V?$AutomaticID@VDimension@@H@@@Z
    MCVAPI class WeakRef<class Dimension> getOrCreateDimension(DimensionType dimensionType);

    // symbol: ?getPacketSender@Level@@UEBAPEAVPacketSender@@XZ
    MCVAPI class PacketSender* getPacketSender() const;

    // symbol: ?getPauseManager@Level@@UEBA?AV?$StackRefResult@$$CBVPauseManager@@@@XZ
    MCVAPI class StackRefResult<class PauseManager const> getPauseManager() const;

    // symbol: ?getPauseManager@Level@@UEAA?AV?$StackRefResult@VPauseManager@@@@XZ
    MCVAPI class StackRefResult<class PauseManager> getPauseManager();

    // symbol: ?getPhotoStorage@Level@@UEAAAEAVPhotoStorage@@XZ
    MCVAPI class PhotoStorage& getPhotoStorage();

    // symbol: ?getPlatformBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    // symbol: ?getPlatformBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

    // symbol:
    // ?getPlatformPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlatformPlayer(std::string const& platformOnlineId) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@AEBVUUID@mce@@@Z
    MCVAPI class Player* getPlayer(class mce::UUID const& uuid) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@UActorUniqueID@@@Z
    MCVAPI class Player* getPlayer(struct ActorUniqueID entityID) const;

    // symbol: ?getPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayer(std::string const& name) const;

    // symbol: ?getPlayerAbilities@Level@@UEAAPEAVLayeredAbilities@@AEBUActorUniqueID@@@Z
    MCVAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const& playerId);

    // symbol:
    // ?getPlayerByXuid@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayerByXuid(std::string const& xuid) const;

    // symbol: ?getPlayerColor@Level@@UEBA?AVColor@mce@@AEBVPlayer@@@Z
    MCVAPI class mce::Color getPlayerColor(class Player const& player) const;

    // symbol:
    // ?getPlayerFromServerId@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class Player* getPlayerFromServerId(std::string const& serverId) const;

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
    MCVAPI class Player* getRuntimePlayer(class ActorRuntimeID runtimeId) const;

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

    // symbol:
    // ?getSortedPositionsFromClientOffsets@Level@@UEBA?AV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@AEBV23@@Z
    MCVAPI std::vector<class ChunkPos> getSortedPositionsFromClientOffsets(std::vector<class ChunkPos> const&) const;

    // symbol: ?getSoundPlayer@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> getSoundPlayer() const;

    // symbol: ?getSpawner@Level@@UEBAAEAVSpawner@@XZ
    MCVAPI class Spawner& getSpawner() const;

    // symbol: ?getSpecialMultiplier@Level@@UEBAMV?$AutomaticID@VDimension@@H@@@Z
    MCVAPI float getSpecialMultiplier(DimensionType dimensionType) const;

    // symbol: ?getStructureManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> getStructureManager();

    // symbol: ?getStructureManager@Level@@UEBA?BV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
    MCVAPI Bedrock::NotNullNonOwnerPtr<class StructureManager> const getStructureManager() const;

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
    // ?getUsers@Level@@UEBAAEBV?$vector@V?$OwnerPtr@VEntityContext@@@@V?$allocator@V?$OwnerPtr@VEntityContext@@@@@std@@@std@@XZ
    MCVAPI std::vector<class OwnerPtr<class EntityContext>> const& getUsers() const;

    // symbol: ?getWorldRegistriesProvider@Level@@UEBAAEBVIWorldRegistriesProvider@@XZ
    MCVAPI class IWorldRegistriesProvider const& getWorldRegistriesProvider() const;

    // symbol: ?getWorldRegistriesProvider@Level@@UEAAAEAVIWorldRegistriesProvider@@XZ
    MCVAPI class IWorldRegistriesProvider& getWorldRegistriesProvider();

    // symbol: ?getXBLBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    // symbol: ?getXBLBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
    MCVAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    // symbol: ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    MCVAPI void handleLevelEvent(::LevelEvent type, class CompoundTag const& data);

    // symbol: ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
    MCVAPI void handleLevelEvent(::LevelEvent type, class Vec3 const& pos, int data);

    // symbol: ?handleStopAllSounds@Level@@UEAAXXZ
    MCVAPI void handleStopAllSounds();

    // symbol: ?handleStopSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void handleStopSoundEvent(std::string const& name);

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

    // symbol:
    // ?incrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void incrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    // symbol:
    // ?initialize@Level@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
    MCVAPI bool initialize(
        std::string const&         levelName,
        class LevelSettings const& levelSettings,
        class LevelData*           levelData,
        class Experiments const&   experiments,
        std::string const*         levelId
    );

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
    MCVAPI bool isPlayerSuspended(class Player& player) const;

    // symbol: ?levelCleanupQueueEntityRemoval@Level@@UEAAXV?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtr<class EntityContext>);

    // symbol: ?loadBlockDefinitionGroup@Level@@UEAAXAEBVExperiments@@@Z
    MCVAPI void loadBlockDefinitionGroup(class Experiments const& experiments);

    // symbol: ?loadFunctionManager@Level@@UEAAXXZ
    MCVAPI void loadFunctionManager();

    // symbol: ?notifySubChunkRequestManager@Level@@UEAAXAEBVSubChunkPacket@@@Z
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const& packet);

    // symbol: ?onChunkDiscarded@Level@@UEAAXAEAVLevelChunk@@@Z
    MCVAPI void onChunkDiscarded(class LevelChunk& lc);

    // symbol: ?onChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkLoaded(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?onChunkReload@Level@@UEAAXAEBUBounds@@@Z
    MCVAPI void onChunkReload(struct Bounds const& bound);

    // symbol: ?onChunkReloaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCVAPI void onChunkReloaded(class ChunkSource& source, class LevelChunk& lc);

    // symbol: ?onPlayerDeath@Level@@UEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z
    MCVAPI void onPlayerDeath(class Player& player, class ActorDamageSource const& source);

    // symbol: ?onSourceCreated@Level@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSourceCreated(class BlockSource& source);

    // symbol: ?onSourceDestroyed@Level@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onSourceDestroyed(class BlockSource& source);

    // symbol: ?onSubChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
    MCVAPI void onSubChunkLoaded(
        class ChunkSource& source,
        class LevelChunk&  lc,
        short              absoluteSubChunkIndex,
        bool               subChunkVisibilityChanged
    );

    // symbol: ?pauseAndFlushTaskGroups@Level@@UEAAXXZ
    MCVAPI void pauseAndFlushTaskGroups();

    // symbol: ?playSound@Level@@UEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@MM@Z
    MCVAPI void playSound(::Puv::Legacy::LevelSoundEvent type, class Vec3 const& pos, float volume, float pitch);

    // symbol: ?playSound@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    MCVAPI void playSound(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    // symbol: ?playSound@Level@@UEAAXW4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
    MCVAPI void playSound(
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol:
    // ?playSound@Level@@UEAAXAEBVIConstBlockSource@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void playSound(
        class IConstBlockSource const&          region,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol:
    // ?playSound@Level@@UEAAXV?$AutomaticID@VDimension@@H@@W4LevelSoundEvent@Legacy@Puv@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
    MCVAPI void playSound(
        DimensionType                           dimension,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data,
        struct ActorDefinitionIdentifier const& entityType,
        bool                                    isBabyMob,
        bool                                    isGlobal
    );

    // symbol: ?potionSplash@Level@@UEAAXAEBVVec3@@AEBVColor@mce@@_N@Z
    MCVAPI void potionSplash(class Vec3 const& pos, class mce::Color const& color, bool instantaneousEffect);

    // symbol: ?queueEntityDestruction@Level@@UEAAXV?$OwnerPtr@VEntityContext@@@@@Z
    MCVAPI void queueEntityDestruction(class OwnerPtr<class EntityContext>);

    // symbol: ?registerTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
    MCVAPI void registerTemporaryPointer(class _TickPtr& ptr);

    // symbol: ?removeActorAndTakeEntity@Level@@UEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtr<class EntityContext> removeActorAndTakeEntity(class WeakEntityRef weakEntity);

    // symbol: ?removeActorFromWorldAndTakeEntity@Level@@UEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtr<class EntityContext> removeActorFromWorldAndTakeEntity(class WeakEntityRef weakEntity);

    // symbol: ?removeBlockSourceFromValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource* blockSource);

    // symbol: ?removeDisplayEntity@Level@@UEAAXVWeakEntityRef@@@Z
    MCVAPI void removeDisplayEntity(class WeakEntityRef);

    // symbol: ?removeEntity@Level@@UEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@@Z
    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class WeakEntityRef weakEntity);

    // symbol: ?removeEntity@Level@@UEAA?AV?$OwnerPtr@VEntityContext@@@@AEAVActor@@@Z
    MCVAPI class OwnerPtr<class EntityContext> removeEntity(class Actor& actor);

    // symbol: ?removeListener@Level@@UEAAXAEAVLevelListener@@@Z
    MCVAPI void removeListener(class LevelListener& listener);

    // symbol: ?requestMapInfo@Level@@UEAAXUActorUniqueID@@_N@Z
    MCVAPI void requestMapInfo(struct ActorUniqueID uuid, bool forceUpdate);

    // symbol: ?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@$$QEAVChangeDimensionRequest@@@Z
    MCVAPI void requestPlayerChangeDimension(class Player&, class ChangeDimensionRequest&&);

    // symbol: ?requestTimedStorageDeferment@Level@@UEAA?AV?$shared_ptr@PEAX@std@@XZ
    MCVAPI std::shared_ptr<void*> requestTimedStorageDeferment();

    // symbol: ?resumePlayer@Level@@UEAAXAEAVPlayer@@@Z
    MCVAPI void resumePlayer(class Player& player);

    // symbol: ?runCommand@Level@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
    MCVAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    // symbol:
    // ?runCommand@Level@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
    MCVAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    // symbol: ?save@Level@@UEAAXXZ
    MCVAPI void save();

    // symbol: ?saveGameData@Level@@UEAAXXZ
    MCVAPI void saveGameData();

    // symbol: ?saveLevelData@Level@@UEAAXXZ
    MCVAPI void saveLevelData();

    // symbol: ?sendAllPlayerAbilities@Level@@UEAAXAEBVPlayer@@@Z
    MCVAPI void sendAllPlayerAbilities(class Player const& playerReference);

    // symbol: ?sendServerLegacyParticle@Level@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCVAPI void sendServerLegacyParticle(::ParticleType id, class Vec3 const& pos, class Vec3 const& dir, int data);

    // symbol: ?setCommandsEnabled@Level@@UEAAX_N@Z
    MCVAPI void setCommandsEnabled(bool commandsEnabled);

    // symbol: ?setDefaultGameType@Level@@UEAAXW4GameType@@@Z
    MCVAPI void setDefaultGameType(::GameType gameType);

    // symbol: ?setDefaultSpawn@Level@@UEAAXAEBVBlockPos@@@Z
    MCVAPI void setDefaultSpawn(class BlockPos const& spawnPos);

    // symbol: ?setDifficulty@Level@@UEAAXW4Difficulty@@@Z
    MCVAPI void setDifficulty(::Difficulty difficulty);

    // symbol: ?setDisablePlayerInteractions@Level@@UEAAX_N@Z
    MCVAPI void setDisablePlayerInteractions(bool disable);

    // symbol: ?setEducationLevelSettings@Level@@UEAAXUEducationLevelSettings@@@Z
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings settings);

    // symbol: ?setFinishedInitializing@Level@@UEAAXXZ
    MCVAPI void setFinishedInitializing();

    // symbol: ?setHasLockedBehaviorPack@Level@@UEAAX_N@Z
    MCVAPI void setHasLockedBehaviorPack(bool hasLocked);

    // symbol: ?setHasLockedResourcePack@Level@@UEAAX_N@Z
    MCVAPI void setHasLockedResourcePack(bool hasLocked);

    // symbol: ?setImmersiveReaderString@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setImmersiveReaderString(std::string newString);

    // symbol: ?setIsExporting@Level@@UEAAX_N@Z
    MCVAPI void setIsExporting(bool IsExporting);

    // symbol: ?setLANBroadcast@Level@@UEAAX_N@Z
    MCVAPI void setLANBroadcast(bool broadcast);

    // symbol: ?setLANBroadcastIntent@Level@@UEAAX_N@Z
    MCVAPI void setLANBroadcastIntent(bool broadcast);

    // symbol: ?setLevelId@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setLevelId(std::string LevelId);

    // symbol: ?setMsaGamertagsOnly@Level@@UEAAX_N@Z
    MCVAPI void setMsaGamertagsOnly(bool msaGamertagsOnly);

    // symbol: ?setMultiplayerGame@Level@@UEAAX_N@Z
    MCVAPI void setMultiplayerGame(bool multiplayerGame);

    // symbol: ?setMultiplayerGameIntent@Level@@UEAAX_N@Z
    MCVAPI void setMultiplayerGameIntent(bool multiplayerGame);

    // symbol: ?setNetEventCallback@Level@@UEAAXV?$NonOwnerPointer@VNetEventCallback@@@Bedrock@@@Z
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback> val);

    // symbol: ?setPacketSender@Level@@UEAAXPEAVPacketSender@@@Z
    MCVAPI void setPacketSender(class PacketSender* val);

    // symbol: ?setPlatformBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setPlatformBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setPlayerAbilities@Level@@UEAAXAEBUActorUniqueID@@AEBVLayeredAbilities@@@Z
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const& playerId, class LayeredAbilities const& abilities);

    // symbol: ?setPlayerMovementSettings@Level@@UEAAXAEBUPlayerMovementSettings@@@Z
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const& settings);

    // symbol: ?setSimPaused@Level@@UEAAX_N@Z
    MCVAPI void setSimPaused(bool value);

    // symbol: ?setSleepStatus@Level@@UEAAXAEBUPlayerSleepStatus@@@Z
    MCVAPI void setSleepStatus(struct PlayerSleepStatus const& status);

    // symbol: ?setTime@Level@@UEAAXH@Z
    MCVAPI void setTime(int time);

    // symbol: ?setWorldTemplateOptionsUnlocked@Level@@UEAAXXZ
    MCVAPI void setWorldTemplateOptionsUnlocked();

    // symbol: ?setXBLBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    // symbol: ?setXBLBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
    MCVAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

    // symbol:
    // ?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z
    MCVAPI void
    spawnParticleEffect(std::string const& effectName, class Vec3 const& spawnLocation, class Dimension* dimension);

    // symbol: ?startLeaveGame@Level@@UEAAXXZ
    MCVAPI void startLeaveGame();

    // symbol: ?suspendAndSave@Level@@UEAAXXZ
    MCVAPI void suspendAndSave();

    // symbol: ?suspendPlayer@Level@@UEAAXAEAVPlayer@@@Z
    MCVAPI void suspendPlayer(class Player& player);

    // symbol: ?takeEntity@Level@@UEAA?AV?$OwnerPtr@VEntityContext@@@@VWeakEntityRef@@AEAVLevelChunk@@@Z
    MCVAPI class OwnerPtr<class EntityContext> takeEntity(class WeakEntityRef weakEntity, class LevelChunk& lc);

    // symbol: ?takePicture@Level@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    MCVAPI void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    // symbol: ?tick@Level@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ?tickEntities@Level@@UEAAXXZ
    MCVAPI void tickEntities();

    // symbol: ?tickEntitySystems@Level@@UEAAXXZ
    MCVAPI void tickEntitySystems();

    // symbol: ?tryGetScoreboard@Level@@UEAAPEAVScoreboard@@XZ
    MCVAPI class Scoreboard* tryGetScoreboard();

    // symbol: ?unregisterTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
    MCVAPI void unregisterTemporaryPointer(class _TickPtr& ptr);

    // symbol: ?updateSleepingPlayerList@Level@@UEAAXXZ
    MCVAPI void updateSleepingPlayerList();

    // symbol: ?updateWeather@Level@@UEAAXMHMH@Z
    MCVAPI void updateWeather(float rainLevel, int rainTime, float lightningLevel, int lightningTime);

    // symbol: ?upgradeStorageVersion@Level@@UEAAXW4StorageVersion@@@Z
    MCVAPI void upgradeStorageVersion(::StorageVersion v);

    // symbol: ?use3DBiomeMaps@Level@@UEBA_NXZ
    MCVAPI bool use3DBiomeMaps() const;

    // symbol: ?useMsaGamertagsOnly@Level@@UEBA_NXZ
    MCVAPI bool useMsaGamertagsOnly() const;

    // symbol: ??1Level@@UEAA@XZ
    MCVAPI ~Level();

    // symbol:
    // ??0Level@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$OwnerPtr@VLevelStorage@@@@AEAVIMinecraftEventing@@_NW4SubClientId@@AEAVScheduler@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVResourcePackManager@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRef@VEntityContext@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@std@@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@std@@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@std@@33AEBUNetworkPermissions@@V?$optional@VDimensionDefinitionGroup@@@std@@@Z
    MCAPI
    Level(Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const&, class OwnerPtr<class LevelStorage>, class IMinecraftEventing&, bool, ::SubClientId, class Scheduler&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const&, class WeakRef<class EntityContext>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, std::weak_ptr<class BlockTypeRegistry>, bool, bool, struct NetworkPermissions const&, std::optional<class DimensionDefinitionGroup>);

    // symbol: ?canChangeDimension@Level@@QEAA_NAEAVActor@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI bool canChangeDimension(class Actor& actor, DimensionType toId);

    // symbol: ?earlyShutdownMainthread@Level@@QEAAXXZ
    MCAPI void earlyShutdownMainthread();

    // symbol: ?getActorManager@Level@@QEAA?AV?$not_null@V?$StackRefResult@VActorManager@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class ActorManager>> getActorManager();

    // symbol: ?getAutonomousActorManager@Level@@QEBAAEBVAutonomousActorManager@@XZ
    MCAPI class AutonomousActorManager const& getAutonomousActorManager() const;

    // symbol:
    // ?getEventCoordinatorManager@Level@@QEAA?AV?$not_null@V?$StackRefResult@VEventCoordinatorManager@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class EventCoordinatorManager>> getEventCoordinatorManager();

    // symbol: ?getLevelSeed64@Level@@QEBA?AVLevelSeed64@@XZ
    MCAPI class LevelSeed64 getLevelSeed64() const;

    // symbol: ?getNpcDialogueStorage@Level@@QEAAPEAVNpcDialogueStorage@@XZ
    MCAPI class NpcDialogueStorage* getNpcDialogueStorage();

    // symbol: ?getServerLevelEventCoordinator@Level@@QEAAAEAVServerLevelEventCoordinator@@XZ
    MCAPI class ServerLevelEventCoordinator& getServerLevelEventCoordinator();

    // symbol: ?getTickDeltaTime@Level@@QEBANXZ
    MCAPI double getTickDeltaTime() const;

    // symbol:
    // ?isFree@Level@@QEAA?AW4NodeType@@AEAVNavigationComponent@@AEAVActor@@AEBVBlockPos@@22W4CanJumpIntoNode@@@Z
    MCAPI ::NodeType isFree(
        class NavigationComponent& navigation,
        class Actor&               entity,
        class BlockPos const&      lastPathPos,
        class BlockPos const&      testPos,
        class BlockPos const&      size,
        ::CanJumpIntoNode          jumpIntoNode
    );

    // symbol: ?setPerformanceTelemetryPeriodicCallback@Level@@QEAAXV?$function@$$A6AXXZ@std@@@Z
    MCAPI void setPerformanceTelemetryPeriodicCallback(std::function<void()> callback);

    // symbol: ?transferActorToOwnedEntityLimbo@Level@@QEAAXAEBVPlayer@@AEAVActor@@@Z
    MCAPI void transferActorToOwnedEntityLimbo(class Player const& player, class Actor& actor);

    // symbol: ?createRandomSeed@Level@@SAIXZ
    MCAPI static uint createRandomSeed();

    // symbol: ?isUsableLevel@Level@@SA_NAEBVILevel@@@Z
    MCAPI static bool isUsableLevel(class ILevel const& level);

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

    // symbol: ?_getGameplayUserManager@Level@@IEBAAEBVGameplayUserManager@@XZ
    MCAPI class GameplayUserManager const& _getGameplayUserManager() const;

    // symbol:
    // ?_getGameplayUserManagerStackRef@Level@@IEAA?AV?$not_null@V?$StackRefResult@VGameplayUserManager@@@@@gsl@@XZ
    MCAPI gsl::not_null<class StackRefResult<class GameplayUserManager>> _getGameplayUserManagerStackRef();

    // symbol: ?_getLevelChunkEventManagerConnector@Level@@IEAAAEAVILevelChunkEventManagerConnector@@XZ
    MCAPI class ILevelChunkEventManagerConnector& _getLevelChunkEventManagerConnector();

    // symbol: ?_getLevelStorageManager@Level@@IEAAPEAVLevelStorageManager@@XZ
    MCAPI class LevelStorageManager* _getLevelStorageManager();

    // symbol: ?_getPlayerDimensionTransferConnector@Level@@IEAAAEAVIPlayerDimensionTransferConnector@@XZ
    MCAPI class IPlayerDimensionTransferConnector& _getPlayerDimensionTransferConnector();

    // symbol: ?_getPlayerListManager@Level@@IEAAAEAVPlayerListManager@@XZ
    MCAPI class PlayerListManager& _getPlayerListManager();

    // symbol: ?_getTickTimeManager@Level@@IEAAAEAVTickTimeManager@@XZ
    MCAPI class TickTimeManager& _getTickTimeManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_checkBlockSourceValidity@Level@@AEAAXXZ
    MCAPI void _checkBlockSourceValidity();

    // symbol: ?_createPhotoManager@Level@@AEAA?AV?$OwnerPtr@VPhotoManager@@@@XZ
    MCAPI class OwnerPtr<class PhotoManager> _createPhotoManager();

    // symbol: ?_initializeActorManager@Level@@AEAAXXZ
    MCAPI void _initializeActorManager();

    // symbol: ?_initializeBiomeManager@Level@@AEAAXXZ
    MCAPI void _initializeBiomeManager();

    // symbol: ?_initializeBlockDestroyer@Level@@AEAAXXZ
    MCAPI void _initializeBlockDestroyer();

    // symbol: ?_initializeGameplayUserManager@Level@@AEAAXXZ
    MCAPI void _initializeGameplayUserManager();

    // symbol: ?_initializeLevelChunkEventManager@Level@@AEAAXXZ
    MCAPI void _initializeLevelChunkEventManager();

    // symbol: ?_initializeLevelEventManager@Level@@AEAAXXZ
    MCAPI void _initializeLevelEventManager();

    // symbol: ?_initializeLevelStorageManager@Level@@AEAAXXZ
    MCAPI void _initializeLevelStorageManager();

    // symbol: ?_initializeParticleProvider@Level@@AEAAXXZ
    MCAPI void _initializeParticleProvider();

    // symbol: ?_onAddBreakingItemParticleEffect@Level@@AEAAXAEBVVec3@@W4ParticleType@@AEBUResolvedItemIconInfo@@@Z
    MCAPI void _onAddBreakingItemParticleEffect(class Vec3 const&, ::ParticleType, struct ResolvedItemIconInfo const&);

    // symbol: ?_onAddTerrainParticleEffect@Level@@AEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCAPI void
    _onAddTerrainParticleEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?_onAddTerrainSlideEffect@Level@@AEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
    MCAPI void
    _onAddTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float);

    // symbol: ?_onAnyGameplayUsersRemoved@Level@@AEAAXXZ
    MCAPI void _onAnyGameplayUsersRemoved();

    // symbol: ?_onChunkDiscarded@Level@@AEAAXAEAVLevelChunk@@@Z
    MCAPI void _onChunkDiscarded(class LevelChunk&);

    // symbol: ?_onChunkLoaded@Level@@AEAAXAEAVChunkSource@@AEAVLevelChunk@@H@Z
    MCAPI void _onChunkLoaded(class ChunkSource&, class LevelChunk&, int);

    // symbol: ?_onChunkReloaded@Level@@AEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
    MCAPI void _onChunkReloaded(class ChunkSource&, class LevelChunk&);

    // symbol: ?_onGameplayUserAdded@Level@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    // symbol: ?_onGameplayUserRemoved@Level@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    // symbol: ?_onLevelEventCompoundTag@Level@@AEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    MCAPI void _onLevelEventCompoundTag(::LevelEvent, class CompoundTag const&);

    // symbol: ?_onLevelEventData@Level@@AEAAXW4LevelEvent@@AEBVVec3@@H@Z
    MCAPI void _onLevelEventData(::LevelEvent, class Vec3 const&, int);

    // symbol: ?_onPictureTaken@Level@@AEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    MCAPI void _onPictureTaken(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // symbol: ?_onRemoveActorEntityReferences@Level@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    // symbol: ?_onSaveLevelData@Level@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _onSaveLevelData(class LevelStorage& levelStorage);

    // symbol: ?_onSendServerLegacyParticle@Level@@AEAAXW4ParticleType@@AEBVVec3@@1H@Z
    MCAPI void _onSendServerLegacyParticle(::ParticleType, class Vec3 const&, class Vec3 const&, int);

    // symbol: ?_saveSomeChunks@Level@@AEAAXXZ
    MCAPI void _saveSomeChunks();

    // symbol:
    // ?_createLevelStorageManager@Level@@CA?AV?$unique_ptr@VLevelStorageManager@@U?$default_delete@VLevelStorageManager@@@std@@@std@@V?$OwnerPtr@VLevelStorage@@@@AEAVScheduler@@@Z
    MCAPI static std::unique_ptr<class LevelStorageManager>
    _createLevelStorageManager(class OwnerPtr<class LevelStorage>, class Scheduler&);

    // symbol: ?_onPollSaveGameStatistics@Level@@CAXAEAVIMinecraftEventing@@AEAVLevelStorage@@@Z
    MCAPI static void _onPollSaveGameStatistics(class IMinecraftEventing&, class LevelStorage&);

    // NOLINTEND
};
