#pragma once
#include "../Global.h"
#include <string>

typedef std::string xuid_t;
typedef unsigned long long QWORD;

namespace mce {
    class UUID;
    class Color;
}; // namespace mce

class BlockPos {
public:
    int x, y, z;

    inline bool operator==(BlockPos const& b) const {
        return x == b.x && y == b.y && z == b.z;
    }
    inline bool operator!=(BlockPos const& b) const {
        return x != b.x || y != b.y || z != b.z;
    }
    inline BlockPos operator+(BlockPos const& b) const {
        return {x + b.x, y + b.y, z + b.z};
    }
    inline BlockPos operator-(BlockPos const& b) const {
        return {x - b.x, y - b.y, z - b.z};
    }
    inline std::string toString() {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }
    inline BlockPos add(int dx) {
        return {x + dx, y, z};
    }
    inline BlockPos add(int dx, int dy) {
        return {x + dx, y + dy, z};
    }
    inline BlockPos add(int dx, int dy, int dz) {
        return {x + dx, y + dy, z + dz};
    }
};


//struct MCRESULT {
//    unsigned char filler[4];
//    operator bool() {
//        return filler[0];
//    }
//    bool isSuccess() {
//        return operator bool();
//    }
//};

class Vec3 {
public:
    float x, y, z;

    inline std::string toString() {
        return std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z);
    }
    inline BlockPos toBlockPos() {
        auto px = (int)x;
        auto py = (int)y;
        auto pz = (int)z;
        if (px < 0 && px != x)
            px = px - 1;
        if (py < 0 && py != y)
            py = py - 1;
        if (pz < 0 && pz != z)
            pz = pz - 1;
        return { px, py, pz };
    }

    inline Vec3 add(float dx, float dy, float dz) {
        return {x + dx, y, z};
    }
    inline Vec3 add(float dx, float dy) {
        return {x + dx, y + dy, z };
    }
    inline Vec3 add(float dx) {
        return {x + dx, y , z };
    }

    inline Vec3 operator*(float num) { return { x * num, y * num, z * num }; }
    inline Vec3 operator+(const Vec3& b) { return { this->x + b.x, this->y + b.y, this->z + b.z }; }
    inline Vec3 operator-(const Vec3& b) { return { this->x - b.x, this->y - b.y, this->z - b.z }; }
};

#include "../MC/AABB.hpp"
class BoundingBox {
public:
    BlockPos bpos1;
    BlockPos bpos2;

    inline BlockPos getCenter() const {
        return { (bpos1.x + bpos2.x) / 2, (bpos1.y + bpos2.y) / 2, (bpos1.z + bpos2.z) / 2 };
    }

    inline AABB toAABB()
    {
        Vec3 vec1 = { (float)bpos1.x, (float)bpos1.y, (float)bpos1.z };
        Vec3 vec2 = { (float)bpos1.x, (float)bpos1.y, (float)bpos1.z };
        return { vec1, vec2 + Vec3{1, 1, 1} };
    }


};

class ChunkPos {
public:
    int x, z;

};

struct IVec2 {
private:
    static inline int iround(float x) {
        int r = int(x);
        if (x < 0)
            r--;
        return r;
    }

public:
    int x, z;

    IVec2(Vec3 l) :x(iround(l.x)), z(iround(l.z)) {}
    IVec2(int a, int b) : x(a), z(b) {}

    inline void operator+=(int v) { x += v; z += v; }
};

template <typename A, typename T>
class AutomaticID {
    T id;

public:
    AutomaticID() { id = 0; }
    AutomaticID(T x) { id = x; }
    inline operator T() { return id; }
};
#include "../MC/Tick.hpp"
//struct Tick {
//    unsigned long long t;
//};


struct ActorUniqueID {
    long long id;

public:
    ActorUniqueID() { id = -1; }
    ActorUniqueID(long long i) { id = i; }
    inline long long get() { return id; }
    inline operator long long() { return id; }
};
static_assert(!std::is_pod_v<ActorUniqueID>);


class ActorRuntimeID {
public:
    unsigned long long id;
    inline unsigned long long get() { return id; }
    inline operator unsigned long long() { return id; }
};
static_assert(std::is_pod_v<ActorRuntimeID>);

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

namespace gametest{
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
};// namespace gametest

namespace DBHelpers{
enum Category;
};// namespace DBHelpers

class AgentCommands {
public:
    class Command;
};

#include "../MC/Automation.hpp"

class ClientBlobCache {
public:
    struct Server {
        class TransferBuilder;
        class ActiveTransfersManager;
    };
};

