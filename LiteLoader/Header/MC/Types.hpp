#pragma once

#include "HookAPI.h"
#include "../Global.h"
#include "Vec2.hpp"
#include "Vec3.hpp"
#include "BlockPos.hpp"
#include "AABB.hpp"
#include "ChunkPos.hpp"
#include "ChunkBlockPos.hpp"

typedef std::string xuid_t;
typedef unsigned long long QWORD;

namespace mce
{
class UUID
{
    uint64_t a, b;

public:
    MCAPI std::string asString() const;
    MCAPI static UUID fromString(std::string const&);
    MCAPI bool isEmpty() const;
    MCAPI static UUID seedFromString(std::string const&);
};

class Color;

}; // namespace mce


class BoundingBox
{
public:
    BlockPos bpos1;
    BlockPos bpos2;

    inline BlockPos getCenter() const
    {
        return {(bpos1.x + bpos2.x) / 2, (bpos1.y + bpos2.y) / 2, (bpos1.z + bpos2.z) / 2};
    }

    LIAPI AABB toAABB() const;
};

template <typename A, typename T>
class AutomaticID
{
    T id;

public:
    AutomaticID()
    {
        id = 0;
    }

    AutomaticID(T x)
    {
        id = x;
    }

    inline operator T()
    {
        return id;
    }
};

struct ActorUniqueID
{
    long long id;

public:
    ActorUniqueID()
    {
        id = -1;
    }

    ActorUniqueID(long long i)
    {
        id = i;
    }

    inline long long get()
    {
        return id;
    }

    inline operator long long()
    {
        return id;
    }
};
//static_assert(!std::is_pod_v<ActorUniqueID>);


class ActorRuntimeID
{
public:
    unsigned long long id;

    inline unsigned long long get()
    {
        return id;
    }

    inline operator unsigned long long()
    {
        return id;
    }
};
//static_assert(std::is_pod_v<ActorRuntimeID>);

#include "../MC/RelativeFloat.hpp"
//class RelativeFloat {
//public:
//    float value;
//    bool is_relative;
//
//    RelativeFloat(float value)
//        : value(value)
//        , is_relative(true) {
//    }
//
//    inline float getFloat(float center) const {
//        if (is_relative)
//            return center + value;
//        return value;
//    }
//};

//namespace Core {
//
//class PathPart {
//public:
//    std::string data;
//};
//
//class Path : public PathPart {
//public:
//};
//
//template <typename T>
//class PathBuffer {
//    T value;
//    operator T&() noexcept {
//        return value;
//    }
//    operator T const &() const noexcept {
//        return value;
//    }
//};
//
//}; // namespace Core

namespace gametest
{
class BaseGameTestBatchRunner;

class BaseGameTestFunction;

class BaseGameTestHelper;

class BaseGameTestInstance;

class GameTestBatch;

struct GameTestError;

class GameTestRegistry;

class GameTestTicker;

class IGameTestFunctionContext;

class IGameTestHelperProvider;

struct TestParameters;
}; // namespace gametest

namespace DBHelpers
{
enum Category;
}; // namespace DBHelpers

class AgentCommands
{
public:
    class Command;
};

#include "../MC/Automation.hpp"

class ClientBlobCache
{
public:
    struct Server
    {
        class TransferBuilder;

        class ActiveTransfersManager;
    };
};

class ClientBlockPipeline
{
public:
    template <typename T>
    class VolumeOf;

    struct BlockSchematic;
};

struct ISurfaceBuilder
{
    struct BuildParameters;
};

struct FeatureLoading
{
    template <typename T>
    struct ConcreteFeatureHolder;
    struct FeatureRootParseContext;
    template <typename T>
    struct ConcreteFeatureHolder;
};

template <typename T1, typename T2>
class OperationNode;

struct OperationNodeDetails
{
    template <typename T1, typename T2>
    class WorkingData;
};

struct PositionTrackingDB
{
    class TrackingRecord;
};


struct SubChunkBrightnessStorage
{
    struct LightPair;
};

struct BlockGeometry
{
    struct Model;

    class TessellatedModel;
};

struct CanyonFeatureUtils
{
    struct CanyonConfiguration;
};

class IInPackagePacks
{
public:
    struct MetaData;
};

struct GameEventConfig
{
    enum GameEvents;
};

#include "IMinecraftEventing.hpp"

struct OperationNodeValues
{
    enum Terrain;
};

