/**
 * @file  Level.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "PlayerCapabilities.hpp"
#include "DimensionDefinitionGroup.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "Core.hpp"
#include "BlockInstance.hpp"
#include "Tick.hpp"
#include "ILevel.hpp"
#include "Social.hpp"
class Actor;
class ActorDamageSource;
class ItemStack;
class ItemActor;
class Block;
class CompoundTag;
class Player;
class BlockSource;
class BlockPalette;
class Container;
class Dimension;
struct ActorUniqueID;
class Packet;
#undef BEFORE_EXTRA

/**
 * @brief The "world" of Minecraft, a collection of everything.
 *
 */
class Level {

#define AFTER_EXTRA
    // Add new members to class
public:
#define ENABLE_VIRTUAL_FAKESYMBOL_LEVEL

    // Entity & Player
    // LIAPI static void forEachPlayer(class std::function<bool(class Player&)> callback);
    // LIAPI static void forEachPlayer(class std::function<bool(class Player const&)> callback);

    /**
     * @brief Get all players.
     *
     * @return A list containing all player
     */
    LIAPI static std::vector<Player*> getAllPlayers();

    /**
     * @brief Get a player by his/her name or XUID.
     *
     * @param info The name or the XUID
     * @return The player to get, `nullptr` if failed to get
     *
     * @note Use `Global<Level>->getPlayer()` to call this method.
     */
    LIAPI Player* getPlayer(const string& info);

    /**
     * @brief Get a player by a unique ID.
     *
     * @param id The unique ID
     * @return The player to get, `nullptr` if failed to get
     *
     * @note Use `Global<Level>->getPlayer()` to call this method.
     */
    LIAPI Player* getPlayer(ActorUniqueID id);

    /**
     * @brief Get an entity by a unique ID.
     *
     * @param id The unique ID
     * @return The entity to get, `nullptr` if failed to get
     */
    LIAPI static Actor* getEntity(ActorUniqueID id);

    /**
     * @brief Get all entities in a dimension.
     *
     * @param dimId The dimension ID of the dimension (Overworld: 0; Nether: 1; Ender: 2)
     * @return A list containing all entities in the dimension
     */
    LIAPI static std::vector<Actor*> getAllEntities(int dimId);

    /**
     * @brief Get all entities.
     *
     * @return A list containing all entities
     */
    LIAPI static std::vector<Actor*> getAllEntities();

    /**
     * @brief Spawn a mob.
     *
     * @param pos The position of the mob
     * @param dimId The dimension ID of the dimension of the mob (Overworld: 0; Nether: 1; Ender: 2)
     * @param typeName The type of the mob
     * @return The mob spawned, `nullptr` if failed to spawn
     */
    LIAPI static Actor* spawnMob(Vec3 pos, int dimId, std::string typeName);

    LIAPI static Actor* spawnItem(Vec3 pos, int dimId, ItemStack* item);
    LIAPI static bool createExplosion(Vec3 pos, int dimId, Actor* source, float radius, bool createFire, bool canBreak, float maxResistance = 3.40282347e+38);
    // LIAPI static class MapItemSavedData* getMapSavedData(struct ActorUniqueID a0);

    /**
     * @brief Clone a mob.
     *
     * @param pos The position of the cloned mob
     * @param dimId The dimension ID of the dimension of the cloned mob (Overworld: 0; Nether: 1; Ender: 2)
     * @param ac The mob to be cloned
     * @return The cloned mob, `nullptr` if failed to clone
     */
    LIAPI static Actor* cloneMob(Vec3 pos, int dimId, Actor* ac);

    // Block
    LIAPI static Block* getBlock(BlockPos* pos, int dimId);
    LIAPI static Block* getBlock(BlockPos* pos, BlockSource* blockSource);

    /**
     * @brief Get a block by a position
     *
     * @param pos The position of the block
     * @param dimId The dimension ID of the dimension of the block (Overworld: 0; Nether: 1; Ender: 2)
     * @return The block to get, `nullptr` if failed to get
     */
    LIAPI static Block* getBlock(const BlockPos& pos, int dimId);

