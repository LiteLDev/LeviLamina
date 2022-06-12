#pragma once

#include "HookAPI.h"
#include "../Global.h"
#include "Vec2.hpp"
#include "Vec3.hpp"
#include "BlockPos.hpp"
#include "BoundingBox.hpp"
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
    MCAPI static class mce::UUID EMPTY;

    inline operator bool() const
    {
        return !isEmpty();
    }
};
class Color
{
public:
    float r;
    float g;
    float b;
    float a;
    Color(float r, float g, float b, float a = 1)
        : r(r)
        , g(g)
        , b(b)
        , a(a){};
    Color(int ir, int ig, int ib, int ia = 255)
        : r(ir / 255.0f)
        , g(ig / 255.0f)
        , b(ib / 255.0f)
        , a(ia / 255.0f){};

    inline operator bool() const
    {
        return !(*this == NIL);
    }

    LIAPI double distanceTo(mce::Color const dst) const;
    LIAPI std::string toConsoleCode(bool foreground = true) const;
    LIAPI std::string toNearestColorCode() const;
    LIAPI static class mce::Color fromConsoleCode(std::string const&);
    LIAPI static class mce::Color fromColorCode(std::string const&);
    LIAPI class mce::Color sRGBToLinear() const;
    LIAPI class mce::Color LinearTosRGB() const;
    LIAPI class mce::Color LinearToXYZ() const;
    LIAPI class mce::Color XYZToLinear() const;
    LIAPI class mce::Color XYZToLab() const;
    LIAPI class mce::Color LabToXYZ() const;
    LIAPI double deltaE76(mce::Color const dst) const; // 2.3 for JND
    LIAPI double deltaE94(mce::Color const dst) const; // 1.0 for JND
    LIAPI double deltaE00(mce::Color const dst) const; // 1.0 for JND

    MCAPI static mce::Color const NIL;
    MCAPI static class mce::Color fromHexString(std::string const&);
    MCAPI bool operator==(class mce::Color const&) const;
    MCAPI int toABGR(void) const;
    MCAPI int toARGB(void) const;
    MCAPI std::string toHexString(void) const;

};

}; // namespace mce

namespace std {

    template <>
    struct hash<mce::Color> {
        std::size_t operator()(mce::Color const& c) const noexcept {
            return (std::hash<float>()(c.r) ^ std::hash<float>()(c.g) ^
                    std::hash<float>()(c.b) ^ std::hash<float>()(c.a));
        }
    };

}  // namespace std

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

    inline operator T() const
    {
        return id;
    }
};

#include "ActorUniqueID.hpp"

//static_assert(!std::is_pod_v<ActorUniqueID>);
class NetherNet
{
public:
    struct NetworkID;
};

class ActorRuntimeID
{
public:
    unsigned long long id;

    inline unsigned long long get() const
    {
        return id;
    }

    inline operator unsigned long long() const
    {
        return id;
    }
};
//static_assert(std::is_pod_v<ActorRuntimeID>);

#include "RelativeFloat.hpp"

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
    class PositionTrackingDBClient;
    class PositionTrackingDBServer;
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
    inline operator T2()
    {
        return netId;
    }
};

template <typename T, typename T2, int unk>
class TypedClientNetId
{
public:
    T2 netId;

    virtual void clientInit(TypedClientNetId<T, T2, unk>);
    virtual void clientInit();
};

template <typename T, typename T2, int unk>
class TypedRuntimeId
{
public:
    T2 netId;
};

template <typename T, typename T2>
class AutomaticID;

template<typename T, typename T2>
class BidirectionalUnorderedMap {
public:
    std::unordered_map<T, T2> mMap1;
    std::unordered_map<T2, T> mMap2;
};

template <typename T>
class BlockDataFetchResult;

template <typename T>
class CommandSelectorResults;

template <typename... T>
class Factory;

template <typename T>
class InheritanceTree;

//enum class ItemStackRequestActionType : char;
//template <typename T, ItemStackRequestActionType actionType>
//class ItemStackRequestActionCraft;

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