struct SubChunkStorageUnit
{
    enum PruneType;
};

//Templates
template <typename T, typename T2, int unk>
class TypedServerNetId
{
public:
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedClientNetId
{
public:
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedRuntimeId
{
public:
    T2 netId;
};

template <typename T, typename T2>
class AutomaticID;

template <typename T, typename T2>
class BidirectionalUnorderedMap;

template <typename T>
class BlockDataFetchResult;

template <typename T>
class CommandSelectorResults;

template <typename... T>
class Factory;

template <typename T>
class InheritanceTree;

template <typename T, int unk>
class ItemStackRequestActionCraft;

template <typename T>
class ItemStateVariant;

template <typename T>
class LevelChunkGridAreaElement;

template <typename T>
class GridArea;

template <typename T>
class OwnerPtrT;

template <typename T>
class ServiceReference;

template <typename T>
class SharedPtr;

template <typename T>
class StackRefResultT;

template <typename T>
class WeakPtr;

template <typename T>
class WeakRefT;

template <typename T>
struct SharePtrRefTraits;

template <typename T>
class SubChunkStorage;

template <typename T, typename T2>
class TagRegistry;

template <typename T>
struct IDType;

template <typename T>
class ToFloatFunction;

template <typename T>
class TypedScreenCapabilities
{
};

template <typename T, typename T2, typename T3, typename T4 = class UNK>
class ViewedEntityContextT;

template <typename T>
class FlagComponent;

template <typename T>
class WeightedChoices;

template <typename T>
class buffer_span;

template <typename T>
class buffer_span_mut;

template <typename T>
class optional_ref;

template <int a>
class DividedPos2d;

//template <typename T>
//struct GameplayHandlerResult;

template <typename T>
struct GameplayHandlerResult;

template <int T>
class ItemStackRequestActionDataless;

template <typename T>
class OperationGraphResult;

template <typename T1>
class SmallSet;

template <typename T1>
struct TaskStartInfoEx;

template <typename T1>
class WildcardCommandSelector;

//enum
enum class ContainerType : unsigned char
{
    INVENTORY = 0xff,
    CONTAINER = 0x00,
    WORKBENCH = 0x01,
    FURNACE = 0x02,
    ENCHANTMENT = 0x03,
    BREWING_STAND = 0x04,
    ANVIL = 0x05,
    DISPENSER = 0x06,
    DROPPER = 0x07,
    HOPPER = 0x08,
    CAULDRON = 0x09,
    MINECART_CHEST = 0x0a,
    MINECART_HOPPER = 0x0b,
    HORSE = 0x0c,
    JUKEBOX = 0x11,
    LAB_TABLE = 0x17,
    BLAST_FURNACE = 0x1b,
    SMOKER = 0x1c,
    STONECUTTER = 0x1d,
    HUD = 0x1f,
    SMITHING_TABLE = 0x21,
    NONE = 0xf7
};

enum class UpdateBlockFlags : int
{
    BlockUpdateNeighbours = 1,
    BlockUpdateNetwork = 2,
    BlockUpdateNoGraphics = 3,
    BlockUpdatePriority = 4,
};

enum class DataItemType : unsigned char
{
    BYTE = 0,
    SHORT = 1,
    INT = 2,
    FLOAT = 3,
    STRING = 4,
    NBT = 5,
    POS = 6,
    LONG = 7,
    VEC3 = 8
};

enum class TextType : char
{
    RAW = 0,
    CHAT = 1,
    TRANSLATION = 2,
    POPUP = 3,
    JUKEBOX_POPUP = 4,
    TIP = 5,
    SYSTEM = 6,
    WHISPER = 7,
    ANNOUNCEMENT = 8,
    JSON_WHISPER = 9,
    JSON = 10
};

enum class TitleType : int
{
    Clear = 0,
    Reset = 1,
    SetTitle = 2,
    SetSubtitle = 3,
    SetActionBar = 4,
    SetDurations = 5,
    TitleTextObject = 6,
    SubtitleTextObject = 7,
    ActionbarTextObject = 8
};
enum class BossEvent : int
{
    Show = 0,
    RegisterPlayer = 1,
    Hide = 2,
    UnregisterPlayer = 3,
    HealthPercentage = 4,
    Title = 5,
    AppearanceProperties = 6,
    Texture = 7
};

enum class BossEventColour : int
{
    Grey = 0,
    Blue = 1,
    Red = 2,
    Green = 3,
    Yellow = 4,
    Purple = 5,
    White = 6
};

enum class ParticleType
{
    dragondestroyblock = 0x40,
    none = 0x00,
    bubble = 0x01,
    bubblemanual = 0x02,
    crit = 0x03,
    blockforcefield = 0x04,
    smoke = 0x05,
    explode = 0x06,
    evaporation = 0x07,
    flame = 0x08,
    candleflame = 0x09,
    lava = 0x0a,
    largesmoke = 0x0b,
    reddust = 0x0c,
    risingborderdust = 0x0d,
    iconcrack = 0x0e,
    snowballpoof = 0x0f,
    largeexplode = 0x10,
    hugeexplosion = 0x11,
    mobflame = 0x12,
    heart = 0x13,
    terrain = 0x14,
    townaura = 0x15,
    portal = 0x16,
    watersplash = 0x18,
    watersplashmanual = 0x19,
    waterwake = 0x1a,
    dripwater = 0x1b,
    driplava = 0x1c,
    driphoney = 0x1d,
    stalactitedripwater = 0x1e,
    stalactitedriplava = 0x1f,
    fallingdust = 0x20,
    mobspell = 0x21,
    mobspellambient = 0x22,
    mobspellinstantaneous = 0x23,
    ink = 0x24,
    slime = 0x25,
    rainsplash = 0x26,
    villagerangry = 0x27,
    villagerhappy = 0x28,
    enchantingtable = 0x29,
    trackingemitter = 0x2a,
    note = 0x2b,
    witchspell = 0x2c,
    carrotboost = 0x2d,
    mobappearance = 0x2e,
    endrod = 0x2f,
    dragonbreath = 0x30,
    spit = 0x31,
    totem = 0x32,
    food = 0x33,
    fireworksstarter = 0x34,
    fireworks = 0x35,
    fireworksoverlay = 0x36,
    balloongas = 0x37,
    coloredflame = 0x38,
    sparkler = 0x39,
    conduit = 0x3a,
    bubblecolumnup = 0x3b,
    bubblecolumndown = 0x3c,
    sneeze = 0x3d,
    shulkerbullet = 0x3e,
    bleach = 0x3f,
    myceliumdust = 0x41,
    fallingborderdust = 0x42,
    campfiresmoke = 0x43,
    campfiresmoketall = 0x44,
    dragonbreathfire = 0x45,
    dragonbreathtrail = 0x46,
    soul = 0x48,
    obsidiantear = 0x49,
    portalreverse = 0x4a,
    snowflake = 0x4b,
    wax = 0x50,
    electricspark = 0x51,
    shriek = 0x52,
    sculksoul = 0x53
};

enum class transactionType
{
    NormalTransaction = 0x00,
    InventoryMismatch = 0x01,
    ItemUseTransaction = 0x02,
    ItemUseOnEntityTransaction = 0x03,
    ItemReleaseTransaction = 0x04
};

enum class ItemStackRequestActionType
{
    Take = 0x00,
    Place = 0x01,
    Swap = 0x02,
    Drop = 0x03,
    Destroy = 0x04,
    Consume = 0x05,
    Create = 0x06,
    ScreenLabTableCombine = 0x07,
    ScreenBeaconPayment = 0x08,
    ScreenHUDMineBlock = 0x09,
    CraftRecipe = 0x0a,
    CraftRecipeAuto = 0x0b,
    CraftCreative = 0x0c,
    CraftRecipeOptional = 0x0d,
    CraftRepairAndDisenchant = 0x0e,
    CraftLoom = 0x0f,
    CraftNonImplemented_DEPRECATEDASKTYLAING = 0x10,
    CraftResults_DEPRECATEDASKTYLAING = 0x11
};

enum class ActorDamageCause : int
{
    Override = 0x0,
    Contact = 0x1,
    EntityAttack = 0x2,
    Projectile = 0x3,
    Suffocation = 0x4,
    Fall = 0x5,
    Fire = 0x6,
    FireTick = 0x7,
    Lava = 0x8,
    Drowning = 0x9,
    BlockExplosion = 0x0A,
    EntityExplosion = 0x0B,
    Void = 0x0C,
    Suicide = 0x0D,
    Magic = 0x0E,
    Wither = 0x0F,
    Starve = 0x10,
    Anvil = 0x11,
    Thorns = 0x12,
    FallingBlock = 0x13,
    Piston = 0x14,
    FlyIntoWall = 0x15,
    Magma = 0x16,
    Fireworks = 0x17,
    Lightning = 0x18,
    Charging = 0x19,
    Temperature = 0x1A,
    All = 0x1F,
    None = -0x01,
};

enum class ObjectiveSortOrder : char
{
    Ascending = 0,
    Descending = 1
};

enum class PlayerScoreSetFunction : char
{
    Set = 0,
    Add = 1,
    Remove = 2
};

enum class FaceID : char
{
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};

enum class MinecraftPacketIds : int
{
    Login = 0x1,
    PlayStatus = 0x2,
    ServerToClientHandshake = 0x3,
    ClientToServerHandshake = 0x4,
    Disconnect = 0x5,
    ResourcePacksInfo = 0x6,
    ResourcePackStack = 0x7,
    ResourcePackClientResponse = 0x8,
    Text = 0x9,
    SetTime = 0xa,
    StartGame = 0xb,
    AddPlayer = 0xc,
    AddActor = 0xd,
    RemoveActor = 0xe,
    AddItemActor = 0xf,
    TakeItemActor = 0x11,
    MoveActorAbsolute = 0x12,
    MovePlayer = 0x13,
    UpdateBlock = 0x15,
    AddPainting = 0x16,
    TickSync = 0x17,
    BlockEvent = 0x1a,
    ActorEvent = 0x1b,
    MobEffect = 0x1c,
    UpdateAttributes = 0x1d,
    InventoryTransaction = 0x1e,
    MobEquipment = 0x1f,
    MobArmorEquipment = 0x20,
    Interact = 0x21,
    BlockPickRequest = 0x22,
    ActorPickRequest = 0x23,
    PlayerAction = 0x24,
    HurtArmor = 0x26,
    SetActorData = 0x27,
    SetActorLink = 0x29,
    SetHealth = 0x2a,
    SetSpawnPosition = 0x2b,
    Animate = 0x2c,
    Respawn = 0x2d,
    ContainerOpen = 0x2e,
    ContainerClose = 0x2f,
    PlayerHotbar = 0x30,
    InventoryContent = 0x31,
    InventorySlot = 0x32,
    ContainerSetData = 0x33,
    CraftingData = 0x34,
    CraftingEvent = 0x35,
    GuiDataPickItem = 0x36,
    AdventureSettings = 0x37,
    BlockActorData = 0x38,
    PlayerInput = 0x39,
    LevelChunk = 0x3a,
    SetCommandsEnabled = 0x3b,
    SetDifficulty = 0x3c,
    ChangeDimension = 0x3d,
    SetPlayerGameType = 0x3e,
    PlayerList = 0x3f,
    Event = 0x41,
    SpawnExperienceOrb = 0x42,
    ClientboundMapItemData = 0x43,
    MapInfoRequest = 0x44,
    ItemFrameDropItem = 0x47,
    GameRulesChanged = 0x48,
    Camera = 0x49,
    BossEvent = 0x4a,
    ShowCredits = 0x4b,
    AvailableCommands = 0x4c,
    CommandRequest = 0x4d,
    CommandBlockUpdate = 0x4e,
    CommandOutput = 0x4f,
    UpdateTrade = 0x50,
    UpdateEquip = 0x51,
    ResourcePackDataInfo = 0x52,
    ResourcePackChunkData = 0x53,
    ResourcePackChunkRequest = 0x54,
    Transfer = 0x55,
    PlaySound = 0x56,
    StopSound = 0x57,
    SetTitle = 0x58,
    AddBehaviorTree = 0x59,
    StructureBlockUpdate = 0x5a,
    ShowStoreOffer = 0x5b,
    PurchaseReceipt = 0x5c,
    PlayerSkin = 0x5d,
    SubClientLogin = 0x5e,
    AutomationClientConnect = 0x5f,
    SetLastHurtBy = 0x60,
    BookEdit = 0x61,
    NpcRequest = 0x62,
    PhotoTransfer = 0x63,
    ModalFormRequest = 0x64,
    ModalFormResponse = 0x65,
    ServerSettingsRequest = 0x66,
    ServerSettingsResponse = 0x67,
    ShowProfile = 0x68,
    SetDefaultGameType = 0x69,
    RemoveObjective = 0x6a,
    SetDisplayObjective = 0x6b,
    SetScore = 0x6c,
    LabTable = 0x6d,
    UpdateBlockSynced = 0x6e,
    MoveActorDelta = 0x6f,
    SetScoreboardIdentity = 0x70,
    SetLocalPlayerAsInitialized = 0x71,
    UpdateSoftEnum = 0x72,
    NetworkStackLatency = 0x73,
    ScriptCustomEvent = 0x75,
    SpawnParticleEffect = 0x76,
    AvailableActorIdentifiers = 0x77,
    NetworkChunkPublisherUpdate = 0x79,
    BiomeDefinitionList = 0x7a,
    LevelSoundEvent = 0x7b,
    LevelEventGeneric = 0x7c,
    LecternUpdate = 0x7d,
    AddEntity = 0x7f,
    ClientCacheStatus = 0x81,
    OnScreenTextureAnimation = 0x82,
    MapCreateLockedCopy = 0x83,
    StructureTemplateDataRequest = 0x84,
    StructureTemplateDataResponse = 0x85,
    ClientCacheBlobStatus = 0x87,
    ClientCacheMissResponse = 0x88,
    EducationSettings = 0x89,
    Emote = 0x8a,
    MultiplayerSettings = 0x8b,
    SettingsCommand = 0x8c,
    AnvilDamage = 0x8d,
    CompletedUsingItem = 0x8e,
    NetworkSettings = 0x8f,
    PlayerAuthInput = 0x90,
    CreativeContent = 0x91,
    PlayerEnchantOptions = 0x92,
    ItemStackRequest = 0x93,
    ItemStackResponse = 0x94,
    PlayerArmorDamage = 0x95,
    CodeBuilder = 0x96,
    UpdatePlayerGameType = 0x97,
    EmoteList = 0x98,
    PositionTrackingDBServerBroadcast = 0x99,
    PositionTrackingDBClientRequest = 0x9a,
    DebugInfo = 0x9b,
    PacketViolationWarning = 0x9c,
    MotionPredictionHints = 0x9d,
    AnimateEntity = 0x9e,
    CameraShake = 0x9f,
    PlayerFog = 0xa0,
    CorrectPlayerMovePrediction = 0xa1,
    ItemComponent = 0xa2,
    FilterText = 0xa3,
    ClientboundDebugRenderer = 0xa4,
    SyncActorProperty = 0xa5,
    AddVolumeEntity = 0xa6,
    RemoveVolumeEntity = 0xa7,
    SimulationType = 0xa8,
    NPCDialogue = 0xa9,
    EduUriResource = 0xaa,
    CreatePhoto = 0xab,
    UpdateSubChunkBlocks = 0xac,
    PhotoInfoRequest = 0xad,
    SubChunk = 0xae,
    SubChunkRequest = 0xaf
};

//class CommandVersion {
//public:
//    int Min = 1, Max = 0x7FFFFFFF;
//};

template <typename T>
struct InvertableFilter
{
    T value;
    bool inverted;
};

class CommandOutputParameter
{
    std::string str;
    int type;

public:
    MCINLINE CommandOutputParameter(std::string str, int type)
        : str(std::move(str))
        , type(type)
    {
    }
};

template <typename T>
class CommandSelectorResults
{
public:
    std::shared_ptr<std::vector<T*>> data;

    auto begin()
    {
        return data->begin();
    }

    auto end()
    {
        return data->end();
    }

    auto count() const
    {
        return data->size();
    }

    auto empty() const
    {
        return data->empty();
    }
};

#pragma warning(disable : 26495)

class FakeDataItem
{
public:
    DataItemType type;
    uint16_t id{0};
    int8_t byte{0};
    int16_t shorts{0};
    int32_t ints{0};
    float floats{0.0};
    std::string strings;
    BlockPos bpos{};
    Vec3 vec3{};
    int64_t longs{0};

    FakeDataItem(uint16_t a1, DataItemType a3, int8_t a2)
        : id(a1)
        , type(a3)
        , byte(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, int16_t a2)
        : id(a1)
        , type(a3)
        , shorts(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, int32_t a2)
        : id(a1)
        , type(a3)
        , ints(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, float a2)
        : id(a1)
        , type(a3)
        , floats(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, std::string a2)
        : id(a1)
        , type(a3)
        , strings(std::move(a2))
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, BlockPos a2)
        : id(a1)
        , type(a3)
        , bpos(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, Vec3 a2)
        : id(a1)
        , type(a3)
        , vec3(a2)
    {
    }

    FakeDataItem(uint16_t a1, DataItemType a3, int64_t a2)
        : id(a1)
        , type(a3)
        , longs(a2)
    {
    }
};

namespace ActorDataIDs
{
constexpr int16_t FLAGS = 0;                      // LONG
constexpr int16_t HEALTH = 1;                     // INT (minecart/boat)
constexpr int16_t VARIANT = 2;                    // INT
constexpr int16_t COLOR = 3;                      // BYTE
constexpr int16_t NAMETAG = 4;                    // STRING
constexpr int16_t OWNER = 5;                      // LONG
constexpr int16_t TARGET = 6;                     // LONG
constexpr int16_t AIR = 7;                        // SHORT
constexpr int16_t POTION_COLOR = 8;               // INT (ARGB!)
constexpr int16_t POTION_AMBIENT = 9;             // BYTE
constexpr int16_t JUMP_DURATION = 10;             // LONG
constexpr int16_t HURT_TIME = 11;                 // INT (minecart/boat)
constexpr int16_t HURT_DIRECTION = 12;            // INT (minecart/boat)
constexpr int16_t PADDLE_TIME_LEFT = 13;          // FLOAT
constexpr int16_t PADDLE_TIME_RIGHT = 14;         // FLOAT
constexpr int16_t EXPERIENCE_VALUE = 15;          // INT (xp orb)
constexpr int16_t DISPLAY_ITEM = 16;              // INT (id | (data << 16))
constexpr int16_t HORSE_FLAGS = 16;               // INT
constexpr int16_t WITHER_SKULL_IS_DANGEROUS = 16; // BYTE
constexpr int16_t MINECART_DISPLAY_OFFSET = 17;   // INT
constexpr int16_t ARROW_SHOOTER_ID = 17;          // LONG
constexpr int16_t MINECART_HAS_DISPLAY = 18;      // BYTE (must be 1 for minecart to show block inside)
constexpr int16_t HORSE_TYPE = 19;
constexpr int16_t SWELL = 19;
constexpr int16_t OLD_SWELL = 20;
constexpr int16_t SWELL_DIR = 21;
constexpr int16_t CHARGE_AMOUNT = 22;
constexpr int16_t ENDERMAN_HELD_RUNTIME_ID = 23; // SHORT
constexpr int16_t ACTOR_AGE = 24;                // SHORT
constexpr int16_t PLAYER_FLAGS = 26;             // BYTE
constexpr int16_t PLAYER_INDEX = 27;
constexpr int16_t PLAYER_BED_POSITION = 28; // POS
constexpr int16_t FIREBALL_POWER_X = 29;    // FLOAT
constexpr int16_t FIREBALL_POWER_Y = 30;    // FLOAT
constexpr int16_t FIREBALL_POWER_Z = 31;    // FLOAT
constexpr int16_t AUX_POWER = 32;
constexpr int16_t FISH_X = 33;
constexpr int16_t FISH_Z = 34;
constexpr int16_t FISH_ANGLE = 35;
constexpr int16_t POTION_AUX_VALUE = 36;                   // SHORT
constexpr int16_t LEAD_HOLDER = 37;                        // LONG
constexpr int16_t SCALE = 38;                              // FLOAT
constexpr int16_t INTERACTIVE_TAG = 39;                    // STRING
constexpr int16_t NPC_SKIN_ID = 40;                        // STRING
constexpr int16_t URL_TAG = 41;                            // STRING
constexpr int16_t MAX_AIR = 42;                            // SHORT
constexpr int16_t MARK_VARIANT = 43;                       // INT
constexpr int16_t CONTAINER_TYPE = 44;                     // BYTE
constexpr int16_t CONTAINER_BASE_SIZE = 45;                // INT
constexpr int16_t CONTAINER_EXTRA_SLOTS_PER_STRENGTH = 46; // INT
constexpr int16_t BLOCK_TARGET = 47;                       // POS (ENDER CRYSTAL)
constexpr int16_t WITHER_INVULNERABLE_TICKS = 48;          // INT
constexpr int16_t WITHER_TARGET_1 = 49;                    // LONG
constexpr int16_t WITHER_TARGET_2 = 50;                    // LONG
constexpr int16_t WITHER_TARGET_3 = 51;                    // LONG
constexpr int16_t AERIAL_ATTACK = 52;
constexpr int16_t BOUNDING_BOX_WIDTH = 53;            // FLOAT
constexpr int16_t BOUNDING_BOX_HEIGHT = 54;           // FLOAT
constexpr int16_t FUSE_LENGTH = 55;                   // INT
constexpr int16_t RIDER_SEAT_POSITION = 56;           // VEC3
constexpr int16_t RIDER_ROTATION_LOCKED = 57;         // BYTE
constexpr int16_t RIDER_MAX_ROTATION = 58;            // FLOAT
constexpr int16_t RIDER_MIN_ROTATION = 59;            // FLOAT
constexpr int16_t AREA_EFFECT_CLOUD_RADIUS = 61;      // FLOAT
constexpr int16_t AREA_EFFECT_CLOUD_WAITING = 62;     // INT
constexpr int16_t AREA_EFFECT_CLOUD_PARTICLE_ID = 63; // INT
constexpr int16_t SHULKER_PEEK_ID = 64;               // INT
constexpr int16_t SHULKER_ATTACH_FACE = 65;           // BYTE
constexpr int16_t SHULKER_ATTACHED = 66;              // SHORT
constexpr int16_t SHULKER_ATTACH_POS = 67;            // POS
constexpr int16_t TRADING_PLAYER_EID = 68;            // LONG
constexpr int16_t TRADING_CAREER = 69;
constexpr int16_t HAS_COMMAND_BLOCK = 70;
constexpr int16_t COMMAND_BLOCK_COMMAND = 71;         // STRING
constexpr int16_t COMMAND_BLOCK_LAST_OUTPUT = 72;     // STRING
constexpr int16_t COMMAND_BLOCK_TRACK_OUTPUT = 73;    // BYTE
constexpr int16_t CONTROLLING_RIDER_SEAT_NUMBER = 74; // BYTE
constexpr int16_t STRENGTH = 75;                      // INT
constexpr int16_t MAX_STRENGTH = 76;                  // INT
constexpr int16_t SPELL_CASTING_COLOR = 77;           // INT
constexpr int16_t LIMITED_LIFE = 78;
constexpr int16_t ARMOR_STAND_POSE_INDEX = 79;    // INT
constexpr int16_t ENDER_CRYSTAL_TIME_OFFSET = 80; // INT
constexpr int16_t ALWAYS_SHOW_NAMETAG = 81;       // BYTE
constexpr int16_t COLOR_2 = 82;                   // BYTE
constexpr int16_t NAME_AUTHOR = 83;
constexpr int16_t SCORE_TAG = 84;               // STRING
constexpr int16_t BALLOON_ATTACHED_ENTITY = 85; // LONG
constexpr int16_t PUFFERFISH_SIZE = 86;
constexpr int16_t BUBBLE_TIME = 87;
constexpr int16_t AGENT = 88;
constexpr int16_t SITTING_AMOUNT = 89;
constexpr int16_t SITTING_AMOUNT_PREVIOUS = 90;
constexpr int16_t EATING_COUNTER = 91;
constexpr int16_t FLAGS_EXTENDED = 92;
constexpr int16_t LAYING_AMOUNT = 93;
constexpr int16_t LAYING_AMOUNT_PREVIOUS = 94;
constexpr int16_t DURATION = 95;
constexpr int16_t SPAWN_TIME = 96;
constexpr int16_t CHANGE_RATE = 97;
constexpr int16_t CHANGE_ON_PICKUP = 98;
constexpr int16_t PICKUP_COUNT = 99;
constexpr int16_t INTERACT_TEXT = 100;
constexpr int16_t TRADE_TIER = 101;
constexpr int16_t MAX_TRADE_TIER = 102;
constexpr int16_t TRADE_EXPERIENCE = 103;
constexpr int16_t SKIN_ID = 104; // INT
constexpr int16_t SPAWNING_FRAMES = 105;
constexpr int16_t COMMAND_BLOCK_TICK_DELAY = 106;
constexpr int16_t COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 107;
constexpr int16_t AMBIENT_SOUND_INTERVAL = 108;
/*inline constexpr int16_t AMBIENT_SOUND_EVENT_NAME            = 109;
inline constexpr int16_t FALL_DAMAGE_MULTIPLIER              = 110;
inline constexpr int16_t NAME_RAW_TEXT                       = 111;
inline constexpr int16_t CAN_RIDE_TARGET                     = 112;*/
} // namespace ActorDataIDs