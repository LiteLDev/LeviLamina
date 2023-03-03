/**
 * @file mc/Types.hpp
 *
 * @brief This file contains the definitions of types.
 *
 */

#pragma once

// enum
#include "llapi/mc/inl/enums.inl"
#include "llapi/utils/RNG.h"

class Vec2;
class Vec3;
class BlockPos;
class AABB;
class BoundingBox;
class ChunkPos;
class ChunkBlockPos;

typedef std::string        xuid_t;
typedef unsigned long long QWORD;

namespace mce {

constexpr int static hexToNum(char s) {
    if ('A' <= s && s <= 'F') {
        return 10 + (s - 'A');
    }
    if ('a' <= s && s <= 'f') {
        return 10 + (s - 'a');
    }
    if ('0' <= s && s <= '9') {
        return (s - '0');
    }
    return 0;
}

constexpr double static hexToNum(std::string_view s) {
    if (s.length() == 2) {
        return (16 * hexToNum(s[0]) + hexToNum(s[1])) / 255.0;
    }
    return 0;
}

class UUID {
    uint64_t a, b;

public:
    UUID() : a(RNG::rand<uint64_t>()), b(RNG::rand<uint64_t>()) {}
    UUID(uint64_t a, uint64_t b) : a(a), b(b) {}
    MCAPI std::string            asString() const;
    MCAPI static UUID            fromString(std::string const&);
    MCAPI bool                   isEmpty() const;
    MCAPI static UUID            seedFromString(std::string const&);
    MCAPI static class mce::UUID EMPTY;

    inline operator bool() const { return !isEmpty(); }
};

enum class ColorPalette {
    BLACK,
    INDIGO,
    LAVENDER,
    TEAL,
    COCOA,
    DARK,
    OATMEAL,
    WHITE,
    RED,
    APRICOT,
    YELLOW,
    GREEN,
    VATBLUE,
    SLATE,
    PINK,
    FAWN,
};

class Color {
public:
    float r;
    float g;
    float b;
    float a;
    Color() : r(0.0f), g(0.0f), b(0.0f), a(0.0f){};
    Color(float r, float g, float b, float a = 1) : r(r), g(g), b(b), a(a){};
    Color(double r, double g, double b, double a = 1) : r((float)r), g((float)g), b((float)b), a((float)a){};
    Color(int ir, int ig, int ib, int ia = 255) : r(ir / 255.0f), g(ig / 255.0f), b(ib / 255.0f), a(ia / 255.0f){};

