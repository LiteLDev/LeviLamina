#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/SpawnBlockRequirements.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class Biome;
class BlockPos;
class BlockSource;
class ChunkPos;
class IRandom;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class LevelChunk;
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class Random;
class ResourcePackManager;
class SpawnConditions;
class SpawnGroupRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct SpawnSettings;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { class SpawnPlacements; }
namespace br::spawn { struct State; }
// clang-format on

class Spawner {
public:
    // Spawner 的内部类型定义

    // 当一个生物被成功生成时的回调函数类型
    using MobSpawnedCallback = ::std::function<void(::Mob&)>;

    // 生成生物集群时的回调函数类型
    using SpawnMobClusterCallback = ::std::function<void(::BlockPos const&, ::SpawnConditions&)>;

    // 在结构中（如要塞、村庄）生成生物时的回调函数类型
    using SpawnStructureMobCallback =
        ::std::function<void(::BlockPos const&, ::LevelChunk::SpawningArea const&, ::SpawnConditions const&)>;

    // 获取一个区块中所有可用生成区域的回调函数类型
    using GetSpawningAreasCallback =
        ::std::function<::gsl::span<::LevelChunk::SpawningArea const>(::LevelChunk const&)>;

    // 用于判断是否在远古城市的谓词函数类型
    using AncientCityPredicate = ::std::function<bool(::BlockSource const&, ::BlockPos)>;

    // 在每个 tick（游戏刻）处理生成逻辑时的回调函数类型
    using SpawnTickCallback = ::std::function<void(::BlockPos, ::SpawnConditions)>;

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Spawner(); // 虚析构函数，确保派生类能被正确销毁

    // vIndex: 1
    // 在服务器端初始化 Spawner，加载资源包和世界注册表中的生成规则等数据
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) = 0;

    // vIndex: 2
    // 获取当前的生成设置（如难度、最大生物数等）
    virtual ::SpawnSettings const& getSpawnSettings() const = 0;

    // vIndex: 3
    // 设置新的生成设置
    virtual void setSpawnSettings(::SpawnSettings const&) = 0;

    // vIndex: 4
    // 获取生物生成规则组（只读）
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const = 0;

    // vIndex: 5
    // 获取生物生成规则组（可修改）
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const = 0;

    // vIndex: 6
    // 获取生成组注册表（如怪物组、动物组等）
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const = 0;

    // vIndex: 7
    // 获取实体类型缓存，用于快速查询实体信息
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const = 0;

    // vIndex: 8
    // 在指定位置生成一个生物（Mob）
    virtual ::Mob* spawnMob(
        ::BlockSource&                     region,       // 目标世界区域
        ::ActorDefinitionIdentifier const& id,           // 生物的ID (例如 "minecraft:zombie")
        ::Actor*                           spawner,      // 触发生成的实体（如刷怪笼、玩家）
        ::Vec3 const&                      pos,          // 生成位置
        bool                               naturalSpawn, // 是否为自然生成
        bool                               surface,      // 是否在表面生成
        bool                               fromSpawner   // 是否来自刷怪笼（Spawner mob spawner block）
    );

    // vIndex: 9
    // 在指定位置生成一个掉落物实体
    virtual ::ItemActor*
    spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);

    // vIndex: 10
    // 生成一个投掷物实体（如箭、雪球）
    virtual ::Actor* spawnProjectile(
        ::BlockSource&                     region,    // 目标世界区域
        ::ActorDefinitionIdentifier const& id,        // 投掷物ID
        ::Actor*                           spawner,   // 发射者
        ::Vec3 const&                      position,  // 初始位置
        ::Vec3 const&                      direction  // 运动方向向量
    );

    // vIndex: 11
    // 后处理生物生成，通常在世界生成后调用，用于填充一些额外的生物
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) = 0;

    // vIndex: 12
    // 每个tick（游戏刻）执行的生成逻辑，用于自然生成
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) = 0;

    // vIndex: 13
    // 更新世界中的生物数量统计
    virtual void tickMobCount() = 0;

    // vIndex: 14
    // 增加可生成的、已被tick过的生物计数
    virtual void incrementSpawnableTickedMob() = 0;

    // vIndex: 15
    // 获取上一tick的可生成生物计数
    virtual uint getSpawnableTickedMobCountPrevious() const = 0;

    // vIndex: 16
    // 生成一个生物组（例如，一群狼）
    virtual ::std::unordered_set<::ActorUniqueID>
    spawnMobGroup(::BlockSource&, ::std::string const&, ::Vec3 const&, bool, bool, ::std::function<void(::Mob&)>&&) = 0;

    // vIndex: 17
    // 获取 `br::spawn` 系统中的生成位置查找器
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() = 0;

    // vIndex: 18
    // 根据当前状态筛选出可以进行生成的生物类别
    virtual ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;

    // vIndex: 19
    // 为单个区块执行生物生成逻辑（核心自然生成函数）
    virtual void spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const;

    // vIndex: 20
    // 在世界生成阶段为区块生成生物（通常是动物）
    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    /**
     * @brief 从指定位置向下查找一个符合生成要求的有效方块。
     * @param region 世界区域访问接口
     * @param pos [in, out] 起始搜索位置，如果找到则更新为目标位置
     * @param materialToSpawnIn 可选，要求在特定材质中生成（如水）
     * @param spawnBlockRequirements 方块的要求（如不能是固体方块）
     * @return 如果找到有效方块则返回 true
     */
    MCAPI static bool findNextSpawnBlockUnder(
        ::BlockSource const&            region,
        ::BlockPos&                     pos,
        ::std::optional<::MaterialType> materialToSpawnIn,
        ::SpawnBlockRequirements        spawnBlockRequirements
    );

    /**
     * @brief 检查给定的生成位置对于特定的生物规则是否有效。
     * @param rules 生物的生成规则
     * @param region 世界区域访问接口
     * @param pos 待检查的位置
     * @param validateDistToPlayer 是否需要验证与玩家的距离
     * @return 如果位置有效则返回 true
     */
    MCAPI static bool isSpawnPositionOk(
        ::MobSpawnRules const& rules,
        ::BlockSource&         region,
        ::BlockPos const&      pos,
        bool                   validateDistToPlayer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Mob* $spawnMob(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      pos,
        bool                               naturalSpawn,
        bool                               surface,
        bool                               fromSpawner
    );

    MCAPI ::ItemActor*
    $spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);

    MCAPI ::Actor* $spawnProjectile(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec3 const&                      direction
    );

    MCAPI ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    $filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const;

    MCFOLD void $spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const;

    MCFOLD void $spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
