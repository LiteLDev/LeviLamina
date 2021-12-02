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
};

struct MCRESULT {
    unsigned char filler[4];
    operator bool() {
        return filler[0];
    }
    bool isSuccess() {
        return operator bool();
    }
};

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

    inline Vec3 add(float dx, float dy, float dz) { return { x + dx, y + dy, z + dz }; }

    inline Vec3 operator*(float num) { return { x * num, y * num, z * num }; }
    inline Vec3 operator+(const Vec3& b) { return { this->x + b.x, this->y + b.y, this->z + b.z }; }
    inline Vec3 operator-(const Vec3& b) { return { this->x - b.x, this->y - b.y, this->z - b.z }; }
};


class AABB {
public:
    Vec3 p1{};
    Vec3 p2{};

    AABB(Vec3 _p1, Vec3 _p2) {
        p1 = _p1;
        p2 = _p2;
    }

    inline Vec3 getCenter() {
        return (p1 + p2) * 0.5;
    }
};

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

struct Tick {
    unsigned long long t;
};


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

class MinecraftEventing {
public:
    enum POIBlockInteractionType;
};

class RelativeFloat {
public:
    float value;
    bool is_relative;

    RelativeFloat(float value)
        : value(value)
        , is_relative(true) {
    }

    inline float getFloat(float center) const {
        if (is_relative)
            return center + value;
        return value;
    }
};

namespace Core {

class PathPart {
public:
    std::string data;
};

class Path : public PathPart {
public:
};

template <typename T>
class PathBuffer {
    T value;
    operator T&() noexcept {
        return value;
    }
    operator T const &() const noexcept {
        return value;
    }
};

}; // namespace Core

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

class Automation {
public:
    class AutomationClient;
};

class ClientBlobCache {
public:
    struct Server {
        class TransferBuilder;
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

struct OperationNodeDetails {
    template <typename T1, typename T2>
    class WorkingData;
};

struct PositionTrackingDB {
    class TrackingRecord;
};

struct RakNetServerLocator {
    struct AnnounceServerData;
};

struct SubChunkBrightnessStorage {
    struct LightPair;
};

struct BlockGeometry{
    struct Model;
    class TessellatedModel;
};

class IInPackagePacks {
public:
    struct MetaData;
};

struct GameEventConfig {
    enum GameEvents;
};

class IMinecraftEventing{
    enum StructureBlockActionType;
};

struct OperationNodeValues{
    enum Terrain;
};

struct SubChunkStorageUnit{
enum PruneType;
};

//Templates
template <typename T, typename T2, int unk>
class TypedServerNetId {
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedClientNetId {
    T2 netId;
};

template <typename T, typename T2, int unk>
class TypedRuntimeId {
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

template <typename T>
class Factory;

template <typename T>
class InheritanceTree;

template <typename T, typename T2, int unk>
class ItemStackRequestActionCraft;

template <typename T>
class ItemStateVariant;

template <typename T>
class LevelChunkGridAreaElement;

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

//enum
enum class ContainerType {
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

enum TextType : char {
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