    constexpr Color(std::string_view hex) {
        r = 0, g = 0, b = 0, a = 1;
        if (hex[0] == '#') {
            hex = hex.substr(1);
        }
        if (hex.length() == 3) {
            r = (float)((hexToNum(hex[0]) * 17) / 255.0);
            g = (float)((hexToNum(hex[1]) * 17) / 255.0);
            b = (float)((hexToNum(hex[2]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 4) {
            a = (float)((hexToNum(hex[0]) * 17) / 255.0);
            r = (float)((hexToNum(hex[1]) * 17) / 255.0);
            g = (float)((hexToNum(hex[2]) * 17) / 255.0);
            b = (float)((hexToNum(hex[3]) * 17) / 255.0);
            return;
        }
        if (hex.length() == 6) {
            r = (float)hexToNum(hex.substr(0, 2));
            g = (float)hexToNum(hex.substr(2, 2));
            b = (float)hexToNum(hex.substr(4, 2));
            return;
        }
        if (hex.length() == 8) {
            a = (float)hexToNum(hex.substr(0, 2));
            r = (float)hexToNum(hex.substr(2, 2));
            g = (float)hexToNum(hex.substr(4, 2));
            b = (float)hexToNum(hex.substr(6, 2));
            return;
        }
        return;
    };

    inline operator bool() const { return !(*this == NIL); }

    LIAPI double distanceTo(mce::Color const& dst) const;
    LIAPI std::string toConsoleCode(bool foreground = true) const;
    LIAPI std::string             toNearestColorCode() const;
    LIAPI char                    toNearestParticleColorCode() const;
    LIAPI ColorPalette            toNearestParticleColorType() const;
    LIAPI static class mce::Color fromConsoleCode(std::string const&);
    LIAPI static class mce::Color fromColorCode(std::string const&);
    LIAPI class mce::Color        sRGBToLinear() const;
    LIAPI class mce::Color        LinearTosRGB() const;
    LIAPI class mce::Color        LinearToXYZ() const;
    LIAPI class mce::Color        XYZToLinear() const;
    LIAPI class mce::Color        XYZToLab() const;
    LIAPI class mce::Color        LabToXYZ() const;
    LIAPI double                  deltaE76(mce::Color const& dst) const; // 2.3 for JND
    LIAPI double                  deltaE94(mce::Color const& dst) const; // 1.0 for JND
    LIAPI double                  deltaE00(mce::Color const& dst) const; // 1.0 for JND

    MCAPI static mce::Color const NIL;
    MCAPI static class mce::Color fromHexString(std::string const&);
    MCAPI bool                    operator==(class mce::Color const&) const;
    MCAPI int                     toABGR(void) const;
    MCAPI int                     toARGB(void) const;
    MCAPI std::string toHexString(void) const;

    inline bool operator!=(const Color& c) const { return !(c == *this); }

    inline Color operator*(float c) const { return {r * c, g * c, b * c, a * c}; }

    inline Color operator/(float c) const { return {r / c, g / c, b / c, a / c}; }

    inline Color operator+(float c) const { return {r + c, g + c, b + c, a + c}; }

    inline Color operator-(float c) const { return {r - c, g - c, b - c, a - c}; }

    constexpr Color& operator+=(float c) {
        r += c;
        g += c;
        b += c;
        a += c;
        return *this;
    }

    constexpr Color& operator-=(float c) {
        r -= c;
        g -= c;
        b -= c;
        a -= c;
        return *this;
    }

    constexpr Color& operator*=(float c) {
        r *= c;
        g *= c;
        b *= c;
        a *= c;
        return *this;
    }

    constexpr Color& operator/=(float c) {
        r /= c;
        g /= c;
        b /= c;
        a /= c;
        return *this;
    }

    constexpr Color& operator+=(Color const& c) {
        r += c.r;
        g += c.g;
        b += c.b;
        a += c.a;
        return *this;
    }

    constexpr Color& operator-=(Color const& c) {
        r -= c.r;
        g -= c.g;
        b -= c.b;
        a -= c.a;
        return *this;
    }

    constexpr Color& operator*=(Color const& c) {
        r *= c.r;
        g *= c.g;
        b *= c.b;
        a *= c.a;
        return *this;
    }

    constexpr Color& operator/=(Color const& c) {
        r /= c.r;
        g /= c.g;
        b /= c.b;
        a /= c.a;
        return *this;
    }

    inline Color operator+(Color const& c) const { return {r + c.r, g + c.g, b + c.b, a + c.a}; }

    inline Color operator*(Color const& c) const { return {r * c.r, g * c.g, b * c.b, a * c.a}; }

    inline Color operator/(Color const& c) const { return {r / c.r, g / c.g, b / c.b, a / c.a}; }

    inline Color operator-(Color const& c) const { return {r - c.r, g - c.g, b - c.b, a - c.a}; }

    inline static Color max(const Color& k, const Color& l) {
        return {std::max(k.r, l.r), std::max(k.g, l.g), std::max(k.b, l.b), std::max(k.a, l.a)};
    }

    inline static Color min(const Color& k, const Color& l) {
        return {std::min(k.r, l.r), std::min(k.g, l.g), std::min(k.b, l.b), std::min(k.a, l.a)};
    }

    inline static Color lerp(const Color& k, const Color& l, float m) { return k * (1.0f - m) + l * m; }

    inline static Color mix(const Color& k, const Color& l, float m) { return lerp(k, l, m); }
};

static std::unordered_map<ColorPalette, std::pair<char, Color>> const particleColors = {
    {mce::ColorPalette::BLACK,    {'B', Color("#000000")}},
    {mce::ColorPalette::INDIGO,   {'I', Color("#144A74")}},
    {mce::ColorPalette::LAVENDER, {'L', Color("#8E65F3")}},
    {mce::ColorPalette::TEAL,     {'T', Color("#07946E")}},
    {mce::ColorPalette::COCOA,    {'C', Color("#AB5236")}},
    {mce::ColorPalette::DARK,     {'D', Color("#56575F")}},
    {mce::ColorPalette::OATMEAL,  {'O', Color("#A2A3A7")}},
    {mce::ColorPalette::WHITE,    {'W', Color("#FFFFFF")}},
    {mce::ColorPalette::RED,      {'R', Color("#FF3040")}},
    {mce::ColorPalette::APRICOT,  {'A', Color("#FF7300")}},
    {mce::ColorPalette::YELLOW,   {'Y', Color("#FFEC27")}},
    {mce::ColorPalette::GREEN,    {'G', Color("#10E436")}},
    {mce::ColorPalette::VATBLUE,  {'V', Color("#29ADFF")}},
    {mce::ColorPalette::SLATE,    {'S', Color("#83769C")}},
    {mce::ColorPalette::PINK,     {'P', Color("#FF77A8")}},
    {mce::ColorPalette::FAWN,     {'E', Color("#FFCCAA")}},
};

inline static const char getParticleColorType(ColorPalette const& p) { return particleColors.at(p).first; }

}; // namespace mce

namespace reflection {
struct Schema {};
} // namespace reflection

namespace std {

template <>
struct hash<mce::Color> {
    std::size_t operator()(mce::Color const& c) const noexcept {
        return (std::hash<float>()(c.r) ^ std::hash<float>()(c.g) ^ std::hash<float>()(c.b) ^ std::hash<float>()(c.a));
    }
};

} // namespace std

template <typename A, typename T>
class AutomaticID {
    T id;

public:
    AutomaticID() { id = 0; }

    AutomaticID(T x) { id = x; }

    inline operator T() const { return id; }
};

#include "ActorUniqueID.hpp"

// static_assert(!std::is_pod_v<ActorUniqueID>);
class NetherNet {
public:
    struct NetworkID;
};

class ActorRuntimeID {
public:
    unsigned long long id;

    inline unsigned long long get() const { return id; }

    inline operator unsigned long long() const { return id; }
};
// static_assert(std::is_pod_v<ActorRuntimeID>);

#include "RelativeFloat.hpp"

// namespace Core {
//
// class PathPart {
// public:
//     std::string data;
// };
//
// class Path : public PathPart {
// public:
// };
//
// template <typename T>
// class PathBuffer {
//     T value;
//     operator T&() noexcept {
//         return value;
//     }
//     operator T const &() const noexcept {
//         return value;
//     }
// };
//
// }; // namespace Core

namespace gametest {
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

namespace DBHelpers {
enum class Category;
}; // namespace DBHelpers

class AgentCommands {
public:
    class Command;
};

#include "../mc/Automation.hpp"

class ClientBlobCache {
public:
    struct Server {
        class TransferBuilder;

        class ActiveTransfersManager;
    };
};

template <typename T1, typename T2, typename T3>
class OwnerPtrFactory {};

class ClientBlockPipeline {
public:
    template <typename T>
    class VolumeOf;

    struct BlockSchematic;
};

template <typename T>
class WeakStorageSharePtr {
public:
    std::weak_ptr<T> mHandle;
};

template <typename T>
class WeakRefT : public WeakStorageSharePtr<T> {};

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
    class PositionTrackingDBClient;
    class PositionTrackingDBServer;
};

struct BlockGeometry {
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
    enum class GameEvents;
};

#include "IMinecraftEventing.hpp"

struct OperationNodeValues {
    enum class Terrain;
};
class Editor {
public:
    class IEditorManager;
    class IEditorPlayer;
};

struct SubChunkStorageUnit {
    enum class PruneType;
};

// Templates
template <typename T, typename T2, int unk>
class TypedServerNetId {
public:
    T2     netId;
    inline operator T2() { return netId; }
};

template <typename T, typename T2, int unk>
class TypedClientNetId {
public:
    T2 netId;

    virtual void clientInit(TypedClientNetId<T, T2, unk>);
    virtual void clientInit();
};

template <typename T, typename T2, int unk>
class TypedRuntimeId {
public:
    T2 netId;
};

template <typename T, typename T2>
class AutomaticID;

template <typename T, typename T2>
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

// enum class ItemStackRequestActionType : char;
// template <typename T, ItemStackRequestActionType actionType>
// class ItemStackRequestActionCraft;

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
class WeakPtr {
    T** value;

public:
    inline T* get() {
        if (value)
            return *value;
        return nullptr;
    }
    inline T const* get() const {
        if (value)
            return *value;
        return nullptr;
    }
    inline T&       operator*() { return *get(); }
    inline T const& operator*() const { return *get(); }
    inline          operator bool() const { return get() != nullptr; }
};

template <typename T>
struct SharePtrRefTraits {};

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
class optional_ref {
    T* value;

public:
    inline T* get() const {
        if (*this)
            return value;
        return nullptr;
    }
    // inline T* set(T const& val)
    //{
    //     *value = &val;
    // }
    inline T& operator*() const { return *value; }
    inline T* operator->() const { return value; }
    inline    operator bool() const { return value != nullptr; }
};

namespace cg {
class ImageBuffer;
};

template <int a>
class DividedPos2d;

// template <typename T>
// struct GameplayHandlerResult;

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

template <typename T>
struct InvertableFilter {
    T    value;
    bool inverted;
};

template <typename T>
class CommandSelectorResults {
public:
    std::shared_ptr<std::vector<T*>> data;

    auto begin() { return data->begin(); }

    auto end() { return data->end(); }

    auto count() const { return data->size(); }

    auto empty() const { return data->empty(); }
};

enum class ActorType : __int32 {
    Undefined_2          = 0x1,
    TypeMask             = 0xFF,
    Mob                  = 0x100,
    PathfinderMob        = 0x300,
    Monster              = 0xB00,
    Animal               = 0x1300,
    TamableAnimal        = 0x5300,
    Ambient              = 0x8100,
    UndeadMob            = 0x10B00,
    ZombieMonster        = 0x30B00,
    Arthropod            = 0x40B00,
    Minecart             = 0x80000,
    SkeletonMonster      = 0x110B00,
    EquineAnimal         = 0x205300,
    Projectile           = 0x400000,
    AbstractArrow        = 0x800000,
    WaterAnimal          = 0x2300,
    VillagerBase         = 0x1000300,
    Chicken              = 0x130A,
    Cow                  = 0x130B,
    Pig                  = 0x130C,
    Sheep                = 0x130D,
    Wolf                 = 0x530E,
    Villager             = 0x100030F,
    MushroomCow          = 0x1310,
    Squid                = 0x2311,
    Rabbit               = 0x1312,
    Bat                  = 0x8113,
    IronGolem            = 0x314,
    SnowGolem            = 0x315,
    Ocelot               = 0x5316,
    Horse                = 0x205317,
    PolarBear            = 0x131C,
    Llama                = 0x131D,
    Parrot               = 0x531E,
    Dolphin              = 0x231F,
    Donkey               = 0x205318,
    Mule                 = 0x205319,
    SkeletonHorse        = 0x215B1A,
    ZombieHorse          = 0x215B1B,
    Zombie               = 0x30B20,
    Creeper              = 0xB21,
    Skeleton             = 0x110B22,
    Spider               = 0x40B23,
    PigZombie            = 0x10B24,
    Slime                = 0xB25,
    EnderMan             = 0xB26,
    Silverfish           = 0x40B27,
    CaveSpider           = 0x40B28,
    Ghast                = 0xB29,
    LavaSlime            = 0xB2A,
    Blaze                = 0xB2B,
    ZombieVillager       = 0x30B2C,
    Witch                = 0xB2D,
    Stray                = 0x110B2E,
    Husk                 = 0x30B2F,
    WitherSkeleton       = 0x110B30,
    Guardian             = 0xB31,
    ElderGuardian        = 0xB32,
    Npc                  = 0x133,
    WitherBoss           = 0x10B34,
    Dragon               = 0xB35,
    Shulker              = 0xB36,
    Endermite            = 0x40B37,
    Agent                = 0x138,
    Vindicator           = 0xB39,
    Phantom              = 0x10B3A,
    IllagerBeast         = 0xB3B,
    ArmorStand           = 0x13D,
    TripodCamera         = 0x13E,
    Player_0             = 0x13F,
    ItemEntity           = 0x40,
    PrimedTnt            = 0x41,
    FallingBlock         = 0x42,
    MovingBlock          = 0x43,
    ExperiencePotion     = 0x400044,
    Experience           = 0x45,
    EyeOfEnder           = 0x46,
    EnderCrystal         = 0x47,
    FireworksRocket      = 0x48,
    Trident              = 0xC00049,
    Turtle               = 0x134A,
    Cat                  = 0x534B,
    ShulkerBullet        = 0x40004C,
    FishingHook          = 0x4D,
    Chalkboard           = 0x4E,
    DragonFireball       = 0x40004F,
    Arrow                = 0xC00050,
    Snowball             = 0x400051,
    ThrownEgg            = 0x400052,
    Painting             = 0x53,
    LargeFireball        = 0x400055,
    ThrownPotion         = 0x400056,
    Enderpearl           = 0x400057,
    LeashKnot            = 0x58,
    WitherSkull          = 0x400059,
    BoatRideable         = 0x5A,
    WitherSkullDangerous = 0x40005B,
    LightningBolt        = 0x5D,
    SmallFireball        = 0x40005E,
    AreaEffectCloud      = 0x5F,
    LingeringPotion      = 0x400065,
    LlamaSpit            = 0x400066,
    EvocationFang        = 0x400067,
    EvocationIllager     = 0xB68,
    Vex                  = 0xB69,
    MinecartRideable     = 0x80054,
    MinecartHopper       = 0x80060,
    MinecartTNT          = 0x80061,
    MinecartChest        = 0x80062,
    MinecartFurnace      = 0x80063,
    MinecartCommandBlock = 0x80064,
    IceBomb              = 0x40006A,
    Balloon              = 0x6B,
    Pufferfish           = 0x236C,
    Salmon               = 0x236D,
    Drowned              = 0x30B6E,
    Tropicalfish         = 0x236F,
    Fish                 = 0x2370,
    Panda                = 0x1371,
    Pillager             = 0xB72,
    VillagerV2           = 0x1000373,
    ZombieVillagerV2     = 0x30B74,
    Shield               = 0x75,
    WanderingTrader      = 0x376,
    Lectern              = 0x77,
    ElderGuardianGhost   = 0xB78,
    Fox                  = 0x1379,
    Bee                  = 0x17A,
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

*/