template<typename T>
class WeakPtr {
    T** value;
public:
    inline T* get()
    {
        if (value)
            return *value;
        return nullptr;
    }
    inline T const* get() const
    {
        if (value)
            return *value;
        return nullptr;
    }
    inline T& operator*()
    {
        return *get();
    }
    inline T const& operator*() const
    {
        return *get();
    }
    inline operator bool() const
    {
        return get() != nullptr;
    }
};

template <typename T>
class WeakRefT;

template <typename T>
struct SharePtrRefTraits;

template <typename T>
class SubChunkStorage;

enum class ScriptFacing
{
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};

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
class optional_ref
{
    T* value;

public:
    inline T* get() const
    {
        if (*this)
            return value;
        return nullptr;
    }
    //inline T* set(T const& val)
    //{
    //    *value = &val;
    //}
    inline T& operator*() const
    {
        return *value;
    }
    inline T* operator->() const
    {
        return value;
    }
    inline operator bool() const
    {
        return value != nullptr;
    }
};

namespace cg
{
    class ImageBuffer;
};

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

enum class ContainerType : char {
    INVENTORY              = -1,
    NONE                   = -9,
    CONTAINER              = 0,
    WORKBENCH              = 1,
    FURNACE                = 2,
    ENCHANTMENT            = 3,
    BREWING_STAND          = 4,
    ANVIL                  = 5,
    DISPENSER              = 6,
    DROPPER                = 7,
    HOPPER                 = 8,
    CAULDRON               = 9,
    MINECART_CHEST         = 10,
    MINECART_HOPPER        = 11,
    HORSE                  = 12,
    TRADE                  = 15,//NotGenerated
    MINECART_COMMAND_BLOCK = 16,
    JUKEBOX                = 17,
    COMPOUND_CREATOR       = 20,
    ELEMENT_CONSTRUCTOR    = 21,
    MATERIAL_REDUCER       = 22,
    LAB_TABLE              = 23,
    BLAST_FURNACE          = 27,
    SMOKER                 = 28,
    STONECUTTER            = 29,
    HUD                    = 31,
    SMITHING_TABLE         = 33,
};

enum class UpdateBlockLayer : int
{
    UpdateBlockDefault,
    UpdateBlockLiquid
};

