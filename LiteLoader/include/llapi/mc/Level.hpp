/**
 * @file  Level.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "PlayerCapabilities.hpp"
#include "DimensionDefinitionGroup.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "Core.hpp"
#include "BlockInstance.hpp"
#include "Tick.hpp"
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
     * @hash   590483530
     * @symbol ?_checkUserStorage@Level@@UEAAXXZ
     */
    MCVAPI void _checkUserStorage();
    /**
     * @hash   1531174373
     * @symbol ?_clientHandleAddOwnedEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddOwnedEntity(class EntityNetId);
    /**
     * @hash   2120045003
     * @symbol ?_clientHandleAddWeakRefEntity@Level@@UEAA?AV?$StackRefResultT@UEntityRefTraits@@@@VEntityNetId@@V?$WeakRefT@UEntityRefTraits@@@@@Z
     */
    MCVAPI class StackRefResultT<struct EntityRefTraits> _clientHandleAddWeakRefEntity(class EntityNetId, class WeakRefT<struct EntityRefTraits>);
    /**
     * @hash   -183656639
     * @symbol ?_clientHandleRemoveOwnedEntity@Level@@UEAAXVEntityNetId@@@Z
     */
    MCVAPI void _clientHandleRemoveOwnedEntity(class EntityNetId);
    /**
     * @hash   -97848853
     * @symbol ?_clientHandleRemoveWeakRefEntity@Level@@UEAAXVEntityNetId@@@Z
     */
    MCVAPI void _clientHandleRemoveWeakRefEntity(class EntityNetId);
    /**
     * @hash   1855632094
     * @symbol ?_destroyEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@H@Z
     */
    MCVAPI void _destroyEffect(class BlockPos const &, class Block const &, int);
    /**
     * @hash   1148341131
     * @symbol ?_localPlayerChangedDimension@Level@@MEAAXXZ
     */
    MCVAPI void _localPlayerChangedDimension();
    /**
     * @hash   128609870
     * @symbol ?addAutonomousEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI class Actor * addAutonomousEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1136242830
     * @symbol ?addBlockSourceForValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
     */
    MCVAPI void addBlockSourceForValidityTracking(class BlockSource *);
    /**
     * @hash   -600128636
     * @symbol ?addBossEventListener@Level@@UEAAXPEAVBossEventListener@@@Z
     */
    MCVAPI void addBossEventListener(class BossEventListener *);
    /**
     * @hash   1795841471
     * @symbol ?addBreakingItemParticleEffect@Level@@UEAAXAEBVVec3@@W4ParticleType@@AEBUTextureUVCoordinateSet@@_N@Z
     */
    MCVAPI void addBreakingItemParticleEffect(class Vec3 const &, enum ParticleType, struct TextureUVCoordinateSet const &, bool);
    /**
     * @hash   -553835802
     * @symbol ?addChunkViewTracker@Level@@UEAAXV?$weak_ptr@VChunkViewSource@@@std@@@Z
     */
    MCVAPI void addChunkViewTracker(class std::weak_ptr<class ChunkViewSource>);
    /**
     * @hash   1889806974
     * @symbol ?addDisplayEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI class Actor * addDisplayEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -111337698
     * @symbol ?addEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI class Actor * addEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1674905823
     * @symbol ?addGlobalEntity@Level@@UEAAPEAVActor@@AEAVBlockSource@@V?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI class Actor * addGlobalEntity(class BlockSource &, class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -636615540
     * @symbol ?addListener@Level@@UEAAXAEAVLevelListener@@@Z
     */
    MCVAPI void addListener(class LevelListener &);
    /**
     * @hash   -520177389
     * @symbol ?addParticle@Level@@UEAAPEAVParticle@@W4ParticleType@@AEBVVec3@@1HPEBVCompoundTag@@_N@Z
     */
    MCVAPI class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /**
     * @hash   1166418607
     * @symbol ?addParticleEffect@Level@@UEAAXAEBVHashedString@@AEBVVec3@@AEBVMolangVariableMap@@@Z
     */
    MCVAPI void addParticleEffect(class HashedString const &, class Vec3 const &, class MolangVariableMap const &);
    /**
     * @hash   -1230629360
     * @symbol ?addTerrainParticleEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     */
    MCVAPI void addTerrainParticleEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   141935859
     * @symbol ?addTerrainSlideEffect@Level@@UEAAXAEBVBlockPos@@AEBVBlock@@AEBVVec3@@MMM@Z
     */
    MCVAPI void addTerrainSlideEffect(class BlockPos const &, class Block const &, class Vec3 const &, float, float, float);
    /**
     * @hash   -474330992
     * @symbol ?addTickingAreaList@Level@@UEAAXV?$AutomaticID@VDimension@@H@@AEBV?$shared_ptr@VTickingAreaList@@@std@@@Z
     */
    MCVAPI void addTickingAreaList(class AutomaticID<class Dimension, int>, class std::shared_ptr<class TickingAreaList> const &);
    /**
     * @hash   509594403
     * @symbol ?addUser@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI void addUser(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1687300586
     * @symbol ?animateTick@Level@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void animateTick(class Actor &);
    /**
     * @hash   2031699008
     * @symbol ?applyLiquidPhysicsToActor@Level@@UEAAXPEAVActor@@W4MaterialType@@@Z
     */
    MCVAPI void applyLiquidPhysicsToActor(class Actor *, enum MaterialType);
    /**
     * @hash   -456065230
     * @symbol ?areBossEventListenersReady@Level@@UEAA_NXZ
     */
    MCVAPI bool areBossEventListenersReady();
    /**
     * @hash   -1560646281
     * @symbol ?asLevel@Level@@UEAAPEAV1@XZ
     */
    MCVAPI class Level * asLevel();
    /**
     * @hash   1734725742
     * @symbol ?broadcastActorEvent@Level@@UEAAXAEAVActor@@W4ActorEvent@@H@Z
     */
    MCVAPI void broadcastActorEvent(class Actor &, enum ActorEvent, int);
    /**
     * @hash   -1641857077
     * @symbol ?broadcastBossEvent@Level@@UEAAXW4BossEventUpdateType@@@Z
     */
    MCVAPI void broadcastBossEvent(enum BossEventUpdateType);
    /**
     * @hash   -412615484
     * @symbol ?broadcastBossEvent@Level@@UEAAXW4BossEventUpdateType@@AEBUActorUniqueID@@AEBVBossEventPacket@@@Z
     */
    MCVAPI void broadcastBossEvent(enum BossEventUpdateType, struct ActorUniqueID const &, class BossEventPacket const &);
    /**
     * @hash   844581929
     * @symbol ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@PEBVUserEntityIdentifierComponent@@@Z
     */
    MCVAPI void broadcastLevelEvent(enum LevelEvent, class CompoundTag const &, class UserEntityIdentifierComponent const *);
    /**
     * @hash   -492699202
     * @symbol ?broadcastLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z
     */
    MCVAPI void broadcastLevelEvent(enum LevelEvent, class Vec3 const &, int, class UserEntityIdentifierComponent const *);
    /**
     * @hash   1141230887
     * @symbol ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@AEBVBlock@@@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum LevelEvent, class Vec3 const &, class Block const &);
    /**
     * @hash   1649065706
     * @symbol ?broadcastLocalEvent@Level@@UEAAXAEAVBlockSource@@W4LevelEvent@@AEBVVec3@@H@Z
     */
    MCVAPI void broadcastLocalEvent(class BlockSource &, enum LevelEvent, class Vec3 const &, int);
    /**
     * @hash   876604818
     * @symbol ?broadcastSoundEvent@Level@@UEAAXAEAVDimension@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void broadcastSoundEvent(class Dimension &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   241985520
     * @symbol ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   119985395
     * @symbol ?broadcastSoundEvent@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z
     */
    MCVAPI void broadcastSoundEvent(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1527472817
     * @symbol ?canUseSkin@Level@@UEBA_NAEBVSerializedSkin@@AEBVNetworkIdentifier@@AEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool canUseSkin(class SerializedSkin const &, class NetworkIdentifier const &, class mce::UUID const &, std::string const &) const;
    /**
     * @hash   -953648633
     * @symbol ?consolidateLevelChunkMetaData@Level@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   1690467996
     * @symbol ?copyAndLockMap@Level@@UEAA_NUActorUniqueID@@0@Z
     */
    MCVAPI bool copyAndLockMap(struct ActorUniqueID, struct ActorUniqueID);
    /**
     * @hash   901988620
     * @symbol ?countUsersWithMatchingNetworkId@Level@@UEBAHAEBVNetworkIdentifier@@@Z
     */
    MCVAPI int countUsersWithMatchingNetworkId(class NetworkIdentifier const &) const;
    /**
     * @hash   -596910965
     * @symbol ?createDimension@Level@@UEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   -1416409798
     * @symbol ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   -1166099610
     * @symbol ?createMapSavedData@Level@@UEAAAEAVMapItemSavedData@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@H@Z
     */
    MCVAPI class MapItemSavedData & createMapSavedData(std::vector<struct ActorUniqueID> const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int);
    /**
     * @hash   -1699055736
     * @symbol ?createPhotoStorage@Level@@UEAAXXZ
     */
    MCVAPI void createPhotoStorage();
    /**
     * @hash   -1838666977
     * @symbol ?decrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   -509250802
     * @symbol ?denyEffect@Level@@UEAAXAEAVBlockSource@@AEBVVec3@@@Z
     */
    MCVAPI void denyEffect(class BlockSource &, class Vec3 const &);
    /**
     * @hash   928582334
     * @symbol ?destroyBlock@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCVAPI bool destroyBlock(class BlockSource &, class BlockPos const &, bool);
    /**
     * @hash   1862948921
     * @symbol ?digestServerBlockProperties@Level@@UEAAXAEBVStartGamePacket@@I@Z
     */
    MCVAPI void digestServerBlockProperties(class StartGamePacket const &, unsigned int);
    /**
     * @hash   -427710668
     * @symbol ?digestServerItemComponents@Level@@UEAAXAEBVItemComponentPacket@@@Z
     */
    MCVAPI void digestServerItemComponents(class ItemComponentPacket const &);
    /**
     * @hash   777467642
     * @symbol ?directTickEntities@Level@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void directTickEntities(class BlockSource &);
    /**
     * @hash   -1533108346
     * @symbol ?entityChangeDimension@Level@@UEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@V?$optional@VVec3@@@std@@@Z
     */
    MCVAPI void entityChangeDimension(class Actor &, class AutomaticID<class Dimension, int>, class std::optional<class Vec3>);
    /**
     * @hash   1737810737
     * @symbol ?expandMapByID@Level@@UEAA?AUActorUniqueID@@U2@_N@Z
     */
    MCVAPI struct ActorUniqueID expandMapByID(struct ActorUniqueID, bool);
    /**
     * @hash   -1604554867
     * @symbol ?explode@Level@@UEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z
     */
    MCVAPI void explode(class BlockSource &, class Actor *, class Vec3 const &, float, bool, bool, float, bool);
    /**
     * @hash   -1936130093
     * @symbol ?explode@Level@@UEAAXAEAVExplosion@@@Z
     */
    MCVAPI void explode(class Explosion &);
    /**
     * @hash   -217100926
     * @symbol ?extinguishFire@Level@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCVAPI bool extinguishFire(class BlockSource &, class BlockPos const &, unsigned char);
    /**
     * @hash   1401827591
     * @symbol ?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z
     */
    MCVAPI class Actor * fetchEntity(struct ActorUniqueID, bool) const;
    /**
     * @hash   -1312420753
     * @symbol ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@0AEAVNavigationComponent@@@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, class Actor &, class NavigationComponent &);
    /**
     * @hash   -1279834969
     * @symbol ?findPath@Level@@UEAA?AV?$unique_ptr@VPath@@U?$default_delete@VPath@@@std@@@std@@AEAVActor@@HHHAEAVNavigationComponent@@@Z
     */
    MCVAPI std::unique_ptr<class Path> findPath(class Actor &, int, int, int, class NavigationComponent &);
    /**
     * @hash   -1714693139
     * @symbol ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVWeakEntityRef@@@Z@std@@@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class WeakEntityRef const &)>) const;
    /**
     * @hash   752046790
     * @symbol ?findPlayer@Level@@UEBAPEAVPlayer@@V?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCVAPI class Player * findPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   -458719565
     * @symbol ?flushRunTimeLighting@Level@@UEAAXXZ
     */
    MCVAPI void flushRunTimeLighting();
    /**
     * @hash   2016307190
     * @symbol ?forEachDimension@Level@@UEAAXV?$function@$$A6A_NAEAVDimension@@@Z@std@@@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension &)>);
    /**
     * @hash   -1223847182
     * @symbol ?forEachDimension@Level@@UEBAXV?$function@$$A6A_NAEBVDimension@@@Z@std@@@Z
     */
    MCVAPI void forEachDimension(class std::function<bool (class Dimension const &)>) const;
    /**
     * @hash   711089930
     * @symbol ?forEachPlayer@Level@@UEBAXV?$function@$$A6A_NAEBVPlayer@@@Z@std@@@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player const &)>) const;
    /**
     * @hash   -883304498
     * @symbol ?forEachPlayer@Level@@UEAAXV?$function@$$A6A_NAEAVPlayer@@@Z@std@@@Z
     */
    MCVAPI void forEachPlayer(class std::function<bool (class Player &)>);
    /**
     * @hash   -1711133722
     * @symbol ?forEachUser@Level@@UEBAXV?$function@$$A6A_NAEAVEntityContext@@@Z@std@@@Z
     */
    MCVAPI void forEachUser(class std::function<bool (class EntityContext &)>) const;
    /**
     * @hash   1317545758
     * @symbol ?forceFlushRemovedPlayers@Level@@UEAAXXZ
     */
    MCVAPI void forceFlushRemovedPlayers();
    /**
     * @hash   -757209118
     * @symbol ?forceRemoveEntity@Level@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void forceRemoveEntity(class Actor &);
    /**
     * @hash   63515998
     * @symbol ?forceRemoveEntityfromWorld@Level@@UEAAXAEAVActor@@@Z
     */
    MCVAPI void forceRemoveEntityfromWorld(class Actor &);
    /**
     * @hash   -1933791579
     * @symbol ?getActiveAutonomousActors@Level@@UEAAAEAV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class WeakEntityRef> & getActiveAutonomousActors();
    /**
     * @hash   -1237482743
     * @symbol ?getActivePlayerCount@Level@@UEBAHXZ
     */
    MCVAPI int getActivePlayerCount() const;
    /**
     * @hash   173197427
     * @symbol ?getActiveUsers@Level@@UEBAAEBV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class WeakEntityRef> const & getActiveUsers() const;
    /**
     * @hash   -1985639238
     * @symbol ?getActiveUsersCount@Level@@UEBAHXZ
     */
    MCVAPI int getActiveUsersCount() const;
    /**
     * @hash   -492805206
     * @symbol ?getActorAnimationControllerGroup@Level@@UEBAPEAVActorAnimationControllerGroup@@XZ
     */
    MCVAPI class ActorAnimationControllerGroup * getActorAnimationControllerGroup() const;
    /**
     * @hash   1008579767
     * @symbol ?getActorAnimationGroup@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VActorAnimationGroup@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class ActorAnimationGroup>> getActorAnimationGroup() const;
    /**
     * @hash   1959270111
     * @symbol ?getActorEventCoordinator@Level@@UEAAAEAVActorEventCoordinator@@XZ
     */
    MCVAPI class ActorEventCoordinator & getActorEventCoordinator();
    /**
     * @hash   637246927
     * @symbol ?getActorFactory@Level@@UEBAAEBVActorFactory@@XZ
     */
    MCVAPI class ActorFactory const & getActorFactory() const;
    /**
     * @hash   267997139
     * @symbol ?getActorFactory@Level@@UEAAAEAVActorFactory@@XZ
     */
    MCVAPI class ActorFactory & getActorFactory();
    /**
     * @hash   848592651
     * @symbol ?getActorInfoRegistry@Level@@UEAAPEAVActorInfoRegistry@@XZ
     */
    MCVAPI class ActorInfoRegistry * getActorInfoRegistry();
    /**
     * @hash   1286688820
     * @symbol ?getActorPropertyGroup@Level@@UEBAAEAVPropertyGroupManager@@XZ
     */
    MCVAPI class PropertyGroupManager & getActorPropertyGroup() const;
    /**
     * @hash   1845288626
     * @symbol ?getAdventureSettings@Level@@UEAAAEAUAdventureSettings@@XZ
     */
    MCVAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @hash   888227406
     * @symbol ?getBehaviorFactory@Level@@UEBAAEAVBehaviorFactory@@XZ
     */
    MCVAPI class BehaviorFactory & getBehaviorFactory() const;
    /**
     * @hash   -549341890
     * @symbol ?getBehaviorTreeGroup@Level@@UEBAAEAVBehaviorTreeGroup@@XZ
     */
    MCVAPI class BehaviorTreeGroup & getBehaviorTreeGroup() const;
    /**
     * @hash   98656523
     * @symbol ?getBiomeComponentFactory@Level@@UEBAAEBVBiomeComponentFactory@@XZ
     */
    MCVAPI class BiomeComponentFactory const & getBiomeComponentFactory() const;
    /**
     * @hash   1827277967
     * @symbol ?getBiomeComponentFactory@Level@@UEAAAEAVBiomeComponentFactory@@XZ
     */
    MCVAPI class BiomeComponentFactory & getBiomeComponentFactory();
    /**
     * @hash   321178783
     * @symbol ?getBiomeRegistry@Level@@UEAAAEAVBiomeRegistry@@XZ
     */
    MCVAPI class BiomeRegistry & getBiomeRegistry();
    /**
     * @hash   -680012517
     * @symbol ?getBiomeRegistry@Level@@UEBAAEBVBiomeRegistry@@XZ
     */
    MCVAPI class BiomeRegistry const & getBiomeRegistry() const;
    /**
     * @hash   106129163
     * @symbol ?getBlockComponentFactory@Level@@UEBAAEBVBlockComponentFactory@@XZ
     */
    MCVAPI class BlockComponentFactory const & getBlockComponentFactory() const;
    /**
     * @hash   1006281935
     * @symbol ?getBlockComponentFactory@Level@@UEAAAEAVBlockComponentFactory@@XZ
     */
    MCVAPI class BlockComponentFactory & getBlockComponentFactory();
    /**
     * @hash   581052050
     * @symbol ?getBlockDefinitions@Level@@UEBAPEAVBlockDefinitionGroup@@XZ
     */
    MCVAPI class BlockDefinitionGroup * getBlockDefinitions() const;
    /**
     * @hash   -1019352433
     * @symbol ?getBlockEventCoordinator@Level@@UEAAAEAVBlockEventCoordinator@@XZ
     */
    MCVAPI class BlockEventCoordinator & getBlockEventCoordinator();
    /**
     * @hash   1681307423
     * @symbol ?getBlockPalette@Level@@UEBAAEBVBlockPalette@@XZ
     */
    MCVAPI class BlockPalette const & getBlockPalette() const;
    /**
     * @hash   28899939
     * @symbol ?getBlockPalette@Level@@UEAAAEAVBlockPalette@@XZ
     */
    MCVAPI class BlockPalette & getBlockPalette();
    /**
     * @hash   -1737735378
     * @symbol ?getBlockReducer@Level@@UEBAPEAVBlockReducer@@XZ
     */
    MCVAPI class BlockReducer * getBlockReducer() const;
    /**
     * @hash   -26590605
     * @symbol ?getBlockRegistry@Level@@UEBA?AV?$weak_ptr@VBlockTypeRegistry@@@std@@XZ
     */
    MCVAPI class std::weak_ptr<class BlockTypeRegistry> getBlockRegistry() const;
    /**
     * @hash   -128254757
     * @symbol ?getChunkTickRange@Level@@UEBAIXZ
     */
    MCVAPI unsigned int getChunkTickRange() const;
    /**
     * @hash   1760137331
     * @symbol ?getClientPlayerEventCoordinator@Level@@UEAAAEAVClientPlayerEventCoordinator@@XZ
     */
    MCVAPI class ClientPlayerEventCoordinator & getClientPlayerEventCoordinator();
    /**
     * @hash   1223371311
     * @symbol ?getClientResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @hash   -1071424717
     * @symbol ?getClientTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getClientTickingOffsets() const;
    /**
     * @hash   -1721789301
     * @symbol ?getCurrentServerTick@Level@@UEBA?BUTick@@XZ
     */
    MCVAPI struct Tick const getCurrentServerTick() const;
    /**
     * @hash   360969817
     * @symbol ?getCurrentTick@Level@@UEBAAEBUTick@@XZ
     */
    MCVAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   2097637754
     * @symbol ?getDefaultAbilities@Level@@UEAAAEAVAbilities@@XZ
     */
    MCVAPI class Abilities & getDefaultAbilities();
    /**
     * @hash   -1346869289
     * @symbol ?getDefaultGameType@Level@@UEBA?AW4GameType@@XZ
     */
    MCVAPI enum GameType getDefaultGameType() const;
    /**
     * @hash   -995890100
     * @symbol ?getDefaultPermissions@Level@@UEBAAEBVPermissionsHandler@@XZ
     */
    MCVAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   -902748784
     * @symbol ?getDefaultPermissions@Level@@UEAAAEAVPermissionsHandler@@XZ
     */
    MCVAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @hash   -61240542
     * @symbol ?getDefaultSpawn@Level@@UEBAAEBVBlockPos@@XZ
     */
    MCVAPI class BlockPos const & getDefaultSpawn() const;
    /**
     * @hash   -1087155902
     * @symbol ?getDifficulty@Level@@UEBA?AW4Difficulty@@XZ
     */
    MCVAPI enum Difficulty getDifficulty() const;
    /**
     * @hash   -1101057292
     * @symbol ?getDimension@Level@@UEBAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI class Dimension * getDimension(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   -22368867
     * @symbol ?getDimensionConversionData@Level@@UEBA?AVDimensionConversionData@@XZ
     */
    MCVAPI class DimensionConversionData getDimensionConversionData() const;
    /**
     * @hash   1272204797
     * @symbol ?getDimensionDefinitionGroup@Level@@UEBA?BV?$optional@VDimensionDefinitionGroup@@@std@@XZ
     */
    MCVAPI class std::optional<class DimensionDefinitionGroup> const getDimensionDefinitionGroup() const;
    /**
     * @hash   -1010475176
     * @symbol ?getDimensionFactory@Level@@UEBAAEBV?$Factory@VDimension@@AEAVLevel@@AEAVScheduler@@@@XZ
     */
    MCVAPI class Factory<class Dimension, class Level &, class Scheduler &> const & getDimensionFactory() const;
    /**
     * @hash   1662594268
     * @symbol ?getDimensionFactory@Level@@UEAAAEAV?$Factory@VDimension@@AEAVLevel@@AEAVScheduler@@@@XZ
     */
    MCVAPI class Factory<class Dimension, class Level &, class Scheduler &> & getDimensionFactory();
    /**
     * @hash   1600916696
     * @symbol ?getDisablePlayerInteractions@Level@@UEBA_NXZ
     */
    MCVAPI bool getDisablePlayerInteractions() const;
    /**
     * @hash   -1537395295
     * @symbol ?getEducationLevelSettings@Level@@UEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
     */
    MCVAPI class std::optional<struct EducationLevelSettings> const & getEducationLevelSettings() const;
    /**
     * @hash   -980049524
     * @symbol ?getEntities@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getEntities() const;
    /**
     * @hash   883466600
     * @symbol ?getEntityDefinitions@Level@@UEBAPEAVActorDefinitionGroup@@XZ
     */
    MCVAPI class ActorDefinitionGroup * getEntityDefinitions() const;
    /**
     * @hash   322266513
     * @symbol ?getEntityRegistry@Level@@UEAA?AV?$StackRefResultT@UEntityRegistryRefTraits@@@@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryRefTraits> getEntityRegistry();
    /**
     * @hash   -397427253
     * @symbol ?getEntityRegistry@Level@@UEBA?AV?$StackRefResultT@UEntityRegistryConstRefTraits@@@@XZ
     */
    MCVAPI class StackRefResultT<struct EntityRegistryConstRefTraits> getEntityRegistry() const;
    /**
     * @hash   -1927019905
     * @symbol ?getEntitySystems@Level@@UEAAAEAVEntitySystems@@XZ
     */
    MCVAPI class EntitySystems & getEntitySystems();
    /**
     * @hash   -208249873
     * @symbol ?getEventing@Level@@UEAAAEAVIMinecraftEventing@@XZ
     */
    MCVAPI class IMinecraftEventing & getEventing();
    /**
     * @hash   919294559
     * @symbol ?getFeatureRegistry@Level@@UEAAAEAVFeatureRegistry@@XZ
     */
    MCVAPI class FeatureRegistry & getFeatureRegistry();
    /**
     * @hash   -678014117
     * @symbol ?getFeatureRegistry@Level@@UEBAAEBVFeatureRegistry@@XZ
     */
    MCVAPI class FeatureRegistry const & getFeatureRegistry() const;
    /**
     * @hash   -1731669905
     * @symbol ?getFeatureTypeFactory@Level@@UEBAAEBVFeatureTypeFactory@@XZ
     */
    MCVAPI class FeatureTypeFactory const & getFeatureTypeFactory() const;
    /**
     * @hash   -1002765645
     * @symbol ?getFeatureTypeFactory@Level@@UEAAAEAVFeatureTypeFactory@@XZ
     */
    MCVAPI class FeatureTypeFactory & getFeatureTypeFactory();
    /**
     * @hash   -1865828289
     * @symbol ?getGameRules@Level@@UEAAAEAVGameRules@@XZ
     */
    MCVAPI class GameRules & getGameRules();
    /**
     * @hash   611458747
     * @symbol ?getGameRules@Level@@UEBAAEBVGameRules@@XZ
     */
    MCVAPI class GameRules const & getGameRules() const;
    /**
     * @hash   529905471
     * @symbol ?getHitResult@Level@@UEAAAEAVHitResult@@XZ
     */
    MCVAPI class HitResult & getHitResult();
    /**
     * @hash   991419688
     * @symbol ?getIOTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ
     */
    MCVAPI class TaskGroup & getIOTasksGroup();
    /**
     * @hash   -1909639523
     * @symbol ?getImmersiveReaderString@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string const & getImmersiveReaderString() const;
    /**
     * @hash   1752019966
     * @symbol ?getInternalComponentRegistry@Level@@UEBAAEAVInternalComponentRegistry@@XZ
     */
    MCVAPI class InternalComponentRegistry & getInternalComponentRegistry() const;
    /**
     * @hash   -2135893069
     * @symbol ?getItemEventCoordinator@Level@@UEAAAEAVItemEventCoordinator@@XZ
     */
    MCVAPI class ItemEventCoordinator & getItemEventCoordinator();
    /**
     * @hash   1659597190
     * @symbol ?getItemRegistry@Level@@UEBA?AVItemRegistryRef@@XZ
     */
    MCVAPI class ItemRegistryRef getItemRegistry() const;
    /**
     * @hash   1717890203
     * @symbol ?getJigsawStructureRegistry@Level@@UEBAAEBVJigsawStructureRegistry@@XZ
     */
    MCVAPI class JigsawStructureRegistry const & getJigsawStructureRegistry() const;
    /**
     * @hash   -314923361
     * @symbol ?getJigsawStructureRegistry@Level@@UEAAAEAVJigsawStructureRegistry@@XZ
     */
    MCVAPI class JigsawStructureRegistry & getJigsawStructureRegistry();
    /**
     * @hash   -537898062
     * @symbol ?getLANBroadcast@Level@@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcast() const;
    /**
     * @hash   -430034546
     * @symbol ?getLANBroadcastIntent@Level@@UEBA_NXZ
     */
    MCVAPI bool getLANBroadcastIntent() const;
    /**
     * @hash   1278575980
     * @symbol ?getLevelChunkMetaDataDictionary@Level@@UEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @hash   -1554754549
     * @symbol ?getLevelData@Level@@UEBAAEBVLevelData@@XZ
     */
    MCVAPI class LevelData const & getLevelData() const;
    /**
     * @hash   882361039
     * @symbol ?getLevelData@Level@@UEAAAEAVLevelData@@XZ
     */
    MCVAPI class LevelData & getLevelData();
    /**
     * @hash   1068573748
     * @symbol ?getLevelEntity@Level@@UEAA?AV?$WeakRefT@UEntityRefTraits@@@@XZ
     */
    MCVAPI class WeakRefT<struct EntityRefTraits> getLevelEntity();
    /**
     * @hash   711340383
     * @symbol ?getLevelEventCoordinator@Level@@UEAAAEAVLevelEventCoordinator@@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @hash   1658538191
     * @symbol ?getLevelId@Level@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getLevelId() const;
    /**
     * @hash   968518531
     * @symbol ?getLevelStorage@Level@@UEAAAEAVLevelStorage@@XZ
     */
    MCVAPI class LevelStorage & getLevelStorage();
    /**
     * @hash   361124607
     * @symbol ?getLevelStorage@Level@@UEBAAEBVLevelStorage@@XZ
     */
    MCVAPI class LevelStorage const & getLevelStorage() const;
    /**
     * @hash   1076773085
     * @symbol ?getLightTextureImageBuilderFactory@Level@@UEAAAEAV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> & getLightTextureImageBuilderFactory();
    /**
     * @hash   -1173635879
     * @symbol ?getLightTextureImageBuilderFactory@Level@@UEBAAEBV?$Factory@VBaseLightTextureImageBuilder@@AEAVLevel@@AEAVScheduler@@@@XZ
     */
    MCVAPI class Factory<class BaseLightTextureImageBuilder, class Level &, class Scheduler &> const & getLightTextureImageBuilderFactory() const;
    /**
     * @hash   -177656509
     * @symbol ?getLiquidHitResult@Level@@UEAAAEAVHitResult@@XZ
     */
    MCVAPI class HitResult & getLiquidHitResult();
    /**
     * @hash   -996110477
     * @symbol ?getLootTables@Level@@UEAAAEAVLootTables@@XZ
     */
    MCVAPI class LootTables & getLootTables();
    /**
     * @hash   -963665237
     * @symbol ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@UActorUniqueID@@@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(struct ActorUniqueID);
    /**
     * @hash   -52245692
     * @symbol ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@PEBVCompoundTag@@@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const *);
    /**
     * @hash   1452809960
     * @symbol ?getMapSavedData@Level@@UEAAPEAVMapItemSavedData@@AEBVCompoundTag@@@Z
     */
    MCVAPI class MapItemSavedData * getMapSavedData(class CompoundTag const &);
    /**
     * @hash   -323587887
     * @symbol ?getMob@Level@@UEBAPEAVMob@@UActorUniqueID@@@Z
     */
    MCVAPI class Mob * getMob(struct ActorUniqueID) const;
    /**
     * @hash   -1425963658
     * @symbol ?getMultiplayerGameIntent@Level@@UEBA_NXZ
     */
    MCVAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   1098627106
     * @symbol ?getNetEventCallback@Level@@UEBA?AV?$NonOwnerPointer@VNetEventCallback@@@Bedrock@@XZ
     */
    MCVAPI class Bedrock::NonOwnerPointer<class NetEventCallback> getNetEventCallback() const;
    /**
     * @hash   -1654918733
     * @symbol ?getNetherScale@Level@@UEBAHXZ
     */
    MCVAPI int getNetherScale() const;
    /**
     * @hash   -960820899
     * @symbol ?getNewPlayerId@Level@@UEBAHXZ
     */
    MCVAPI int getNewPlayerId() const;
    /**
     * @hash   453860860
     * @symbol ?getNewUniqueID@Level@@UEAA?AUActorUniqueID@@XZ
     */
    MCVAPI struct ActorUniqueID getNewUniqueID();
    /**
     * @hash   1384936952
     * @symbol ?getNextRuntimeID@Level@@UEAA?AVActorRuntimeID@@XZ
     */
    MCVAPI class ActorRuntimeID getNextRuntimeID();
    /**
     * @hash   -1496867612
     * @symbol ?getNumRemotePlayers@Level@@UEAAHXZ
     */
    MCVAPI int getNumRemotePlayers();
    /**
     * @hash   19224257
     * @symbol ?getOwnedInactiveAutonomousActors@Level@@UEAAAEAV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> & getOwnedInactiveAutonomousActors();
    /**
     * @hash   807661422
     * @symbol ?getPacketSender@Level@@UEBAPEAVPacketSender@@XZ
     */
    MCVAPI class PacketSender * getPacketSender() const;
    /**
     * @hash   226886072
     * @symbol ?getPauseManager@Level@@UEBA?AV?$StackRefResultT@U?$SharePtrRefTraits@$$CBVPauseManager@@@@@@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager const>> getPauseManager() const;
    /**
     * @hash   941511484
     * @symbol ?getPauseManager@Level@@UEAA?AV?$StackRefResultT@U?$SharePtrRefTraits@VPauseManager@@@@@@XZ
     */
    MCVAPI class StackRefResultT<struct SharePtrRefTraits<class PauseManager>> getPauseManager();
    /**
     * @hash   -1330710429
     * @symbol ?getPhotoStorage@Level@@UEAAAEAVPhotoStorage@@XZ
     */
    MCVAPI class PhotoStorage & getPhotoStorage();
    /**
     * @hash   -1445862696
     * @symbol ?getPlatformBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCVAPI enum Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   -1739115617
     * @symbol ?getPlatformBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCVAPI enum Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @hash   -1012428599
     * @symbol ?getPlatformPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class Player * getPlatformPlayer(std::string const &) const;
    /**
     * @hash   1947027773
     * @symbol ?getPlayer@Level@@UEBAPEAVPlayer@@UActorUniqueID@@@Z
     */
    MCVAPI class Player * getPlayer(struct ActorUniqueID) const;
    /**
     * @hash   -166968905
     * @symbol ?getPlayer@Level@@UEBAPEAVPlayer@@AEBVUUID@mce@@@Z
     */
    MCVAPI class Player * getPlayer(class mce::UUID const &) const;
    /**
     * @hash   -155155476
     * @symbol ?getPlayer@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class Player * getPlayer(std::string const &) const;
    /**
     * @hash   -102435031
     * @symbol ?getPlayerAbilities@Level@@UEAAPEAVLayeredAbilities@@AEBUActorUniqueID@@@Z
     */
    MCVAPI class LayeredAbilities * getPlayerAbilities(struct ActorUniqueID const &);
    /**
     * @hash   692983853
     * @symbol ?getPlayerByXuid@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class Player * getPlayerByXuid(std::string const &) const;
    /**
     * @hash   -650446349
     * @symbol ?getPlayerColor@Level@@UEBA?AVColor@mce@@AEBVPlayer@@@Z
     */
    MCVAPI class mce::Color getPlayerColor(class Player const &) const;
    /**
     * @hash   2063604804
     * @symbol ?getPlayerFromServerId@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class Player * getPlayerFromServerId(std::string const &) const;
    /**
     * @hash   1807451873
     * @symbol ?getPlayerFromUnknownIdentifier@Level@@UEBAPEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI class Player * getPlayerFromUnknownIdentifier(std::string const &) const;
    /**
     * @hash   -1767388601
     * @symbol ?getPlayerList@Level@@UEBAAEBV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> const & getPlayerList() const;
    /**
     * @hash   -115795893
     * @symbol ?getPlayerList@Level@@UEAAAEAV?$unordered_map@VUUID@mce@@VPlayerListEntry@@U?$hash@VUUID@mce@@@std@@U?$equal_to@VUUID@mce@@@5@V?$allocator@U?$pair@$$CBVUUID@mce@@VPlayerListEntry@@@std@@@5@@std@@XZ
     */
    MCVAPI class std::unordered_map<class mce::UUID, class PlayerListEntry, struct std::hash<class mce::UUID>, struct std::equal_to<class mce::UUID>, class std::allocator<struct std::pair<class mce::UUID const, class PlayerListEntry>>> & getPlayerList();
    /**
     * @hash   1791253708
     * @symbol ?getPlayerMovementSettings@Level@@UEBAAEBUPlayerMovementSettings@@XZ
     */
    MCVAPI struct PlayerMovementSettings const & getPlayerMovementSettings() const;
    /**
     * @hash   1482695208
     * @symbol ?getPlayerNames@Level@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getPlayerNames();
    /**
     * @hash   -170930423
     * @symbol ?getPlayerPlatformOnlineId@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
     */
    MCVAPI std::string const & getPlayerPlatformOnlineId(class mce::UUID const &) const;
    /**
     * @hash   -1719267278
     * @symbol ?getPlayerXUID@Level@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z
     */
    MCVAPI std::string const & getPlayerXUID(class mce::UUID const &) const;
    /**
     * @hash   -1278782589
     * @symbol ?getPortalForcer@Level@@UEAAAEAVPortalForcer@@XZ
     */
    MCVAPI class PortalForcer & getPortalForcer();
    /**
     * @hash   -431076021
     * @symbol ?getPositionTrackerDBClient@Level@@UEBAPEAVPositionTrackingDBClient@PositionTrackingDB@@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBClient * getPositionTrackerDBClient() const;
    /**
     * @hash   1217815611
     * @symbol ?getPositionTrackerDBServer@Level@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @hash   747614919
     * @symbol ?getPrimaryLocalPlayer@Level@@UEBAPEAVPlayer@@XZ
     */
    MCVAPI class Player * getPrimaryLocalPlayer() const;
    /**
     * @hash   967950830
     * @symbol ?getProjectileFactory@Level@@UEBAAEAVProjectileFactory@@XZ
     */
    MCVAPI class ProjectileFactory & getProjectileFactory() const;
    /**
     * @hash   2030014370
     * @symbol ?getRandom@Level@@UEBAAEAVRandom@@XZ
     */
    MCVAPI class Random & getRandom() const;
    /**
     * @hash   1462378578
     * @symbol ?getRandomPlayer@Level@@UEAAPEAVPlayer@@XZ
     */
    MCVAPI class Player * getRandomPlayer();
    /**
     * @hash   1487521678
     * @symbol ?getRecipes@Level@@UEBAAEAVRecipes@@XZ
     */
    MCVAPI class Recipes & getRecipes() const;
    /**
     * @hash   -1550041532
     * @symbol ?getRegisteredBorderBlock@Level@@UEBAAEBVBlockLegacy@@XZ
     */
    MCVAPI class BlockLegacy const & getRegisteredBorderBlock() const;
    /**
     * @hash   1557542825
     * @symbol ?getRemotePlayerEventCoordinator@Level@@UEAAAEAVPlayerEventCoordinator@@XZ
     */
    MCVAPI class PlayerEventCoordinator & getRemotePlayerEventCoordinator();
    /**
     * @hash   -733401572
     * @symbol ?getRuntimeActorList@Level@@UEBA?AV?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class Actor *> getRuntimeActorList() const;
    /**
     * @hash   727826455
     * @symbol ?getRuntimeEntity@Level@@UEBAPEAVActor@@VActorRuntimeID@@_N@Z
     */
    MCVAPI class Actor * getRuntimeEntity(class ActorRuntimeID, bool) const;
    /**
     * @hash   703395977
     * @symbol ?getRuntimePlayer@Level@@UEBAPEAVPlayer@@VActorRuntimeID@@@Z
     */
    MCVAPI class Player * getRuntimePlayer(class ActorRuntimeID) const;
    /**
     * @hash   453989101
     * @symbol ?getSavedData@Level@@UEBAAEAVSavedDataStorage@@XZ
     */
    MCVAPI class SavedDataStorage & getSavedData() const;
    /**
     * @hash   511039779
     * @symbol ?getScoreboard@Level@@UEAAAEAVScoreboard@@XZ
     */
    MCVAPI class Scoreboard & getScoreboard();
    /**
     * @hash   98265647
     * @symbol ?getScreenshotsFolder@Level@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getScreenshotsFolder() const;
    /**
     * @hash   1841988607
     * @symbol ?getScriptingEventCoordinator@Level@@UEAAAEAVScriptingEventCoordinator@@XZ
     */
    MCVAPI class ScriptingEventCoordinator & getScriptingEventCoordinator();
    /**
     * @hash   267606938
     * @symbol ?getSeed@Level@@UEAAIXZ
     */
    MCVAPI unsigned int getSeed();
    /**
     * @hash   69028303
     * @symbol ?getServerNetworkEventCoordinator@Level@@UEAAAEAVServerNetworkEventCoordinator@@XZ
     */
    MCVAPI class ServerNetworkEventCoordinator & getServerNetworkEventCoordinator();
    /**
     * @hash   564688739
     * @symbol ?getServerPlayerEventCoordinator@Level@@UEAAAEAVServerPlayerEventCoordinator@@XZ
     */
    MCVAPI class ServerPlayerEventCoordinator & getServerPlayerEventCoordinator();
    /**
     * @hash   -2135738697
     * @symbol ?getServerResourcePackManager@Level@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @hash   -31609146
     * @symbol ?getSharedSpawnPos@Level@@UEBAAEBVBlockPos@@XZ
     */
    MCVAPI class BlockPos const & getSharedSpawnPos() const;
    /**
     * @hash   -916852348
     * @symbol ?getSimPaused@Level@@UEAA_NXZ
     */
    MCVAPI bool getSimPaused();
    /**
     * @hash   -867163150
     * @symbol ?getSoundPlayer@Level@@UEBA?AV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const;
    /**
     * @hash   -1373222693
     * @symbol ?getSpawnGroupRegistry@Level@@UEBAPEBVSpawnGroupRegistry@@XZ
     */
    MCVAPI class SpawnGroupRegistry const * getSpawnGroupRegistry() const;
    /**
     * @hash   1126056018
     * @symbol ?getSpawnRules@Level@@UEBAPEBVActorSpawnRuleGroup@@XZ
     */
    MCVAPI class ActorSpawnRuleGroup const * getSpawnRules() const;
    /**
     * @hash   856947127
     * @symbol ?getSpawnRulesMutable@Level@@UEBAPEAVActorSpawnRuleGroup@@XZ
     */
    MCVAPI class ActorSpawnRuleGroup * getSpawnRulesMutable() const;
    /**
     * @hash   1379970174
     * @symbol ?getSpawnSettings@Level@@UEBAAEBUSpawnSettings@@XZ
     */
    MCVAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @hash   -1338748269
     * @symbol ?getSpawnableTickedMobCountPrevious@Level@@UEBAIXZ
     */
    MCVAPI unsigned int getSpawnableTickedMobCountPrevious() const;
    /**
     * @hash   2084937150
     * @symbol ?getSpawner@Level@@UEBAAEAVSpawner@@XZ
     */
    MCVAPI class Spawner & getSpawner() const;
    /**
     * @hash   -1154494368
     * @symbol ?getSpecialMultiplier@Level@@UEBAMV?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI float getSpecialMultiplier(class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   -415763772
     * @symbol ?getStructureManager@Level@@UEBA?BV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const getStructureManager() const;
    /**
     * @hash   1447643144
     * @symbol ?getStructureManager@Level@@UEAA?AV?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@XZ
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> getStructureManager();
    /**
     * @hash   -1646410337
     * @symbol ?getSubChunkRequestManager@Level@@UEAAPEAVSubChunkRequestManager@@XZ
     */
    MCVAPI class SubChunkRequestManager * getSubChunkRequestManager();
    /**
     * @hash   733039663
     * @symbol ?getSurfaceBuilderRegistry@Level@@UEBAAEBVSurfaceBuilderRegistry@@XZ
     */
    MCVAPI class SurfaceBuilderRegistry const & getSurfaceBuilderRegistry() const;
    /**
     * @hash   1880620467
     * @symbol ?getSurfaceBuilderRegistry@Level@@UEAAAEAVSurfaceBuilderRegistry@@XZ
     */
    MCVAPI class SurfaceBuilderRegistry & getSurfaceBuilderRegistry();
    /**
     * @hash   -1106134979
     * @symbol ?getSyncTasksGroup@Level@@UEAAAEAVTaskGroup@@XZ
     */
    MCVAPI class TaskGroup & getSyncTasksGroup();
    /**
     * @hash   -906624889
     * @symbol ?getTagRegistry@Level@@UEAAAEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@XZ
     */
    MCVAPI class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> & getTagRegistry();
    /**
     * @hash   1107163856
     * @symbol ?getTearingDown@Level@@UEBA_NXZ
     */
    MCVAPI bool getTearingDown() const;
    /**
     * @hash   -594198004
     * @symbol ?getThreadRandom@Level@@UEBAAEAVRandom@@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @hash   511636618
     * @symbol ?getTickingArea@Level@@UEBAPEAVITickingArea@@AEBVUUID@mce@@@Z
     */
    MCVAPI class ITickingArea * getTickingArea(class mce::UUID const &) const;
    /**
     * @hash   -732351270
     * @symbol ?getTickingAreasMgr@Level@@UEAAAEAVTickingAreasManager@@XZ
     */
    MCVAPI class TickingAreasManager & getTickingAreasMgr();
    /**
     * @hash   -1902500584
     * @symbol ?getTickingOffsets@Level@@UEBAAEBV?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class ChunkPos> const & getTickingOffsets() const;
    /**
     * @hash   307614650
     * @symbol ?getTime@Level@@UEBAHXZ
     */
    MCVAPI int getTime() const;
    /**
     * @hash   -1032219653
     * @symbol ?getTradeTables@Level@@UEAAPEAVTradeTables@@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @hash   -1851879070
     * @symbol ?getUnknownBlockTypeRegistry@Level@@UEAAAEAVIUnknownBlockTypeRegistry@@XZ
     */
    MCVAPI class IUnknownBlockTypeRegistry & getUnknownBlockTypeRegistry();
    /**
     * @hash   -157131947
     * @symbol ?getUserCount@Level@@UEBAHXZ
     */
    MCVAPI int getUserCount() const;
    /**
     * @hash   -1004108265
     * @symbol ?getUsers@Level@@UEBAAEBV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getUsers() const;
    /**
     * @hash   -1418642213
     * @symbol ?getUsers@Level@@UEAAAEAV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@XZ
     */
    MCVAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> & getUsers();
    /**
     * @hash   787136140
     * @symbol ?getWorldRegistriesProvider@Level@@UEBAAEBVIWorldRegistriesProvider@@XZ
     */
    MCVAPI class IWorldRegistriesProvider const & getWorldRegistriesProvider() const;
    /**
     * @hash   -133715824
     * @symbol ?getWorldRegistriesProvider@Level@@UEAAAEAVIWorldRegistriesProvider@@XZ
     */
    MCVAPI class IWorldRegistriesProvider & getWorldRegistriesProvider();
    /**
     * @hash   285283205
     * @symbol ?getXBLBroadcastIntent@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCVAPI enum Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   1967925132
     * @symbol ?getXBLBroadcastMode@Level@@UEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCVAPI enum Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @hash   2119493885
     * @symbol ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
     */
    MCVAPI void handleLevelEvent(enum LevelEvent, class CompoundTag const &);
    /**
     * @hash   -1060340726
     * @symbol ?handleLevelEvent@Level@@UEAAXW4LevelEvent@@AEBVVec3@@H@Z
     */
    MCVAPI void handleLevelEvent(enum LevelEvent, class Vec3 const &, int);
    /**
     * @hash   2115585249
     * @symbol ?handleSoundEvent@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
     */
    MCVAPI void handleSoundEvent(enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   1640637900
     * @symbol ?handleSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI void handleSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   1918965822
     * @symbol ?handleStopAllSounds@Level@@UEAAXXZ
     */
    MCVAPI void handleStopAllSounds();
    /**
     * @hash   936373092
     * @symbol ?handleStopSoundEvent@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void handleStopSoundEvent(std::string const &);
    /**
     * @hash   -1851059069
     * @symbol ?hasCommandsEnabled@Level@@UEBA_NXZ
     */
    MCVAPI bool hasCommandsEnabled() const;
    /**
     * @hash   -781598059
     * @symbol ?hasLevelStorage@Level@@UEBA_NXZ
     */
    MCVAPI bool hasLevelStorage() const;
    /**
     * @hash   1618818376
     * @symbol ?hasPlatformBroadcast@Level@@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcast() const;
    /**
     * @hash   -1141113164
     * @symbol ?hasPlatformBroadcastIntent@Level@@UEBA_NXZ
     */
    MCVAPI bool hasPlatformBroadcastIntent() const;
    /**
     * @hash   771473319
     * @symbol ?hasStartWithMapEnabled@Level@@UEBA_NXZ
     */
    MCVAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   2117052909
     * @symbol ?hasXBLBroadcast@Level@@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcast() const;
    /**
     * @hash   -1791622247
     * @symbol ?hasXBLBroadcastIntent@Level@@UEBA_NXZ
     */
    MCVAPI bool hasXBLBroadcastIntent() const;
    /**
     * @hash   1746134433
     * @symbol ?incrementSpawnableTickedMob@Level@@UEAAXXZ
     */
    MCVAPI void incrementSpawnableTickedMob();
    /**
     * @hash   -1088369285
     * @symbol ?incrementTagCache@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   -1488326812
     * @symbol ?initialize@Level@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @hash   -1949842510
     * @symbol ?initializeBlockDefinitionGroup@Level@@UEAAXXZ
     */
    MCVAPI void initializeBlockDefinitionGroup();
    /**
     * @hash   1153774976
     * @symbol ?initializeLevelChunkMetaData@Level@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   296135472
     * @symbol ?isClientSide@Level@@UEBA_NXZ
     */
    MCVAPI bool isClientSide() const;
    /**
     * @symbol ?isClientSideGenerationEnabled@Level@@UEAA_NXZ
     */
    MCVAPI bool isClientSideGenerationEnabled();
    /**
     * @hash   1734597263
     * @symbol ?isEditorWorld@Level@@UEBA_NXZ
     */
    MCVAPI bool isEditorWorld() const;
    /**
     * @hash   849382688
     * @symbol ?isEdu@Level@@UEBA_NXZ
     */
    MCVAPI bool isEdu() const;
    /**
     * @hash   514367416
     * @symbol ?isExporting@Level@@UEBA_NXZ
     */
    MCVAPI bool isExporting() const;
    /**
     * @hash   -372067082
     * @symbol ?isLeaveGameDone@Level@@UEAA_NXZ
     */
    MCVAPI bool isLeaveGameDone();
    /**
     * @hash   972035542
     * @symbol ?isMultiplayerGame@Level@@UEBA_NXZ
     */
    MCVAPI bool isMultiplayerGame() const;
    /**
     * @hash   -642387235
     * @symbol ?isPlayerSuspended@Level@@UEBA_NAEAVPlayer@@@Z
     */
    MCVAPI bool isPlayerSuspended(class Player &) const;
    /**
     * @hash   1976279413
     * @symbol ?levelCleanupQueueEntityRemoval@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
     */
    MCVAPI void levelCleanupQueueEntityRemoval(class OwnerPtrT<struct EntityRefTraits>, bool);
    /**
     * @hash   -1997567701
     * @symbol ?loadBlockDefinitionGroup@Level@@UEAAXAEBVExperiments@@@Z
     */
    MCVAPI void loadBlockDefinitionGroup(class Experiments const &);
    /**
     * @hash   1981950098
     * @symbol ?loadFunctionManager@Level@@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @hash   1907901623
     * @symbol ?moveActiveAutonomousActorToInactive@Level@@UEAAXAEAVActor@@PEAVLevelChunk@@@Z
     */
    MCVAPI void moveActiveAutonomousActorToInactive(class Actor &, class LevelChunk *);
    /**
     * @hash   1897854469
     * @symbol ?notifySubChunkRequestManager@Level@@UEAAXAEBVSubChunkPacket@@@Z
     */
    MCVAPI void notifySubChunkRequestManager(class SubChunkPacket const &);
    /**
     * @hash   1657300761
     * @symbol ?onChunkDiscarded@Level@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkDiscarded(class LevelChunk &);
    /**
     * @hash   662331821
     * @symbol ?onChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   556816607
     * @symbol ?onChunkReload@Level@@UEAAXAEBUBounds@@@Z
     */
    MCVAPI void onChunkReload(struct Bounds const &);
    /**
     * @hash   1167590224
     * @symbol ?onChunkReloaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkReloaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   164486270
     * @symbol ?onPlayerDeath@Level@@UEAAXAEAVPlayer@@AEBVActorDamageSource@@@Z
     */
    MCVAPI void onPlayerDeath(class Player &, class ActorDamageSource const &);
    /**
     * @hash   -1175105181
     * @symbol ?onSourceCreated@Level@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onSourceCreated(class BlockSource &);
    /**
     * @hash   345999602
     * @symbol ?onSourceDestroyed@Level@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onSourceDestroyed(class BlockSource &);
    /**
     * @hash   -1758960747
     * @symbol ?onSubChunkLoaded@Level@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@F_N@Z
     */
    MCVAPI void onSubChunkLoaded(class ChunkSource &, class LevelChunk &, short, bool);
    /**
     * @hash   -887274295
     * @symbol ?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N3@Z
     */
    MCVAPI void playSound(enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1654303855
     * @symbol ?playSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void playSound(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -1877361475
     * @symbol ?playSound@Level@@UEAAXV?$AutomaticID@VDimension@@H@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void playSound(class AutomaticID<class Dimension, int>, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -2141814171
     * @symbol ?playSound@Level@@UEAAXW4LevelSoundEvent@@AEBVVec3@@MM@Z
     */
    MCVAPI void playSound(enum LevelSoundEvent, class Vec3 const &, float, float);
    /**
     * @hash   -1569806392
     * @symbol ?playSynchronizedSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@AEBVBlock@@AEBUActorDefinitionIdentifier@@_N5@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, class Block const &, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   1809248965
     * @symbol ?playSynchronizedSound@Level@@UEAAXAEAVBlockSource@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void playSynchronizedSound(class BlockSource &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   -8794009
     * @symbol ?playSynchronizedSound@Level@@UEAAXAEAVDimension@@W4LevelSoundEvent@@AEBVVec3@@HAEBUActorDefinitionIdentifier@@_N4@Z
     */
    MCVAPI void playSynchronizedSound(class Dimension &, enum LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @hash   1993021340
     * @symbol ?potionSplash@Level@@UEAAXAEBVVec3@@AEBVColor@mce@@_N@Z
     */
    MCVAPI void potionSplash(class Vec3 const &, class mce::Color const &, bool);
    /**
     * @hash   -907130378
     * @symbol ?pruneChunkViewTrackers@Level@@UEAAXXZ
     */
    MCVAPI void pruneChunkViewTrackers();
    /**
     * @hash   299493707
     * @symbol ?queueEntityDestruction@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@_N@Z
     */
    MCVAPI void queueEntityDestruction(class OwnerPtrT<struct EntityRefTraits>, bool);
    /**
     * @hash   143967641
     * @symbol ?registerEntity@Level@@UEAAXV?$OwnerPtrT@UEntityRefTraits@@@@@Z
     */
    MCVAPI void registerEntity(class OwnerPtrT<struct EntityRefTraits>);
    /**
     * @hash   -1360785027
     * @symbol ?registerEventCoordinators@Level@@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @hash   964137456
     * @symbol ?registerTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
     */
    MCVAPI void registerTemporaryPointer(class _TickPtr &);
    /**
     * @hash   -1804104072
     * @symbol ?removeActorAndTakeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorAndTakeEntity(class WeakEntityRef);
    /**
     * @hash   1756165998
     * @symbol ?removeActorFromWorldAndTakeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeActorFromWorldAndTakeEntity(class WeakEntityRef);
    /**
     * @hash   482442838
     * @symbol ?removeBlockSourceFromValidityTracking@Level@@UEAAXPEAVBlockSource@@@Z
     */
    MCVAPI void removeBlockSourceFromValidityTracking(class BlockSource *);
    /**
     * @hash   -1891781065
     * @symbol ?removeBossEventListener@Level@@UEAAXPEAVBossEventListener@@@Z
     */
    MCVAPI void removeBossEventListener(class BossEventListener *);
    /**
     * @hash   -1454086673
     * @symbol ?removeDisplayEntity@Level@@UEAAXVWeakEntityRef@@@Z
     */
    MCVAPI void removeDisplayEntity(class WeakEntityRef);
    /**
     * @hash   620639509
     * @symbol ?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@AEAVActor@@@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class Actor &);
    /**
     * @hash   -1908680591
     * @symbol ?removeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> removeEntity(class WeakEntityRef);
    /**
     * @hash   -55079353
     * @symbol ?removeEntityReferences@Level@@UEAAXAEAVActor@@_N@Z
     */
    MCVAPI void removeEntityReferences(class Actor &, bool);
    /**
     * @hash   800620841
     * @symbol ?removeListener@Level@@UEAAXAEAVLevelListener@@@Z
     */
    MCVAPI void removeListener(class LevelListener &);
    /**
     * @hash   -197000243
     * @symbol ?requestMapInfo@Level@@UEAAXUActorUniqueID@@_N@Z
     */
    MCVAPI void requestMapInfo(struct ActorUniqueID, bool);
    /**
     * @hash   -820653469
     * @symbol ?requestPlayerChangeDimension@Level@@UEAAXAEAVPlayer@@V?$unique_ptr@VChangeDimensionRequest@@U?$default_delete@VChangeDimensionRequest@@@std@@@std@@@Z
     */
    MCVAPI void requestPlayerChangeDimension(class Player &, std::unique_ptr<class ChangeDimensionRequest>);
    /**
     * @hash   -161085978
     * @symbol ?requestTimedStorageDeferment@Level@@UEAA?AV?$shared_ptr@PEAX@std@@XZ
     */
    MCVAPI class std::shared_ptr<void *> requestTimedStorageDeferment();
    /**
     * @hash   945007442
     * @symbol ?resumePlayer@Level@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void resumePlayer(class Player &);
    /**
     * @hash   -1093967340
     * @symbol ?runCommand@Level@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    /**
     * @hash   2019807341
     * @symbol ?runCommand@Level@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum CommandOriginSystem);
    /**
     * @hash   -741067872
     * @symbol ?save@Level@@UEAAXXZ
     */
    MCVAPI void save();
    /**
     * @hash   -1945984559
     * @symbol ?saveAdditionalData@Level@@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @hash   -518806592
     * @symbol ?saveBiomeData@Level@@UEAAXXZ
     */
    MCVAPI void saveBiomeData();
    /**
     * @hash   -2065988050
     * @symbol ?saveDirtyChunks@Level@@UEAAXXZ
     */
    MCVAPI void saveDirtyChunks();
    /**
     * @hash   571280568
     * @symbol ?saveDynamicProperties@Level@@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @hash   1531909583
     * @symbol ?saveEducationLevelSettings@Level@@UEAAXXZ
     */
    MCVAPI void saveEducationLevelSettings();
    /**
     * @hash   -1135147940
     * @symbol ?saveGameData@Level@@UEAAXXZ
     */
    MCVAPI void saveGameData();
    /**
     * @hash   1143019252
     * @symbol ?saveLevelData@Level@@UEAAXXZ
     */
    MCVAPI void saveLevelData();
    /**
     * @hash   2136600786
     * @symbol ?savePlayer@Level@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void savePlayer(class Player &);
    /**
     * @hash   -208737608
     * @symbol ?savePlayers@Level@@UEAAXXZ
     */
    MCVAPI void savePlayers();
    /**
     * @hash   -674890137
     * @symbol ?saveVillages@Level@@UEAAXXZ
     */
    MCVAPI void saveVillages();
    /**
     * @hash   -1166589153
     * @symbol ?sendAllPlayerAbilities@Level@@UEAAXAEBVPlayer@@@Z
     */
    MCVAPI void sendAllPlayerAbilities(class Player const &);
    /**
     * @hash   -658065600
     * @symbol ?sendServerLegacyParticle@Level@@UEAAXW4ParticleType@@AEBVVec3@@1H@Z
     */
    MCVAPI void sendServerLegacyParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int);
    /**
     * @hash   -1438682532
     * @symbol ?setActorEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VActorEventCoordinator@@U?$default_delete@VActorEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setActorEventCoordinator(std::unique_ptr<class ActorEventCoordinator> &&);
    /**
     * @hash   286508324
     * @symbol ?setBlockEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VBlockEventCoordinator@@U?$default_delete@VBlockEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setBlockEventCoordinator(std::unique_ptr<class BlockEventCoordinator> &&);
    /**
     * @hash   81938601
     * @symbol ?setClientPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VClientPlayerEventCoordinator@@U?$default_delete@VClientPlayerEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setClientPlayerEventCoordinator(std::unique_ptr<class ClientPlayerEventCoordinator> &&);
    /**
     * @hash   131857186
     * @symbol ?setCommandsEnabled@Level@@UEAAX_N@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @hash   -1392950214
     * @symbol ?setDefaultGameType@Level@@UEAAXW4GameType@@@Z
     */
    MCVAPI void setDefaultGameType(enum GameType);
    /**
     * @hash   1777480699
     * @symbol ?setDefaultSpawn@Level@@UEAAXAEBVBlockPos@@@Z
     */
    MCVAPI void setDefaultSpawn(class BlockPos const &);
    /**
     * @hash   626981257
     * @symbol ?setDifficulty@Level@@UEAAXW4Difficulty@@@Z
     */
    MCVAPI void setDifficulty(enum Difficulty);
    /**
     * @hash   -876470943
     * @symbol ?setDisablePlayerInteractions@Level@@UEAAX_N@Z
     */
    MCVAPI void setDisablePlayerInteractions(bool);
    /**
     * @hash   -1903899155
     * @symbol ?setEducationLevelSettings@Level@@UEAAXUEducationLevelSettings@@@Z
     */
    MCVAPI void setEducationLevelSettings(struct EducationLevelSettings);
    /**
     * @hash   935780164
     * @symbol ?setFinishedInitializing@Level@@UEAAXXZ
     */
    MCVAPI void setFinishedInitializing();
    /**
     * @hash   757742796
     * @symbol ?setHasLockedBehaviorPack@Level@@UEAAX_N@Z
     */
    MCVAPI void setHasLockedBehaviorPack(bool);
    /**
     * @hash   640912192
     * @symbol ?setHasLockedResourcePack@Level@@UEAAX_N@Z
     */
    MCVAPI void setHasLockedResourcePack(bool);
    /**
     * @hash   1200329742
     * @symbol ?setImmersiveReaderString@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void setImmersiveReaderString(std::string);
    /**
     * @hash   1261722855
     * @symbol ?setIsExporting@Level@@UEAAX_N@Z
     */
    MCVAPI void setIsExporting(bool);
    /**
     * @hash   -1837092334
     * @symbol ?setItemEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VItemEventCoordinator@@U?$default_delete@VItemEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setItemEventCoordinator(std::unique_ptr<class ItemEventCoordinator> &&);
    /**
     * @hash   -1476895713
     * @symbol ?setLANBroadcast@Level@@UEAAX_N@Z
     */
    MCVAPI void setLANBroadcast(bool);
    /**
     * @hash   1566399251
     * @symbol ?setLANBroadcastIntent@Level@@UEAAX_N@Z
     */
    MCVAPI void setLANBroadcastIntent(bool);
    /**
     * @hash   -1822962194
     * @symbol ?setLevelId@Level@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void setLevelId(std::string);
    /**
     * @hash   -2015465507
     * @symbol ?setMsaGamertagsOnly@Level@@UEAAX_N@Z
     */
    MCVAPI void setMsaGamertagsOnly(bool);
    /**
     * @hash   -1312154993
     * @symbol ?setMultiplayerGame@Level@@UEAAX_N@Z
     */
    MCVAPI void setMultiplayerGame(bool);
    /**
     * @hash   -102553213
     * @symbol ?setMultiplayerGameIntent@Level@@UEAAX_N@Z
     */
    MCVAPI void setMultiplayerGameIntent(bool);
    /**
     * @hash   1665348571
     * @symbol ?setNetEventCallback@Level@@UEAAXV?$NonOwnerPointer@VNetEventCallback@@@Bedrock@@@Z
     */
    MCVAPI void setNetEventCallback(class Bedrock::NonOwnerPointer<class NetEventCallback>);
    /**
     * @hash   1119462001
     * @symbol ?setPacketSender@Level@@UEAAXPEAVPacketSender@@@Z
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @hash   2040333425
     * @symbol ?setPlatformBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
     */
    MCVAPI void setPlatformBroadcastIntent(enum Social::GamePublishSetting);
    /**
     * @hash   -1392402470
     * @symbol ?setPlatformBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
     */
    MCVAPI void setPlatformBroadcastMode(enum Social::GamePublishSetting);
    /**
     * @hash   161023030
     * @symbol ?setPlayerAbilities@Level@@UEAAXAEBUActorUniqueID@@AEBVLayeredAbilities@@@Z
     */
    MCVAPI void setPlayerAbilities(struct ActorUniqueID const &, class LayeredAbilities const &);
    /**
     * @hash   -404406093
     * @symbol ?setPlayerMovementSettings@Level@@UEAAXAEBUPlayerMovementSettings@@@Z
     */
    MCVAPI void setPlayerMovementSettings(struct PlayerMovementSettings const &);
    /**
     * @hash   -2110674
     * @symbol ?setRemotePlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VPlayerEventCoordinator@@U?$default_delete@VPlayerEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setRemotePlayerEventCoordinator(std::unique_ptr<class PlayerEventCoordinator> &&);
    /**
     * @hash   -594484946
     * @symbol ?setScriptingEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VScriptingEventCoordinator@@U?$default_delete@VScriptingEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setScriptingEventCoordinator(std::unique_ptr<class ScriptingEventCoordinator> &&);
    /**
     * @hash   599894722
     * @symbol ?setServerNetworkEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerNetworkEventCoordinator@@U?$default_delete@VServerNetworkEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setServerNetworkEventCoordinator(std::unique_ptr<class ServerNetworkEventCoordinator> &&);
    /**
     * @hash   114825105
     * @symbol ?setServerPlayerEventCoordinator@Level@@UEAAX$$QEAV?$unique_ptr@VServerPlayerEventCoordinator@@U?$default_delete@VServerPlayerEventCoordinator@@@std@@@std@@@Z
     */
    MCVAPI void setServerPlayerEventCoordinator(std::unique_ptr<class ServerPlayerEventCoordinator> &&);
    /**
     * @hash   947502022
     * @symbol ?setSimPaused@Level@@UEAAX_N@Z
     */
    MCVAPI void setSimPaused(bool);
    /**
     * @hash   -1213117505
     * @symbol ?setSpawnSettings@Level@@UEAAXAEBUSpawnSettings@@@Z
     */
    MCVAPI void setSpawnSettings(struct SpawnSettings const &);
    /**
     * @hash   351982061
     * @symbol ?setTime@Level@@UEAAXH@Z
     */
    MCVAPI void setTime(int);
    /**
     * @hash   -78080230
     * @symbol ?setWorldTemplateOptionsUnlocked@Level@@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @hash   1936419788
     * @symbol ?setXBLBroadcastIntent@Level@@UEAAXW4GamePublishSetting@Social@@@Z
     */
    MCVAPI void setXBLBroadcastIntent(enum Social::GamePublishSetting);
    /**
     * @hash   1719068149
     * @symbol ?setXBLBroadcastMode@Level@@UEAAXW4GamePublishSetting@Social@@@Z
     */
    MCVAPI void setXBLBroadcastMode(enum Social::GamePublishSetting);
    /**
     * @hash   284662167
     * @symbol ?spawnParticleEffect@Level@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@PEAVDimension@@@Z
     */
    MCVAPI void spawnParticleEffect(std::string const &, class Vec3 const &, class Dimension *);
    /**
     * @hash   51168954
     * @symbol ?startLeaveGame@Level@@UEAAXXZ
     */
    MCVAPI void startLeaveGame();
    /**
     * @hash   460149819
     * @symbol ?suspendAndSave@Level@@UEAAXXZ
     */
    MCVAPI void suspendAndSave();
    /**
     * @hash   1145861523
     * @symbol ?suspendPlayer@Level@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void suspendPlayer(class Player &);
    /**
     * @hash   1954269193
     * @symbol ?takeEntity@Level@@UEAA?AV?$OwnerPtrT@UEntityRefTraits@@@@VWeakEntityRef@@PEAVLevelChunk@@@Z
     */
    MCVAPI class OwnerPtrT<struct EntityRefTraits> takeEntity(class WeakEntityRef, class LevelChunk *);
    /**
     * @hash   818925316
     * @symbol ?takePicture@Level@@UEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
     */
    MCVAPI void takePicture(class cg::ImageBuffer &, class Actor *, class Actor *, struct ScreenshotOptions &);
    /**
     * @hash   -1535786496
     * @symbol ?tick@Level@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   -1734802671
     * @symbol ?tickEntities@Level@@UEAAXXZ
     */
    MCVAPI void tickEntities();
    /**
     * @hash   -1817303305
     * @symbol ?tickEntitySystems@Level@@UEAAXXZ
     */
    MCVAPI void tickEntitySystems();
    /**
     * @hash   1907003719
     * @symbol ?unregisterTemporaryPointer@Level@@UEAAXAEAV_TickPtr@@@Z
     */
    MCVAPI void unregisterTemporaryPointer(class _TickPtr &);
    /**
     * @hash   -579846346
     * @symbol ?updateSleepingPlayerList@Level@@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
    /**
     * @hash   -341013608
     * @symbol ?updateWeather@Level@@UEAAXMHMH@Z
     */
    MCVAPI void updateWeather(float, int, float, int);
    /**
     * @hash   -1042790165
     * @symbol ?upgradeStorageVersion@Level@@UEAAXW4StorageVersion@@@Z
     */
    MCVAPI void upgradeStorageVersion(enum StorageVersion);
    /**
     * @hash   416212293
     * @symbol ?useMsaGamertagsOnly@Level@@UEBA_NXZ
     */
    MCVAPI bool useMsaGamertagsOnly() const;
    /**
     * @hash   1630726985
     * @symbol ?waitAsyncSuspendWork@Level@@UEAAXXZ
     */
    MCVAPI void waitAsyncSuspendWork();
    /**
     * @hash   -1254238888
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Level();
#endif
    /**
     * @symbol ??0Level@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@4@AEAVIMinecraftEventing@@_NW4SubClientId@@AEAVScheduler@@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVResourcePackManager@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@4@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@4@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@4@4V?$optional@VDimensionDefinitionGroup@@@4@@Z
     */
    MCAPI Level(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, bool, enum SubClientId, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>, bool, class std::optional<class DimensionDefinitionGroup>);
    /**
     * @hash   1149381606
     * @symbol ?getAdventureSettings@Level@@QEBAAEBUAdventureSettings@@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @hash   559404102
     * @symbol ?getCapabilities@Level@@QEBAAEBUISharedController@PlayerCapabilities@@XZ
     */
    MCAPI struct PlayerCapabilities::ISharedController const & getCapabilities() const;
    /**
     * @hash   -96417706
     * @symbol ?getDimensionDefinition@Level@@QEBA?AV?$optional@UDimensionDefinition@DimensionDefinitionGroup@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI class std::optional<struct DimensionDefinitionGroup::DimensionDefinition> getDimensionDefinition(std::string const &) const;
    /**
     * @hash   -1184017628
     * @symbol ?getLevelSeed64@Level@@QEBA?AVLevelSeed64@@XZ
     */
    MCAPI class LevelSeed64 getLevelSeed64() const;
    /**
     * @hash   -651675237
     * @symbol ?getNpcDialogueStorage@Level@@QEAAPEAVNpcDialogueStorage@@XZ
     */
    MCAPI class NpcDialogueStorage * getNpcDialogueStorage();
    /**
     * @hash   -1994054950
     * @symbol ?getServerLevelEventCoordinator@Level@@QEAAAEAVServerLevelEventCoordinator@@XZ
     */
    MCAPI class ServerLevelEventCoordinator & getServerLevelEventCoordinator();
    /**
     * @hash   -812504702
     * @symbol ?getSideBySideEntity@Level@@QEBA?AVStrictEntityContext@@XZ
     */
    MCAPI class StrictEntityContext getSideBySideEntity() const;
    /**
     * @hash   -1225899502
     * @symbol ?getTickDeltaTime@Level@@QEBANXZ
     */
    MCAPI double getTickDeltaTime() const;
    /**
     * @hash   1752945689
     * @symbol ?isChunkInTickRange@Level@@QEAAXAEBVChunkPos@@AEBVDimension@@AEA_N2@Z
     */
    MCAPI void isChunkInTickRange(class ChunkPos const &, class Dimension const &, bool &, bool &);
    /**
     * @hash   212352032
     * @symbol ?isChunkInTickRange@Level@@QEBA_NAEBVLevelChunk@@V?$optional@H@std@@@Z
     */
    MCAPI bool isChunkInTickRange(class LevelChunk const &, class std::optional<int>) const;
    /**
     * @hash   -2072800780
     * @symbol ?isFree@Level@@QEAA?AW4NodeType@@AEAVNavigationComponent@@AEAVActor@@AEBVBlockPos@@22W4CanJumpIntoNode@@@Z
     */
    MCAPI enum NodeType isFree(class NavigationComponent &, class Actor &, class BlockPos const &, class BlockPos const &, class BlockPos const &, enum CanJumpIntoNode);
    /**
     * @hash   -1146004208
     * @symbol ?setClientLevelEventCoordinator@Level@@QEAAX$$QEAV?$unique_ptr@VClientLevelEventCoordinator@@U?$default_delete@VClientLevelEventCoordinator@@@std@@@std@@@Z
     */
    MCAPI void setClientLevelEventCoordinator(std::unique_ptr<class ClientLevelEventCoordinator> &&);
    /**
     * @hash   -604336374
     * @symbol ?setNpcEventCoordinator@Level@@QEAAXV?$unique_ptr@VNpcEventCoordinator@@U?$default_delete@VNpcEventCoordinator@@@std@@@std@@@Z
     */
    MCAPI void setNpcEventCoordinator(std::unique_ptr<class NpcEventCoordinator>);
    /**
     * @hash   -660136224
     * @symbol ?setPerformanceTelemetryPeriodicCallback@Level@@QEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI void setPerformanceTelemetryPeriodicCallback(class std::function<void (void)>);
    /**
     * @hash   -918432416
     * @symbol ?setServerLevelEventCoordinator@Level@@QEAAX$$QEAV?$unique_ptr@VServerLevelEventCoordinator@@U?$default_delete@VServerLevelEventCoordinator@@@std@@@std@@@Z
     */
    MCAPI void setServerLevelEventCoordinator(std::unique_ptr<class ServerLevelEventCoordinator> &&);
    /**
     * @hash   -1321688168
     * @symbol ?use3DBiomeMaps@Level@@QEBA_NXZ
     */
    MCAPI bool use3DBiomeMaps() const;
    /**
     * @hash   1005183545
     * @symbol ?AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK@Level@@2MB
     */
    MCAPI static float const AVERAGE_GAME_TICKS_PER_RANDOM_TICK_PER_BLOCK;
    /**
     * @hash   -1005533867
     * @symbol ?AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY@Level@@2MB
     */
    MCAPI static float const AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_GAME_DAY;
    /**
     * @hash   448357851
     * @symbol ?AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE@Level@@2MB
     */
    MCAPI static float const AVERAGE_RANDOM_TICKS_PER_BLOCK_PER_MINUTE;
    /**
     * @hash   1391279787
     * @symbol ?RANDOM_TICKS_PER_TICK_PER_SUBCHUNK@Level@@2MB
     */
    MCAPI static float const RANDOM_TICKS_PER_TICK_PER_SUBCHUNK;
    /**
     * @hash   -158456882
     * @symbol ?addLevelComponents@Level@@SAXAEAVEntityContext@@AEAVIRandom@@_N@Z
     */
    MCAPI static void addLevelComponents(class EntityContext &, class IRandom &, bool);
    /**
     * @hash   966850160
     * @symbol ?createRandomSeed@Level@@SAIXZ
     */
    MCAPI static unsigned int createRandomSeed();
    /**
     * @hash   -1343269733
     * @symbol ?isUsableLevel@Level@@SA_NAEBVILevel@@@Z
     */
    MCAPI static bool isUsableLevel(class ILevel const &);
    /**
     * @hash   1249660807
     * @symbol ?parseLevelSeed64@Level@@SA?AVLevelSeed64@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class LevelSeed64 parseLevelSeed64(std::string const &);

//private:
    /**
     * @hash   637232265
     * @symbol ?_checkBlockSourceValidity@Level@@AEAAXXZ
     */
    MCAPI void _checkBlockSourceValidity();
    /**
     * @hash   -958264870
     * @symbol ?_cleanupDisconnectedPlayers@Level@@AEAAXXZ
     */
    MCAPI void _cleanupDisconnectedPlayers();
    /**
     * @hash   599373779
     * @symbol ?_createMapSavedData@Level@@AEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
     */
    MCAPI class MapItemSavedData & _createMapSavedData(struct ActorUniqueID const &);
    /**
     * @hash   168625875
     * @symbol ?_getCrashDumpLogCategory@Level@@AEAA?AW4CrashDumpLogStringID@@XZ
     */
    MCAPI enum CrashDumpLogStringID _getCrashDumpLogCategory();
    /**
     * @hash   -1605042939
     * @symbol ?_getValidatedPlayerName@Level@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string _getValidatedPlayerName(std::string const &);
    /**
     * @hash   -461416885
     * @symbol ?_handleChangeDimensionRequests@Level@@AEAAXXZ
     */
    MCAPI void _handleChangeDimensionRequests();
    /**
     * @hash   -2130099938
     * @symbol ?_loadAutonomousEntities@Level@@AEAAXXZ
     */
    MCAPI void _loadAutonomousEntities();
    /**
     * @hash   1972313245
     * @symbol ?_loadBiomeData@Level@@AEAAXXZ
     */
    MCAPI void _loadBiomeData();
    /**
     * @hash   1702220870
     * @symbol ?_loadMapData@Level@@AEAAPEAVMapItemSavedData@@AEBUActorUniqueID@@@Z
     */
    MCAPI class MapItemSavedData * _loadMapData(struct ActorUniqueID const &);
    /**
     * @hash   -999731980
     * @symbol ?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z
     */
    MCAPI bool _playerChangeDimension(class Player *, class ChangeDimensionRequest &);
    /**
     * @symbol ?_processPlayerNetworking@Level@@AEAAXXZ
     */
    MCAPI void _processPlayerNetworking();
    /**
     * @symbol ?_removePlayerFromPlayerList@Level@@AEAA?AVUUID@mce@@QEBVPlayer@@@Z
     */
    MCAPI class mce::UUID _removePlayerFromPlayerList(class Player const *const);
    /**
     * @symbol ?_resumePlayer@Level@@AEAAXAEBVUUID@mce@@@Z
     */
    MCAPI void _resumePlayer(class mce::UUID const &);
    /**
     * @hash   -1423267835
     * @symbol ?_saveAutonomousEntities@Level@@AEAAXXZ
     */
    MCAPI void _saveAutonomousEntities();
    /**
     * @hash   1960622206
     * @symbol ?_saveSomeChunks@Level@@AEAAXXZ
     */
    MCAPI void _saveSomeChunks();
    /**
     * @symbol ?_suspendPlayer@Level@@AEAAXAEBVUUID@mce@@@Z
     */
    MCAPI void _suspendPlayer(class mce::UUID const &);
    /**
     * @hash   -1355551584
     * @symbol ?_syncTime@Level@@AEAAXH@Z
     */
    MCAPI void _syncTime(int);

private:

};