/**
 * @file mc/Types.hpp
 *
 * @brief This file contains the definitions of types.
 *
 */

#pragma once

// enum
#include "inc/enums.inc"
#include "../HookAPI.h"
#include "entt/entity/entity.hpp"
#include "mce.hpp"
#include "Ref.hpp"
#include <initializer_list>

class EntityId : public entt::entt_traits<entt::id_type> {
public:
    entity_type mRawId;

    constexpr EntityId(EntityId&&) = default;

    constexpr EntityId(const EntityId&) = default;

    constexpr EntityId& operator=(const EntityId&) = default;

    template <class T, std::enable_if_t<!(std::is_same_v<T, std::allocator<EntityId>> ||
                                          std::is_same_v<T, entt::null_t> || std::is_same_v<T, entt::tombstone_t>),
                                        int> = 0>
    constexpr EntityId(T rawId) : mRawId(static_cast<entity_type>(rawId)) {}

    constexpr operator entity_type() const {
        return mRawId;
    }
};

class ActorRuntimeID {
public:
    unsigned long long id;

    inline unsigned long long get() const {
        return id;
    }

    inline operator unsigned long long() const {
        return id;
    }
};

typedef std::string xuid_t;
typedef unsigned long long QWORD;

namespace reflection {
struct Schema {};
} // namespace reflection

template <typename A, typename T>
class AutomaticID {
    T id;

public:
    AutomaticID() {
        id = 0;
    }

    AutomaticID(T x) {
        id = x;
    }

    inline operator T() const {
        return id;
    }
};

#include "ActorUniqueID.hpp"

// static_assert(!std::is_pod_v<ActorUniqueID>);
class NetherNet {
public:
    struct NetworkID;
};

// static_assert(std::is_pod_v<ActorRuntimeID>);

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
    T2 netId;

    inline operator T2() {
        return netId;
    }
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
class ServiceReference;

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
    inline T& operator*() const {
        return *value;
    }

    inline T* operator->() const {
        return value;
    }

    inline operator bool() const {
        return value != nullptr;
    }
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
    T value;
    bool inverted;
};

template <typename T>
class CommandSelectorResults {
public:
    std::shared_ptr<std::vector<T*>> data;

    auto begin() {
        return data->begin();
    }

    auto end() {
        return data->end();
    }

    auto count() const {
        return data->size();
    }

    auto empty() const {
        return data->empty();
    }
};