enum class UpdateBlockFlags : int
{
    UpdateBlockNone = 0,
    BlockUpdateNeighbors = 1,
    BlockUpdateNetwork = 2,
    BlockUpdateAll = 3,//default value in BDS
    BlockUpdateNoGraphic = 4,
    BlockUpdatePriority = 8,
    BlockUpdateAllPriority = 11
    //old one not correctly ? 
    //BlockUpdateNeighbours = 1,
    //BlockUpdateNetwork = 2,
    //BlockUpdateNoGraphics = 3,
    //BlockUpdatePriority = 4,
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
    Texture = 7,
    ResendRaidBossEventData = 8,
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

enum class ContainerEnumName : int8_t
{
    AnvilInputContainer = 0,
    AnvilMaterialContainer = 1,
    AnvilResultPreviewContainer = 2,
    SmithingTableInputContainer = 3,
    SmithingTableMaterialContainer = 4,
    SmithingTableResultPreviewContainer = 5,
    ArmorContainer = 6,
    LevelEntityContainer = 7,
    BeaconPaymentContainer = 8,
    BrewingStandInputContainer = 9,
    BrewingStandResultContainer = 10,
    BrewingStandFuelContainer = 11,
    CombinedHotbarAndInventoryContainer = 12,
    CraftingInputContainer = 13,
    CraftingOutputPreviewContainer = 14,
    RecipeConstructionContainer = 15,
    RecipeNatureContainer = 16,
    RecipeItemsContainer = 17,
    RecipeSearchContainer = 18,
    RecipeSearchBarContainer = 19,
    RecipeEquipmentContainer = 20,
    EnchantingInputContainer = 21,
    EnchantingMaterialContainer = 22,
    FurnaceFuelContainer = 23,
    FurnaceIngredientContainer = 24,
    FurnaceResultContainer = 25,
    HorseEquipContainer = 26,
    HotbarContainer = 27,
    InventoryContainer = 28,
    ShulkerBoxContainer = 29,
    TradeIngredient1Container = 30,
    TradeIngredient2Container = 31,
    TradeResultPreviewContainer = 32,
    OffhandContainer = 33,
    CompoundCreatorInput = 34,
    CompoundCreatorOutputPreview = 35,
    ElementConstructorOutputPreview = 36,
    MaterialReducerInput = 37,
    MaterialReducerOutput = 38,
    LabTableInput = 39,
    LoomInputContainer = 40,
    LoomDyeContainer = 41,
    LoomMaterialContainer = 42,
    LoomResultPreviewContainer = 43,
    BlastFurnaceIngredientContainer = 44,
    SmokerIngredientContainer = 45,
    Trade2Ingredient1Container = 46,
    Trade2Ingredient2Container = 47,
    Trade2ResultPreviewContainer = 48,
    GrindstoneInputContainer = 49,
    GrindstoneAdditionalContainer = 50,
    GrindstoneResultPreviewContainer = 51,
    StonecutterInputContainer = 52,
    StonecutterResultPreviewContainer = 53,
    CartographyInputContainer = 54,
    CartographyAdditionalContainer = 55,
    CartographyResultPreviewContainer = 56,
    BarrelContainer = 57,
    CursorContainer = 58,
    CreatedOutputContainer = 59
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

enum class ItemStackRequestActionType: char
{
    Take = 0x00,
    Place = 0x01,
    Swap = 0x02,
    Drop = 0x03,
    Destroy = 0x04,
    Consume = 0x05,
    Create = 0x06,
    PlaceInItemContainer = 0x07,
    TakeFromItemContainer = 0x08,
    ScreenLabTableCombine = 0x09,
    ScreenBeaconPayment = 0x0a,
    ScreenHUDMineBlock = 0x0b,
    CraftRecipe = 0x0c,
    CraftRecipeAuto = 0x0d,
    CraftCreative = 0x0e,
    CraftRecipeOptional = 0x0f,
    CraftRepairAndDisenchant = 0x10,
    CraftLoom = 0x11,
    CraftNonImplemented_DEPRECATEDASKTYLAING = 0x12,
    CraftResults_DEPRECATEDASKTYLAING = 0x13,
};

enum class ActorDamageCause : int
{
    None = -0x01,
    Override = 0x00,
    Contact = 0x01,
    EntityAttack = 0x02,
    Projectile = 0x03,
    Suffocation = 0x04,
    Fall = 0x05,
    Fire = 0x06,
    FireTick = 0x07,
    Lava = 0x08,
    Drowning = 0x09,
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
    Freezing = 0x1B,
    Stalactite = 0x1C,
    Stalagmite = 0x1D,
    All = 0x1F,
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

enum class ContainerID : uint8_t
{
    Invalid = 0xff,
    Inventory = 0,
    First = 1,
    Last = 100,
    Offhand = 119,
    Armor = 120,
    SelectionSlots = 122,
    PlayerUIOnly = 124
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
    Login                             = 0x01,
    PlayStatus                        = 0x02,
    ServerToClientHandshake           = 0x03,
    ClientToServerHandshake           = 0x04,
    Disconnect                        = 0x05,
    ResourcePacksInfo                 = 0x06,
    ResourcePackStack                 = 0x07,
    ResourcePackClientResponse        = 0x08,
    Text                              = 0x09,
    SetTime                           = 0x0A,
    StartGame                         = 0x0B,
    AddPlayer                         = 0x0C,
    AddActor                          = 0x0D,
    RemoveActor                       = 0x0E,
    AddItemActor                      = 0x0F,
    TakeItemActor                     = 0x11,
    MoveActorAbsolute                 = 0x12,
    MovePlayer                        = 0x13,
    PassengerJump                     = 0x14,
    UpdateBlock                       = 0x15,
    AddPainting                       = 0x16,
    TickSync                          = 0x17,
    LevelSoundEventV1                 = 0x18,
    LevelEvent                        = 0x19,
    BlockEvent                        = 0x1A,
    ActorEvent                        = 0x1B,
    MobEffect                         = 0x1C,
    UpdateAttributes                  = 0x1D,
    InventoryTransaction              = 0x1E,
    MobEquipment                      = 0x1F,
    MobArmorEquipment                 = 0x20,
    Interact                          = 0x21,
    BlockPickRequest                  = 0x22,
    ActorPickRequest                  = 0x23,
    PlayerAction                      = 0x24,
    HurtArmor                         = 0x26,
    SetActorData                      = 0x27,
    SetActorMotion                    = 0x28,
    SetActorLink                      = 0x29,
    SetHealth                         = 0x2A,
    SetSpawnPosition                  = 0x2B,
    Animate                           = 0x2C,
    Respawn                           = 0x2D,
    ContainerOpen                     = 0x2E,
    ContainerClose                    = 0x2F,
    PlayerHotbar                      = 0x30,
    InventoryContent                  = 0x31,
    InventorySlot                     = 0x32,
    ContainerSetData                  = 0x33,
    CraftingData                      = 0x34,
    CraftingEvent                     = 0x35,
    GuiDataPickItem                   = 0x36,
    AdventureSettings                 = 0x37,
    BlockActorData                    = 0x38,
    PlayerInput                       = 0x39,
    LevelChunk                        = 0x3A,
    SetCommandsEnabled                = 0x3B,
    SetDifficulty                     = 0x3C,
    ChangeDimension                   = 0x3D,
    SetPlayerGameType                 = 0x3E,
    PlayerList                        = 0x3F,
    SimpleEvent                       = 0x40,
    Event                             = 0x41,
    SpawnExperienceOrb                = 0x42,
    ClientboundMapItemData            = 0x43,
    MapInfoRequest                    = 0x44,
    RequestChunkRadius                = 0x45,
    ChunkRadiusUpdated                = 0x46,
    ItemFrameDropItem                 = 0x47,
    GameRulesChanged                  = 0x48,
    Camera                            = 0x49,
    BossEvent                         = 0x4A,
    ShowCredits                       = 0x4B,
    AvailableCommands                 = 0x4C,
    CommandRequest                    = 0x4D,
    CommandBlockUpdate                = 0x4E,
    CommandOutput                     = 0x4F,
    UpdateTrade                       = 0x50,
    UpdateEquip                       = 0x51,
    ResourcePackDataInfo              = 0x52,
    ResourcePackChunkData             = 0x53,
    ResourcePackChunkRequest          = 0x54,
    Transfer                          = 0x55,
    PlaySound                         = 0x56,
    StopSound                         = 0x57,
    SetTitle                          = 0x58,
    AddBehaviorTree                   = 0x59,
    StructureBlockUpdate              = 0x5A,
    ShowStoreOffer                    = 0x5B,
    PurchaseReceipt                   = 0x5C,
    PlayerSkin                        = 0x5D,
    SubClientLogin                    = 0x5E,
    AutomationClientConnect           = 0x5F,
    SetLastHurtBy                     = 0x60,
    BookEdit                          = 0x61,
    NpcRequest                        = 0x62,
    PhotoTransfer                     = 0x63,
    ModalFormRequest                  = 0x64,
    ModalFormResponse                 = 0x65,
    ServerSettingsRequest             = 0x66,
    ServerSettingsResponse            = 0x67,
    ShowProfile                       = 0x68,
    SetDefaultGameType                = 0x69,
    RemoveObjective                   = 0x6A,
    SetDisplayObjective               = 0x6B,
    SetScore                          = 0x6C,
    LabTable                          = 0x6D,
    UpdateBlockSynced                 = 0x6E,
    MoveActorDelta                    = 0x6F,
    SetScoreboardIdentity             = 0x70,
    SetLocalPlayerAsInitialized       = 0x71,
    UpdateSoftEnum                    = 0x72,
    NetworkStackLatency               = 0x73,
    ScriptCustomEvent                 = 0x75,
    SpawnParticleEffect               = 0x76,
    AvailableActorIdentifiers         = 0x77,
    LevelSoundEventV2                 = 0x78,
    NetworkChunkPublisherUpdate       = 0x79,
    BiomeDefinitionList               = 0x7A,
    LevelSoundEvent                   = 0x7B,
    LevelEventGeneric                 = 0x7C,
    LecternUpdate                     = 0x7D,
    AddEntity                         = 0x7F,
    RemoveEntity                      = 0x80,
    ClientCacheStatus                 = 0x81,
    OnScreenTextureAnimation          = 0x82,
    MapCreateLockedCopy               = 0x83,
    StructureTemplateDataRequest      = 0x84,
    StructureTemplateDataResponse     = 0x85,
    ClientCacheBlobStatus             = 0x87,
    ClientCacheMissResponse           = 0x88,
    EducationSettings                 = 0x89,
    Emote                             = 0x8A,
    MultiplayerSettings               = 0x8B,
    SettingsCommand                   = 0x8C,
    AnvilDamage                       = 0x8D,
    CompletedUsingItem                = 0x8E,
    NetworkSettings                   = 0x8F,
    PlayerAuthInput                   = 0x90,
    CreativeContent                   = 0x91,
    PlayerEnchantOptions              = 0x92,
    ItemStackRequest                  = 0x93,
    ItemStackResponse                 = 0x94,
    PlayerArmorDamage                 = 0x95,
    CodeBuilder                       = 0x96,
    UpdatePlayerGameType              = 0x97,
    EmoteList                         = 0x98,
    PositionTrackingDBServerBroadcast = 0x99,
    PositionTrackingDBClientRequest   = 0x9A,
    DebugInfo                         = 0x9B,
    PacketViolationWarning            = 0x9C,
    MotionPredictionHints             = 0x9D,
    AnimateEntity                     = 0x9E,
    CameraShake                       = 0x9F,
    PlayerFog                         = 0xA0,
    CorrectPlayerMovePrediction       = 0xA1,
    ItemComponent                     = 0xA2,
    FilterText                        = 0xA3,
    ClientboundDebugRenderer          = 0xA4,
    SyncActorProperty                 = 0xA5,
    AddVolumeEntity                   = 0xA6,
    RemoveVolumeEntity                = 0xA7,
    SimulationType                    = 0xA8,
    NpcDialogue                       = 0xA9,
    EduUriResource                    = 0xAA,
    CreatePhoto                       = 0xAB,
    UpdateSubChunkBlocks              = 0xAC,
    PhotoInfoRequest                  = 0xAD,//removed
    SubChunk                          = 0xAE,
    SubChunkRequest                   = 0xAF,
    PlayerStartItemCooldown           = 0xB0,
    ScriptMessage                     = 0xB1,
    CodeBuilderSource                 = 0xB2,
    TickingAreasLoadStatus            = 0xB3,
    DimensionData                     = 0xB4,
    AgentActionEvent                  = 0xB5,
    ChangeMobProperty 		          = 0xB6,
    LessonProgress                    = 0xB7,
    RequestAbility                    = 0xB8,
    RequestPermissions                = 0xB9,
    ToastRequest                      = 0XBA
};

enum ItemStackNetResult :unsigned char {
    Success                                          = 0,
    Error                                            = 1,
    InvalidRequestActionType                         = 2,
    ActionRequestNotAllowed                          = 3,
    ScreenHandlerEndRequestFailed                    = 4,
    ItemRequestActionHandlerCommitFailed             = 5,
    InvalidRequestCraftActionType                    = 6,
    InvalidCraftRequest                              = 7,
    InvalidCraftRequestScreen                        = 8,
    InvalidCraftResult                               = 9,
    InvalidCraftResultIndex                          = 10,
    InvalidCraftResultItem                           = 11,
    InvalidItemNetId                                 = 12,
    MissingCreatedOutputContainer                    = 13,
    FailedToSetCreatedItemOutputSlot                 = 14,
    RequestAlreadyInProgress                         = 15,
    FailedToInitSparseContainer                      = 16,
    ResultTransferFailed                             = 17,
    ExpectedItemSlotNotFullyConsumed                 = 18,
    ExpectedAnywhereItemNotFullyConsumed             = 19,
    ItemAlreadyConsumedFromSlot                      = 20,
    ConsumedTooMuchFromSlot                          = 21,
    MismatchSlotExpectedConsumedItem                 = 22,
    MismatchSlotExpectedConsumedItemNetIdVariant     = 23,
    FailedToMatchExpectedSlotConsumedItem            = 24,
    FailedToMatchExpectedAllowedAnywhereConsumedItem = 25,
    ConsumedItemOutOfAllowedSlotRange                = 26,
    ConsumedItemNotAllowed                           = 27,
    PlayerNotInCreativeMode                          = 28,
    InvalidExperimentalRecipeRequest                 = 29,
    FailedToCraftCreative                            = 30,
    FailedToGetLevelRecipe                           = 31,
    FailedToFindRecipeByNetId                        = 32,
    MismatchedCraftingSize                           = 33,
    MissingInputSparseContainer                      = 34,
    MismatchedRecipeForInputGridItems                = 35,
    EmptyCraftResults                                = 36,
    FailedToEnchant                                  = 37,
    MissingInputItem                                 = 38,
    InsufficientPlayerLevelToEnchant                 = 39,
    MissingMaterialItem                              = 40,
    MissingActor                                     = 41,
    UnknownPrimaryEffect                             = 42,
    PrimaryEffectOutOfRange                          = 43,
    PrimaryEffectUnavailable                         = 44,
    SecondaryEffectOutOfRange                        = 45,
    SecondaryEffectUnavailable                       = 46,
    DstContainerEqualToCreatedOutputContainer        = 47,
    DstContainerAndSlotEqualToSrcContainerAndSlot    = 48,
    FailedToValidateSrcSlot                          = 49,
    FailedToValidateDstSlot                          = 50,
    InvalidAdjustedAmount                            = 51,
    InvalidItemSetType                               = 52,
    InvalidTransferAmount                            = 53,
    CannotSwapItem                                   = 54,
    CannotPlaceItem                                  = 55,
    UnhandledItemSetType                             = 56,
    InvalidRemovedAmount                             = 57,
    InvalidRegion                                    = 58,
    CannotDropItem                                   = 59,
    CannotDestroyItem                                = 60,
    InvalidSourceContainer                           = 61,
    ItemNotConsumed                                  = 62,
    InvalidNumCrafts                                 = 63,
    InvalidCraftResultStackSize                      = 64,
    CannotConsumeItem                                = 66,
    ScreenStackError                                 = 67,
};

//class CommandVersion {
//public:
//    int Min = 1, Max = 0x7FFFFFFF;
//};

enum class InventoryTransactionError
{
    Unknown = 0,
    NoError = 1,
    BalanceMismatch = 2,
    SourceItemMismatch = 3,
    InventoryMismatch = 4,
    SizeMismatch = 5,
    AuthorityMismatch = 6,
    StateMismatch = 7,
    ApiDenied = 8
};

enum class InventorySourceType
{
    Invalid = -1,
    Container = 0,
    Global = 1,
    World = 2,
    Creative = 3,
    UntrackedInteractionUI = 100,
    NONIMPLEMENTEDTODO = 99999
};

template <typename T>
struct InvertableFilter
{
    T value;
    bool inverted;
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

/*

enum class BlockActorType : int
{
    Furnace = 0x01,
    Chest = 0x02,
    NetherReactor = 0x03,
    Sign = 0x04,
    MobSpawner = 0x05,
    Skull = 0x06,
    FlowerPot = 0x07,
    BrewingStand = 0x08,
    EnchantTable = 0x09,
    DaylightDetector = 0x0A,
    Music = 0x0B,
    Comparator = 0x0C,
    Dispenser = 0x0D,
    Dropper = 0x0E,
    Hopper = 0x0F,
    Cauldron = 0x10,
    ItemFrame = 0x11,
    PistonArm = 0x12,
    MovingBlock = 0x13,
    ChalkboardBlock = 0x14,
    Beacon = 0x15,
    EndPortal = 0x16,
    EnderChest = 0x17,
    EndGateway = 0x18,
    ShulkerBox = 0x19,
    CommandBlock = 0x1A,
    Bed = 0x1B,
    Banner = 0x1C,
    StructureBlock = 0x20,
    Jukebox = 0x21,
    ChemistryTable = 0x22,
    Conduit = 0x23,
    JigsawBlock = 0x24,
    Lectern = 0x25,
    BlastFurnace = 0x26,
    Smoker = 0x27,
    Bell = 0x28,
    Campfire = 0x29,
    Barrel = 0x2A,
    Beehive = 0x2B,
    Lodestone = 0x2C,
    SculkSensor = 0x2D,
    SporeBlossom = 0x2E,
    GlowItemFrame = 0x2F,
    SculkCatalyst = 0x30,
    SculkShrieker = 0x31,
};

enum class ActorType;

*/