class ClientBlockPipeline {
public:
    template <typename T>
    class VolumeOf;
    struct BlockSchematic;
};

struct ISurfaceBuilder {
    struct BuildParameters;
};

struct FeatureLoading {
    template <typename T>
    struct ConcreteFeatureHolder;
    struct FeatureRootParseContext;
    template <typename T>
    struct ConcreteFeatureHolder;
};

template <typename T1, typename T2>
class OperationNode;

struct OperationNodeDetails {
    template <typename T1, typename T2>
    class WorkingData;
};

struct PositionTrackingDB {
    class TrackingRecord;
};


struct SubChunkBrightnessStorage {
    struct LightPair;
};

struct BlockGeometry{
    struct Model;
    class TessellatedModel;
};

struct CanyonFeatureUtils {
    struct CanyonConfiguration;
};

class IInPackagePacks {
public:
    struct MetaData;
};

struct GameEventConfig {
    enum GameEvents;
};

#include "IMinecraftEventing.hpp"

struct OperationNodeValues{
    enum Terrain;
};

struct SubChunkStorageUnit{
enum PruneType;
};

//Templates
template <typename T, typename T2, int unk>
class TypedServerNetId {
public:
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedClientNetId {
public:
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedRuntimeId {
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

template <typename ...T>
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
class TypedScreenCapabilities {};

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
enum class ContainerType : unsigned char {
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

enum class UpdateBlockFlags : int {
    BlockUpdateNeighbours = 1,
    BlockUpdateNetwork = 2,
    BlockUpdateNoGraphics = 3,
    BlockUpdatePriority = 4,
};

enum class DataItemType : unsigned char { 
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

enum class TextType : char {
    RAW = 0,
    CHAT = 1,
    TRANSLATION = 2,
    POPUP = 3,
    JUKEBOX_POPUP = 4,
    TIP = 5,
    SYSTEM = 6,
    WHISPER = 7,
    ANNOUNCEMENT = 8,
    JSON = 9,
    JSON_WHISPER = 10
};

enum class TitleType : int {
    Clear = 0,
    Reset = 1,
    SetTitle = 2,
    SetSubtitle = 3,
    SetActionBar = 4,
    SetDurations = 5,
};

enum class ParticleType {
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

enum class transactionType {
    NormalTransaction = 0x00,
    InventoryMismatch = 0x01,
    ItemUseTransaction = 0x02,
    ItemUseOnEntityTransaction = 0x03,
    ItemReleaseTransaction = 0x04
};

enum class ItemStackRequestActionType {
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

enum class ActorDamageCause : int {
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

enum class ObjectiveSortOrder : char {
    ASCENDING = 0,
    DESCENDING = 1
};

enum class PlayerScoreSetFunction : char {
    SET = 0,
    ADD = 1,
    REMOVE = 2
};

enum class FaceID : char {
    Unknown = -1,
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
};

class CommandVersion {
public:
    int Min = 1, Max = 0x7FFFFFFF;
};

template <typename T>
struct InvertableFilter {
    T    value;
    bool inverted;
};

class CommandOutputParameter
{
    std::string str;
    int type;
public:
    MCINLINE CommandOutputParameter(std::string str, int type) : str(str), type(type) {}
};

template <typename T>
class CommandSelectorResults
{
public:
    std::shared_ptr<std::vector<T*>> data;

    auto begin() { return data->begin(); }
    auto end() { return data->end(); }
    auto count() const { return data->size(); }
    auto empty() const { return data->empty(); }
};

class FakeDataItem {
public:
    DataItemType type;
    uint16_t id;
    int8_t byte;
    int16_t shorts;
    int32_t ints;
    float floats;
    std::string strings;
    BlockPos bpos;
    Vec3 vec3;
    int64_t longs;

    FakeDataItem(uint16_t a1, DataItemType a3, int8_t a2)
        : id(a1)
        , type(a3)
        , byte(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, int16_t a2)
        : id(a1)
        , type(a3)
        , shorts(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, int32_t a2)
        : id(a1)
        , type(a3)
        , ints(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, float a2)
        : id(a1)
        , type(a3)
        , floats(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, std::string a2)
        : id(a1)
        , type(a3)
        , strings(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, BlockPos a2)
        : id(a1)
        , type(a3)
        , bpos(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, Vec3 a2)
        : id(a1)
        , type(a3)
        , vec3(a2) {
    }
    FakeDataItem(uint16_t a1, DataItemType a3, int64_t a2)
        : id(a1)
        , type(a3)
        , longs(a2) {
    }
};

namespace ActorDataIDs {
inline constexpr int16_t FLAGS = 0;                      // LONG
inline constexpr int16_t HEALTH = 1;                     // INT (minecart/boat)
inline constexpr int16_t VARIANT = 2;                    // INT
inline constexpr int16_t COLOR = 3;                      // BYTE
inline constexpr int16_t NAMETAG = 4;                    // STRING
inline constexpr int16_t OWNER = 5;                      // LONG
inline constexpr int16_t TARGET = 6;                     // LONG
inline constexpr int16_t AIR = 7;                        // SHORT
inline constexpr int16_t POTION_COLOR = 8;               // INT (ARGB!)
inline constexpr int16_t POTION_AMBIENT = 9;             // BYTE
inline constexpr int16_t JUMP_DURATION = 10;             // LONG
inline constexpr int16_t HURT_TIME = 11;                 // INT (minecart/boat)
inline constexpr int16_t HURT_DIRECTION = 12;            // INT (minecart/boat)
inline constexpr int16_t PADDLE_TIME_LEFT = 13;          // FLOAT
inline constexpr int16_t PADDLE_TIME_RIGHT = 14;         // FLOAT
inline constexpr int16_t EXPERIENCE_VALUE = 15;          // INT (xp orb)
inline constexpr int16_t DISPLAY_ITEM = 16;              // INT (id | (data << 16))
inline constexpr int16_t HORSE_FLAGS = 16;               // INT
inline constexpr int16_t WITHER_SKULL_IS_DANGEROUS = 16; // BYTE
inline constexpr int16_t MINECART_DISPLAY_OFFSET = 17;   // INT
inline constexpr int16_t ARROW_SHOOTER_ID = 17;          // LONG
inline constexpr int16_t MINECART_HAS_DISPLAY = 18;      // BYTE (must be 1 for minecart to show block inside)
inline constexpr int16_t HORSE_TYPE = 19;
inline constexpr int16_t SWELL = 19;
inline constexpr int16_t OLD_SWELL = 20;
inline constexpr int16_t SWELL_DIR = 21;
inline constexpr int16_t CHARGE_AMOUNT = 22;
inline constexpr int16_t ENDERMAN_HELD_RUNTIME_ID = 23; // SHORT
inline constexpr int16_t ACTOR_AGE = 24;                // SHORT
inline constexpr int16_t PLAYER_FLAGS = 26;             // BYTE
inline constexpr int16_t PLAYER_INDEX = 27;
inline constexpr int16_t PLAYER_BED_POSITION = 28; // POS
inline constexpr int16_t FIREBALL_POWER_X = 29;    // FLOAT
inline constexpr int16_t FIREBALL_POWER_Y = 30;    // FLOAT
inline constexpr int16_t FIREBALL_POWER_Z = 31;    // FLOAT
inline constexpr int16_t AUX_POWER = 32;
inline constexpr int16_t FISH_X = 33;
inline constexpr int16_t FISH_Z = 34;
inline constexpr int16_t FISH_ANGLE = 35;
inline constexpr int16_t POTION_AUX_VALUE = 36;                   // SHORT
inline constexpr int16_t LEAD_HOLDER = 37;                        // LONG
inline constexpr int16_t SCALE = 38;                              // FLOAT
inline constexpr int16_t INTERACTIVE_TAG = 39;                    // STRING
inline constexpr int16_t NPC_SKIN_ID = 40;                        // STRING
inline constexpr int16_t URL_TAG = 41;                            // STRING
inline constexpr int16_t MAX_AIR = 42;                            // SHORT
inline constexpr int16_t MARK_VARIANT = 43;                       // INT
inline constexpr int16_t CONTAINER_TYPE = 44;                     // BYTE
inline constexpr int16_t CONTAINER_BASE_SIZE = 45;                // INT
inline constexpr int16_t CONTAINER_EXTRA_SLOTS_PER_STRENGTH = 46; // INT
inline constexpr int16_t BLOCK_TARGET = 47;                       // POS (ENDER CRYSTAL)
inline constexpr int16_t WITHER_INVULNERABLE_TICKS = 48;          // INT
inline constexpr int16_t WITHER_TARGET_1 = 49;                    // LONG
inline constexpr int16_t WITHER_TARGET_2 = 50;                    // LONG
inline constexpr int16_t WITHER_TARGET_3 = 51;                    // LONG
inline constexpr int16_t AERIAL_ATTACK = 52;
inline constexpr int16_t BOUNDING_BOX_WIDTH = 53;            // FLOAT
inline constexpr int16_t BOUNDING_BOX_HEIGHT = 54;           // FLOAT
inline constexpr int16_t FUSE_LENGTH = 55;                   // INT
inline constexpr int16_t RIDER_SEAT_POSITION = 56;           // VEC3
inline constexpr int16_t RIDER_ROTATION_LOCKED = 57;         // BYTE
inline constexpr int16_t RIDER_MAX_ROTATION = 58;            // FLOAT
inline constexpr int16_t RIDER_MIN_ROTATION = 59;            // FLOAT
inline constexpr int16_t AREA_EFFECT_CLOUD_RADIUS = 61;      // FLOAT
inline constexpr int16_t AREA_EFFECT_CLOUD_WAITING = 62;     // INT
inline constexpr int16_t AREA_EFFECT_CLOUD_PARTICLE_ID = 63; // INT
inline constexpr int16_t SHULKER_PEEK_ID = 64;               // INT
inline constexpr int16_t SHULKER_ATTACH_FACE = 65;           // BYTE
inline constexpr int16_t SHULKER_ATTACHED = 66;              // SHORT
inline constexpr int16_t SHULKER_ATTACH_POS = 67;            // POS
inline constexpr int16_t TRADING_PLAYER_EID = 68;            // LONG
inline constexpr int16_t TRADING_CAREER = 69;
inline constexpr int16_t HAS_COMMAND_BLOCK = 70;
inline constexpr int16_t COMMAND_BLOCK_COMMAND = 71;         // STRING
inline constexpr int16_t COMMAND_BLOCK_LAST_OUTPUT = 72;     // STRING
inline constexpr int16_t COMMAND_BLOCK_TRACK_OUTPUT = 73;    // BYTE
inline constexpr int16_t CONTROLLING_RIDER_SEAT_NUMBER = 74; // BYTE
inline constexpr int16_t STRENGTH = 75;                      // INT
inline constexpr int16_t MAX_STRENGTH = 76;                  // INT
inline constexpr int16_t SPELL_CASTING_COLOR = 77;           // INT
inline constexpr int16_t LIMITED_LIFE = 78;
inline constexpr int16_t ARMOR_STAND_POSE_INDEX = 79;    // INT
inline constexpr int16_t ENDER_CRYSTAL_TIME_OFFSET = 80; // INT
inline constexpr int16_t ALWAYS_SHOW_NAMETAG = 81;       // BYTE
inline constexpr int16_t COLOR_2 = 82;                   // BYTE
inline constexpr int16_t NAME_AUTHOR = 83;
inline constexpr int16_t SCORE_TAG = 84;               // STRING
inline constexpr int16_t BALLOON_ATTACHED_ENTITY = 85; // LONG
inline constexpr int16_t PUFFERFISH_SIZE = 86;
inline constexpr int16_t BUBBLE_TIME = 87;
inline constexpr int16_t AGENT = 88;
inline constexpr int16_t SITTING_AMOUNT = 89;
inline constexpr int16_t SITTING_AMOUNT_PREVIOUS = 90;
inline constexpr int16_t EATING_COUNTER = 91;
inline constexpr int16_t FLAGS_EXTENDED = 92;
inline constexpr int16_t LAYING_AMOUNT = 93;
inline constexpr int16_t LAYING_AMOUNT_PREVIOUS = 94;
inline constexpr int16_t DURATION = 95;
inline constexpr int16_t SPAWN_TIME = 96;
inline constexpr int16_t CHANGE_RATE = 97;
inline constexpr int16_t CHANGE_ON_PICKUP = 98;
inline constexpr int16_t PICKUP_COUNT = 99;
inline constexpr int16_t INTERACT_TEXT = 100;
inline constexpr int16_t TRADE_TIER = 101;
inline constexpr int16_t MAX_TRADE_TIER = 102;
inline constexpr int16_t TRADE_EXPERIENCE = 103;
inline constexpr int16_t SKIN_ID = 104; // INT
inline constexpr int16_t SPAWNING_FRAMES = 105;
inline constexpr int16_t COMMAND_BLOCK_TICK_DELAY = 106;
inline constexpr int16_t COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 107;
inline constexpr int16_t AMBIENT_SOUND_INTERVAL = 108;
/*inline constexpr int16_t AMBIENT_SOUND_EVENT_NAME            = 109;
inline constexpr int16_t FALL_DAMAGE_MULTIPLIER              = 110;
inline constexpr int16_t NAME_RAW_TEXT                       = 111;
inline constexpr int16_t CAN_RIDE_TARGET                     = 112;*/
} // namespace ActorDataIDs