    LIAPI static Block* getBlock(const BlockPos& pos, BlockSource* blockSource);
    LIAPI static Block* getBlockEx(const BlockPos& pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(BlockPos* pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(BlockPos* pos, BlockSource* blockSource);
    LIAPI static BlockInstance getBlockInstance(const BlockPos& pos, int dimId);
    LIAPI static BlockInstance getBlockInstance(const BlockPos& pos, BlockSource* blockSource);
    LIAPI static BlockActor* getBlockEntity(BlockPos* pos, int dimId);
    LIAPI static BlockActor* getBlockEntity(BlockPos* pos, BlockSource* blockSource);

    /**
     * @brief Get the block entity of a block by a position
     *
     * @param pos The position of the block
     * @param dimId The dimension ID of the dimension of the block (Overworld: 0; Nether: 1; Ender: 2)
     * @return The block entity to get, `nullptr` if failed to get
     */
    LIAPI static BlockActor* getBlockEntity(const BlockPos& pos, int dimId);

    LIAPI static BlockActor* getBlockEntity(const BlockPos& pos, BlockSource* blockSource);

    /**
     * @brief Place a block.
     * 
     * @param pos The position of the block
     * @param dim The dimension of the block (Overworld: 0; Nether: 1; Ender: 2)
     * @param block The block
     * @return True if having successfully placed the block; otherwise false
     */
    LIAPI static bool setBlock(const BlockPos& pos, int dim, Block* block);

    LIAPI static bool setBlock(const BlockPos& pos, int dim, const string& name, unsigned short tileData);
    LIAPI static bool setBlock(const BlockPos& pos, int dim, CompoundTag* nbt);

    /**
     * @brief Break a block naturally.
     * 
     * @param bs The block source of the dimension of the block
     * @param pos The position of the block
     * @return True if having successfully broken the block; otherwise false
     * 
     * @par "Naturally" means simulating breaking the block with a certain item.
     */
    LIAPI static bool breakBlockNaturally(BlockSource* bs, const BlockPos& pos);

    LIAPI static bool breakBlockNaturally(BlockSource* bs, const BlockPos& pos, ItemStack* tool);
    // LIAPI static bool destroyBlock(class BlockSource& bs, class BlockPos const& pos, bool a2);
    // LIAPI static void spawnParticleEffect(std::string const& type, class Vec3 const& pos, class Dimension* a2);
    // LIAPI static void spawnParticleEffect(std::string const& type, class Actor const& a1, class Vec3 const& a2);
    LIAPI static bool hasContainer(Vec3 pos, int dim);
    LIAPI static Container* getContainer(Vec3 pos, int dim);

    // Item
    //  The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* getItemStackFromId(short itemId, int aux = 0);

    // Helper
    /**
     * @brief Get a block source.
     * 
     * @param dimid The dimension ID of the dimension of the block source (Overworld: 0; Nether: 1; Ender: 2)
     * @return The block source to get, `nullptr` if failed to get
     */
    LIAPI static BlockSource* getBlockSource(int dimid);

    LIAPI static BlockSource* getBlockSource(Actor* actor);
    // LIAPI static BlockPalette* getBlockPalette();
    // LIAPI static Dimension* getDimension(class AutomaticID<class Dimension, int> a0);
    LIAPI static Actor* getDamageSourceEntity(ActorDamageSource* ads);
    LIAPI static void broadcastText(const string& text, TextType type);
    LIAPI static void broadcastTitle(const string& text, TitleType Type, int FadeInDuration, int RemainDuration, int FadeOutDuration);

    [[deprecated("This is a typo. Use Level::sendPacketForAllPlayers")]] LIAPI static void sendPacketForAllPlayer(Packet& pkt);

    LIAPI static void sendPacketForAllPlayers(Packet& pkt);

    /**
     * @brief Get the name of the level
     * 
     * @return The name of the level
     */
    LIAPI static std::string getCurrentLevelName();

    LIAPI static std::string getCurrentLevelPath();
    LIAPI static int64_t createBossEvent();

public:
    static void dummy() {
        ;
    }
    struct ServerCommandOrigin {
        void* myVTBL;
        void* UUID[2];
        ServerLevel* lvl;
        string Name;
        unsigned char Perm;
        static void* fake_vtbl[26];

        [[deprecated]] ServerCommandOrigin() {
            if (fake_vtbl[1] == nullptr) {
                memcpy(fake_vtbl, (void**)(LL_RESOLVE_SYMBOL("??_7ServerCommandOrigin@@6B@")) - 1, sizeof(fake_vtbl));
                fake_vtbl[1] = (void*)dummy;
            }
            myVTBL = fake_vtbl + 1;
            Name = "Server";
            Perm = 4;
            lvl = Global<ServerLevel>;
        }
    };

    LIAPI static bool executeCommandAs(Player* player, const string& cmd);
    LIAPI static std::pair<bool, string> executeCommandEx(const string& cmd);
    LIAPI static bool executeCommand(const string& cmd);


    // For compatibility
    LIAPI static bool runcmdAs(Player* pl, const string& cmd) {
        return executeCommandAs(pl, cmd);
    }
    LIAPI static std::pair<bool, string> runcmdEx(const string& cmd) {
        return executeCommandEx(cmd);
    }
    LIAPI static bool runcmd(const string& cmd) {
        return executeCommand(cmd);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVEL
public:
    class Level& operator=(class Level const &) = delete;
    Level(class Level const &) = delete;
    Level() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVEL
    /**
     * @symbol  ?_checkUserStorage\@Level\@\@UEAAXXZ
     */
    MCVAPI void _checkUserStorage();
    /**
     * @symbol  ?_clientHandleAddOwnedEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId);
    /**
     * @symbol  ?_clientHandleAddWeakRefEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddWeakRefEntity(class EntityNetId, class WeakRefT<struct EntityRefTraits>);
    /**
     * @symbol  ?_clientHandleRemoveOwnedEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveOwnedEntity(class EntityNetId);
    /**
     * @symbol  ?_clientHandleRemoveWeakRefEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveWeakRefEntity(class EntityNetId);
    /**
     * @symbol  ?_destroyEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void _destroyEffect(class BlockPos const &, class Block const &, int);
    /**
     * @symbol  ?_localPlayerChangedDimension\@Level\@\@MEAAXXZ
     */
    MCVAPI void _localPlayerChangedDimension();
    /**
     * @symbol  ?_onPlayerDimensionChange\@Level\@\@MEAAXXZ
     */
    MCVAPI void _onPlayerDimensionChange();
    /**
     * @symbol  ?addAutonomousEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addAutonomousEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addBlockSourceForValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource *);
    /**
     * @symbol  ?addBossEventListener\@Level\@\@UEAAXPEAVBossEventListener\@\@\@Z
     */
    MCVAPI void addBossEventListener(class BossEventListener *);
    /**
     * @symbol  ?addBreakingItemParticleEffect\@Level\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const &, enum class ParticleType, struct ResolvedItemIconInfo const &);
    /**
     * @symbol  ?addChunkViewTracker\@Level\@\@UEAAXV?$weak_ptr\@VChunkViewSource\@\@\@std\@\@\@Z
     */
    MCVAPI void addChunkViewTracker(class std::weak_ptr<class ChunkViewSource>);
    /**
     * @symbol  ?addDisplayEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addDisplayEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addGlobalEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addGlobalEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?addListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void addListener(class LevelListener &);
    /**
     * @symbol  ?addParticle\@Level\@\@UEAAPEAVParticle\@\@W4ParticleType\@\@AEBVVec3\@\@1HPEBVCompoundTag\@\@_N\@Z
     */
    MCVAPI class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @symbol  ?addParticleEffect\@Level\@\@UEAAXAEBVHashedString\@\@AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @symbol  ?addTerrainParticleEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @symbol  ?addTerrainSlideEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainSlideEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @symbol  ?addTickingAreaList\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$shared_ptr\@VTickingAreaList\@\@\@std\@\@\@Z
     */
    MCVAPI void addTickingAreaList(class AutomaticID<class Dimension, int>, class std::shared_ptr<class TickingAreaList> const &);
    /**
     * @symbol  ?addUser\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void addUser(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?animateTick\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void animateTick(class Actor &);
    /**
     * @symbol  ?applyLiquidPhysicsToActor\@Level\@\@UEAA_NPEAVActor\@\@W4MaterialType\@\@\@Z
     */
    MCVAPI bool applyLiquidPhysicsToActor(class Actor *, enum class MaterialType);
    /**
     * @symbol  ?areBossEventListenersReady\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool areBossEventListenersReady();
    /**
     * @symbol  ?asLevel\@Level\@\@UEAAPEAV1\@XZ
     */
    MCVAPI class Level * asLevel();
    /**
     * @symbol  ?broadcastActorEvent\@Level\@\@UEAAXAEAVActor\@\@W4ActorEvent\@\@H\@Z
     */
    MCVAPI void broadcastActorEvent(class Actor &, enum class ActorEvent, int);
    /**
     * @symbol  ?broadcastBossEvent\@Level\@\@UEAAXW4BossEventUpdateType\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType);
    /**
     * @symbol  ?broadcastBossEvent\@Level\@\@UEAAXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &);
    /**
     * @symbol  ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@PEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void broadcastLevelEvent(enum class LevelEvent, class CompoundTag const &, class UserEntityIdentifierComponent const *);
    /**
     * @symbol  ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@HPEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void broadcastLevelEvent(enum class LevelEvent, class Vec3 const &, int, class UserEntityIdentifierComponent const *);
    /**
     * @symbol  ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum class LevelEvent, class Vec3 const &, class Block const &);
    /**
     * @symbol  ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum class LevelEvent, class Vec3 const &, int);
    /**
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(class Dimension &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?canUseSkin\@Level\@\@UEBA_NAEBVSerializedSkin\@\@AEBVNetworkIdentifier\@\@AEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canUseSkin(class SerializedSkin const &, class NetworkIdentifier const &, class mce::UUID const &, std::string const &) const;
    /**
     * @symbol  ?consolidateLevelChunkMetaData\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol  ?copyAndLockMap\@Level\@\@UEAA_NUActorUniqueID\@\@0\@Z
     */
    MCVAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @symbol  ?countUsersWithMatchingNetworkId\@Level\@\@UEBAHAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const &) const;
    /**
     * @symbol  ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @symbol  ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(std::vector<struct ActorUniqueID> const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @symbol  ?createPhotoStorage\@Level\@\@UEAAXXZ
     */
    MCVAPI void createPhotoStorage();
    /**
     * @symbol  ?decrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol  ?denyEffect\@Level\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI void denyEffect(class BlockSource &, class Vec3 const &);
    /**
     * @symbol  ?destroyBlock\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI bool destroyBlock(class BlockSource &, class BlockPos const &, bool);
    /**
     * @symbol  ?digestServerBlockProperties\@Level\@\@UEAAXAEBVStartGamePacket\@\@I\@Z
     */
    MCVAPI void digestServerBlockProperties(class StartGamePacket const &, unsigned int);
    /**
     * @symbol  ?digestServerItemComponents\@Level\@\@UEAAXAEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const &);
    /**
     * @symbol  ?directTickEntities\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void directTickEntities(class BlockSource &);
    /**
     * @symbol  ?entityChangeDimension\@Level\@\@UEAAXAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCVAPI void entityChangeDimension(class Actor &, class AutomaticID<class Dimension, int>, class std::optional<class Vec3>);
    /**
     * @symbol  ?expandMapByID\@Level\@\@UEAA?AUActorUniqueID\@\@U2\@_N\@Z
     */
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    /**
     * @symbol  ?explode\@Level\@\@UEAAXAEAVExplosion\@\@\@Z
     */
    MCVAPI void explode(class Explosion &);
    /**
     * @symbol  ?explode\@Level\@\@UEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M_N3M3\@Z
     */
    MCVAPI void explode(class BlockSource &, class Actor *, class Vec3 const &, float, bool, bool, float, bool);
    /**
     * @symbol  ?extinguishFire\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool extinguishFire(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @symbol  ?fetchEntity\@Level\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@_N\@Z
     */
    MCVAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;
    /**
     * @symbol  ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@HHHAEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, class NavigationComponent &);
    /**
     * @symbol  ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@0AEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, class NavigationComponent &);
    /**
     * @symbol  ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVWeakEntityRef\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class WeakEntityRef const &)>) const;
    /**
     * @symbol  ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @symbol  ?flushRunTimeLighting\@Level\@\@UEAAXXZ
     */
    MCVAPI void flushRunTimeLighting();
    /**
     * @symbol  ?forEachDimension\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension const &)>) const;
    /**
     * @symbol  ?forEachDimension\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension &)>);
    /**
     * @symbol  ?forEachPlayer\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player &)>);
    /**
     * @symbol  ?forEachPlayer\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @symbol  ?forEachUser\@Level\@\@UEBAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachUser(class std::function<bool (class EntityContext &)>) const;
    /**
     * @symbol  ?forceFlushRemovedPlayers\@Level\@\@UEAAXXZ
     */
    MCVAPI void forceFlushRemovedPlayers();
    /**
     * @symbol  ?forceRemoveEntity\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntity(class Actor &);
    /**
     * @symbol  ?forceRemoveEntityfromWorld\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntityfromWorld(class Actor &);
    /**
     * @symbol  ?getActivePlayerCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActivePlayerCount() const;
    /**
     * @symbol  ?getActiveUsers\@Level\@\@UEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class WeakEntityRef> const & getActiveUsers() const;
    /**
     * @symbol  ?getActiveUsersCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActiveUsersCount() const;
    /**
     * @symbol  ?getActorAnimationControllerGroup\@Level\@\@UEBAPEAVActorAnimationControllerGroup\@\@XZ
     */
    MCVAPI class ActorAnimationControllerGroup * getActorAnimationControllerGroup() const;
    /**
     * @symbol  ?getActorAnimationGroup\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VActorAnimationGroup\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>> getActorAnimationGroup() const;
    /**
     * @symbol  ?getActorEventCoordinator\@Level\@\@UEAAAEAVActorEventCoordinator\@\@XZ
     */
    MCVAPI class ActorEventCoordinator & getActorEventCoordinator();
    /**
     * @symbol  ?getActorFactory\@Level\@\@UEBAAEBVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory const & getActorFactory() const;
    /**
     * @symbol  ?getActorFactory\@Level\@\@UEAAAEAVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory & getActorFactory();
    /**
     * @symbol  ?getActorInfoRegistry\@Level\@\@UEAAPEAVActorInfoRegistry\@\@XZ
     */
    MCVAPI class ActorInfoRegistry * getActorInfoRegistry();
    /**
     * @symbol  ?getActorPropertyGroup\@Level\@\@UEBAAEAVPropertyGroupManager\@\@XZ
     */
    MCVAPI class PropertyGroupManager & getActorPropertyGroup() const;
    /**
     * @symbol  ?getAdventureSettings\@Level\@\@UEAAAEAUAdventureSettings\@\@XZ
     */
    MCVAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @symbol  ?getBehaviorFactory\@Level\@\@UEBAAEAVBehaviorFactory\@\@XZ
     */
    MCVAPI class BehaviorFactory & getBehaviorFactory() const;
    /**
     * @symbol  ?getBehaviorTreeGroup\@Level\@\@UEBAAEAVBehaviorTreeGroup\@\@XZ
     */
    MCVAPI class BehaviorTreeGroup & getBehaviorTreeGroup() const;
    /**
     * @symbol  ?getBiomeComponentFactory\@Level\@\@UEAAAEAVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory & getBiomeComponentFactory();
    /**
     * @symbol  ?getBiomeComponentFactory\@Level\@\@UEBAAEBVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory const & getBiomeComponentFactory() const;
    /**
     * @symbol  ?getBiomeRegistry\@Level\@\@UEBAAEBVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry const & getBiomeRegistry() const;
    /**
     * @symbol  ?getBiomeRegistry\@Level\@\@UEAAAEAVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry & getBiomeRegistry();
    /**
     * @symbol  ?getBlockComponentFactory\@Level\@\@UEAAAEAVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory & getBlockComponentFactory();
    /**
     * @symbol  ?getBlockComponentFactory\@Level\@\@UEBAAEBVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory const & getBlockComponentFactory() const;
    /**
     * @symbol  ?getBlockDefinitions\@Level\@\@UEBAPEAVBlockDefinitionGroup\@\@XZ
     */
    MCVAPI class BlockDefinitionGroup * getBlockDefinitions() const;
    /**
     * @symbol  ?getBlockEventCoordinator\@Level\@\@UEAAAEAVBlockEventCoordinator\@\@XZ
     */
    MCVAPI class BlockEventCoordinator & getBlockEventCoordinator();
    /**
     * @symbol  ?getBlockPalette\@Level\@\@UEBAAEBVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette const & getBlockPalette() const;
    /**
     * @symbol  ?getBlockPalette\@Level\@\@UEAAAEAVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette & getBlockPalette();
    /**
     * @symbol  ?getBlockReducer\@Level\@\@UEBAPEAVBlockReducer\@\@XZ
     */
    MCVAPI class BlockReducer * getBlockReducer() const;
    /**
     * @symbol  ?getBlockRegistry\@Level\@\@UEBA?AV?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const;
    /**
     * @symbol  ?getCameraPresets\@Level\@\@UEAAAEAVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets & getCameraPresets();
    /**
     * @symbol  ?getCameraPresets\@Level\@\@UEBAAEBVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets const & getCameraPresets() const;
    /**
     * @symbol  ?getChunkTickRange\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getChunkTickRange() const;
    /**
     * @symbol  ?getClientPlayerEventCoordinator\@Level\@\@UEAAAEAVClientPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ClientPlayerEventCoordinator & getClientPlayerEventCoordinator();
    /**
     * @symbol  ?getClientResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @symbol  ?getClientTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getClientTickingOffsets() const;
    /**
     * @symbol  ?getCurrentServerTick\@Level\@\@UEBA?BUTick\@\@XZ
     */
    MCVAPI struct Tick const getCurrentServerTick() const;
    /**
     * @symbol  ?getCurrentTick\@Level\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @symbol  ?getDefaultAbilities\@Level\@\@UEAAAEAVAbilities\@\@XZ
     */
    MCVAPI class Abilities & getDefaultAbilities();
    /**
     * @symbol  ?getDefaultGameType\@Level\@\@UEBA?AW4GameType\@\@XZ
     */
    MCVAPI enum class GameType getDefaultGameType() const;
    /**
     * @symbol  ?getDefaultPermissions\@Level\@\@UEAAAEAVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @symbol  ?getDefaultPermissions\@Level\@\@UEBAAEBVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @symbol  ?getDefaultSpawn\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @symbol  ?getDifficulty\@Level\@\@UEBA?AW4Difficulty\@\@XZ
     */
    MCVAPI enum class Difficulty getDifficulty() const;
    /**
     * @symbol  ?getDimension\@Level\@\@UEBA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getDimension(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?getDimensionConversionData\@Level\@\@UEBA?AVDimensionConversionData\@\@XZ
     */
    MCVAPI class DimensionConversionData getDimensionConversionData() const;
    /**
     * @symbol  ?getDimensionDefinitionGroup\@Level\@\@UEBA?BV?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<class DimensionDefinitionGroup> const getDimensionDefinitionGroup() const;
    /**
     * @symbol  ?getDimensionFactory\@Level\@\@UEBAAEBV?$OwnerPtrFactory\@VDimension\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class Level &, class Scheduler &> const & getDimensionFactory() const;
    /**
     * @symbol  ?getDimensionFactory\@Level\@\@UEAAAEAV?$OwnerPtrFactory\@VDimension\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class Level &, class Scheduler &> & getDimensionFactory();
    /**
     * @symbol  ?getDisablePlayerInteractions\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getDisablePlayerInteractions() const;
    /**
     * @symbol  ?getEducationLevelSettings\@Level\@\@UEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @symbol  ?getEntities\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getEntities() const;
    /**
     * @symbol  ?getEntityDefinitions\@Level\@\@UEBAPEAVActorDefinitionGroup\@\@XZ
     */
    MCVAPI class ActorDefinitionGroup * getEntityDefinitions() const;
    /**
     * @symbol  ?getEntityRegistry\@Level\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @symbol  ?getEntityRegistry\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @symbol  ?getEntitySystems\@Level\@\@UEAAAEAVEntitySystems\@\@XZ
     */
    MCVAPI class EntitySystems & getEntitySystems();
    /**
     * @symbol  ?getEventing\@Level\@\@UEAAAEAVIMinecraftEventing\@\@XZ
     */
    MCVAPI class IMinecraftEventing & getEventing();
    /**
     * @symbol  ?getFeatureRegistry\@Level\@\@UEAAAEAVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry & getFeatureRegistry();
    /**
     * @symbol  ?getFeatureRegistry\@Level\@\@UEBAAEBVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry const & getFeatureRegistry() const;
    /**
     * @symbol  ?getFeatureTypeFactory\@Level\@\@UEAAAEAVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory & getFeatureTypeFactory();
    /**
     * @symbol  ?getFeatureTypeFactory\@Level\@\@UEBAAEBVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory const & getFeatureTypeFactory() const;
    /**
     * @symbol  ?getGameRules\@Level\@\@UEAAAEAVGameRules\@\@XZ
     */
    MCVAPI class GameRules & getGameRules();
    /**
     * @symbol  ?getGameRules\@Level\@\@UEBAAEBVGameRules\@\@XZ
     */
    MCVAPI class GameRules const & getGameRules() const;
    /**
     * @symbol  ?getHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult & getHitResult();
    /**
     * @symbol  ?getIOTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup & getIOTasksGroup();
    /**
     * @symbol  ?getImmersiveReaderString\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const & getImmersiveReaderString() const;
    /**
     * @symbol  ?getInternalComponentRegistry\@Level\@\@UEBAAEAVInternalComponentRegistry\@\@XZ
     */
    MCVAPI class InternalComponentRegistry & getInternalComponentRegistry() const;
    /**
     * @symbol  ?getItemEventCoordinator\@Level\@\@UEAAAEAVItemEventCoordinator\@\@XZ
     */
    MCVAPI class ItemEventCoordinator & getItemEventCoordinator();
    /**
     * @symbol  ?getItemRegistry\@Level\@\@UEBA?AVItemRegistryRef\@\@XZ
     */
    MCVAPI class ItemRegistryRef getItemRegistry() const;
    /**
     * @symbol  ?getJigsawStructureRegistry\@Level\@\@UEAAAEAVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry & getJigsawStructureRegistry();
    /**
     * @symbol  ?getJigsawStructureRegistry\@Level\@\@UEBAAEBVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry const & getJigsawStructureRegistry() const;
    /**
     * @symbol  ?getLANBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcast() const;
    /**
     * @symbol  ?getLANBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcastIntent() const;
    /**
     * @symbol  ?getLastOrDefaultSpawnDimensionId\@Level\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@V2\@\@Z
     */
    MCVAPI class AutomaticID<class Dimension, int> getLastOrDefaultSpawnDimensionId(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?getLevelChunkMetaDataDictionary\@Level\@\@UEBA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @symbol  ?getLevelData\@Level\@\@UEAAAEAVLevelData\@\@XZ
     */
    MCVAPI class LevelData & getLevelData();
    /**
     * @symbol  ?getLevelData\@Level\@\@UEBAAEBVLevelData\@\@XZ
     */
    MCVAPI class LevelData const & getLevelData() const;
    /**
     * @symbol  ?getLevelEntity\@Level\@\@UEAA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct EntityRefTraits> getLevelEntity();
    /**
     * @symbol  ?getLevelEventCoordinator\@Level\@\@UEAAAEAVLevelEventCoordinator\@\@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @symbol  ?getLevelId\@Level\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLevelId() const;
    /**
     * @symbol  ?getLevelStorage\@Level\@\@UEBAAEBVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage const & getLevelStorage() const;
    /**
     * @symbol  ?getLevelStorage\@Level\@\@UEAAAEAVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage & getLevelStorage();
    /**
     * @symbol  ?getLightTextureImageBuilderFactory\@Level\@\@UEAAAEAV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> & getLightTextureImageBuilderFactory();
    /**
     * @symbol  ?getLightTextureImageBuilderFactory\@Level\@\@UEBAAEBV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> const & getLightTextureImageBuilderFactory() const;
    /**
     * @symbol  ?getLiquidHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult & getLiquidHitResult();
    /**
     * @symbol  ?getLootTables\@Level\@\@UEAAAEAVLootTables\@\@XZ
     */
    MCVAPI class LootTables & getLootTables();
    /**
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const &);
    /**
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@PEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const *);
    /**
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(struct ActorUniqueID);
    /**
     * @symbol  ?getMob\@Level\@\@UEBAPEAVMob\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Mob * getMob(struct ActorUniqueID) const;
    /**
     * @symbol  ?getMultiplayerGameIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getMultiplayerGameIntent() const;
    /**
     * @symbol  ?getNetEventCallback\@Level\@\@UEBA?AV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const;
    /**
     * @symbol  ?getNetherScale\@Level\@\@UEBAHXZ
     */
    MCVAPI int getNetherScale() const;
    /**
     * @symbol  ?getNewPlayerId\@Level\@\@UEBAHXZ
     */
    MCVAPI int getNewPlayerId() const;
    /**
     * @symbol  ?getNewUniqueID\@Level\@\@UEAA?AUActorUniqueID\@\@XZ
     */
    MCVAPI struct ActorUniqueID getNewUniqueID();
    /**
     * @symbol  ?getNextRuntimeID\@Level\@\@UEAA?AVActorRuntimeID\@\@XZ
     */
    MCVAPI class ActorRuntimeID getNextRuntimeID();
    /**
     * @symbol  ?getNumRemotePlayers\@Level\@\@UEAAHXZ
     */
    MCVAPI int getNumRemotePlayers();
    /**
     * @symbol  ?getOrCreateDimension\@Level\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?getPacketSender\@Level\@\@UEBAPEAVPacketSender\@\@XZ
     */
    MCVAPI class PacketSender * getPacketSender() const;
    /**
     * @symbol  ?getPauseManager\@Level\@\@UEAA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@VPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager>> getPauseManager();
    /**
     * @symbol  ?getPauseManager\@Level\@\@UEBA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@$$CBVPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>> getPauseManager() const;
    /**
     * @symbol  ?getPhotoStorage\@Level\@\@UEAAAEAVPhotoStorage\@\@XZ
     */
    MCVAPI class PhotoStorage & getPhotoStorage();
    /**
     * @symbol  ?getPlatformBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @symbol  ?getPlatformBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @symbol  ?getPlatformPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlatformPlayer(std::string const &) const;
    /**
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayer(std::string const &) const;
    /**
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class Player * getPlayer(class mce::UUID const &) const;
    /**
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Player * getPlayer(struct ActorUniqueID) const;
    /**
     * @symbol  ?getPlayerAbilities\@Level\@\@UEAAPEAVLayeredAbilities\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCVAPI class LayeredAbilities * getPlayerAbilities(struct ActorUniqueID const &);
    /**
     * @symbol  ?getPlayerByXuid\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerByXuid(std::string const &) const;
    /**
     * @symbol  ?getPlayerColor\@Level\@\@UEBA?AVColor\@mce\@\@AEBVPlayer\@\@\@Z
     */
    MCVAPI class mce::Color getPlayerColor(class Player const &) const;
    /**
     * @symbol  ?getPlayerFromServerId\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerFromServerId(std::string const &) const;
    /**
     * @symbol  ?getPlayerFromUnknownIdentifier\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerFromUnknownIdentifier(std::string const &) const;
    /**
     * @symbol  ?getPlayerList\@Level\@\@UEAAAEAV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> & getPlayerList();
    /**
     * @symbol  ?getPlayerList\@Level\@\@UEBAAEBV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const & getPlayerList() const;
    /**
     * @symbol  ?getPlayerMovementSettings\@Level\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    MCVAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @symbol  ?getPlayerNames\@Level\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPlayerNames();
    /**
     * @symbol  ?getPlayerPlatformOnlineId\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const & getPlayerPlatformOnlineId(class mce::UUID const &) const;
    /**
     * @symbol  ?getPlayerXUID\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const & getPlayerXUID(class mce::UUID const &) const;
    /**
     * @symbol  ?getPortalForcer\@Level\@\@UEAAAEAVPortalForcer\@\@XZ
     */
    MCVAPI class PortalForcer & getPortalForcer();
    /**
     * @symbol  ?getPositionTrackerDBClient\@Level\@\@UEBAPEAVPositionTrackingDBClient\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBClient * getPositionTrackerDBClient() const;
    /**
     * @symbol  ?getPositionTrackerDBServer\@Level\@\@UEBAPEAVPositionTrackingDBServer\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @symbol  ?getPrimaryLocalPlayer\@Level\@\@UEBAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player * getPrimaryLocalPlayer() const;
    /**
     * @symbol  ?getProjectileFactory\@Level\@\@UEBAAEAVProjectileFactory\@\@XZ
     */
    MCVAPI class ProjectileFactory & getProjectileFactory() const;
    /**
     * @symbol  ?getRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random & getRandom() const;
    /**
     * @symbol  ?getRandomPlayer\@Level\@\@UEAAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player * getRandomPlayer();
    /**
     * @symbol  ?getRecipes\@Level\@\@UEBAAEAVRecipes\@\@XZ
     */
    MCVAPI class Recipes & getRecipes() const;
    /**
     * @symbol  ?getRegisteredBorderBlock\@Level\@\@UEBAAEBVBlockLegacy\@\@XZ
     */
    MCVAPI class BlockLegacy const & getRegisteredBorderBlock() const;
    /**
     * @symbol  ?getRemotePlayerEventCoordinator\@Level\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class PlayerEventCoordinator & getRemotePlayerEventCoordinator();
    /**
     * @symbol  ?getRuntimeActorList\@Level\@\@UEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class Actor *> getRuntimeActorList() const;
    /**
     * @symbol  ?getRuntimeEntity\@Level\@\@UEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCVAPI class Actor * getRuntimeEntity(class ActorRuntimeID, bool) const;
    /**
     * @symbol  ?getRuntimePlayer\@Level\@\@UEBAPEAVPlayer\@\@VActorRuntimeID\@\@\@Z
     */
    MCVAPI class Player * getRuntimePlayer(class ActorRuntimeID) const;
    /**
     * @symbol  ?getSavedData\@Level\@\@UEBAAEAVSavedDataStorage\@\@XZ
     */
    MCVAPI class SavedDataStorage & getSavedData() const;
    /**
     * @symbol  ?getScoreboard\@Level\@\@UEAAAEAVScoreboard\@\@XZ
     */
    MCVAPI class Scoreboard & getScoreboard();
    /**
     * @symbol  ?getScreenshotsFolder\@Level\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const;
    /**
     * @symbol  ?getScriptingEventCoordinator\@Level\@\@UEAAAEAVScriptingEventCoordinator\@\@XZ
     */
    MCVAPI class ScriptingEventCoordinator & getScriptingEventCoordinator();
    /**
     * @symbol  ?getSeed\@Level\@\@UEAAIXZ
     */
    MCVAPI unsigned int getSeed();
    /**
     * @symbol  ?getServerNetworkEventCoordinator\@Level\@\@UEAAAEAVServerNetworkEventCoordinator\@\@XZ
     */
    MCVAPI class ServerNetworkEventCoordinator & getServerNetworkEventCoordinator();
    /**
     * @symbol  ?getServerPlayerEventCoordinator\@Level\@\@UEAAAEAVServerPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ServerPlayerEventCoordinator & getServerPlayerEventCoordinator();
    /**
     * @symbol  ?getServerResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @symbol  ?getSharedSpawnPos\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const & getSharedSpawnPos() const;
    /**
     * @symbol  ?getSimPaused\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool getSimPaused();
    /**
     * @symbol  ?getSleepStatus\@Level\@\@UEBA?AUSleepStatus\@ILevel\@\@XZ
     */
    MCVAPI struct ILevel::SleepStatus getSleepStatus() const;
    /**
     * @symbol  ?getSoundPlayer\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const;
    /**
     * @symbol  ?getSpawnGroupRegistry\@Level\@\@UEBAPEBVSpawnGroupRegistry\@\@XZ
     */
    MCVAPI class SpawnGroupRegistry const * getSpawnGroupRegistry() const;
    /**
     * @symbol  ?getSpawnRules\@Level\@\@UEBAPEBVActorSpawnRuleGroup\@\@XZ
     */
    MCVAPI class ActorSpawnRuleGroup const * getSpawnRules() const;
    /**
     * @symbol  ?getSpawnRulesMutable\@Level\@\@UEBAPEAVActorSpawnRuleGroup\@\@XZ
     */
    MCVAPI class ActorSpawnRuleGroup * getSpawnRulesMutable() const;
    /**
     * @symbol  ?getSpawnSettings\@Level\@\@UEBAAEBUSpawnSettings\@\@XZ
     */
    MCVAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @symbol  ?getSpawnableTickedMobCountPrevious\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getSpawnableTickedMobCountPrevious() const;
    /**
     * @symbol  ?getSpawner\@Level\@\@UEBAAEAVSpawner\@\@XZ
     */
    MCVAPI class Spawner & getSpawner() const;
    /**
     * @symbol  ?getSpecialMultiplier\@Level\@\@UEBAMV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI float getSpecialMultiplier(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?getStructureManager\@Level\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> getStructureManager();
    /**
     * @symbol  ?getStructureManager\@Level\@\@UEBA?BV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const getStructureManager() const;
    /**
     * @symbol  ?getSubChunkRequestManager\@Level\@\@UEAAPEAVSubChunkRequestManager\@\@XZ
     */
    MCVAPI class SubChunkRequestManager * getSubChunkRequestManager();
    /**
     * @symbol  ?getSurfaceBuilderRegistry\@Level\@\@UEBAAEBVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry const & getSurfaceBuilderRegistry() const;
    /**
     * @symbol  ?getSurfaceBuilderRegistry\@Level\@\@UEAAAEAVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();
    /**
     * @symbol  ?getSyncTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup & getSyncTasksGroup();
    /**
     * @symbol  ?getTagRegistry\@Level\@\@UEAAAEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@XZ
     */
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> & getTagRegistry();
    /**
     * @symbol  ?getTearingDown\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getTearingDown() const;
    /**
     * @symbol  ?getThreadRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @symbol  ?getTickingArea\@Level\@\@UEBAPEAVITickingArea\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class ITickingArea * getTickingArea(class mce::UUID const &) const;
    /**
     * @symbol  ?getTickingAreasMgr\@Level\@\@UEAAAEAVTickingAreasManager\@\@XZ
     */
    MCVAPI class TickingAreasManager & getTickingAreasMgr();
    /**
     * @symbol  ?getTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getTickingOffsets() const;
    /**
     * @symbol  ?getTime\@Level\@\@UEBAHXZ
     */
    MCVAPI int getTime() const;
    /**
     * @symbol  ?getTradeTables\@Level\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @symbol  ?getUnknownBlockTypeRegistry\@Level\@\@UEAAAEAVIUnknownBlockTypeRegistry\@\@XZ
     */
    MCVAPI class IUnknownBlockTypeRegistry & getUnknownBlockTypeRegistry();
    /**
     * @symbol  ?getUserCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getUserCount() const;
    /**
     * @symbol  ?getUsers\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getUsers() const;
    /**
     * @symbol  ?getUsers\@Level\@\@UEAAAEAV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> & getUsers();
    /**
     * @symbol  ?getWorldRegistriesProvider\@Level\@\@UEBAAEBVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider const & getWorldRegistriesProvider() const;
    /**
     * @symbol  ?getWorldRegistriesProvider\@Level\@\@UEAAAEAVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider & getWorldRegistriesProvider();
    /**
     * @symbol  ?getXBLBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @symbol  ?getXBLBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @symbol  ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class CompoundTag const &);
    /**
     * @symbol  ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class Vec3 const &, int);
    /**
     * @symbol  ?handleSoundEvent\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void handleSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol  ?handleSoundEvent\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCVAPI void handleSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?handleStopAllSounds\@Level\@\@UEAAXXZ
     */
    MCVAPI void handleStopAllSounds();
    /**
     * @symbol  ?handleStopSoundEvent\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void handleStopSoundEvent(std::string const &);
    /**
     * @symbol  ?hasCommandsEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasCommandsEnabled() const;
    /**
     * @symbol  ?hasLevelStorage\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasLevelStorage() const;
    /**
     * @symbol  ?hasPlatformBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcast() const;
    /**
     * @symbol  ?hasPlatformBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcastIntent() const;
    /**
     * @symbol  ?hasStartWithMapEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasStartWithMapEnabled() const;
    /**
     * @symbol  ?hasXBLBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcast() const;
    /**
     * @symbol  ?hasXBLBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcastIntent() const;
    /**
     * @symbol  ?incrementSpawnableTickedMob\@Level\@\@UEAAXXZ
     */
    MCVAPI void incrementSpawnableTickedMob();
    /**
     * @symbol  ?incrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol  ?initialize\@Level\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@PEAVLevelData\@\@AEBVExperiments\@\@PEBV23\@\@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @symbol  ?initializeBlockDefinitionGroup\@Level\@\@UEAAXXZ
     */
    MCVAPI void initializeBlockDefinitionGroup();
    /**
     * @symbol  ?initializeLevelChunkMetaData\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol  ?isClientSide\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isClientSide() const;
    /**
     * @symbol  ?isClientSideGenerationEnabled\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isClientSideGenerationEnabled();
    /**
     * @symbol  ?isEditorWorld\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEditorWorld() const;
    /**
     * @symbol  ?isEdu\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEdu() const;
    /**
     * @symbol  ?isExporting\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isExporting() const;
    /**
     * @symbol  ?isLeaveGameDone\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isLeaveGameDone();
    /**
     * @symbol  ?isMultiplayerGame\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isMultiplayerGame() const;
    /**
     * @symbol  ?isPlayerSuspended\@Level\@\@UEBA_NAEAVPlayer\@\@\@Z
     */
    MCVAPI bool isPlayerSuspended(class Player &) const;
    /**
     * @symbol  ?levelCleanupQueueEntityRemoval\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?loadBlockDefinitionGroup\@Level\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    MCVAPI void loadBlockDefinitionGroup(class Experiments const &);
    /**
     * @symbol  ?loadFunctionManager\@Level\@\@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @symbol  ?notifySubChunkRequestManager\@Level\@\@UEAAXAEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const &);
    /**
     * @symbol  ?onChunkDiscarded\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkDiscarded(class LevelChunk &);
    /**
     * @symbol  ?onChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol  ?onChunkReload\@Level\@\@UEAAXAEBUBounds\@\@\@Z
     */
    MCVAPI void onChunkReload(struct Bounds const &);
    /**
     * @symbol  ?onChunkReloaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol  ?onPlayerDeath\@Level\@\@UEAAXAEAVPlayer\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCVAPI void onPlayerDeath(class Player &, class ActorDamageSource const &);
    /**
     * @symbol  ?onSourceCreated\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceCreated(class BlockSource &);
    /**
     * @symbol  ?onSourceDestroyed\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceDestroyed(class BlockSource &);
    /**
     * @symbol  ?onSubChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource &, class LevelChunk &, short, bool);
    /**
     * @symbol  ?pauseAndFlushTaskGroups\@Level\@\@UEAAXXZ
     */
    MCVAPI void pauseAndFlushTaskGroups();
    /**
     * @symbol  ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCVAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?playSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?playSound\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(class AutomaticID<class Dimension, int>, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, float, float);
    /**
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVIDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(class IDimension &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol  ?potionSplash\@Level\@\@UEAAXAEBVVec3\@\@AEBVColor\@mce\@\@_N\@Z
     */
    MCVAPI void potionSplash(class Vec3 const &, class mce::Color const &, bool);
    /**
     * @symbol  ?pruneChunkViewTrackers\@Level\@\@UEAAXXZ
     */
    MCVAPI void pruneChunkViewTrackers();
    /**
     * @symbol  ?queueEntityDestruction\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @symbol  ?registerEventCoordinators\@Level\@\@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @symbol  ?registerTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void registerTemporaryPointer(class _TickPtr &);
    /**
     * @symbol  ?removeActorAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef);
    /**
     * @symbol  ?removeActorFromWorldAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorFromWorldAndTakeEntity(class WeakEntityRef);
    /**
     * @symbol  ?removeBlockSourceFromValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource *);
    /**
     * @symbol  ?removeBossEventListener\@Level\@\@UEAAXPEAVBossEventListener\@\@\@Z
     */
    MCVAPI void removeBossEventListener(class BossEventListener *);
    /**
     * @symbol  ?removeDisplayEntity\@Level\@\@UEAAXVWeakEntityRef\@\@\@Z
     */
    MCVAPI void removeDisplayEntity(class WeakEntityRef);
    /**
     * @symbol  ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEAVActor\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor &);
    /**
     * @symbol  ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);
    /**
     * @symbol  ?removeListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void removeListener(class LevelListener &);
    /**
     * @symbol  ?requestMapInfo\@Level\@\@UEAAXUActorUniqueID\@\@_N\@Z
     */
    MCVAPI void requestMapInfo(struct ActorUniqueID, bool);
    /**
     * @symbol  ?requestPlayerChangeDimension\@Level\@\@UEAAXAEAVPlayer\@\@V?$unique_ptr\@VChangeDimensionRequest\@\@U?$default_delete\@VChangeDimensionRequest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void requestPlayerChangeDimension(class Player &, std::unique_ptr<class ChangeDimensionRequest>);
    /**
     * @symbol  ?requestTimedStorageDeferment\@Level\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestTimedStorageDeferment();
    /**
     * @symbol  ?resumePlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void resumePlayer(class Player &);
    /**
     * @symbol  ?runCommand\@Level\@\@UEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum class CommandOriginSystem);
    /**
     * @symbol  ?runCommand\@Level\@\@UEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CommandOriginSystem, enum class CurrentCmdVersion);
    /**
     * @symbol  ?save\@Level\@\@UEAAXXZ
     */
    MCVAPI void save();
    /**
     * @symbol  ?saveAdditionalData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @symbol  ?saveBiomeData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveBiomeData();
    /**
     * @symbol  ?saveDirtyChunks\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveDirtyChunks();
    /**
     * @symbol  ?saveDynamicProperties\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @symbol  ?saveEducationLevelSettings\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveEducationLevelSettings();
    /**
     * @symbol  ?saveGameData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveGameData();
    /**
     * @symbol  ?saveLevelData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveLevelData();
    /**
     * @symbol  ?savePlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void savePlayer(class Player &);
    /**
     * @symbol  ?savePlayers\@Level\@\@UEAAXXZ
     */
    MCVAPI void savePlayers();
    /**
     * @symbol  ?saveVillages\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveVillages();
    /**
     * @symbol  ?sendAllPlayerAbilities\@Level\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    MCVAPI void sendAllPlayerAbilities(class Player const &);
    /**
     * @symbol  ?sendServerLegacyParticle\@Level\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @symbol  ?setActorEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VActorEventCoordinator\@\@U?$default_delete\@VActorEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator> &&);
    /**
     * @symbol  ?setBlockEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VBlockEventCoordinator\@\@U?$default_delete\@VBlockEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator> &&);
    /**
     * @symbol  ?setClientPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VClientPlayerEventCoordinator\@\@U?$default_delete\@VClientPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator> &&);
    /**
     * @symbol  ?setCommandsEnabled\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @symbol  ?setDefaultGameType\@Level\@\@UEAAXW4GameType\@\@\@Z
     */
    MCVAPI void setDefaultGameType(enum class GameType);
    /**
     * @symbol  ?setDefaultSpawn\@Level\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    MCVAPI void setDefaultSpawn(class BlockPos const &);
    /**
     * @symbol  ?setDifficulty\@Level\@\@UEAAXW4Difficulty\@\@\@Z
     */
    MCVAPI void setDifficulty(enum class Difficulty);
    /**
     * @symbol  ?setDisablePlayerInteractions\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setDisablePlayerInteractions(bool);
    /**
     * @symbol  ?setEducationLevelSettings\@Level\@\@UEAAXUEducationLevelSettings\@\@\@Z
     */
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings);
    /**
     * @symbol  ?setFinishedInitializing\@Level\@\@UEAAXXZ
     */
    MCVAPI void setFinishedInitializing();
    /**
     * @symbol  ?setHasLockedBehaviorPack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedBehaviorPack(bool);
    /**
     * @symbol  ?setHasLockedResourcePack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedResourcePack(bool);
    /**
     * @symbol  ?setImmersiveReaderString\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setImmersiveReaderString(std::string);
    /**
     * @symbol  ?setIsExporting\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsExporting(bool);
    /**
     * @symbol  ?setItemEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VItemEventCoordinator\@\@U?$default_delete\@VItemEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator> &&);
    /**
     * @symbol  ?setLANBroadcast\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcast(bool);
    /**
     * @symbol  ?setLANBroadcastIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcastIntent(bool);
    /**
     * @symbol  ?setLevelId\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setLevelId(std::string);
    /**
     * @symbol  ?setMsaGamertagsOnly\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMsaGamertagsOnly(bool);
    /**
     * @symbol  ?setMultiplayerGame\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGame(bool);
    /**
     * @symbol  ?setMultiplayerGameIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGameIntent(bool);
    /**
     * @symbol  ?setNetEventCallback\@Level\@\@UEAAXV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback>);
    /**
     * @symbol  ?setPacketSender\@Level\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @symbol  ?setPlatformBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setPlatformBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setPlayerAbilities\@Level\@\@UEAAXAEBUActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const &, class LayeredAbilities const &);
    /**
     * @symbol  ?setPlayerMovementSettings\@Level\@\@UEAAXAEBUPlayerMovementSettings\@\@\@Z
     */
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const &);
    /**
     * @symbol  ?setRemotePlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VPlayerEventCoordinator\@\@U?$default_delete\@VPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator> &&);
    /**
     * @symbol  ?setScriptingEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VScriptingEventCoordinator\@\@U?$default_delete\@VScriptingEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setScriptingEventCoordinator(std::unique_ptr<class ScriptingEventCoordinator> &&);
    /**
     * @symbol  ?setServerNetworkEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerNetworkEventCoordinator\@\@U?$default_delete\@VServerNetworkEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator> &&);
    /**
     * @symbol  ?setServerPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerPlayerEventCoordinator\@\@U?$default_delete\@VServerPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator> &&);
    /**
     * @symbol  ?setSimPaused\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setSimPaused(bool);
    /**
     * @symbol  ?setSleepStatus\@Level\@\@UEAAXAEBUSleepStatus\@ILevel\@\@\@Z
     */
    MCVAPI void setSleepStatus(struct ILevel::SleepStatus const &);
    /**
     * @symbol  ?setSpawnSettings\@Level\@\@UEAAXAEBUSpawnSettings\@\@\@Z
     */
    MCVAPI void setSpawnSettings(struct SpawnSettings const &);
    /**
     * @symbol  ?setTime\@Level\@\@UEAAXH\@Z
     */
    MCVAPI void setTime(int);
    /**
     * @symbol  ?setWorldTemplateOptionsUnlocked\@Level\@\@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @symbol  ?setXBLBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?setXBLBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @symbol  ?spawnParticleEffect\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@PEAVDimension\@\@\@Z
     */
    MCVAPI void spawnParticleEffect(std::string const &, class Vec3 const &, class Dimension *);
    /**
     * @symbol  ?startLeaveGame\@Level\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @symbol  ?suspendAndSave\@Level\@\@UEAAXXZ
     */
    MCVAPI void suspendAndSave();
    /**
     * @symbol  ?suspendPlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void suspendPlayer(class Player &);
    /**
     * @symbol  ?takeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk &);
    /**
     * @symbol  ?takePicture\@Level\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
    /**
     * @symbol  ?tick\@Level\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol  ?tickEntities\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntities();
    /**
     * @symbol  ?tickEntitySystems\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntitySystems();
    /**
     * @symbol  ?unregisterTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void unregisterTemporaryPointer(class _TickPtr &);
    /**
     * @symbol  ?updateSleepingPlayerList\@Level\@\@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
    /**
     * @symbol  ?updateWeather\@Level\@\@UEAAXMHMH\@Z
     */
    MCVAPI void updateWeather(float, int, float, int);
    /**
     * @symbol  ?upgradeStorageVersion\@Level\@\@UEAAXW4StorageVersion\@\@\@Z
     */
    MCVAPI void upgradeStorageVersion(enum class StorageVersion);
    /**
     * @symbol  ?useMsaGamertagsOnly\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool useMsaGamertagsOnly() const;
    /**
     * @symbol  ?waitAsyncSuspendWork\@Level\@\@UEAAXXZ
     */
    MCVAPI void waitAsyncSuspendWork();
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~Level();
#endif
    /**
     * @symbol  ??0Level\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@V?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@4\@AEAVIMinecraftEventing\@\@_NW4SubClientId\@\@AEAVScheduler\@\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@2\@AEAVResourcePackManager\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIEntityRegistryOwner\@\@\@Bedrock\@\@\@2\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VBlockComponentFactory\@\@U?$default_delete\@VBlockComponentFactory\@\@\@std\@\@\@4\@V?$unique_ptr\@VBlockDefinitionGroup\@\@U?$default_delete\@VBlockDefinitionGroup\@\@\@std\@\@\@4\@VItemRegistryRef\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@4\@4V?$optional\@VDimensionDefinitionGroup\@\@\@4\@\@Z
     */
    MCAPI Level(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, bool, enum class SubClientId, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>, bool, class std::optional<class DimensionDefinitionGroup>);
    /**
     * @symbol  ?canChangeDimension\@Level\@\@QEAA_NAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI bool canChangeDimension(class Actor &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?getActorManager\@Level\@\@QEAAAEAVActorManager\@\@XZ
     */
    MCAPI class ActorManager & getActorManager();
    /**
     * @symbol  ?getAdventureSettings\@Level\@\@QEBAAEBUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @symbol  ?getAutonomousActorManager\@Level\@\@QEBAAEBVAutonomousActorManager\@\@XZ
     */
    MCAPI class AutonomousActorManager const & getAutonomousActorManager() const;
    /**
     * @symbol  ?getCapabilities\@Level\@\@QEBAAEBUISharedController\@PlayerCapabilities\@\@XZ
     */
    MCAPI struct PlayerCapabilities::ISharedController const & getCapabilities() const;
    /**
     * @symbol  ?getDimensionDefinition\@Level\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    /**
     * @symbol  ?getLevelSeed64\@Level\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getLevelSeed64() const;
    /**
     * @symbol  ?getNpcDialogueStorage\@Level\@\@QEAAPEAVNpcDialogueStorage\@\@XZ
     */
    MCAPI class NpcDialogueStorage * getNpcDialogueStorage();
    /**
     * @symbol  ?getServerLevelEventCoordinator\@Level\@\@QEAAAEAVServerLevelEventCoordinator\@\@XZ
     */
    MCAPI class ServerLevelEventCoordinator & getServerLevelEventCoordinator();
    /**
     * @symbol  ?getSideBySideEntity\@Level\@\@QEBA?AVStrictEntityContext\@\@XZ
     */
    MCAPI class StrictEntityContext getSideBySideEntity() const;
    /**
     * @symbol  ?getTickDeltaTime\@Level\@\@QEBANXZ
     */
    MCAPI double getTickDeltaTime() const;
    /**
     * @symbol  ?isChunkInTickRange\@Level\@\@QEAAXAEBVChunkPos\@\@AEBVDimension\@\@AEA_N\@Z
     */
    MCAPI void isChunkInTickRange(class ChunkPos const &, class Dimension const &, bool &);
    /**
     * @symbol  ?isChunkInTickRange\@Level\@\@QEBA_NAEBVLevelChunk\@\@V?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool isChunkInTickRange(class LevelChunk const &, class std::optional<int>) const;
    /**
     * @symbol  ?isFree\@Level\@\@QEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVActor\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class NavigationComponent &, class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);
    /**
     * @symbol  ?setClientLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$unique_ptr\@VClientLevelEventCoordinator\@\@U?$default_delete\@VClientLevelEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setClientLevelEventCoordinator(std::unique_ptr<class ClientLevelEventCoordinator> &&);
    /**
     * @symbol  ?setNpcEventCoordinator\@Level\@\@QEAAXV?$unique_ptr\@VNpcEventCoordinator\@\@U?$default_delete\@VNpcEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNpcEventCoordinator(std::unique_ptr<class NpcEventCoordinator>);
    /**
     * @symbol  ?setPerformanceTelemetryPeriodicCallback\@Level\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setPerformanceTelemetryPeriodicCallback(class std::function<void (void)>);
    /**
     * @symbol  ?setServerLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$unique_ptr\@VServerLevelEventCoordinator\@\@U?$default_delete\@VServerLevelEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setServerLevelEventCoordinator(std::unique_ptr<class ServerLevelEventCoordinator> &&);
    /**
     * @symbol  ?transferActorToOwnedEntityLimbo\@Level\@\@QEAAXAEBVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI void transferActorToOwnedEntityLimbo(class Player const &, class Actor &);
    /**
     * @symbol  ?use3DBiomeMaps\@Level\@\@QEBA_NXZ
     */
    MCAPI bool use3DBiomeMaps() const;
    /**
     * @symbol  ?OVERWORLD_PLAYER_COUNT_TAG\@Level\@\@2QBDB
     */
    MCAPI static char const OVERWORLD_PLAYER_COUNT_TAG[];
    /**
     * @symbol  ?SLEEPING_PLAYER_COUNT_TAG\@Level\@\@2QBDB
     */
    MCAPI static char const SLEEPING_PLAYER_COUNT_TAG[];
    /**
     * @symbol  ?addLevelComponents\@Level\@\@SAXAEAVEntityContext\@\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI static void addLevelComponents(class EntityContext &, class IRandom &, bool);
    /**
     * @symbol  ?addSideBySideLevelComponents\@Level\@\@SAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI static void addSideBySideLevelComponents(class EntityContext &, bool);
    /**
     * @symbol  ?createRandomSeed\@Level\@\@SAIXZ
     */
    MCAPI static unsigned int createRandomSeed();
    /**
     * @symbol  ?isUsableLevel\@Level\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool isUsableLevel(class ILevel const &);
    /**
     * @symbol  ?parseLevelSeed64\@Level\@\@SA?AVLevelSeed64\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const &);

//private:
    /**
     * @symbol  ?_checkBlockSourceValidity\@Level\@\@AEAAXXZ
     */
    MCAPI void _checkBlockSourceValidity();
    /**
     * @symbol  ?_cleanupDisconnectedPlayers\@Level\@\@AEAAXXZ
     */
    MCAPI void _cleanupDisconnectedPlayers();
    /**
     * @symbol  ?_clearOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void _clearOwnedEntityLimboForPlayer(class Player const &);
    /**
     * @symbol  ?_createMapSavedData\@Level\@\@AEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData & _createMapSavedData(struct ActorUniqueID const &);
    /**
     * @symbol  ?_getCrashDumpLogCategory\@Level\@\@AEAA?AW4CrashDumpLogStringID\@\@XZ
     */
    MCAPI enum class CrashDumpLogStringID _getCrashDumpLogCategory();
    /**
     * @symbol  ?_getOwnedEntityLimboStorageKeyForPlayer\@Level\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI std::string _getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID const &) const;
    /**
     * @symbol  ?_getValidatedPlayerName\@Level\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _getValidatedPlayerName(std::string const &);
    /**
     * @symbol  ?_handleChangeDimensionRequests\@Level\@\@AEAAXXZ
     */
    MCAPI void _handleChangeDimensionRequests();
    /**
     * @symbol  ?_initializeActorManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeActorManager();
    /**
     * @symbol  ?_loadAutonomousEntities\@Level\@\@AEAAXXZ
     */
    MCAPI void _loadAutonomousEntities();
    /**
     * @symbol  ?_loadBiomeData\@Level\@\@AEAAXXZ
     */
    MCAPI void _loadBiomeData();
    /**
     * @symbol  ?_loadMapData\@Level\@\@AEAAPEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData * _loadMapData(struct ActorUniqueID const &);
    /**
     * @symbol  ?_loadOwnedEntityLimbo\@Level\@\@AEAAXXZ
     */
    MCAPI void _loadOwnedEntityLimbo();
    /**
     * @symbol  ?_onRemoveActorEntityReferences\@Level\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor &);
    /**
     * @symbol  ?_playerChangeDimension\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimension(class Player &, class ChangeDimensionRequest &);
    /**
     * @symbol  ?_playerChangeDimensionPrepareRegion\@Level\@\@AEAAXAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI void _playerChangeDimensionPrepareRegion(class Player &, class ChangeDimensionRequest &);
    /**
     * @symbol  ?_playerChangeDimensionWaitingForChunks\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player &, class ChangeDimensionRequest &);
    /**
     * @symbol  ?_playerChangeDimensionWaitingForRespawn\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForRespawn(class Player &, class ChangeDimensionRequest &);
    /**
     * @symbol  ?_processPlayerNetworking\@Level\@\@AEAAXXZ
     */
    MCAPI void _processPlayerNetworking();
    /**
     * @symbol  ?_removePlayerFromPlayerList\@Level\@\@AEAA?AVUUID\@mce\@\@QEBVPlayer\@\@\@Z
     */
    MCAPI class mce::UUID _removePlayerFromPlayerList(class Player const *const);
    /**
     * @symbol  ?_resumePlayer\@Level\@\@AEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void _resumePlayer(class mce::UUID const &);
    /**
     * @symbol  ?_saveAutonomousEntities\@Level\@\@AEAAXXZ
     */
    MCAPI void _saveAutonomousEntities();
    /**
     * @symbol  ?_saveOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void _saveOwnedEntityLimboForPlayer(class Player const &);
    /**
     * @symbol  ?_saveSomeChunks\@Level\@\@AEAAXXZ
     */
    MCAPI void _saveSomeChunks();
    /**
     * @symbol  ?_suspendPlayer\@Level\@\@AEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void _suspendPlayer(class mce::UUID const &);
    /**
     * @symbol  ?_syncTime\@Level\@\@AEAAXH\@Z
     */
    MCAPI void _syncTime(int);
    /**
     * @symbol  ?processOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void processOwnedEntityLimboForPlayer(class Player const &);

private:

};