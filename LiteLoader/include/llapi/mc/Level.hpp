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
                memcpy(fake_vtbl, (void**)(SYM("??_7ServerCommandOrigin@@6B@")) - 1, sizeof(fake_vtbl));
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
     * @hash   1378503530
     * @symbol  ?_checkUserStorage\@Level\@\@UEAAXXZ
     */
    MCVAPI void _checkUserStorage();
    /**
     * @hash   -1975465403
     * @symbol  ?_clientHandleAddOwnedEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId);
    /**
     * @hash   -1386702405
     * @symbol  ?_clientHandleAddWeakRefEntity\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRefTraits\@\@\@\@VEntityNetId\@\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddWeakRefEntity(class EntityNetId, class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   604547873
     * @symbol  ?_clientHandleRemoveOwnedEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveOwnedEntity(class EntityNetId);
    /**
     * @hash   690355659
     * @symbol  ?_clientHandleRemoveWeakRefEntity\@Level\@\@UEAAXVEntityNetId\@\@\@Z
     */
    MCVAPI void _clientHandleRemoveWeakRefEntity(class EntityNetId);
    /**
     * @hash   -1651099938
     * @symbol  ?_destroyEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@H\@Z
     */
    MCVAPI void _destroyEffect(class BlockPos const &, class Block const &, int);
    /**
     * @hash   1240228107
     * @symbol  ?_localPlayerChangedDimension\@Level\@\@MEAAXXZ
     */
    MCVAPI void _localPlayerChangedDimension();
    /**
     * @symbol  ?_onPlayerDimensionChange\@Level\@\@MEAAXXZ
     */
    MCVAPI void _onPlayerDimensionChange();
    /**
     * @hash   921411806
     * @symbol  ?addAutonomousEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addAutonomousEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -343425518
     * @symbol  ?addBlockSourceForValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource *);
    /**
     * @hash   192688676
     * @symbol  ?addBossEventListener\@Level\@\@UEAAXPEAVBossEventListener\@\@\@Z
     */
    MCVAPI void addBossEventListener(class BossEventListener *);
    /**
     * @hash   603351657
     * @symbol  ?addBreakingItemParticleEffect\@Level\@\@UEAAXAEBVVec3\@\@W4ParticleType\@\@AEBUResolvedItemIconInfo\@\@\@Z
     */
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const &, enum class ParticleType, struct ResolvedItemIconInfo const &);
    /**
     * @hash   238966134
     * @symbol  ?addChunkViewTracker\@Level\@\@UEAAXV?$weak_ptr\@VChunkViewSource\@\@\@std\@\@\@Z
     */
    MCVAPI void addChunkViewTracker(class std::weak_ptr<class ChunkViewSource>);
    /**
     * @hash   -1612343010
     * @symbol  ?addDisplayEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addDisplayEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   681525742
     * @symbol  ?addEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -881950127
     * @symbol  ?addGlobalEntity\@Level\@\@UEAAPEAVActor\@\@AEAVBlockSource\@\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI class Actor * addGlobalEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   156447788
     * @symbol  ?addListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void addListener(class LevelListener &);
    /**
     * @hash   272885939
     * @symbol  ?addParticle\@Level\@\@UEAAPEAVParticle\@\@W4ParticleType\@\@AEBVVec3\@\@1HPEBVCompoundTag\@\@_N\@Z
     */
    MCVAPI class Particle * addParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @hash   1959481935
     * @symbol  ?addParticleEffect\@Level\@\@UEAAXAEBVHashedString\@\@AEBVVec3\@\@AEBVMolangVariableMap\@\@\@Z
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @hash   -437135504
     * @symbol  ?addTerrainParticleEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   935445091
     * @symbol  ?addTerrainSlideEffect\@Level\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@AEBVVec3\@\@MMM\@Z
     */
    MCVAPI void addTerrainSlideEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   319178240
     * @symbol  ?addTickingAreaList\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$shared_ptr\@VTickingAreaList\@\@\@std\@\@\@Z
     */
    MCVAPI void addTickingAreaList(class AutomaticID<class Dimension, int>, class std::shared_ptr<class TickingAreaList> const &);
    /**
     * @hash   1303103635
     * @symbol  ?addUser\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void addUser(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -893791354
     * @symbol  ?animateTick\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void animateTick(class Actor &);
    /**
     * @hash   -1392011454
     * @symbol  ?applyLiquidPhysicsToActor\@Level\@\@UEAA_NPEAVActor\@\@W4MaterialType\@\@\@Z
     */
    MCVAPI bool applyLiquidPhysicsToActor(class Actor *, enum class MaterialType);
    /**
     * @hash   337551634
     * @symbol  ?areBossEventListenersReady\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool areBossEventListenersReady();
    /**
     * @hash   -1464023497
     * @symbol  ?asLevel\@Level\@\@UEAAPEAV1\@XZ
     */
    MCVAPI class Level * asLevel();
    /**
     * @hash   -1766624690
     * @symbol  ?broadcastActorEvent\@Level\@\@UEAAXAEAVActor\@\@W4ActorEvent\@\@H\@Z
     */
    MCVAPI void broadcastActorEvent(class Actor &, enum class ActorEvent, int);
    /**
     * @hash   -848240213
     * @symbol  ?broadcastBossEvent\@Level\@\@UEAAXW4BossEventUpdateType\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType);
    /**
     * @hash   381001380
     * @symbol  ?broadcastBossEvent\@Level\@\@UEAAXW4BossEventUpdateType\@\@AEBUActorUniqueID\@\@AEBVBossEventPacket\@\@\@Z
     */
    MCVAPI void broadcastBossEvent(enum class BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &);
    /**
     * @hash   1638198793
     * @symbol  ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@PEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void broadcastLevelEvent(enum class LevelEvent, class CompoundTag const &, class UserEntityIdentifierComponent const *);
    /**
     * @hash   300948414
     * @symbol  ?broadcastLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@HPEBVUserEntityIdentifierComponent\@\@\@Z
     */
    MCVAPI void broadcastLevelEvent(enum class LevelEvent, class Vec3 const &, int, class UserEntityIdentifierComponent const *);
    /**
     * @hash   1934893879
     * @symbol  ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@AEBVBlock\@\@\@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum class LevelEvent, class Vec3 const &, class Block const &);
    /**
     * @hash   -1852223222
     * @symbol  ?broadcastLocalEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum class LevelEvent, class Vec3 const &, int);
    /**
     * @hash   1035694640
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   1670344690
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void broadcastSoundEvent(class Dimension &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   913679139
     * @symbol  ?broadcastSoundEvent\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1427574945
     * @symbol  ?canUseSkin\@Level\@\@UEBA_NAEBVSerializedSkin\@\@AEBVNetworkIdentifier\@\@AEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool canUseSkin(class SerializedSkin const &, class NetworkIdentifier const &, class mce::UUID const &, std::string const &) const;
    /**
     * @hash   -861761657
     * @symbol  ?consolidateLevelChunkMetaData\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   -1810098260
     * @symbol  ?copyAndLockMap\@Level\@\@UEAA_NUActorUniqueID\@\@0\@Z
     */
    MCVAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @hash   1696405036
     * @symbol  ?countUsersWithMatchingNetworkId\@Level\@\@UEBAHAEBVNetworkIdentifier\@\@\@Z
     */
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const &) const;
    /**
     * @hash   -622531542
     * @symbol  ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   -372190602
     * @symbol  ?createMapSavedData\@Level\@\@UEAAAEAVMapItemSavedData\@\@AEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H\@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(std::vector<struct ActorUniqueID> const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   -905131352
     * @symbol  ?createPhotoStorage\@Level\@\@UEAAXXZ
     */
    MCVAPI void createPhotoStorage();
    /**
     * @hash   -1746780001
     * @symbol  ?decrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   284688958
     * @symbol  ?denyEffect\@Level\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCVAPI void denyEffect(class BlockSource &, class Vec3 const &);
    /**
     * @hash   1722537470
     * @symbol  ?destroyBlock\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCVAPI bool destroyBlock(class BlockSource &, class BlockPos const &, bool);
    /**
     * @hash   -1638032487
     * @symbol  ?digestServerBlockProperties\@Level\@\@UEAAXAEBVStartGamePacket\@\@I\@Z
     */
    MCVAPI void digestServerBlockProperties(class StartGamePacket const &, unsigned int);
    /**
     * @hash   366290596
     * @symbol  ?digestServerItemComponents\@Level\@\@UEAAXAEBVItemComponentPacket\@\@\@Z
     */
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const &);
    /**
     * @hash   869354618
     * @symbol  ?directTickEntities\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void directTickEntities(class BlockSource &);
    /**
     * @hash   -739030202
     * @symbol  ?entityChangeDimension\@Level\@\@UEAAXAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$optional\@VVec3\@\@\@std\@\@\@Z
     */
    MCVAPI void entityChangeDimension(class Actor &, class AutomaticID<class Dimension, int>, class std::optional<class Vec3>);
    /**
     * @hash   -1763339807
     * @symbol  ?expandMapByID\@Level\@\@UEAA?AUActorUniqueID\@\@U2\@_N\@Z
     */
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    /**
     * @hash   -1142297965
     * @symbol  ?explode\@Level\@\@UEAAXAEAVExplosion\@\@\@Z
     */
    MCVAPI void explode(class Explosion &);
    /**
     * @hash   -810722739
     * @symbol  ?explode\@Level\@\@UEAAXAEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M_N3M3\@Z
     */
    MCVAPI void explode(class BlockSource &, class Actor *, class Vec3 const &, float, bool, bool, float, bool);
    /**
     * @hash   576731202
     * @symbol  ?extinguishFire\@Level\@\@UEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool extinguishFire(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @hash   -2099276825
     * @symbol  ?fetchEntity\@Level\@\@UEBAPEAVActor\@\@UActorUniqueID\@\@_N\@Z
     */
    MCVAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;
    /**
     * @hash   -485879833
     * @symbol  ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@HHHAEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, class NavigationComponent &);
    /**
     * @hash   -518465617
     * @symbol  ?findPath\@Level\@\@UEAA?AV?$unique_ptr\@VPath\@\@U?$default_delete\@VPath\@\@\@std\@\@\@std\@\@AEAVActor\@\@0AEAVNavigationComponent\@\@\@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, class NavigationComponent &);
    /**
     * @hash   -920707251
     * @symbol  ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVWeakEntityRef\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class WeakEntityRef const &)>) const;
    /**
     * @hash   1546001926
     * @symbol  ?findPlayer\@Level\@\@UEBAPEAVPlayer\@\@V?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   335297075
     * @symbol  ?flushRunTimeLighting\@Level\@\@UEAAXXZ
     */
    MCVAPI void flushRunTimeLighting();
    /**
     * @hash   -429830542
     * @symbol  ?forEachDimension\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension const &)>) const;
    /**
     * @hash   -1484643466
     * @symbol  ?forEachDimension\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVDimension\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension &)>);
    /**
     * @hash   -89272482
     * @symbol  ?forEachPlayer\@Level\@\@UEAAXV?$function\@$$A6A_NAEAVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player &)>);
    /**
     * @hash   1505121946
     * @symbol  ?forEachPlayer\@Level\@\@UEBAXV?$function\@$$A6A_NAEBVPlayer\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   -917086330
     * @symbol  ?forEachUser\@Level\@\@UEBAXV?$function\@$$A6A_NAEAVEntityContext\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void forEachUser(class std::function<bool (class EntityContext &)>) const;
    /**
     * @hash   2111608526
     * @symbol  ?forceFlushRemovedPlayers\@Level\@\@UEAAXXZ
     */
    MCVAPI void forceFlushRemovedPlayers();
    /**
     * @hash   36853650
     * @symbol  ?forceRemoveEntity\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntity(class Actor &);
    /**
     * @hash   857609518
     * @symbol  ?forceRemoveEntityfromWorld\@Level\@\@UEAAXAEAVActor\@\@\@Z
     */
    MCVAPI void forceRemoveEntityfromWorld(class Actor &);
    /**
     * @hash   -443358471
     * @symbol  ?getActivePlayerCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActivePlayerCount() const;
    /**
     * @hash   1845767955
     * @symbol  ?getActiveUsers\@Level\@\@UEBAAEBV?$vector\@VWeakEntityRef\@\@V?$allocator\@VWeakEntityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class WeakEntityRef> const & getActiveUsers() const;
    /**
     * @hash   -1191514966
     * @symbol  ?getActiveUsersCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getActiveUsersCount() const;
    /**
     * @hash   301319066
     * @symbol  ?getActorAnimationControllerGroup\@Level\@\@UEBAPEAVActorAnimationControllerGroup\@\@XZ
     */
    MCVAPI class ActorAnimationControllerGroup * getActorAnimationControllerGroup() const;
    /**
     * @hash   1802704039
     * @symbol  ?getActorAnimationGroup\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VActorAnimationGroup\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>> getActorAnimationGroup() const;
    /**
     * @hash   -1541557537
     * @symbol  ?getActorEventCoordinator\@Level\@\@UEAAAEAVActorEventCoordinator\@\@XZ
     */
    MCVAPI class ActorEventCoordinator & getActorEventCoordinator();
    /**
     * @hash   1431386575
     * @symbol  ?getActorFactory\@Level\@\@UEBAAEBVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory const & getActorFactory() const;
    /**
     * @hash   1062136787
     * @symbol  ?getActorFactory\@Level\@\@UEAAAEAVActorFactory\@\@XZ
     */
    MCVAPI class ActorFactory & getActorFactory();
    /**
     * @hash   361204203
     * @symbol  ?getActorInfoRegistry\@Level\@\@UEAAPEAVActorInfoRegistry\@\@XZ
     */
    MCVAPI class ActorInfoRegistry * getActorInfoRegistry();
    /**
     * @hash   2080828468
     * @symbol  ?getActorPropertyGroup\@Level\@\@UEBAAEAVPropertyGroupManager\@\@XZ
     */
    MCVAPI class PropertyGroupManager & getActorPropertyGroup() const;
    /**
     * @hash   -1655539022
     * @symbol  ?getAdventureSettings\@Level\@\@UEAAAEAUAdventureSettings\@\@XZ
     */
    MCVAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @hash   1682367054
     * @symbol  ?getBehaviorFactory\@Level\@\@UEBAAEAVBehaviorFactory\@\@XZ
     */
    MCVAPI class BehaviorFactory & getBehaviorFactory() const;
    /**
     * @hash   244797758
     * @symbol  ?getBehaviorTreeGroup\@Level\@\@UEBAAEAVBehaviorTreeGroup\@\@XZ
     */
    MCVAPI class BehaviorTreeGroup & getBehaviorTreeGroup() const;
    /**
     * @hash   -1673549681
     * @symbol  ?getBiomeComponentFactory\@Level\@\@UEAAAEAVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory & getBiomeComponentFactory();
    /**
     * @hash   892796171
     * @symbol  ?getBiomeComponentFactory\@Level\@\@UEBAAEBVBiomeComponentFactory\@\@XZ
     */
    MCVAPI class BiomeComponentFactory const & getBiomeComponentFactory() const;
    /**
     * @hash   114127131
     * @symbol  ?getBiomeRegistry\@Level\@\@UEBAAEBVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry const & getBiomeRegistry() const;
    /**
     * @hash   1115318431
     * @symbol  ?getBiomeRegistry\@Level\@\@UEAAAEAVBiomeRegistry\@\@XZ
     */
    MCVAPI class BiomeRegistry & getBiomeRegistry();
    /**
     * @hash   1800421583
     * @symbol  ?getBlockComponentFactory\@Level\@\@UEAAAEAVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory & getBlockComponentFactory();
    /**
     * @hash   900268811
     * @symbol  ?getBlockComponentFactory\@Level\@\@UEBAAEBVBlockComponentFactory\@\@XZ
     */
    MCVAPI class BlockComponentFactory const & getBlockComponentFactory() const;
    /**
     * @hash   1375191698
     * @symbol  ?getBlockDefinitions\@Level\@\@UEBAPEAVBlockDefinitionGroup\@\@XZ
     */
    MCVAPI class BlockDefinitionGroup * getBlockDefinitions() const;
    /**
     * @hash   -225212785
     * @symbol  ?getBlockEventCoordinator\@Level\@\@UEAAAEAVBlockEventCoordinator\@\@XZ
     */
    MCVAPI class BlockEventCoordinator & getBlockEventCoordinator();
    /**
     * @hash   -1819520225
     * @symbol  ?getBlockPalette\@Level\@\@UEBAAEBVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette const & getBlockPalette() const;
    /**
     * @hash   823039587
     * @symbol  ?getBlockPalette\@Level\@\@UEAAAEAVBlockPalette\@\@XZ
     */
    MCVAPI class BlockPalette & getBlockPalette();
    /**
     * @hash   -943595730
     * @symbol  ?getBlockReducer\@Level\@\@UEBAPEAVBlockReducer\@\@XZ
     */
    MCVAPI class BlockReducer * getBlockReducer() const;
    /**
     * @hash   767549043
     * @symbol  ?getBlockRegistry\@Level\@\@UEBA?AV?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@XZ
     */
    MCVAPI class std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const;
    /**
     * @hash   568652927
     * @symbol  ?getCameraPresets\@Level\@\@UEAAAEAVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets & getCameraPresets();
    /**
     * @hash   1468777083
     * @symbol  ?getCameraPresets\@Level\@\@UEBAAEBVCameraPresets\@\@XZ
     */
    MCVAPI class CameraPresets const & getCameraPresets() const;
    /**
     * @hash   665900267
     * @symbol  ?getChunkTickRange\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getChunkTickRange() const;
    /**
     * @hash   -1740674941
     * @symbol  ?getClientPlayerEventCoordinator\@Level\@\@UEAAAEAVClientPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ClientPlayerEventCoordinator & getClientPlayerEventCoordinator();
    /**
     * @hash   1319994095
     * @symbol  ?getClientResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @hash   -965161181
     * @symbol  ?getClientTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getClientTickingOffsets() const;
    /**
     * @hash   -927634277
     * @symbol  ?getCurrentServerTick\@Level\@\@UEBA?BUTick\@\@XZ
     */
    MCVAPI struct Tick const getCurrentServerTick() const;
    /**
     * @hash   1155124841
     * @symbol  ?getCurrentTick\@Level\@\@UEBAAEBUTick\@\@XZ
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   -1403174518
     * @symbol  ?getDefaultAbilities\@Level\@\@UEAAAEAVAbilities\@\@XZ
     */
    MCVAPI class Abilities & getDefaultAbilities();
    /**
     * @hash   -552714265
     * @symbol  ?getDefaultGameType\@Level\@\@UEBA?AW4GameType\@\@XZ
     */
    MCVAPI enum class GameType getDefaultGameType() const;
    /**
     * @hash   -108593760
     * @symbol  ?getDefaultPermissions\@Level\@\@UEAAAEAVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @hash   -201735076
     * @symbol  ?getDefaultPermissions\@Level\@\@UEBAAEBVPermissionsHandler\@\@XZ
     */
    MCVAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   732914482
     * @symbol  ?getDefaultSpawn\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @hash   -293000878
     * @symbol  ?getDifficulty\@Level\@\@UEBA?AW4Difficulty\@\@XZ
     */
    MCVAPI enum class Difficulty getDifficulty() const;
    /**
     * @hash   380237174
     * @symbol  ?getDimension\@Level\@\@UEBA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getDimension(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   771832285
     * @symbol  ?getDimensionConversionData\@Level\@\@UEBA?AVDimensionConversionData\@\@XZ
     */
    MCVAPI class DimensionConversionData getDimensionConversionData() const;
    /**
     * @hash   2066405949
     * @symbol  ?getDimensionDefinitionGroup\@Level\@\@UEBA?BV?$optional\@VDimensionDefinitionGroup\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<class DimensionDefinitionGroup> const getDimensionDefinitionGroup() const;
    /**
     * @hash   -835197443
     * @symbol  ?getDimensionFactory\@Level\@\@UEBAAEBV?$OwnerPtrFactory\@VDimension\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class Level &, class Scheduler &> const & getDimensionFactory() const;
    /**
     * @hash   530668353
     * @symbol  ?getDimensionFactory\@Level\@\@UEAAAEAV?$OwnerPtrFactory\@VDimension\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class OwnerPtrFactory<class Dimension, class Level &, class Scheduler &> & getDimensionFactory();
    /**
     * @hash   -1899849448
     * @symbol  ?getDisablePlayerInteractions\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getDisablePlayerInteractions() const;
    /**
     * @hash   -743194143
     * @symbol  ?getEducationLevelSettings\@Level\@\@UEBAAEBV?$optional\@UEducationLevelSettings\@\@\@std\@\@XZ
     */
    MCVAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @hash   -185848372
     * @symbol  ?getEntities\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getEntities() const;
    /**
     * @hash   1677667752
     * @symbol  ?getEntityDefinitions\@Level\@\@UEBAPEAVActorDefinitionGroup\@\@XZ
     */
    MCVAPI class ActorDefinitionGroup * getEntityDefinitions() const;
    /**
     * @hash   -1088701461
     * @symbol  ?getEntityRegistry\@Level\@\@UEBA?AV?$StackRefResultT\@UEntityRegistryConstRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @hash   426546545
     * @symbol  ?getEntityRegistry\@Level\@\@UEAA?AV?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @hash   -1132818753
     * @symbol  ?getEntitySystems\@Level\@\@UEAAAEAVEntitySystems\@\@XZ
     */
    MCVAPI class EntitySystems & getEntitySystems();
    /**
     * @hash   585951279
     * @symbol  ?getEventing\@Level\@\@UEAAAEAVIMinecraftEventing\@\@XZ
     */
    MCVAPI class IMinecraftEventing & getEventing();
    /**
     * @hash   1713495711
     * @symbol  ?getFeatureRegistry\@Level\@\@UEAAAEAVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry & getFeatureRegistry();
    /**
     * @hash   116187035
     * @symbol  ?getFeatureRegistry\@Level\@\@UEBAAEBVFeatureRegistry\@\@XZ
     */
    MCVAPI class FeatureRegistry const & getFeatureRegistry() const;
    /**
     * @hash   -208564493
     * @symbol  ?getFeatureTypeFactory\@Level\@\@UEAAAEAVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory & getFeatureTypeFactory();
    /**
     * @hash   -937468753
     * @symbol  ?getFeatureTypeFactory\@Level\@\@UEBAAEBVFeatureTypeFactory\@\@XZ
     */
    MCVAPI class FeatureTypeFactory const & getFeatureTypeFactory() const;
    /**
     * @hash   -1071627137
     * @symbol  ?getGameRules\@Level\@\@UEAAAEAVGameRules\@\@XZ
     */
    MCVAPI class GameRules & getGameRules();
    /**
     * @hash   1405659899
     * @symbol  ?getGameRules\@Level\@\@UEBAAEBVGameRules\@\@XZ
     */
    MCVAPI class GameRules const & getGameRules() const;
    /**
     * @hash   1324106623
     * @symbol  ?getHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult & getHitResult();
    /**
     * @hash   504031240
     * @symbol  ?getIOTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup & getIOTasksGroup();
    /**
     * @hash   -1115438371
     * @symbol  ?getImmersiveReaderString\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string const & getImmersiveReaderString() const;
    /**
     * @hash   -1748746178
     * @symbol  ?getInternalComponentRegistry\@Level\@\@UEBAAEAVInternalComponentRegistry\@\@XZ
     */
    MCVAPI class InternalComponentRegistry & getInternalComponentRegistry() const;
    /**
     * @hash   -1341691917
     * @symbol  ?getItemEventCoordinator\@Level\@\@UEAAAEAVItemEventCoordinator\@\@XZ
     */
    MCVAPI class ItemEventCoordinator & getItemEventCoordinator();
    /**
     * @hash   -1841168954
     * @symbol  ?getItemRegistry\@Level\@\@UEBA?AVItemRegistryRef\@\@XZ
     */
    MCVAPI class ItemRegistryRef getItemRegistry() const;
    /**
     * @hash   479277791
     * @symbol  ?getJigsawStructureRegistry\@Level\@\@UEAAAEAVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry & getJigsawStructureRegistry();
    /**
     * @hash   -1782875941
     * @symbol  ?getJigsawStructureRegistry\@Level\@\@UEBAAEBVJigsawStructureRegistry\@\@XZ
     */
    MCVAPI class JigsawStructureRegistry const & getJigsawStructureRegistry() const;
    /**
     * @hash   256303090
     * @symbol  ?getLANBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcast() const;
    /**
     * @hash   364166606
     * @symbol  ?getLANBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcastIntent() const;
    /**
     * @hash   1481376934
     * @symbol  ?getLastOrDefaultSpawnDimensionId\@Level\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@V2\@\@Z
     */
    MCVAPI class AutomaticID<class Dimension, int> getLastOrDefaultSpawnDimensionId(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   1549639484
     * @symbol  ?getLevelChunkMetaDataDictionary\@Level\@\@UEBA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @hash   1676654447
     * @symbol  ?getLevelData\@Level\@\@UEAAAEAVLevelData\@\@XZ
     */
    MCVAPI class LevelData & getLevelData();
    /**
     * @hash   -760461141
     * @symbol  ?getLevelData\@Level\@\@UEBAAEBVLevelData\@\@XZ
     */
    MCVAPI class LevelData const & getLevelData() const;
    /**
     * @hash   581185300
     * @symbol  ?getLevelEntity\@Level\@\@UEAA?AV?$WeakRefT\@UEntityRefTraits\@\@\@\@XZ
     */
    MCVAPI class WeakRefT<struct EntityRefTraits> getLevelEntity();
    /**
     * @hash   1505633791
     * @symbol  ?getLevelEventCoordinator\@Level\@\@UEAAAEAVLevelEventCoordinator\@\@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @hash   -1842135697
     * @symbol  ?getLevelId\@Level\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getLevelId() const;
    /**
     * @hash   1155418015
     * @symbol  ?getLevelStorage\@Level\@\@UEBAAEBVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage const & getLevelStorage() const;
    /**
     * @hash   1762811939
     * @symbol  ?getLevelStorage\@Level\@\@UEAAAEAVLevelStorage\@\@XZ
     */
    MCVAPI class LevelStorage & getLevelStorage();
    /**
     * @hash   1871066493
     * @symbol  ?getLightTextureImageBuilderFactory\@Level\@\@UEAAAEAV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> & getLightTextureImageBuilderFactory();
    /**
     * @hash   -379342471
     * @symbol  ?getLightTextureImageBuilderFactory\@Level\@\@UEBAAEBV?$Factory\@VBaseLightTextureImageBuilder\@\@AEAVLevel\@\@AEAVScheduler\@\@\@\@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> const & getLightTextureImageBuilderFactory() const;
    /**
     * @hash   616636899
     * @symbol  ?getLiquidHitResult\@Level\@\@UEAAAEAVHitResult\@\@XZ
     */
    MCVAPI class HitResult & getLiquidHitResult();
    /**
     * @hash   -201817069
     * @symbol  ?getLootTables\@Level\@\@UEAAAEAVLootTables\@\@XZ
     */
    MCVAPI class LootTables & getLootTables();
    /**
     * @hash   -2047863928
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const &);
    /**
     * @hash   742047716
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@PEBVCompoundTag\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const *);
    /**
     * @hash   -169371829
     * @symbol  ?getMapSavedData\@Level\@\@UEAAPEAVMapItemSavedData\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(struct ActorUniqueID);
    /**
     * @hash   470705521
     * @symbol  ?getMob\@Level\@\@UEBAPEAVMob\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Mob * getMob(struct ActorUniqueID) const;
    /**
     * @hash   -631654874
     * @symbol  ?getMultiplayerGameIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   1892935890
     * @symbol  ?getNetEventCallback\@Level\@\@UEBA?AV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const;
    /**
     * @hash   -860609949
     * @symbol  ?getNetherScale\@Level\@\@UEBAHXZ
     */
    MCVAPI int getNetherScale() const;
    /**
     * @hash   -166512115
     * @symbol  ?getNewPlayerId\@Level\@\@UEBAHXZ
     */
    MCVAPI int getNewPlayerId() const;
    /**
     * @hash   1248169644
     * @symbol  ?getNewUniqueID\@Level\@\@UEAA?AUActorUniqueID\@\@XZ
     */
    MCVAPI struct ActorUniqueID getNewUniqueID();
    /**
     * @hash   -2115721560
     * @symbol  ?getNextRuntimeID\@Level\@\@UEAA?AVActorRuntimeID\@\@XZ
     */
    MCVAPI class ActorRuntimeID getNextRuntimeID();
    /**
     * @hash   -702558828
     * @symbol  ?getNumRemotePlayers\@Level\@\@UEAAHXZ
     */
    MCVAPI int getNumRemotePlayers();
    /**
     * @hash   398971526
     * @symbol  ?getOrCreateDimension\@Level\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   1602985022
     * @symbol  ?getPacketSender\@Level\@\@UEBAPEAVPacketSender\@\@XZ
     */
    MCVAPI class PacketSender * getPacketSender() const;
    /**
     * @hash   1736835084
     * @symbol  ?getPauseManager\@Level\@\@UEAA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@VPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager>> getPauseManager();
    /**
     * @hash   1022209672
     * @symbol  ?getPauseManager\@Level\@\@UEBA?AV?$StackRefResultT\@U?$SharePtrRefTraits\@$$CBVPauseManager\@\@\@\@\@\@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>> getPauseManager() const;
    /**
     * @hash   -535386829
     * @symbol  ?getPhotoStorage\@Level\@\@UEAAAEAVPhotoStorage\@\@XZ
     */
    MCVAPI class PhotoStorage & getPhotoStorage();
    /**
     * @hash   -650539096
     * @symbol  ?getPlatformBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   -943792017
     * @symbol  ?getPlatformBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @hash   -217104999
     * @symbol  ?getPlatformPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlatformPlayer(std::string const &) const;
    /**
     * @hash   640152748
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayer(std::string const &) const;
    /**
     * @hash   628323943
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class Player * getPlayer(class mce::UUID const &) const;
    /**
     * @hash   -1552662051
     * @symbol  ?getPlayer\@Level\@\@UEBAPEAVPlayer\@\@UActorUniqueID\@\@\@Z
     */
    MCVAPI class Player * getPlayer(struct ActorUniqueID) const;
    /**
     * @hash   692950073
     * @symbol  ?getPlayerAbilities\@Level\@\@UEAAPEAVLayeredAbilities\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCVAPI class LayeredAbilities * getPlayerAbilities(struct ActorUniqueID const &);
    /**
     * @hash   1488368957
     * @symbol  ?getPlayerByXuid\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerByXuid(std::string const &) const;
    /**
     * @hash   144923379
     * @symbol  ?getPlayerColor\@Level\@\@UEBA?AVColor\@mce\@\@AEBVPlayer\@\@\@Z
     */
    MCVAPI class mce::Color getPlayerColor(class Player const &) const;
    /**
     * @hash   -1435992764
     * @symbol  ?getPlayerFromServerId\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerFromServerId(std::string const &) const;
    /**
     * @hash   -1692161071
     * @symbol  ?getPlayerFromUnknownIdentifier\@Level\@\@UEBAPEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI class Player * getPlayerFromUnknownIdentifier(std::string const &) const;
    /**
     * @hash   679573835
     * @symbol  ?getPlayerList\@Level\@\@UEAAAEAV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> & getPlayerList();
    /**
     * @hash   -972018873
     * @symbol  ?getPlayerList\@Level\@\@UEBAAEBV?$unordered_map\@VUUID\@mce\@\@VPlayerListEntry\@\@U?$hash\@VUUID\@mce\@\@\@std\@\@U?$equal_to\@VUUID\@mce\@\@\@5\@V?$allocator\@U?$pair\@$$CBVUUID\@mce\@\@VPlayerListEntry\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const & getPlayerList() const;
    /**
     * @hash   -1708343860
     * @symbol  ?getPlayerMovementSettings\@Level\@\@UEBAAEBUPlayerMovementSettings\@\@XZ
     */
    MCVAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @hash   -2016840856
     * @symbol  ?getPlayerNames\@Level\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getPlayerNames();
    /**
     * @hash   624500809
     * @symbol  ?getPlayerPlatformOnlineId\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const & getPlayerPlatformOnlineId(class mce::UUID const &) const;
    /**
     * @hash   -923836046
     * @symbol  ?getPlayerXUID\@Level\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI std::string const & getPlayerXUID(class mce::UUID const &) const;
    /**
     * @hash   -483351357
     * @symbol  ?getPortalForcer\@Level\@\@UEAAAEAVPortalForcer\@\@XZ
     */
    MCVAPI class PortalForcer & getPortalForcer();
    /**
     * @hash   364355211
     * @symbol  ?getPositionTrackerDBClient\@Level\@\@UEBAPEAVPositionTrackingDBClient\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBClient * getPositionTrackerDBClient() const;
    /**
     * @hash   1314438395
     * @symbol  ?getPositionTrackerDBServer\@Level\@\@UEBAPEAVPositionTrackingDBServer\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @hash   1543046151
     * @symbol  ?getPrimaryLocalPlayer\@Level\@\@UEBAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player * getPrimaryLocalPlayer() const;
    /**
     * @hash   1763397438
     * @symbol  ?getProjectileFactory\@Level\@\@UEBAAEAVProjectileFactory\@\@XZ
     */
    MCVAPI class ProjectileFactory & getProjectileFactory() const;
    /**
     * @hash   -1469506318
     * @symbol  ?getRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random & getRandom() const;
    /**
     * @hash   -2037142110
     * @symbol  ?getRandomPlayer\@Level\@\@UEAAPEAVPlayer\@\@XZ
     */
    MCVAPI class Player * getRandomPlayer();
    /**
     * @hash   -2011983634
     * @symbol  ?getRecipes\@Level\@\@UEBAAEAVRecipes\@\@XZ
     */
    MCVAPI class Recipes & getRecipes() const;
    /**
     * @hash   -2036968700
     * @symbol  ?getRegisteredBorderBlock\@Level\@\@UEBAAEBVBlockLegacy\@\@XZ
     */
    MCVAPI class BlockLegacy const & getRegisteredBorderBlock() const;
    /**
     * @hash   -1941962487
     * @symbol  ?getRemotePlayerEventCoordinator\@Level\@\@UEAAAEAVPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class PlayerEventCoordinator & getRemotePlayerEventCoordinator();
    /**
     * @hash   62060412
     * @symbol  ?getRuntimeActorList\@Level\@\@UEBA?AV?$vector\@PEAVActor\@\@V?$allocator\@PEAVActor\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class Actor *> getRuntimeActorList() const;
    /**
     * @hash   1523288439
     * @symbol  ?getRuntimeEntity\@Level\@\@UEBAPEAVActor\@\@VActorRuntimeID\@\@_N\@Z
     */
    MCVAPI class Actor * getRuntimeEntity(class ActorRuntimeID, bool) const;
    /**
     * @hash   1498873337
     * @symbol  ?getRuntimePlayer\@Level\@\@UEBAPEAVPlayer\@\@VActorRuntimeID\@\@\@Z
     */
    MCVAPI class Player * getRuntimePlayer(class ActorRuntimeID) const;
    /**
     * @hash   1249481837
     * @symbol  ?getSavedData\@Level\@\@UEBAAEAVSavedDataStorage\@\@XZ
     */
    MCVAPI class SavedDataStorage & getSavedData() const;
    /**
     * @hash   1306532515
     * @symbol  ?getScoreboard\@Level\@\@UEAAAEAVScoreboard\@\@XZ
     */
    MCVAPI class Scoreboard & getScoreboard();
    /**
     * @hash   893758383
     * @symbol  ?getScreenshotsFolder\@Level\@\@UEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const;
    /**
     * @hash   -1657147681
     * @symbol  ?getScriptingEventCoordinator\@Level\@\@UEAAAEAVScriptingEventCoordinator\@\@XZ
     */
    MCVAPI class ScriptingEventCoordinator & getScriptingEventCoordinator();
    /**
     * @hash   1063437946
     * @symbol  ?getSeed\@Level\@\@UEAAIXZ
     */
    MCVAPI unsigned int getSeed();
    /**
     * @hash   864859311
     * @symbol  ?getServerNetworkEventCoordinator\@Level\@\@UEAAAEAVServerNetworkEventCoordinator\@\@XZ
     */
    MCVAPI class ServerNetworkEventCoordinator & getServerNetworkEventCoordinator();
    /**
     * @hash   1360519747
     * @symbol  ?getServerPlayerEventCoordinator\@Level\@\@UEAAAEAVServerPlayerEventCoordinator\@\@XZ
     */
    MCVAPI class ServerPlayerEventCoordinator & getServerPlayerEventCoordinator();
    /**
     * @hash   -2039115913
     * @symbol  ?getServerResourcePackManager\@Level\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @hash   762545878
     * @symbol  ?getSharedSpawnPos\@Level\@\@UEBAAEBVBlockPos\@\@XZ
     */
    MCVAPI class BlockPos const & getSharedSpawnPos() const;
    /**
     * @hash   -1403779516
     * @symbol  ?getSimPaused\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool getSimPaused();
    /**
     * @symbol  ?getSleepStatus\@Level\@\@UEBA?AUSleepStatus\@ILevel\@\@XZ
     */
    MCVAPI struct ILevel::SleepStatus getSleepStatus() const;
    /**
     * @hash   -1354090318
     * @symbol  ?getSoundPlayer\@Level\@\@UEBA?AV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const;
    /**
     * @hash   -577391685
     * @symbol  ?getSpawnGroupRegistry\@Level\@\@UEBAPEBVSpawnGroupRegistry\@\@XZ
     */
    MCVAPI class SpawnGroupRegistry const * getSpawnGroupRegistry() const;
    /**
     * @hash   1921887026
     * @symbol  ?getSpawnRules\@Level\@\@UEBAPEBVActorSpawnRuleGroup\@\@XZ
     */
    MCVAPI class ActorSpawnRuleGroup const * getSpawnRules() const;
    /**
     * @hash   1652778135
     * @symbol  ?getSpawnRulesMutable\@Level\@\@UEBAPEAVActorSpawnRuleGroup\@\@XZ
     */
    MCVAPI class ActorSpawnRuleGroup * getSpawnRulesMutable() const;
    /**
     * @hash   -2119166114
     * @symbol  ?getSpawnSettings\@Level\@\@UEBAAEBUSpawnSettings\@\@XZ
     */
    MCVAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @hash   -542917261
     * @symbol  ?getSpawnableTickedMobCountPrevious\@Level\@\@UEBAIXZ
     */
    MCVAPI unsigned int getSpawnableTickedMobCountPrevious() const;
    /**
     * @hash   -1414199138
     * @symbol  ?getSpawner\@Level\@\@UEBAAEAVSpawner\@\@XZ
     */
    MCVAPI class Spawner & getSpawner() const;
    /**
     * @hash   -358663360
     * @symbol  ?getSpecialMultiplier\@Level\@\@UEBAMV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI float getSpecialMultiplier(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   -2051247128
     * @symbol  ?getStructureManager\@Level\@\@UEAA?AV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> getStructureManager();
    /**
     * @hash   380313252
     * @symbol  ?getStructureManager\@Level\@\@UEBA?BV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const getStructureManager() const;
    /**
     * @hash   -1549787553
     * @symbol  ?getSubChunkRequestManager\@Level\@\@UEAAPEAVSubChunkRequestManager\@\@XZ
     */
    MCVAPI class SubChunkRequestManager * getSubChunkRequestManager();
    /**
     * @hash   1529116687
     * @symbol  ?getSurfaceBuilderRegistry\@Level\@\@UEBAAEBVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry const & getSurfaceBuilderRegistry() const;
    /**
     * @hash   -1618269805
     * @symbol  ?getSurfaceBuilderRegistry\@Level\@\@UEAAAEAVSurfaceBuilderRegistry\@\@XZ
     */
    MCVAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();
    /**
     * @hash   -1593046771
     * @symbol  ?getSyncTasksGroup\@Level\@\@UEAAAEAVTaskGroup\@\@XZ
     */
    MCVAPI class TaskGroup & getSyncTasksGroup();
    /**
     * @hash   253094535
     * @symbol  ?getTagRegistry\@Level\@\@UEAAAEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@XZ
     */
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> & getTagRegistry();
    /**
     * @hash   1903240880
     * @symbol  ?getTearingDown\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool getTearingDown() const;
    /**
     * @hash   201248604
     * @symbol  ?getThreadRandom\@Level\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @hash   1307713642
     * @symbol  ?getTickingArea\@Level\@\@UEBAPEAVITickingArea\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCVAPI class ITickingArea * getTickingArea(class mce::UUID const &) const;
    /**
     * @hash   63741130
     * @symbol  ?getTickingAreasMgr\@Level\@\@UEAAAEAVTickingAreasManager\@\@XZ
     */
    MCVAPI class TickingAreasManager & getTickingAreasMgr();
    /**
     * @hash   -1649257864
     * @symbol  ?getTickingOffsets\@Level\@\@UEBAAEBV?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getTickingOffsets() const;
    /**
     * @hash   1103707050
     * @symbol  ?getTime\@Level\@\@UEBAHXZ
     */
    MCVAPI int getTime() const;
    /**
     * @hash   -935596869
     * @symbol  ?getTradeTables\@Level\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @hash   -1055786670
     * @symbol  ?getUnknownBlockTypeRegistry\@Level\@\@UEAAAEAVIUnknownBlockTypeRegistry\@\@XZ
     */
    MCVAPI class IUnknownBlockTypeRegistry & getUnknownBlockTypeRegistry();
    /**
     * @hash   638960453
     * @symbol  ?getUserCount\@Level\@\@UEBAHXZ
     */
    MCVAPI int getUserCount() const;
    /**
     * @hash   -900320265
     * @symbol  ?getUsers\@Level\@\@UEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getUsers() const;
    /**
     * @hash   -1314854213
     * @symbol  ?getUsers\@Level\@\@UEAAAEAV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> & getUsers();
    /**
     * @hash   893399676
     * @symbol  ?getWorldRegistriesProvider\@Level\@\@UEBAAEBVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider const & getWorldRegistriesProvider() const;
    /**
     * @hash   -27452288
     * @symbol  ?getWorldRegistriesProvider\@Level\@\@UEAAAEAVIWorldRegistriesProvider\@\@XZ
     */
    MCVAPI class IWorldRegistriesProvider & getWorldRegistriesProvider();
    /**
     * @hash   1081375605
     * @symbol  ?getXBLBroadcastIntent\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   -1530949764
     * @symbol  ?getXBLBroadcastMode\@Level\@\@UEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCVAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @hash   -1379381011
     * @symbol  ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVCompoundTag\@\@\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class CompoundTag const &);
    /**
     * @hash   -264248326
     * @symbol  ?handleLevelEvent\@Level\@\@UEAAXW4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCVAPI void handleLevelEvent(enum class LevelEvent, class Vec3 const &, int);
    /**
     * @hash   -1858221620
     * @symbol  ?handleSoundEvent\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void handleSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   -1383274271
     * @symbol  ?handleSoundEvent\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCVAPI void handleSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1579893698
     * @symbol  ?handleStopAllSounds\@Level\@\@UEAAXXZ
     */
    MCVAPI void handleStopAllSounds();
    /**
     * @hash   1732480868
     * @symbol  ?handleStopSoundEvent\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void handleStopSoundEvent(std::string const &);
    /**
     * @hash   -1054951293
     * @symbol  ?hasCommandsEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasCommandsEnabled() const;
    /**
     * @hash   14509717
     * @symbol  ?hasLevelStorage\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasLevelStorage() const;
    /**
     * @hash   -1880041144
     * @symbol  ?hasPlatformBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcast() const;
    /**
     * @hash   -345005388
     * @symbol  ?hasPlatformBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcastIntent() const;
    /**
     * @hash   1567581095
     * @symbol  ?hasStartWithMapEnabled\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   -1381806611
     * @symbol  ?hasXBLBroadcast\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcast() const;
    /**
     * @hash   -995514471
     * @symbol  ?hasXBLBroadcastIntent\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcastIntent() const;
    /**
     * @hash   -1752725087
     * @symbol  ?incrementSpawnableTickedMob\@Level\@\@UEAAXXZ
     */
    MCVAPI void incrementSpawnableTickedMob();
    /**
     * @hash   -996482309
     * @symbol  ?incrementTagCache\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   -692219036
     * @symbol  ?initialize\@Level\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@PEAVLevelData\@\@AEBVExperiments\@\@PEBV23\@\@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @hash   -1153411838
     * @symbol  ?initializeBlockDefinitionGroup\@Level\@\@UEAAXXZ
     */
    MCVAPI void initializeBlockDefinitionGroup();
    /**
     * @hash   1245661952
     * @symbol  ?initializeLevelChunkMetaData\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   1092643024
     * @symbol  ?isClientSide\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isClientSide() const;
    /**
     * @hash   1477947858
     * @symbol  ?isClientSideGenerationEnabled\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isClientSideGenerationEnabled();
    /**
     * @hash   1835217807
     * @symbol  ?isEditorWorld\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEditorWorld() const;
    /**
     * @hash   1645905616
     * @symbol  ?isEdu\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isEdu() const;
    /**
     * @hash   1310890344
     * @symbol  ?isExporting\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isExporting() const;
    /**
     * @hash   424455846
     * @symbol  ?isLeaveGameDone\@Level\@\@UEAA_NXZ
     */
    MCVAPI bool isLeaveGameDone();
    /**
     * @hash   1768604598
     * @symbol  ?isMultiplayerGame\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool isMultiplayerGame() const;
    /**
     * @hash   154181821
     * @symbol  ?isPlayerSuspended\@Level\@\@UEBA_NAEAVPlayer\@\@\@Z
     */
    MCVAPI bool isPlayerSuspended(class Player &) const;
    /**
     * @symbol  ?levelCleanupQueueEntityRemoval\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1200983269
     * @symbol  ?loadBlockDefinitionGroup\@Level\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    MCVAPI void loadBlockDefinitionGroup(class Experiments const &);
    /**
     * @hash   2073837074
     * @symbol  ?loadFunctionManager\@Level\@\@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @hash   1989741445
     * @symbol  ?notifySubChunkRequestManager\@Level\@\@UEAAXAEBVSubChunkPacket\@\@\@Z
     */
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const &);
    /**
     * @hash   -1840774583
     * @symbol  ?onChunkDiscarded\@Level\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkDiscarded(class LevelChunk &);
    /**
     * @hash   1459239149
     * @symbol  ?onChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   1353662431
     * @symbol  ?onChunkReload\@Level\@\@UEAAXAEBUBounds\@\@\@Z
     */
    MCVAPI void onChunkReload(struct Bounds const &);
    /**
     * @hash   1964482176
     * @symbol  ?onChunkReloaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   961393598
     * @symbol  ?onPlayerDeath\@Level\@\@UEAAXAEAVPlayer\@\@AEBVActorDamageSource\@\@\@Z
     */
    MCVAPI void onPlayerDeath(class Player &, class ActorDamageSource const &);
    /**
     * @hash   -378120973
     * @symbol  ?onSourceCreated\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceCreated(class BlockSource &);
    /**
     * @hash   1142983810
     * @symbol  ?onSourceDestroyed\@Level\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSourceDestroyed(class BlockSource &);
    /**
     * @hash   -1667073771
     * @symbol  ?onSubChunkLoaded\@Level\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@F_N\@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource &, class LevelChunk &, short, bool);
    /**
     * @hash   -91166519
     * @symbol  ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCVAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -857304271
     * @symbol  ?playSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1080346515
     * @symbol  ?playSound\@Level\@\@UEAAXV?$AutomaticID\@VDimension\@\@H\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSound(class AutomaticID<class Dimension, int>, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1344783835
     * @symbol  ?playSound\@Level\@\@UEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, float, float);
    /**
     * @hash   1225152296
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVIDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(class IDimension &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -772776056
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@AEBVBlock\@\@AEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1688672619
     * @symbol  ?playSynchronizedSound\@Level\@\@UEAAXAEAVBlockSource\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4\@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1504854116
     * @symbol  ?potionSplash\@Level\@\@UEAAXAEBVVec3\@\@AEBVColor\@mce\@\@_N\@Z
     */
    MCVAPI void potionSplash(class Vec3 const &, class mce::Color const &, bool);
    /**
     * @hash   -109331242
     * @symbol  ?pruneChunkViewTrackers\@Level\@\@UEAAXXZ
     */
    MCVAPI void pruneChunkViewTrackers();
    /**
     * @symbol  ?queueEntityDestruction\@Level\@\@UEAAXV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@Z
     */
    MCVAPI void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -562985891
     * @symbol  ?registerEventCoordinators\@Level\@\@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @hash   1761936592
     * @symbol  ?registerTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void registerTemporaryPointer(class _TickPtr &);
    /**
     * @hash   -1006304936
     * @symbol  ?removeActorAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef);
    /**
     * @hash   -1741002162
     * @symbol  ?removeActorFromWorldAndTakeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorFromWorldAndTakeEntity(class WeakEntityRef);
    /**
     * @hash   1280241974
     * @symbol  ?removeBlockSourceFromValidityTracking\@Level\@\@UEAAXPEAVBlockSource\@\@\@Z
     */
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource *);
    /**
     * @hash   -1093874297
     * @symbol  ?removeBossEventListener\@Level\@\@UEAAXPEAVBossEventListener\@\@\@Z
     */
    MCVAPI void removeBossEventListener(class BossEventListener *);
    /**
     * @hash   -656179905
     * @symbol  ?removeDisplayEntity\@Level\@\@UEAAXVWeakEntityRef\@\@\@Z
     */
    MCVAPI void removeDisplayEntity(class WeakEntityRef);
    /**
     * @hash   1418561653
     * @symbol  ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEAVActor\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor &);
    /**
     * @hash   -1110743071
     * @symbol  ?removeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);
    /**
     * @hash   1598619865
     * @symbol  ?removeListener\@Level\@\@UEAAXAEAVLevelListener\@\@\@Z
     */
    MCVAPI void removeListener(class LevelListener &);
    /**
     * @hash   600983405
     * @symbol  ?requestMapInfo\@Level\@\@UEAAXUActorUniqueID\@\@_N\@Z
     */
    MCVAPI void requestMapInfo(struct ActorUniqueID, bool);
    /**
     * @hash   -22654445
     * @symbol  ?requestPlayerChangeDimension\@Level\@\@UEAAXAEAVPlayer\@\@V?$unique_ptr\@VChangeDimensionRequest\@\@U?$default_delete\@VChangeDimensionRequest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void requestPlayerChangeDimension(class Player &, std::unique_ptr<class ChangeDimensionRequest>);
    /**
     * @hash   636928422
     * @symbol  ?requestTimedStorageDeferment\@Level\@\@UEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestTimedStorageDeferment();
    /**
     * @hash   1743021842
     * @symbol  ?resumePlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void resumePlayer(class Player &);
    /**
     * @hash   2111694317
     * @symbol  ?runCommand\@Level\@\@UEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum class CommandOriginSystem);
    /**
     * @hash   -1002080364
     * @symbol  ?runCommand\@Level\@\@UEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CommandOriginSystem, enum class CurrentCmdVersion);
    /**
     * @hash   56946528
     * @symbol  ?save\@Level\@\@UEAAXXZ
     */
    MCVAPI void save();
    /**
     * @hash   -1854097583
     * @symbol  ?saveAdditionalData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @hash   279238560
     * @symbol  ?saveBiomeData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveBiomeData();
    /**
     * @hash   -1267927522
     * @symbol  ?saveDirtyChunks\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveDirtyChunks();
    /**
     * @hash   663167544
     * @symbol  ?saveDynamicProperties\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @hash   -1965304705
     * @symbol  ?saveEducationLevelSettings\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveEducationLevelSettings();
    /**
     * @hash   -337394932
     * @symbol  ?saveGameData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveGameData();
    /**
     * @hash   1940803012
     * @symbol  ?saveLevelData\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveLevelData();
    /**
     * @hash   -1360582750
     * @symbol  ?savePlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void savePlayer(class Player &);
    /**
     * @hash   589046152
     * @symbol  ?savePlayers\@Level\@\@UEAAXXZ
     */
    MCVAPI void savePlayers();
    /**
     * @hash   122878247
     * @symbol  ?saveVillages\@Level\@\@UEAAXXZ
     */
    MCVAPI void saveVillages();
    /**
     * @hash   -368820769
     * @symbol  ?sendAllPlayerAbilities\@Level\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    MCVAPI void sendAllPlayerAbilities(class Player const &);
    /**
     * @hash   139718160
     * @symbol  ?sendServerLegacyParticle\@Level\@\@UEAAXW4ParticleType\@\@AEBVVec3\@\@1H\@Z
     */
    MCVAPI void sendServerLegacyParticle(enum class ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @hash   -640883396
     * @symbol  ?setActorEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VActorEventCoordinator\@\@U?$default_delete\@VActorEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator> &&);
    /**
     * @hash   1084322836
     * @symbol  ?setBlockEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VBlockEventCoordinator\@\@U?$default_delete\@VBlockEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator> &&);
    /**
     * @hash   879768489
     * @symbol  ?setClientPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VClientPlayerEventCoordinator\@\@U?$default_delete\@VClientPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator> &&);
    /**
     * @hash   929702450
     * @symbol  ?setCommandsEnabled\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @hash   -595089574
     * @symbol  ?setDefaultGameType\@Level\@\@UEAAXW4GameType\@\@\@Z
     */
    MCVAPI void setDefaultGameType(enum class GameType);
    /**
     * @hash   -1719595205
     * @symbol  ?setDefaultSpawn\@Level\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    MCVAPI void setDefaultSpawn(class BlockPos const &);
    /**
     * @hash   1424872649
     * @symbol  ?setDifficulty\@Level\@\@UEAAXW4Difficulty\@\@\@Z
     */
    MCVAPI void setDifficulty(enum class Difficulty);
    /**
     * @hash   -78717935
     * @symbol  ?setDisablePlayerInteractions\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setDisablePlayerInteractions(bool);
    /**
     * @hash   -1106146147
     * @symbol  ?setEducationLevelSettings\@Level\@\@UEAAXUEducationLevelSettings\@\@\@Z
     */
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings);
    /**
     * @hash   1733533172
     * @symbol  ?setFinishedInitializing\@Level\@\@UEAAXXZ
     */
    MCVAPI void setFinishedInitializing();
    /**
     * @hash   1555495804
     * @symbol  ?setHasLockedBehaviorPack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedBehaviorPack(bool);
    /**
     * @hash   1438665200
     * @symbol  ?setHasLockedResourcePack\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setHasLockedResourcePack(bool);
    /**
     * @hash   1998082750
     * @symbol  ?setImmersiveReaderString\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setImmersiveReaderString(std::string);
    /**
     * @hash   2059475863
     * @symbol  ?setIsExporting\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setIsExporting(bool);
    /**
     * @hash   -1039339326
     * @symbol  ?setItemEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VItemEventCoordinator\@\@U?$default_delete\@VItemEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator> &&);
    /**
     * @hash   -679127329
     * @symbol  ?setLANBroadcast\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcast(bool);
    /**
     * @hash   -1930799661
     * @symbol  ?setLANBroadcastIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setLANBroadcastIntent(bool);
    /**
     * @hash   -1025193810
     * @symbol  ?setLevelId\@Level\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setLevelId(std::string);
    /**
     * @hash   -1217697123
     * @symbol  ?setMsaGamertagsOnly\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMsaGamertagsOnly(bool);
    /**
     * @hash   -514386609
     * @symbol  ?setMultiplayerGame\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGame(bool);
    /**
     * @hash   695215171
     * @symbol  ?setMultiplayerGameIntent\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setMultiplayerGameIntent(bool);
    /**
     * @hash   -1831850341
     * @symbol  ?setNetEventCallback\@Level\@\@UEAAXV?$NonOwnerPointer\@VNetEventCallback\@\@\@Bedrock\@\@\@Z
     */
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback>);
    /**
     * @hash   1917168881
     * @symbol  ?setPacketSender\@Level\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @hash   -1456896239
     * @symbol  ?setPlatformBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   -594664838
     * @symbol  ?setPlatformBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   958760662
     * @symbol  ?setPlayerAbilities\@Level\@\@UEAAXAEBUActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const &, class LayeredAbilities const &);
    /**
     * @hash   393331539
     * @symbol  ?setPlayerMovementSettings\@Level\@\@UEAAXAEBUPlayerMovementSettings\@\@\@Z
     */
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const &);
    /**
     * @hash   795519326
     * @symbol  ?setRemotePlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VPlayerEventCoordinator\@\@U?$default_delete\@VPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator> &&);
    /**
     * @hash   203160430
     * @symbol  ?setScriptingEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VScriptingEventCoordinator\@\@U?$default_delete\@VScriptingEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setScriptingEventCoordinator(std::unique_ptr<class ScriptingEventCoordinator> &&);
    /**
     * @hash   1397570850
     * @symbol  ?setServerNetworkEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerNetworkEventCoordinator\@\@U?$default_delete\@VServerNetworkEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator> &&);
    /**
     * @hash   912516609
     * @symbol  ?setServerPlayerEventCoordinator\@Level\@\@UEAAX$$QEAV?$unique_ptr\@VServerPlayerEventCoordinator\@\@U?$default_delete\@VServerPlayerEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCVAPI void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator> &&);
    /**
     * @hash   461020758
     * @symbol  ?setSimPaused\@Level\@\@UEAAX_N\@Z
     */
    MCVAPI void setSimPaused(bool);
    /**
     * @symbol  ?setSleepStatus\@Level\@\@UEAAXAEBUSleepStatus\@ILevel\@\@\@Z
     */
    MCVAPI void setSleepStatus(struct ILevel::SleepStatus const &);
    /**
     * @hash   -415410625
     * @symbol  ?setSpawnSettings\@Level\@\@UEAAXAEBUSpawnSettings\@\@\@Z
     */
    MCVAPI void setSpawnSettings(struct SpawnSettings const &);
    /**
     * @hash   1149688941
     * @symbol  ?setTime\@Level\@\@UEAAXH\@Z
     */
    MCVAPI void setTime(int);
    /**
     * @hash   719626650
     * @symbol  ?setWorldTemplateOptionsUnlocked\@Level\@\@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @hash   -1560840628
     * @symbol  ?setXBLBroadcastIntent\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   -1778192267
     * @symbol  ?setXBLBroadcastMode\@Level\@\@UEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCVAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   1082369047
     * @symbol  ?spawnParticleEffect\@Level\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@PEAVDimension\@\@\@Z
     */
    MCVAPI void spawnParticleEffect(std::string const &, class Vec3 const &, class Dimension *);
    /**
     * @hash   848891210
     * @symbol  ?startLeaveGame\@Level\@\@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   1258056587
     * @symbol  ?suspendAndSave\@Level\@\@UEAAXXZ
     */
    MCVAPI void suspendAndSave();
    /**
     * @hash   1943799043
     * @symbol  ?suspendPlayer\@Level\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void suspendPlayer(class Player &);
    /**
     * @symbol  ?takeEntity\@Level\@\@UEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@VWeakEntityRef\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk &);
    /**
     * @hash   1616847460
     * @symbol  ?takePicture\@Level\@\@UEAAXAEAVImageBuffer\@cg\@\@PEAVActor\@\@1AEAUScreenshotOptions\@\@\@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
    /**
     * @hash   -737848976
     * @symbol  ?tick\@Level\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   -936772895
     * @symbol  ?tickEntities\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntities();
    /**
     * @hash   -1019258153
     * @symbol  ?tickEntitySystems\@Level\@\@UEAAXXZ
     */
    MCVAPI void tickEntitySystems();
    /**
     * @hash   -1589657033
     * @symbol  ?unregisterTemporaryPointer\@Level\@\@UEAAXAEAV_TickPtr\@\@\@Z
     */
    MCVAPI void unregisterTemporaryPointer(class _TickPtr &);
    /**
     * @hash   -487959370
     * @symbol  ?updateSleepingPlayerList\@Level\@\@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
    /**
     * @hash   457292936
     * @symbol  ?updateWeather\@Level\@\@UEAAXMHMH\@Z
     */
    MCVAPI void updateWeather(float, int, float, int);
    /**
     * @hash   -244483621
     * @symbol  ?upgradeStorageVersion\@Level\@\@UEAAXW4StorageVersion\@\@\@Z
     */
    MCVAPI void upgradeStorageVersion(enum class StorageVersion);
    /**
     * @hash   1214534213
     * @symbol  ?useMsaGamertagsOnly\@Level\@\@UEBA_NXZ
     */
    MCVAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   -1865918391
     * @symbol  ?waitAsyncSuspendWork\@Level\@\@UEAAXXZ
     */
    MCVAPI void waitAsyncSuspendWork();
    /**
     * @hash   -470139768
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~Level();
#endif
    /**
     * @hash   2145487806
     * @symbol  ??0Level\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@V?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@4\@AEAVIMinecraftEventing\@\@_NW4SubClientId\@\@AEAVScheduler\@\@V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@2\@AEAVResourcePackManager\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIEntityRegistryOwner\@\@\@Bedrock\@\@\@2\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VBlockComponentFactory\@\@U?$default_delete\@VBlockComponentFactory\@\@\@std\@\@\@4\@V?$unique_ptr\@VBlockDefinitionGroup\@\@U?$default_delete\@VBlockDefinitionGroup\@\@\@std\@\@\@4\@VItemRegistryRef\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@4\@4V?$optional\@VDimensionDefinitionGroup\@\@\@4\@\@Z
     */
    MCAPI Level(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, bool, enum class SubClientId, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>, bool, class std::optional<class DimensionDefinitionGroup>);
    /**
     * @hash   1834786234
     * @symbol  ?canChangeDimension\@Level\@\@QEAA_NAEAVActor\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI bool canChangeDimension(class Actor &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?getActorManager\@Level\@\@QEAAAEAVActorManager\@\@XZ
     */
    MCAPI class ActorManager & getActorManager();
    /**
     * @hash   1943521254
     * @symbol  ?getAdventureSettings\@Level\@\@QEBAAEBUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @symbol  ?getAutonomousActorManager\@Level\@\@QEBAAEBVAutonomousActorManager\@\@XZ
     */
    MCAPI class AutonomousActorManager const & getAutonomousActorManager() const;
    /**
     * @hash   1353559126
     * @symbol  ?getCapabilities\@Level\@\@QEBAAEBUISharedController\@PlayerCapabilities\@\@XZ
     */
    MCAPI struct PlayerCapabilities::ISharedController const & getCapabilities() const;
    /**
     * @hash   697783446
     * @symbol  ?getDimensionDefinition\@Level\@\@QEBA?AV?$optional\@UDimensionDefinition\@DimensionDefinitionGroup\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    /**
     * @hash   -389724220
     * @symbol  ?getLevelSeed64\@Level\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getLevelSeed64() const;
    /**
     * @hash   142633547
     * @symbol  ?getNpcDialogueStorage\@Level\@\@QEAAPEAVNpcDialogueStorage\@\@XZ
     */
    MCAPI class NpcDialogueStorage * getNpcDialogueStorage();
    /**
     * @hash   -1198223942
     * @symbol  ?getServerLevelEventCoordinator\@Level\@\@QEAAAEAVServerLevelEventCoordinator\@\@XZ
     */
    MCAPI class ServerLevelEventCoordinator & getServerLevelEventCoordinator();
    /**
     * @hash   -16673694
     * @symbol  ?getSideBySideEntity\@Level\@\@QEBA?AVStrictEntityContext\@\@XZ
     */
    MCAPI class StrictEntityContext getSideBySideEntity() const;
    /**
     * @hash   -429822478
     * @symbol  ?getTickDeltaTime\@Level\@\@QEBANXZ
     */
    MCAPI double getTickDeltaTime() const;
    /**
     * @symbol  ?isChunkInTickRange\@Level\@\@QEAAXAEBVChunkPos\@\@AEBVDimension\@\@AEA_N\@Z
     */
    MCAPI void isChunkInTickRange(class ChunkPos const &, class Dimension const &, bool &);
    /**
     * @hash   1008844208
     * @symbol  ?isChunkInTickRange\@Level\@\@QEBA_NAEBVLevelChunk\@\@V?$optional\@H\@std\@\@\@Z
     */
    MCAPI bool isChunkInTickRange(class LevelChunk const &, class std::optional<int>) const;
    /**
     * @hash   -1276277852
     * @symbol  ?isFree\@Level\@\@QEAA?AW4NodeType\@\@AEAVNavigationComponent\@\@AEAVActor\@\@AEBVBlockPos\@\@22W4CanJumpIntoNode\@\@\@Z
     */
    MCAPI enum class NodeType isFree(class NavigationComponent &, class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum class CanJumpIntoNode);
    /**
     * @hash   -348174320
     * @symbol  ?setClientLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$unique_ptr\@VClientLevelEventCoordinator\@\@U?$default_delete\@VClientLevelEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setClientLevelEventCoordinator(std::unique_ptr<class ClientLevelEventCoordinator> &&);
    /**
     * @hash   193355130
     * @symbol  ?setNpcEventCoordinator\@Level\@\@QEAAXV?$unique_ptr\@VNpcEventCoordinator\@\@U?$default_delete\@VNpcEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setNpcEventCoordinator(std::unique_ptr<class NpcEventCoordinator>);
    /**
     * @hash   137586032
     * @symbol  ?setPerformanceTelemetryPeriodicCallback\@Level\@\@QEAAXV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void setPerformanceTelemetryPeriodicCallback(class std::function<void (void)>);
    /**
     * @hash   -120771664
     * @symbol  ?setServerLevelEventCoordinator\@Level\@\@QEAAX$$QEAV?$unique_ptr\@VServerLevelEventCoordinator\@\@U?$default_delete\@VServerLevelEventCoordinator\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setServerLevelEventCoordinator(std::unique_ptr<class ServerLevelEventCoordinator> &&);
    /**
     * @hash   1752685239
     * @symbol  ?transferActorToOwnedEntityLimbo\@Level\@\@QEAAXAEBVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI void transferActorToOwnedEntityLimbo(class Player const &, class Actor &);
    /**
     * @hash   -523366248
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
     * @hash   634514190
     * @symbol  ?addLevelComponents\@Level\@\@SAXAEAVEntityContext\@\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI static void addLevelComponents(class EntityContext &, class IRandom &, bool);
    /**
     * @hash   -1772900135
     * @symbol  ?addSideBySideLevelComponents\@Level\@\@SAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI static void addSideBySideLevelComponents(class EntityContext &, bool);
    /**
     * @hash   1760789920
     * @symbol  ?createRandomSeed\@Level\@\@SAIXZ
     */
    MCAPI static unsigned int createRandomSeed();
    /**
     * @hash   -546685301
     * @symbol  ?isUsableLevel\@Level\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool isUsableLevel(class ILevel const &);
    /**
     * @hash   2046660391
     * @symbol  ?parseLevelSeed64\@Level\@\@SA?AVLevelSeed64\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const &);

//private:
    /**
     * @hash   1425283017
     * @symbol  ?_checkBlockSourceValidity\@Level\@\@AEAAXXZ
     */
    MCAPI void _checkBlockSourceValidity();
    /**
     * @hash   -170229494
     * @symbol  ?_cleanupDisconnectedPlayers\@Level\@\@AEAAXXZ
     */
    MCAPI void _cleanupDisconnectedPlayers();
    /**
     * @hash   777003977
     * @symbol  ?_clearOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void _clearOwnedEntityLimboForPlayer(class Player const &);
    /**
     * @hash   1387578291
     * @symbol  ?_createMapSavedData\@Level\@\@AEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData & _createMapSavedData(struct ActorUniqueID const &);
    /**
     * @hash   956876515
     * @symbol  ?_getCrashDumpLogCategory\@Level\@\@AEAA?AW4CrashDumpLogStringID\@\@XZ
     */
    MCAPI enum class CrashDumpLogStringID _getCrashDumpLogCategory();
    /**
     * @hash   306806108
     * @symbol  ?_getOwnedEntityLimboStorageKeyForPlayer\@Level\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI std::string _getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID const &) const;
    /**
     * @hash   -816423275
     * @symbol  ?_getValidatedPlayerName\@Level\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string _getValidatedPlayerName(std::string const &);
    /**
     * @hash   327202779
     * @symbol  ?_handleChangeDimensionRequests\@Level\@\@AEAAXXZ
     */
    MCAPI void _handleChangeDimensionRequests();
    /**
     * @symbol  ?_initializeActorManager\@Level\@\@AEAAXXZ
     */
    MCAPI void _initializeActorManager();
    /**
     * @hash   -1342156818
     * @symbol  ?_loadAutonomousEntities\@Level\@\@AEAAXXZ
     */
    MCAPI void _loadAutonomousEntities();
    /**
     * @hash   -1534587923
     * @symbol  ?_loadBiomeData\@Level\@\@AEAAXXZ
     */
    MCAPI void _loadBiomeData();
    /**
     * @hash   -1804664922
     * @symbol  ?_loadMapData\@Level\@\@AEAAPEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class MapItemSavedData * _loadMapData(struct ActorUniqueID const &);
    /**
     * @hash   -294325470
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
     * @hash   815324005
     * @symbol  ?_playerChangeDimensionPrepareRegion\@Level\@\@AEAAXAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI void _playerChangeDimensionPrepareRegion(class Player &, class ChangeDimensionRequest &);
    /**
     * @hash   541568290
     * @symbol  ?_playerChangeDimensionWaitingForChunks\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForChunks(class Player &, class ChangeDimensionRequest &);
    /**
     * @hash   1367418976
     * @symbol  ?_playerChangeDimensionWaitingForRespawn\@Level\@\@AEAA_NAEAVPlayer\@\@AEAVChangeDimensionRequest\@\@\@Z
     */
    MCAPI bool _playerChangeDimensionWaitingForRespawn(class Player &, class ChangeDimensionRequest &);
    /**
     * @hash   1937194109
     * @symbol  ?_processPlayerNetworking\@Level\@\@AEAAXXZ
     */
    MCAPI void _processPlayerNetworking();
    /**
     * @hash   1154851625
     * @symbol  ?_removePlayerFromPlayerList\@Level\@\@AEAA?AVUUID\@mce\@\@QEBVPlayer\@\@\@Z
     */
    MCAPI class mce::UUID _removePlayerFromPlayerList(class Player const *const);
    /**
     * @hash   1945424842
     * @symbol  ?_resumePlayer\@Level\@\@AEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void _resumePlayer(class mce::UUID const &);
    /**
     * @hash   -631742107
     * @symbol  ?_saveAutonomousEntities\@Level\@\@AEAAXXZ
     */
    MCAPI void _saveAutonomousEntities();
    /**
     * @hash   -1726522793
     * @symbol  ?_saveOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void _saveOwnedEntityLimboForPlayer(class Player const &);
    /**
     * @hash   -1542081314
     * @symbol  ?_saveSomeChunks\@Level\@\@AEAAXXZ
     */
    MCAPI void _saveSomeChunks();
    /**
     * @hash   -980552727
     * @symbol  ?_suspendPlayer\@Level\@\@AEAAXAEBVUUID\@mce\@\@\@Z
     */
    MCAPI void _suspendPlayer(class mce::UUID const &);
    /**
     * @hash   -562765024
     * @symbol  ?_syncTime\@Level\@\@AEAAXH\@Z
     */
    MCAPI void _syncTime(int);
    /**
     * @hash   -1858481670
     * @symbol  ?processOwnedEntityLimboForPlayer\@Level\@\@AEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void processOwnedEntityLimboForPlayer(class Player const &);

private:

};