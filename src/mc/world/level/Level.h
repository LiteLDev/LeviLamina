#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct ISharedController; }
namespace PositionTrackingDB { class PositionTrackingDBClient; }
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace Social { enum class GamePublishSetting; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class Level {

public:
    // prevent constructor by default
    Level& operator=(Level const&) = delete;
    Level(Level const&)            = delete;
    Level()                        = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVEL
    /**
     * @symbol
     * ?_clientHandleAddOwnedEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId); // NOLINT
    /**
     * @symbol
     * ?_clientHandleAddWeakRefEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits>
        _clientHandleAddWeakRefEntity(class EntityNetId, class WeakRefT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?_clientHandleRemoveOwnedEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveOwnedEntity(class EntityNetId); // NOLINT
    /**
     * @symbol ?_clientHandleRemoveWeakRefEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveWeakRefEntity(class EntityNetId); // NOLINT
    /**
     * @symbol ?_destroyEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void _destroyEffect(class BlockPos const&, class Block const&, int); // NOLINT
    /**
     * @symbol ?_getPlayerDeathManager\@Level\@\@MEAAPEAVPlayerDeathManager\@\@XZ
     */
    MCVAPI class PlayerDeathManager* _getPlayerDeathManager(); // NOLINT
    /**
     * @symbol ?_localPlayerChangedDimension\@Level\@\@MEAAXXZ
     */
    MCVAPI void _localPlayerChangedDimension(); // NOLINT
    /**
     * @symbol ?_onPlayerDimensionChange\@Level\@\@MEAAXXZ
     */
    MCVAPI void _onPlayerDimensionChange(); // NOLINT
    /**
     * @symbol ?_subTick\@Level\@\@MEAAXXZ
     */
    MCVAPI void _subTick(); // NOLINT
    /**
     * @symbol
     * ?addAutonomousEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor* addAutonomousEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?addBlockSourceForValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource*); // NOLINT
    /**
     * @symbol
     * ?addBreakingItemParticleEffect\@Level\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void
    addBreakingItemParticleEffect(class Vec3 const&, enum class ParticleType, struct ResolvedItemIconInfo const&); // NOLINT
    /**
     * @symbol ?addChunkViewTracker\@Level\@\@UEAAXV?$weak_ptr\@VChunkViewSource\@\@\@std\@\@\@Z
     */
    MCVAPI void addChunkViewTracker(class std::weak_ptr<class ChunkViewSource>); // NOLINT
    /**
     * @symbol ?addDisplayEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor* addDisplayEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?addEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor* addEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?addGlobalEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor* addGlobalEntity(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?addListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void addListener(class LevelListener&); // NOLINT
    /**
     * @symbol ?addParticle\@Level\@\@UEAAPEAVParticle\@\@W4ParticleType\@\@AEBVVec3\@\@1HPEBVCompoundTag\@\@_N\@Z
     */
    MCVAPI class Particle* addParticle(
        enum class ParticleType,
        class Vec3 const&,
        class Vec3 const&,
        int,
        class CompoundTag const*,
        bool
    ); // NOLINT
    /**
     * @symbol ?addParticleEffect\@Level\@\@UEAAXAEBVHashedString\@\@AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void
    addParticleEffect(class HashedString const&, class Vec3 const&, class MolangVariableMap const&); // NOLINT
    /**
     * @symbol ?addTerrainParticleEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainParticleEffect(
        class BlockPos const&,
        class Block const&,
        class Vec3 const&,
        float,
        float,
        float
    ); // NOLINT
    /**
     * @symbol ?addTerrainSlideEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void
    addTerrainSlideEffect(class BlockPos const&, class Block const&, class Vec3 const&, float, float, float); // NOLINT
    /**
     * @symbol
     * ?addTickingAreaList\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$shared_ptr\@VTickingAreaList\@\@\@std\@\@\@Z
     */
    MCVAPI void
    addTickingAreaList(class AutomaticID<class Dimension, int>, class std::shared_ptr<class TickingAreaList> const&); // NOLINT
    /**
     * @symbol ?addUser\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void addUser(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?animateTick\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void animateTick(class Actor&); // NOLINT
    /**
     * @symbol ?asLevel\@Level\@\@UEAAPEAV1\@XZ
     */
    MCVAPI class Level* asLevel(); // NOLINT
    /**
     * @symbol ?blockNetworkIdsAreHashes\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool blockNetworkIdsAreHashes(); // NOLINT
    /**
     * @symbol ?broadcastActorEvent\@Level\@\@UEBAXAEAVActor\@\@W4ActorEvent\@\@H\@Z
     */
    MCVAPI void broadcastActorEvent(class Actor&, enum class ActorEvent, int) const; // NOLINT
    /**
     * @symbol
     * ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@PEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void
    broadcastLevelEvent(enum class LevelEvent, class CompoundTag const&, class UserEntityIdentifierComponent const*); // NOLINT
    /**
     * @symbol ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@HPEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void
    broadcastLevelEvent(enum class LevelEvent, class Vec3 const&, int, class UserEntityIdentifierComponent const*); // NOLINT
    /**
     * @symbol ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource&, enum class LevelEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI void
    broadcastLocalEvent(class BlockSource&, enum class LevelEvent, class Vec3 const&, class Block const&); // NOLINT
    /**
     * @symbol
     * ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(
        class BlockSource&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void broadcastSoundEvent(
        class BlockSource&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?broadcastSoundEvent\@Level\@\@UEAAXAEAVDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(
        class Dimension&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?canUseSkin\@Level\@\@UEBA_NAEBVSerializedSkin\@\@AEBVNetworkIdentifier\@\@AEBVUUID\@mce\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCVAPI bool
    canUseSkin(class SerializedSkin const&, class NetworkIdentifier const&, class mce::UUID const&, struct ActorUniqueID const&)
        const; // NOLINT
    /**
     * @symbol ?copyAndLockMap\@Level\@\@UEAA_NUActorUniqueID\@\@0\@Z
     */
    MCVAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?countUsersWithMatchingNetworkId\@Level\@\@UEBAHAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData& createMapSavedData(
        struct ActorUniqueID const&,
        class BlockPos const&,
        class AutomaticID<class Dimension, int>,
        int
    ); // NOLINT
    /**
     * @symbol
     * ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData& createMapSavedData(
        std::vector<struct ActorUniqueID> const&,
        class BlockPos const&,
        class AutomaticID<class Dimension, int>,
        int
    ); // NOLINT
    /**
     * @symbol ?createPhotoStorage\@Level\@\@UEAAXXZ
     */
    MCVAPI void createPhotoStorage(); // NOLINT
    /**
     * @symbol
     * ?decrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void
    decrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&); // NOLINT
    /**
     * @symbol ?denyEffect\@Level\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI void denyEffect(class BlockSource&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?destroyBlock\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI bool destroyBlock(class BlockSource&, class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?digestServerItemComponents\@Level\@\@UEAAXAEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const&); // NOLINT
    /**
     * @symbol ?directTickEntities\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void directTickEntities(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?entityChangeDimension\@Level\@\@UEAAXAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCVAPI void
    entityChangeDimension(class Actor&, class AutomaticID<class Dimension, int>, class std::optional<class Vec3>); // NOLINT
    /**
     * @symbol ?expandMapByID\@Level\@\@UEAA?AUActorUniqueID\@\@U2\@_N\@Z
     */
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool); // NOLINT
    /**
     * @symbol ?explode\@Level\@\@UEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M_N3M3\@Z
     */
    MCVAPI void explode(class BlockSource&, class Actor*, class Vec3 const&, float, bool, bool, float, bool); // NOLINT
    /**
     * @symbol ?explode\@Level\@\@UEAAXAEAVExplosion\@\@\@Z
     */
    MCVAPI void explode(class Explosion&); // NOLINT
    /**
     * @symbol ?extinguishFire\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool extinguishFire(class BlockSource&, class BlockPos const&, unsigned char); // NOLINT
    /**
     * @symbol ?fetchEntity\@Level\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@_N\@Z
     */
    MCVAPI class Actor* fetchEntity(struct ActorUniqueID, bool) const; // NOLINT
    /**
     * @symbol
     * ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@HHHAEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor&, int, int, int, class NavigationComponent&); // NOLINT
    /**
     * @symbol
     * ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@0AEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor&, class Actor&, class NavigationComponent&); // NOLINT
    /**
     * @symbol ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player* findPlayer(class std::function<bool(class Player const&)>) const; // NOLINT
    /**
     * @symbol ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVWeakEntityRef\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player* findPlayer(class std::function<bool(class WeakEntityRef const&)>) const; // NOLINT
    /**
     * @symbol ?flushRunTimeLighting\@Level\@\@UEAAXXZ
     */
    MCVAPI void flushRunTimeLighting(); // NOLINT
    /**
     * @symbol ?forEachDimension\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool(class Dimension&)>); // NOLINT
    /**
     * @symbol ?forEachDimension\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool(class Dimension const&)>) const; // NOLINT
    /**
     * @symbol ?forEachPlayer\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool(class Player const&)>) const; // NOLINT
    /**
     * @symbol ?forEachPlayer\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool(class Player&)>); // NOLINT
    /**
     * @symbol ?forEachUser\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachUser(class std::function<bool(class EntityContext&)>); // NOLINT
    /**
     * @symbol ?forEachUser\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachUser(class std::function<bool(class EntityContext const&)>) const; // NOLINT
    /**
     * @symbol ?forceFlushRemovedPlayers\@Level\@\@UEAAXXZ
     */
    MCVAPI void forceFlushRemovedPlayers(); // NOLINT
    /**
     * @symbol ?forceRemoveEntity\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntity(class Actor&); // NOLINT
    /**
     * @symbol ?forceRemoveEntityfromWorld\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntityfromWorld(class Actor&); // NOLINT
    /**
     * @symbol ?getActivePlayerCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActivePlayerCount() const; // NOLINT
    /**
     * @symbol
     * ?getActiveUsers\@Level\@\@UEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class WeakEntityRef> const& getActiveUsers() const; // NOLINT
    /**
     * @symbol ?getActiveUsersCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActiveUsersCount() const; // NOLINT
    /**
     * @symbol ?getActorAnimationControllerGroup\@Level\@\@UEBAPEAVActorAnimationControllerGroup\@\@XZ
     */
    MCVAPI class ActorAnimationControllerGroup* getActorAnimationControllerGroup() const; // NOLINT
    /**
     * @symbol
     * ?getActorAnimationGroup\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VActorAnimationGroup\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>>
    getActorAnimationGroup() const; // NOLINT
    /**
     * @symbol ?getActorEventCoordinator\@Level\@\@UEAAAEAVActorEventCoordinator\@\@XZ
     */
    MCVAPI class ActorEventCoordinator& getActorEventCoordinator(); // NOLINT
    /**
     * @symbol ?getActorFactory\@Level\@\@UEAAAEAVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory& getActorFactory(); // NOLINT
    /**
     * @symbol ?getActorFactory\@Level\@\@UEBAAEBVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory const& getActorFactory() const; // NOLINT
    /**
     * @symbol ?getActorInfoRegistry\@Level\@\@UEAAPEAVActorInfoRegistry\@\@XZ
     */
    MCVAPI class ActorInfoRegistry* getActorInfoRegistry(); // NOLINT
    /**
     * @symbol ?getActorPropertyGroup\@Level\@\@UEBAAEAVPropertyGroupManager\@\@XZ
     */
    MCVAPI class PropertyGroupManager& getActorPropertyGroup() const; // NOLINT
    /**
     * @symbol ?getAdventureSettings\@Level\@\@UEBAAEBUAdventureSettings\@\@XZ
     */
    MCVAPI struct AdventureSettings const& getAdventureSettings() const; // NOLINT
    /**
     * @symbol ?getAdventureSettings\@Level\@\@UEAAAEAUAdventureSettings\@\@XZ
     */
    MCVAPI struct AdventureSettings& getAdventureSettings(); // NOLINT
    /**
     * @symbol ?getArmorTrimUnloader\@Level\@\@UEAAPEAVArmorTrimUnloader\@\@XZ
     */
    MCVAPI class ArmorTrimUnloader* getArmorTrimUnloader(); // NOLINT
    /**
     * @symbol ?getAutomationBehaviorTreeGroup\@Level\@\@UEBAAEAVAutomationBehaviorTreeGroup\@\@XZ
     */
    MCVAPI class AutomationBehaviorTreeGroup& getAutomationBehaviorTreeGroup() const; // NOLINT
    /**
     * @symbol ?getBehaviorFactory\@Level\@\@UEBAAEAVBehaviorFactory\@\@XZ
     */
    MCVAPI class BehaviorFactory& getBehaviorFactory() const; // NOLINT
    /**
     * @symbol ?getBiomeComponentFactory\@Level\@\@UEAAAEAVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory& getBiomeComponentFactory(); // NOLINT
    /**
     * @symbol ?getBiomeComponentFactory\@Level\@\@UEBAAEBVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory const& getBiomeComponentFactory() const; // NOLINT
    /**
     * @symbol ?getBiomeManager\@Level\@\@UEAAAEAVBiomeManager\@\@XZ
     */
    MCVAPI class BiomeManager& getBiomeManager(); // NOLINT
    /**
     * @symbol ?getBiomeManager\@Level\@\@UEBAAEBVBiomeManager\@\@XZ
     */
    MCVAPI class BiomeManager const& getBiomeManager() const; // NOLINT
    /**
     * @symbol ?getBiomeRegistry\@Level\@\@UEAAAEAVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry& getBiomeRegistry(); // NOLINT
    /**
     * @symbol ?getBiomeRegistry\@Level\@\@UEBAAEBVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry const& getBiomeRegistry() const; // NOLINT
    /**
     * @symbol ?getBlockComponentFactory\@Level\@\@UEBAAEBVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory const& getBlockComponentFactory() const; // NOLINT
    /**
     * @symbol ?getBlockComponentFactory\@Level\@\@UEAAAEAVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory& getBlockComponentFactory(); // NOLINT
    /**
     * @symbol ?getBlockDefinitions\@Level\@\@UEBAPEAVBlockDefinitionGroup\@\@XZ
     */
    MCVAPI class BlockDefinitionGroup* getBlockDefinitions() const; // NOLINT
    /**
     * @symbol ?getBlockEventCoordinator\@Level\@\@UEAAAEAVBlockEventCoordinator\@\@XZ
     */
    MCVAPI class BlockEventCoordinator& getBlockEventCoordinator(); // NOLINT
    /**
     * @symbol ?getBlockPalette\@Level\@\@UEAAAEAVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette& getBlockPalette(); // NOLINT
    /**
     * @symbol ?getBlockPalette\@Level\@\@UEBAAEBVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette const& getBlockPalette() const; // NOLINT
    /**
     * @symbol ?getBlockReducer\@Level\@\@UEBAPEAVBlockReducer\@\@XZ
     */
    MCVAPI class BlockReducer* getBlockReducer() const; // NOLINT
    /**
     * @symbol ?getBlockRegistry\@Level\@\@UEBA?AV?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const; // NOLINT
    /**
     * @symbol
     * ?getBossEventSubscriptionManager\@Level\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VBossEventSubscriptionManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class BossEventSubscriptionManager>>
    getBossEventSubscriptionManager(); // NOLINT
    /**
     * @symbol ?getCameraPresets\@Level\@\@UEAAAEAVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets& getCameraPresets(); // NOLINT
    /**
     * @symbol ?getCameraPresets\@Level\@\@UEBAAEBVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets const& getCameraPresets() const; // NOLINT
    /**
     * @symbol ?getCapabilities\@Level\@\@UEBAAEBUISharedController\@PlayerCapabilities\@\@XZ
     */
    MCVAPI struct PlayerCapabilities::ISharedController const& getCapabilities() const; // NOLINT
    /**
     * @symbol ?getChunkTickRange\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getChunkTickRange() const; // NOLINT
    /**
     * @symbol ?getChunkTickRangeManager\@Level\@\@UEBAAEBVChunkTickRangeManager\@\@XZ
     */
    MCVAPI class ChunkTickRangeManager const& getChunkTickRangeManager() const; // NOLINT
    /**
     * @symbol ?getClientPlayerEventCoordinator\@Level\@\@UEAAAEAVClientPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ClientPlayerEventCoordinator& getClientPlayerEventCoordinator(); // NOLINT
    /**
     * @symbol ?getClientResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager* getClientResourcePackManager() const; // NOLINT
    /**
     * @symbol
     * ?getClientTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const& getClientTickingOffsets() const; // NOLINT
    /**
     * @symbol ?getCurrentServerTick\@Level\@\@UEBA?BUTick\@\@XZ
     */
    MCVAPI struct Tick const getCurrentServerTick() const; // NOLINT
    /**
     * @symbol ?getCurrentTick\@Level\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const& getCurrentTick() const; // NOLINT
    /**
     * @symbol ?getDefaultAbilities\@Level\@\@UEAAAEAVAbilities\@\@XZ
     */
    MCVAPI class Abilities& getDefaultAbilities(); // NOLINT
    /**
     * @symbol ?getDefaultGameType\@Level\@\@UEBA?AW4GameType\@\@XZ
     */
    MCVAPI enum class GameType getDefaultGameType() const; // NOLINT
    /**
     * @symbol ?getDefaultPermissions\@Level\@\@UEAAAEAVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler& getDefaultPermissions(); // NOLINT
    /**
     * @symbol ?getDefaultPermissions\@Level\@\@UEBAAEBVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler const& getDefaultPermissions() const; // NOLINT
    /**
     * @symbol ?getDefaultSpawn\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const& getDefaultSpawn() const; // NOLINT
    /**
     * @symbol ?getDifficulty\@Level\@\@UEBA?AW4Difficulty\@\@XZ
     */
    MCVAPI enum class Difficulty getDifficulty() const; // NOLINT
    /**
     * @symbol
     * ?getDimension\@Level\@\@UEBA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>>
        getDimension(class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol ?getDimensionConversionData\@Level\@\@UEBA?AVDimensionConversionData\@\@XZ
     */
    MCVAPI class DimensionConversionData getDimensionConversionData() const; // NOLINT
    /**
     * @symbol
     * ?getDimensionFactory\@Level\@\@UEBAAEBV?$OwnerPtrFactory\@VDimension\@\@AEAVILevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&> const&
    getDimensionFactory() const; // NOLINT
    /**
     * @symbol
     * ?getDimensionFactory\@Level\@\@UEAAAEAV?$OwnerPtrFactory\@VDimension\@\@AEAVILevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class ILevel&, class Scheduler&>& getDimensionFactory(); // NOLINT
    /**
     * @symbol ?getDimensionManager\@Level\@\@UEBAAEBVDimensionManager\@\@XZ
     */
    MCVAPI class DimensionManager const& getDimensionManager() const; // NOLINT
    /**
     * @symbol ?getDimensionManager\@Level\@\@UEAAAEAVDimensionManager\@\@XZ
     */
    MCVAPI class DimensionManager& getDimensionManager(); // NOLINT
    /**
     * @symbol ?getDisablePlayerInteractions\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getDisablePlayerInteractions() const; // NOLINT
    /**
     * @symbol ?getEducationLevelSettings\@Level\@\@UEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const; // NOLINT
    /**
     * @symbol
     * ?getEntities\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getEntities() const; // NOLINT
    /**
     * @symbol ?getEntityDefinitions\@Level\@\@UEBAPEAVActorDefinitionGroup\@\@XZ
     */
    MCVAPI class ActorDefinitionGroup* getEntityDefinitions() const; // NOLINT
    /**
     * @symbol ?getEntityRegistry\@Level\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const; // NOLINT
    /**
     * @symbol ?getEntityRegistry\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry(); // NOLINT
    /**
     * @symbol ?getEntitySystems\@Level\@\@UEAAAEAVEntitySystems\@\@XZ
     */
    MCVAPI class EntitySystems& getEntitySystems(); // NOLINT
    /**
     * @symbol ?getEventing\@Level\@\@UEAAAEAVIMinecraftEventing\@\@XZ
     */
    MCVAPI class IMinecraftEventing& getEventing(); // NOLINT
    /**
     * @symbol ?getFeatureRegistry\@Level\@\@UEAAAEAVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry& getFeatureRegistry(); // NOLINT
    /**
     * @symbol ?getFeatureRegistry\@Level\@\@UEBAAEBVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry const& getFeatureRegistry() const; // NOLINT
    /**
     * @symbol ?getFeatureTypeFactory\@Level\@\@UEAAAEAVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory& getFeatureTypeFactory(); // NOLINT
    /**
     * @symbol ?getFeatureTypeFactory\@Level\@\@UEBAAEBVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory const& getFeatureTypeFactory() const; // NOLINT
    /**
     * @symbol ?getGameRules\@Level\@\@UEBAAEBVGameRules\@\@XZ
     */
    MCVAPI class GameRules const& getGameRules() const; // NOLINT
    /**
     * @symbol ?getGameRules\@Level\@\@UEAAAEAVGameRules\@\@XZ
     */
    MCVAPI class GameRules& getGameRules(); // NOLINT
    /**
     * @symbol ?getHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult& getHitResult(); // NOLINT
    /**
     * @symbol ?getIOTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup& getIOTasksGroup(); // NOLINT
    /**
     * @symbol
     * ?getImmersiveReaderString\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const& getImmersiveReaderString() const; // NOLINT
    /**
     * @symbol ?getInternalComponentRegistry\@Level\@\@UEBAAEAVInternalComponentRegistry\@\@XZ
     */
    MCVAPI class InternalComponentRegistry& getInternalComponentRegistry() const; // NOLINT
    /**
     * @symbol ?getItemEventCoordinator\@Level\@\@UEAAAEAVItemEventCoordinator\@\@XZ
     */
    MCVAPI class ItemEventCoordinator& getItemEventCoordinator(); // NOLINT
    /**
     * @symbol ?getItemRegistry\@Level\@\@UEBA?AVItemRegistryRef\@\@XZ
     */
    MCVAPI class ItemRegistryRef getItemRegistry() const; // NOLINT
    /**
     * @symbol ?getJigsawStructureRegistry\@Level\@\@UEBAAEBVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry const& getJigsawStructureRegistry() const; // NOLINT
    /**
     * @symbol ?getJigsawStructureRegistry\@Level\@\@UEAAAEAVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry& getJigsawStructureRegistry(); // NOLINT
    /**
     * @symbol ?getLANBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcast() const; // NOLINT
    /**
     * @symbol ?getLANBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getLastOrDefaultSpawnDimensionId\@Level\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@V2\@\@Z
     */
    MCVAPI class AutomaticID<class Dimension, int>
        getLastOrDefaultSpawnDimensionId(class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol ?getLevelChunkMetaDataManager\@Level\@\@UEAAPEAVLevelChunkMetaDataManager\@\@XZ
     */
    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager(); // NOLINT
    /**
     * @symbol ?getLevelData\@Level\@\@UEAAAEAVLevelData\@\@XZ
     */
    MCVAPI class LevelData& getLevelData(); // NOLINT
    /**
     * @symbol ?getLevelData\@Level\@\@UEBAAEBVLevelData\@\@XZ
     */
    MCVAPI class LevelData const& getLevelData() const; // NOLINT
    /**
     * @symbol ?getLevelEntity\@Level\@\@UEAA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct EntityRefTraits> getLevelEntity(); // NOLINT
    /**
     * @symbol ?getLevelEventCoordinator\@Level\@\@UEAAAEAVLevelEventCoordinator\@\@XZ
     */
    MCVAPI class LevelEventCoordinator& getLevelEventCoordinator(); // NOLINT
    /**
     * @symbol ?getLevelId\@Level\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLevelId() const; // NOLINT
    /**
     * @symbol ?getLevelStorage\@Level\@\@UEAAAEAVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage& getLevelStorage(); // NOLINT
    /**
     * @symbol ?getLevelStorage\@Level\@\@UEBAAEBVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage const& getLevelStorage() const; // NOLINT
    /**
     * @symbol
     * ?getLightTextureImageBuilderFactory\@Level\@\@UEAAAEAV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&>&
    getLightTextureImageBuilderFactory(); // NOLINT
    /**
     * @symbol
     * ?getLightTextureImageBuilderFactory\@Level\@\@UEBAAEBV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level&, class Scheduler&> const&
    getLightTextureImageBuilderFactory() const; // NOLINT
    /**
     * @symbol ?getLiquidHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult& getLiquidHitResult(); // NOLINT
    /**
     * @symbol ?getLootTables\@Level\@\@UEAAAEAVLootTables\@\@XZ
     */
    MCVAPI class LootTables& getLootTables(); // NOLINT
    /**
     * @symbol ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@PEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData* getMapSavedData(class CompoundTag const*); // NOLINT
    /**
     * @symbol ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class MapItemSavedData* getMapSavedData(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?getMob\@Level\@\@UEBAPEAVMob\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Mob* getMob(struct ActorUniqueID) const; // NOLINT
    /**
     * @symbol ?getMultiplayerGameIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getMultiplayerGameIntent() const; // NOLINT
    /**
     * @symbol ?getNetEventCallback\@Level\@\@UEBA?AV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const; // NOLINT
    /**
     * @symbol ?getNetherScale\@Level\@\@UEBAHXZ
     */
    MCVAPI int getNetherScale() const; // NOLINT
    /**
     * @symbol ?getNewUniqueID\@Level\@\@UEAA?AUActorUniqueID\@\@XZ
     */
    MCVAPI struct ActorUniqueID getNewUniqueID(); // NOLINT
    /**
     * @symbol ?getNextRuntimeID\@Level\@\@UEAA?AVActorRuntimeID\@\@XZ
     */
    MCVAPI class ActorRuntimeID getNextRuntimeID(); // NOLINT
    /**
     * @symbol ?getNumRemotePlayers\@Level\@\@UEAAHXZ
     */
    MCVAPI int getNumRemotePlayers(); // NOLINT
    /**
     * @symbol
     * ?getOrCreateDimension\@Level\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>>
        getOrCreateDimension(class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?getPacketSender\@Level\@\@UEBAPEAVPacketSender\@\@XZ
     */
    MCVAPI class PacketSender* getPacketSender() const; // NOLINT
    /**
     * @symbol
     * ?getPauseManager\@Level\@\@UEBA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@$$CBVPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>> getPauseManager() const; // NOLINT
    /**
     * @symbol ?getPauseManager\@Level\@\@UEAA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@VPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager>> getPauseManager(); // NOLINT
    /**
     * @symbol ?getPhotoStorage\@Level\@\@UEAAAEAVPhotoStorage\@\@XZ
     */
    MCVAPI class PhotoStorage& getPhotoStorage(); // NOLINT
    /**
     * @symbol ?getPlatformBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getPlatformBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const; // NOLINT
    /**
     * @symbol
     * ?getPlatformPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player* getPlatformPlayer(std::string const&) const; // NOLINT
    /**
     * @symbol ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class Player* getPlayer(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player* getPlayer(std::string const&) const; // NOLINT
    /**
     * @symbol ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Player* getPlayer(struct ActorUniqueID) const; // NOLINT
    /**
     * @symbol ?getPlayerAbilities\@Level\@\@UEAAPEAVLayeredAbilities\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCVAPI class LayeredAbilities* getPlayerAbilities(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol
     * ?getPlayerByXuid\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player* getPlayerByXuid(std::string const&) const; // NOLINT
    /**
     * @symbol ?getPlayerColor\@Level\@\@UEBA?AVColor\@mce\@\@AEBVPlayer\@\@\@Z
     */
    MCVAPI class mce::Color getPlayerColor(class Player const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayerFromServerId\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player* getPlayerFromServerId(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayerList\@Level\@\@UEBAAEBV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<
        class mce::UUID,
        class PlayerListEntry,
        struct std::hash<class mce::UUID>,
        struct std::equal_to<class mce::UUID>,
        class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const&
    getPlayerList() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerList\@Level\@\@UEAAAEAV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<
        class mce::UUID,
        class PlayerListEntry,
        struct std::hash<class mce::UUID>,
        struct std::equal_to<class mce::UUID>,
        class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>>&
    getPlayerList(); // NOLINT
    /**
     * @symbol ?getPlayerMovementSettings\@Level\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    MCVAPI struct PlayerMovementSettings const& getPlayerMovementSettings() const; // NOLINT
    /**
     * @symbol
     * ?getPlayerPlatformOnlineId\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const& getPlayerPlatformOnlineId(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol
     * ?getPlayerXUID\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const& getPlayerXUID(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol ?getPortalForcer\@Level\@\@UEAAAEAVPortalForcer\@\@XZ
     */
    MCVAPI class PortalForcer& getPortalForcer(); // NOLINT
    /**
     * @symbol ?getPositionTrackerDBClient\@Level\@\@UEBAPEAVPositionTrackingDBClient\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBClient* getPositionTrackerDBClient() const; // NOLINT
    /**
     * @symbol ?getPositionTrackerDBServer\@Level\@\@UEBAPEAVPositionTrackingDBServer\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const; // NOLINT
    /**
     * @symbol ?getPrimaryLocalPlayer\@Level\@\@UEBAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player* getPrimaryLocalPlayer() const; // NOLINT
    /**
     * @symbol ?getProjectileFactory\@Level\@\@UEBAAEAVProjectileFactory\@\@XZ
     */
    MCVAPI class ProjectileFactory& getProjectileFactory() const; // NOLINT
    /**
     * @symbol ?getRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random& getRandom() const; // NOLINT
    /**
     * @symbol ?getRecipes\@Level\@\@UEBAAEAVRecipes\@\@XZ
     */
    MCVAPI class Recipes& getRecipes() const; // NOLINT
    /**
     * @symbol ?getRegisteredBorderBlock\@Level\@\@UEBAAEBVBlockLegacy\@\@XZ
     */
    MCVAPI class BlockLegacy const& getRegisteredBorderBlock() const; // NOLINT
    /**
     * @symbol ?getRemotePlayerEventCoordinator\@Level\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class PlayerEventCoordinator& getRemotePlayerEventCoordinator(); // NOLINT
    /**
     * @symbol
     * ?getRuntimeActorList\@Level\@\@UEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class Actor*> getRuntimeActorList() const; // NOLINT
    /**
     * @symbol ?getRuntimeEntity\@Level\@\@UEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCVAPI class Actor* getRuntimeEntity(class ActorRuntimeID, bool) const; // NOLINT
    /**
     * @symbol ?getRuntimePlayer\@Level\@\@UEBAPEAVPlayer\@\@VActorRuntimeID\@\@\@Z
     */
    MCVAPI class Player* getRuntimePlayer(class ActorRuntimeID) const; // NOLINT
    /**
     * @symbol ?getSavedData\@Level\@\@UEAAAEAVSavedDataStorage\@\@XZ
     */
    MCVAPI class SavedDataStorage& getSavedData(); // NOLINT
    /**
     * @symbol ?getScoreboard\@Level\@\@UEAAAEAVScoreboard\@\@XZ
     */
    MCVAPI class Scoreboard& getScoreboard(); // NOLINT
    /**
     * @symbol ?getScoreboard\@Level\@\@UEBAAEBVScoreboard\@\@XZ
     */
    MCVAPI class Scoreboard const& getScoreboard() const; // NOLINT
    /**
     * @symbol
     * ?getScreenshotsFolder\@Level\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const; // NOLINT
    /**
     * @symbol ?getScriptDeferredEventCoordinator\@Level\@\@UEAAAEAVScriptDeferredEventCoordinator\@\@XZ
     */
    MCVAPI class ScriptDeferredEventCoordinator& getScriptDeferredEventCoordinator(); // NOLINT
    /**
     * @symbol ?getScriptingEventCoordinator\@Level\@\@UEAAAEAVScriptingEventCoordinator\@\@XZ
     */
    MCVAPI class ScriptingEventCoordinator& getScriptingEventCoordinator(); // NOLINT
    /**
     * @symbol ?getSeed\@Level\@\@UEAAIXZ
     */
    MCVAPI unsigned int getSeed(); // NOLINT
    /**
     * @symbol ?getServerNetworkEventCoordinator\@Level\@\@UEAAAEAVServerNetworkEventCoordinator\@\@XZ
     */
    MCVAPI class ServerNetworkEventCoordinator& getServerNetworkEventCoordinator(); // NOLINT
    /**
     * @symbol ?getServerPlayerEventCoordinator\@Level\@\@UEAAAEAVServerPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ServerPlayerEventCoordinator& getServerPlayerEventCoordinator(); // NOLINT
    /**
     * @symbol ?getServerResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager* getServerResourcePackManager() const; // NOLINT
    /**
     * @symbol ?getSharedSpawnPos\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const& getSharedSpawnPos() const; // NOLINT
    /**
     * @symbol ?getSimPaused\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool getSimPaused(); // NOLINT
    /**
     * @symbol ?getSleepStatus\@Level\@\@UEBA?AUPlayerSleepStatus\@\@XZ
     */
    MCVAPI struct PlayerSleepStatus getSleepStatus() const; // NOLINT
    /**
     * @symbol
     * ?getSoundPlayer\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>>
    getSoundPlayer() const; // NOLINT
    /**
     * @symbol ?getSpawnableTickedMobCountPrevious\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getSpawnableTickedMobCountPrevious() const; // NOLINT
    /**
     * @symbol ?getSpawner\@Level\@\@UEBAAEAVSpawner\@\@XZ
     */
    MCVAPI class Spawner& getSpawner() const; // NOLINT
    /**
     * @symbol ?getSpecialMultiplier\@Level\@\@UEBAMV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI float getSpecialMultiplier(class AutomaticID<class Dimension, int>) const; // NOLINT
    /**
     * @symbol
     * ?getStructureManager\@Level\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> getStructureManager(); // NOLINT
    /**
     * @symbol
     * ?getStructureManager\@Level\@\@UEBA?BV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const
    getStructureManager() const; // NOLINT
    /**
     * @symbol ?getSubChunkRequestManager\@Level\@\@UEAAPEAVSubChunkRequestManager\@\@XZ
     */
    MCVAPI class SubChunkRequestManager* getSubChunkRequestManager(); // NOLINT
    /**
     * @symbol ?getSurfaceBuilderRegistry\@Level\@\@UEAAAEAVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry& getSurfaceBuilderRegistry(); // NOLINT
    /**
     * @symbol ?getSurfaceBuilderRegistry\@Level\@\@UEBAAEBVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const; // NOLINT
    /**
     * @symbol ?getSyncTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup& getSyncTasksGroup(); // NOLINT
    /**
     * @symbol
     * ?getTagRegistry\@Level\@\@UEAAAEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@XZ
     */
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&
    getTagRegistry(); // NOLINT
    /**
     * @symbol ?getTearingDown\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getTearingDown() const; // NOLINT
    /**
     * @symbol ?getThreadRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random& getThreadRandom() const; // NOLINT
    /**
     * @symbol ?getTickingArea\@Level\@\@UEBAPEAVITickingArea\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class ITickingArea* getTickingArea(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol ?getTickingAreasMgr\@Level\@\@UEAAAEAVTickingAreasManager\@\@XZ
     */
    MCVAPI class TickingAreasManager& getTickingAreasMgr(); // NOLINT
    /**
     * @symbol
     * ?getTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const& getTickingOffsets() const; // NOLINT
    /**
     * @symbol ?getTime\@Level\@\@UEBAHXZ
     */
    MCVAPI int getTime() const; // NOLINT
    /**
     * @symbol ?getTradeTables\@Level\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables* getTradeTables(); // NOLINT
    /**
     * @symbol ?getTrimMaterialRegistry\@Level\@\@UEBA?AV?$weak_ptr\@$$CBVTrimMaterialRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class TrimMaterialRegistry const> getTrimMaterialRegistry() const; // NOLINT
    /**
     * @symbol ?getTrimMaterialRegistry\@Level\@\@UEAA?AV?$weak_ptr\@VTrimMaterialRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class TrimMaterialRegistry> getTrimMaterialRegistry(); // NOLINT
    /**
     * @symbol ?getTrimPatternRegistry\@Level\@\@UEBA?AV?$weak_ptr\@$$CBVTrimPatternRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class TrimPatternRegistry const> getTrimPatternRegistry() const; // NOLINT
    /**
     * @symbol ?getTrimPatternRegistry\@Level\@\@UEAA?AV?$weak_ptr\@VTrimPatternRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class TrimPatternRegistry> getTrimPatternRegistry(); // NOLINT
    /**
     * @symbol
     * ?getUnknownBlockTypeRegistry\@Level\@\@UEAA?AV?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> getUnknownBlockTypeRegistry(); // NOLINT
    /**
     * @symbol ?getUserCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getUserCount() const; // NOLINT
    /**
     * @symbol
     * ?getUsers\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const& getUsers() const; // NOLINT
    /**
     * @symbol ?getWorldRegistriesProvider\@Level\@\@UEAAAEAVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider& getWorldRegistriesProvider(); // NOLINT
    /**
     * @symbol ?getWorldRegistriesProvider\@Level\@\@UEBAAEBVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider const& getWorldRegistriesProvider() const; // NOLINT
    /**
     * @symbol ?getXBLBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?getXBLBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const; // NOLINT
    /**
     * @symbol ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?handleStopAllSounds\@Level\@\@UEAAXXZ
     */
    MCVAPI void handleStopAllSounds(); // NOLINT
    /**
     * @symbol
     * ?handleStopSoundEvent\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void handleStopSoundEvent(std::string const&); // NOLINT
    /**
     * @symbol ?hasCommandsEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasCommandsEnabled() const; // NOLINT
    /**
     * @symbol ?hasLevelStorage\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasLevelStorage() const; // NOLINT
    /**
     * @symbol ?hasPlatformBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcast() const; // NOLINT
    /**
     * @symbol ?hasPlatformBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?hasStartWithMapEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasStartWithMapEnabled() const; // NOLINT
    /**
     * @symbol ?hasXBLBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcast() const; // NOLINT
    /**
     * @symbol ?hasXBLBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcastIntent() const; // NOLINT
    /**
     * @symbol ?incrementSpawnableTickedMob\@Level\@\@UEAAXXZ
     */
    MCVAPI void incrementSpawnableTickedMob(); // NOLINT
    /**
     * @symbol
     * ?incrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void
    incrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&); // NOLINT
    /**
     * @symbol
     * ?initialize\@Level\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@PEAVLevelData\@\@AEBVExperiments\@\@PEBV23\@\@Z
     */
    MCVAPI bool
    initialize(std::string const&, class LevelSettings const&, class LevelData*, class Experiments const&, std::string const*); // NOLINT
    /**
     * @symbol ?initializeBlockDefinitionGroup\@Level\@\@UEAAXXZ
     */
    MCVAPI void initializeBlockDefinitionGroup(); // NOLINT
    /**
     * @symbol ?isClientSide\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isClientSide() const; // NOLINT
    /**
     * @symbol ?isClientSideGenerationEnabled\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isClientSideGenerationEnabled(); // NOLINT
    /**
     * @symbol ?isEditorWorld\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEditorWorld() const; // NOLINT
    /**
     * @symbol ?isEdu\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEdu() const; // NOLINT
    /**
     * @symbol ?isExporting\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isExporting() const; // NOLINT
    /**
     * @symbol ?isLeaveGameDone\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isLeaveGameDone(); // NOLINT
    /**
     * @symbol ?isMultiplayerGame\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isMultiplayerGame() const; // NOLINT
    /**
     * @symbol ?isPlayerSuspended\@Level\@\@UEBA_NAEAVPlayer\@\@\@Z
     */
    MCVAPI bool isPlayerSuspended(class Player&) const; // NOLINT
    /**
     * @symbol ?levelCleanupQueueEntityRemoval\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?loadBlockDefinitionGroup\@Level\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    MCVAPI void loadBlockDefinitionGroup(class Experiments const&); // NOLINT
    /**
     * @symbol ?loadFunctionManager\@Level\@\@UEAAXXZ
     */
    MCVAPI void loadFunctionManager(); // NOLINT
    /**
     * @symbol ?notifySubChunkRequestManager\@Level\@\@UEAAXAEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const&); // NOLINT
    /**
     * @symbol ?onChunkDiscarded\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkDiscarded(class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?onChunkReload\@Level\@\@UEAAXAEBUBounds\@\@\@Z
     */
    MCVAPI void onChunkReload(struct Bounds const&); // NOLINT
    /**
     * @symbol ?onChunkReloaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource&, class LevelChunk&); // NOLINT
    /**
     * @symbol ?onPlayerDeath\@Level\@\@UEAAXAEAVPlayer\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCVAPI void onPlayerDeath(class Player&, class ActorDamageSource const&); // NOLINT
    /**
     * @symbol ?onSourceCreated\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceCreated(class BlockSource&); // NOLINT
    /**
     * @symbol ?onSourceDestroyed\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceDestroyed(class BlockSource&); // NOLINT
    /**
     * @symbol ?onSubChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource&, class LevelChunk&, short, bool); // NOLINT
    /**
     * @symbol ?pauseAndFlushTaskGroups\@Level\@\@UEAAXXZ
     */
    MCVAPI void pauseAndFlushTaskGroups(); // NOLINT
    /**
     * @symbol
     * ?playSound\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(
        class AutomaticID<class Dimension, int>,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?playSound\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playSound(std::string const&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol
     * ?playSound\@Level\@\@UEAAXAEBVIConstBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(
        class IConstBlockSource const&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playSound(enum class LevelSoundEvent, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCVAPI void playSound(
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void playSynchronizedSound(
        class BlockSource&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        class Block const&,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(
        class BlockSource&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?playSynchronizedSound\@Level\@\@UEAAXAEAVIDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(
        class IDimension&,
        enum class LevelSoundEvent,
        class Vec3 const&,
        int,
        struct ActorDefinitionIdentifier const&,
        bool,
        bool
    ); // NOLINT
    /**
     * @symbol ?potionSplash\@Level\@\@UEAAXAEBVVec3\@\@AEBVColor\@mce\@\@_N\@Z
     */
    MCVAPI void potionSplash(class Vec3 const&, class mce::Color const&, bool); // NOLINT
    /**
     * @symbol ?queueEntityDestruction\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits>); // NOLINT
    /**
     * @symbol ?registerEventCoordinators\@Level\@\@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators(); // NOLINT
    /**
     * @symbol ?registerTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void registerTemporaryPointer(class _TickPtr&); // NOLINT
    /**
     * @symbol ?removeActorAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol
     * ?removeActorFromWorldAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorFromWorldAndTakeEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeBlockSourceFromValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource*); // NOLINT
    /**
     * @symbol ?removeDisplayEntity\@Level\@\@UEAAXVWeakEntityRef\@\@\@Z
     */
    MCVAPI void removeDisplayEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEAVActor\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor&); // NOLINT
    /**
     * @symbol ?removeListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void removeListener(class LevelListener&); // NOLINT
    /**
     * @symbol ?requestMapInfo\@Level\@\@UEAAXUActorUniqueID\@\@_N\@Z
     */
    MCVAPI void requestMapInfo(struct ActorUniqueID, bool); // NOLINT
    /**
     * @symbol
     * ?requestPlayerChangeDimension\@Level\@\@UEAAXAEAVPlayer\@\@V?$unique_ptr\@VChangeDimensionRequest\@\@U?$default_delete\@VChangeDimensionRequest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void requestPlayerChangeDimension(class Player&, std::unique_ptr<class ChangeDimensionRequest>); // NOLINT
    /**
     * @symbol ?requestTimedStorageDeferment\@Level\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void*> requestTimedStorageDeferment(); // NOLINT
    /**
     * @symbol ?resumePlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void resumePlayer(class Player&); // NOLINT
    /**
     * @symbol
     * ?runCommand\@Level\@\@UEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCVAPI void runCommand(
        class HashedString const&,
        class CommandOrigin&,
        enum class CommandOriginSystem,
        enum class CurrentCmdVersion
    ); // NOLINT
    /**
     * @symbol ?runCommand\@Level\@\@UEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCVAPI void runCommand(class Command&, class CommandOrigin&, enum class CommandOriginSystem); // NOLINT
    /**
     * @symbol ?save\@Level\@\@UEAAXXZ
     */
    MCVAPI void save(); // NOLINT
    /**
     * @symbol ?saveGameData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveGameData(); // NOLINT
    /**
     * @symbol ?saveLevelData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveLevelData(); // NOLINT
    /**
     * @symbol ?sendAllPlayerAbilities\@Level\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    MCVAPI void sendAllPlayerAbilities(class Player const&); // NOLINT
    /**
     * @symbol ?sendServerLegacyParticle\@Level\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol
     * ?setActorEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VActorEventCoordinator\@\@U?$default_delete\@VActorEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setBlockEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VBlockEventCoordinator\@\@U?$default_delete\@VBlockEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setClientPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VClientPlayerEventCoordinator\@\@U?$default_delete\@VClientPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator>&&); // NOLINT
    /**
     * @symbol ?setCommandsEnabled\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setCommandsEnabled(bool); // NOLINT
    /**
     * @symbol ?setDefaultGameType\@Level\@\@UEAAXW4GameType\@\@\@Z
     */
    MCVAPI void setDefaultGameType(enum class GameType); // NOLINT
    /**
     * @symbol ?setDefaultSpawn\@Level\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    MCVAPI void setDefaultSpawn(class BlockPos const&); // NOLINT
    /**
     * @symbol ?setDifficulty\@Level\@\@UEAAXW4Difficulty\@\@\@Z
     */
    MCVAPI void setDifficulty(enum class Difficulty); // NOLINT
    /**
     * @symbol ?setDisablePlayerInteractions\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setDisablePlayerInteractions(bool); // NOLINT
    /**
     * @symbol ?setEducationLevelSettings\@Level\@\@UEAAXUEducationLevelSettings\@\@\@Z
     */
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings); // NOLINT
    /**
     * @symbol ?setFinishedInitializing\@Level\@\@UEAAXXZ
     */
    MCVAPI void setFinishedInitializing(); // NOLINT
    /**
     * @symbol ?setHasLockedBehaviorPack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedBehaviorPack(bool); // NOLINT
    /**
     * @symbol ?setHasLockedResourcePack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedResourcePack(bool); // NOLINT
    /**
     * @symbol
     * ?setImmersiveReaderString\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setImmersiveReaderString(std::string); // NOLINT
    /**
     * @symbol ?setIsExporting\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsExporting(bool); // NOLINT
    /**
     * @symbol
     * ?setItemEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VItemEventCoordinator\@\@U?$default_delete\@VItemEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator>&&); // NOLINT
    /**
     * @symbol ?setLANBroadcast\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcast(bool); // NOLINT
    /**
     * @symbol ?setLANBroadcastIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcastIntent(bool); // NOLINT
    /**
     * @symbol ?setLevelId\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setLevelId(std::string); // NOLINT
    /**
     * @symbol ?setMsaGamertagsOnly\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMsaGamertagsOnly(bool); // NOLINT
    /**
     * @symbol ?setMultiplayerGame\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGame(bool); // NOLINT
    /**
     * @symbol ?setMultiplayerGameIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGameIntent(bool); // NOLINT
    /**
     * @symbol ?setNetEventCallback\@Level\@\@UEAAXV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback>); // NOLINT
    /**
     * @symbol ?setPacketSender\@Level\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    MCVAPI void setPacketSender(class PacketSender*); // NOLINT
    /**
     * @symbol ?setPlatformBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setPlatformBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setPlayerAbilities\@Level\@\@UEAAXAEBUActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const&, class LayeredAbilities const&); // NOLINT
    /**
     * @symbol ?setPlayerMovementSettings\@Level\@\@UEAAXAEBUPlayerMovementSettings\@\@\@Z
     */
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const&); // NOLINT
    /**
     * @symbol
     * ?setRemotePlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VPlayerEventCoordinator\@\@U?$default_delete\@VPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setScriptDeferredEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VScriptDeferredEventCoordinator\@\@U?$default_delete\@VScriptDeferredEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setScriptDeferredEventCoordinator(std::unique_ptr<class ScriptDeferredEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setScriptingEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VScriptingEventCoordinator\@\@U?$default_delete\@VScriptingEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setScriptingEventCoordinator(std::unique_ptr<class ScriptingEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setServerNetworkEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerNetworkEventCoordinator\@\@U?$default_delete\@VServerNetworkEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setServerPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerPlayerEventCoordinator\@\@U?$default_delete\@VServerPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator>&&); // NOLINT
    /**
     * @symbol ?setSimPaused\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setSimPaused(bool); // NOLINT
    /**
     * @symbol ?setSleepStatus\@Level\@\@UEAAXAEBUPlayerSleepStatus\@\@\@Z
     */
    MCVAPI void setSleepStatus(struct PlayerSleepStatus const&); // NOLINT
    /**
     * @symbol ?setTime\@Level\@\@UEAAXH\@Z
     */
    MCVAPI void setTime(int); // NOLINT
    /**
     * @symbol ?setWorldTemplateOptionsUnlocked\@Level\@\@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked(); // NOLINT
    /**
     * @symbol ?setXBLBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol ?setXBLBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting); // NOLINT
    /**
     * @symbol
     * ?spawnParticleEffect\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@PEAVDimension\@\@\@Z
     */
    MCVAPI void spawnParticleEffect(std::string const&, class Vec3 const&, class Dimension*); // NOLINT
    /**
     * @symbol ?startLeaveGame\@Level\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame(); // NOLINT
    /**
     * @symbol ?suspendAndSave\@Level\@\@UEAAXXZ
     */
    MCVAPI void suspendAndSave(); // NOLINT
    /**
     * @symbol ?suspendPlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void suspendPlayer(class Player&); // NOLINT
    /**
     * @symbol ?takeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk&); // NOLINT
    /**
     * @symbol ?takePicture\@Level\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&); // NOLINT
    /**
     * @symbol ?tick\@Level\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol ?tickEntities\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntities(); // NOLINT
    /**
     * @symbol ?tickEntitySystems\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntitySystems(); // NOLINT
    /**
     * @symbol ?unregisterTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void unregisterTemporaryPointer(class _TickPtr&); // NOLINT
    /**
     * @symbol ?updateSleepingPlayerList\@Level\@\@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList(); // NOLINT
    /**
     * @symbol ?updateWeather\@Level\@\@UEAAXMHMH\@Z
     */
    MCVAPI void updateWeather(float, int, float, int); // NOLINT
    /**
     * @symbol ?upgradeStorageVersion\@Level\@\@UEAAXW4StorageVersion\@\@\@Z
     */
    MCVAPI void upgradeStorageVersion(enum class StorageVersion); // NOLINT
    /**
     * @symbol ?use3DBiomeMaps\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool use3DBiomeMaps() const; // NOLINT
    /**
     * @symbol ?useMsaGamertagsOnly\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool useMsaGamertagsOnly() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Level(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Level\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@V?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@AEAVIMinecraftEventing\@\@_NW4SubClientId\@\@AEAVScheduler\@\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@2\@AEAVResourcePackManager\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIEntityRegistryOwner\@\@\@Bedrock\@\@\@2\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VBlockComponentFactory\@\@U?$default_delete\@VBlockComponentFactory\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VBlockDefinitionGroup\@\@U?$default_delete\@VBlockDefinitionGroup\@\@\@std\@\@\@std\@\@VItemRegistryRef\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@33AEBUNetworkPermissions\@\@V?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@\@Z
     */
    MCAPI
    Level(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const&, class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, class IMinecraftEventing&, bool, enum class SubClientId, class Scheduler&, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class ResourcePackManager&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const&, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>, bool, bool, struct NetworkPermissions const&, class std::optional<class DimensionDefinitionGroup>); // NOLINT
    /**
     * @symbol ?canChangeDimension\@Level\@\@QEAA_NAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI bool canChangeDimension(class Actor&, class AutomaticID<class Dimension, int>); // NOLINT
    /**
     * @symbol ?earlyShutdownMainthread\@Level\@\@QEAAXXZ
     */
    MCAPI void earlyShutdownMainthread(); // NOLINT
    /**
     * @symbol ?getActorManager\@Level\@\@QEAAAEAVActorManager\@\@XZ
     */
    MCAPI class ActorManager& getActorManager(); // NOLINT
    /**
     * @symbol ?getAutonomousActorManager\@Level\@\@QEBAAEBVAutonomousActorManager\@\@XZ
     */
    MCAPI class AutonomousActorManager const& getAutonomousActorManager() const; // NOLINT
    /**
     * @symbol ?getLevelSeed64\@Level\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getLevelSeed64() const; // NOLINT
    /**
     * @symbol
     * ?getLevelSoundManager\@Level\@\@QEAA?AV?$not_null\@V?$NonOwnerPointer\@VLevelSoundManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class LevelSoundManager>> getLevelSoundManager(); // NOLINT
    /**
     * @symbol ?getNpcDialogueStorage\@Level\@\@QEAAPEAVNpcDialogueStorage\@\@XZ
     */
    MCAPI class NpcDialogueStorage* getNpcDialogueStorage(); // NOLINT
    /**
     * @symbol ?getServerLevelEventCoordinator\@Level\@\@QEAAAEAVServerLevelEventCoordinator\@\@XZ
     */
    MCAPI class ServerLevelEventCoordinator& getServerLevelEventCoordinator(); // NOLINT
    /**
     * @symbol
     * ?getServerLevelEventCoordinatorAsSharedPointer\@Level\@\@QEAA?AV?$shared_ptr\@VServerLevelEventCoordinator\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<class ServerLevelEventCoordinator>
    getServerLevelEventCoordinatorAsSharedPointer(); // NOLINT
    /**
     * @symbol ?getTickDeltaTime\@Level\@\@QEBANXZ
     */
    MCAPI double getTickDeltaTime() const; // NOLINT
    /**
     * @symbol
     * ?isFree\@Level\@\@QEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVActor\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(
        class NavigationComponent&,
        class Actor&,
        class BlockPos const&,
        class BlockPos const&,
        class BlockPos const&,
        enum class CanJumpIntoNode
    ); // NOLINT
    /**
     * @symbol
     * ?setClientLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$shared_ptr\@VClientLevelEventCoordinator\@\@\@std\@\@\@Z
     */
    MCAPI void setClientLevelEventCoordinator(class std::shared_ptr<class ClientLevelEventCoordinator>&&); // NOLINT
    /**
     * @symbol
     * ?setNpcEventCoordinator\@Level\@\@QEAAXV?$unique_ptr\@VNpcEventCoordinator\@\@U?$default_delete\@VNpcEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNpcEventCoordinator(std::unique_ptr<class NpcEventCoordinator>); // NOLINT
    /**
     * @symbol ?setPerformanceTelemetryPeriodicCallback\@Level\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setPerformanceTelemetryPeriodicCallback(class std::function<void(void)>); // NOLINT
    /**
     * @symbol
     * ?setServerLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$shared_ptr\@VServerLevelEventCoordinator\@\@\@std\@\@\@Z
     */
    MCAPI void setServerLevelEventCoordinator(class std::shared_ptr<class ServerLevelEventCoordinator>&&); // NOLINT
    /**
     * @symbol ?transferActorToOwnedEntityLimbo\@Level\@\@QEAAXAEBVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI void transferActorToOwnedEntityLimbo(class Player const&, class Actor&); // NOLINT
    /**
     * @symbol ?addLevelComponents\@Level\@\@SAXAEAVEntityContext\@\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI static void addLevelComponents(class EntityContext&, class IRandom&, bool); // NOLINT
    /**
     * @symbol ?createRandomSeed\@Level\@\@SAIXZ
     */
    MCAPI static unsigned int createRandomSeed(); // NOLINT
    /**
     * @symbol ?isUsableLevel\@Level\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool isUsableLevel(class ILevel const&); // NOLINT
    /**
     * @symbol
     * ?parseLevelSeed64\@Level\@\@SA?AVLevelSeed64\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const&); // NOLINT
    /**
     * @symbol ?OVERWORLD_PLAYER_COUNT_TAG\@Level\@\@2QBDB
     */
    MCAPI static char const OVERWORLD_PLAYER_COUNT_TAG[]; // NOLINT
    /**
     * @symbol ?SLEEPING_PLAYER_COUNT_TAG\@Level\@\@2QBDB
     */
    MCAPI static char const SLEEPING_PLAYER_COUNT_TAG[]; // NOLINT

    // protected:
    /**
     * @symbol ?_getGameplayUserManager\@Level\@\@IEAAAEAVGameplayUserManager\@\@XZ
     */
    MCAPI class GameplayUserManager& _getGameplayUserManager(); // NOLINT
    /**
     * @symbol ?_getLevelStorageManager\@Level\@\@IEAAPEAVLevelStorageManager\@\@XZ
     */
    MCAPI class LevelStorageManager* _getLevelStorageManager(); // NOLINT
    /**
     * @symbol ?_getPlayerListManager\@Level\@\@IEAAAEAVPlayerListManager\@\@XZ
     */
    MCAPI class PlayerListManager& _getPlayerListManager(); // NOLINT

    // private:
    /**
     * @symbol ?_checkBlockSourceValidity\@Level\@\@AEAAXXZ
     */
    MCAPI void _checkBlockSourceValidity(); // NOLINT
    /**
     * @symbol ?_clearOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void _clearOwnedEntityLimboForPlayer(class Player const&); // NOLINT
    /**
     * @symbol ?_createMapSavedData\@Level\@\@AEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData& _createMapSavedData(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?_getCrashDumpLogCategory\@Level\@\@AEAA?AW4CrashDumpLogStringID\@\@XZ
     */
    MCAPI enum class CrashDumpLogStringID _getCrashDumpLogCategory(); // NOLINT
    /**
     * @symbol ?_handleChangeDimensionRequests\@Level\@\@AEAAXXZ
     */
    MCAPI void _handleChangeDimensionRequests(); // NOLINT
    /**
     * @symbol ?_initializeActorManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeActorManager(); // NOLINT
    /**
     * @symbol ?_initializeBiomeManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeBiomeManager(); // NOLINT
    /**
     * @symbol ?_initializeGameplayUserManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeGameplayUserManager(); // NOLINT
    /**
     * @symbol ?_initializeLevelStorageManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeLevelStorageManager(); // NOLINT
    /**
     * @symbol ?_loadMapData\@Level\@\@AEAAPEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData* _loadMapData(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?_onAnyGameplayUsersRemoved\@Level\@\@AEAAXXZ
     */
    MCAPI void _onAnyGameplayUsersRemoved(); // NOLINT
    /**
     * @symbol ?_onGameplayUserAdded\@Level\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserAdded(class EntityContext&); // NOLINT
    /**
     * @symbol ?_onGameplayUserRemoved\@Level\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserRemoved(class EntityContext&); // NOLINT
    /**
     * @symbol ?_onRemoveActorEntityReferences\@Level\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor&); // NOLINT
    /**
     * @symbol ?_onSaveLevelData\@Level\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _onSaveLevelData(class LevelStorage&); // NOLINT
    /**
     * @symbol ?_playerChangeDimension\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimension(class Player&, class ChangeDimensionRequest&); // NOLINT
    /**
     * @symbol ?_playerChangeDimensionPrepareRegion\@Level\@\@AEAAXAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI void _playerChangeDimensionPrepareRegion(class Player&, class ChangeDimensionRequest&); // NOLINT
    /**
     * @symbol ?_playerChangeDimensionWaitingForChunks\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player&, class ChangeDimensionRequest&); // NOLINT
    /**
     * @symbol ?_playerChangeDimensionWaitingForRespawn\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForRespawn(class Player&, class ChangeDimensionRequest&); // NOLINT
    /**
     * @symbol ?_saveSomeChunks\@Level\@\@AEAAXXZ
     */
    MCAPI void _saveSomeChunks(); // NOLINT
    /**
     * @symbol ?_shouldStartGameSaveTimer\@Level\@\@AEBA_NXZ
     */
    MCAPI bool _shouldStartGameSaveTimer() const; // NOLINT
    /**
     * @symbol ?_syncTime\@Level\@\@AEAAXH\@Z
     */
    MCAPI void _syncTime(int); // NOLINT
    /**
     * @symbol ?processOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void processOwnedEntityLimboForPlayer(class Player const&); // NOLINT
    /**
     * @symbol
     * ?_createLevelStorageManager\@Level\@\@CA?AV?$unique_ptr\@VLevelStorageManager\@\@U?$default_delete\@VLevelStorageManager\@\@\@std\@\@\@std\@\@V?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LevelStorageManager>
    _createLevelStorageManager(class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, class Scheduler&); // NOLINT
    /**
     * @symbol ?_onPollSaveGameStatistics\@Level\@\@CAXAEAVIMinecraftEventing\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI static void _onPollSaveGameStatistics(class IMinecraftEventing&, class LevelStorage&); // NOLINT

protected:
private:
};
