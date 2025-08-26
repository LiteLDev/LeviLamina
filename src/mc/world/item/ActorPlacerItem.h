#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInfoRegistry;
class Agent;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemRegistryRef;
class ItemStack;
class ItemStackBase;
class Player;
class Vec3;
struct ResolvedItemIconInfo;
namespace mce { class Color; }
// clang-format on

class ActorPlacerItem : public ::Item {
public:
    // 成员变量
    // NOLINTBEGIN/END: 临时禁用代码风格检查
    // NOLINTBEGIN
    // 这个特殊的存储结构用于存放此物品要生成的实体的ID
    // ll::TypedStorage 是一个自定义的内存布局工具，确保与原版游戏二进制兼容
    // 这里存储的是一个 ActorDefinitionIdentifier，例如 "minecraft:cow"
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorID;
    // NOLINTEND

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 2 - 虚函数表索引为 2
    virtual void tearDown() /*override*/; // 在物品实例被销毁前调用，用于清理资源

    // vIndex: 108 - 虚函数表索引为 108
    // 获取物品的图标信息，用于渲染。对于刷怪蛋，这决定了蛋的两种颜色。
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    // vIndex: 73 - 虚函数表索引为 73
    // 获取此物品对应的实体标识符
    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const /*override*/;

    // vIndex: 87 - 虚函数表索引为 87
    // 构建物品的描述ID，用于本地化（例如 "item.spawn_egg.entity.pig.name"）
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 48 - 虚函数表索引为 48
    // 此物品是否可以穿过液体进行交互？
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 49 - 虚函数表索引为 49
    // 与特定方块交互时是否应绕过液体？
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const /*override*/;

    // vIndex: 78 - 虚函数表索引为 78
    // 当在发射器（Dispenser）中使用此物品时的行为
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 60 - 虚函数表索引为 60
    // 检查辅助值（aux value / damage value）是否有效。在旧版中用于区分不同类型的刷怪蛋。
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 65 - 虚函数表索引为 65
    // 物品材质是否是多色调的？对于刷怪蛋，这是 true。
    virtual bool isMultiColorTinted(::ItemStack const&) const /*override*/;

    // vIndex: 71 - 虚函数表索引为 71
    // 获取刷怪蛋的基础颜色（底色）
    virtual ::mce::Color getBaseColor(::ItemStack const&) const /*override*/;

    // vIndex: 72 - 虚函数表索引为 72
    // 获取刷怪蛋的次要颜色（斑点颜色）
    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const /*override*/;

    // vIndex: 64 - 虚函数表索引为 64
    // 这个物品是不是一个实体放置物品？始终返回 true。
    virtual bool isActorPlacerItem() const /*override*/;

    // vIndex: 120 - 虚函数表索引为 120
    // 当玩家右键点击方块使用此物品时的核心逻辑
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0 - 虚函数表索引为 0
    virtual ~ActorPlacerItem() /*override*/ = default; // 虚析构函数
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    // 从世界中获取此物品应生成的实体ID
    MCAPI ::ActorDefinitionIdentifier _getActorID(::BlockSource& region) const;

    // 在指定位置生成一个实体
    MCAPI ::Actor* _spawnActorAt(
        ::BlockSource&     region,        // 目标世界
        ::Vec3 const&      pos,           // 生成位置
        ::Vec3 const&      playerFeetPos, // 玩家脚部位置（用于某些AI逻辑）
        ::ItemStack const& item,          // 使用的物品
        ::Actor*           spawner        // 放置者（通常是玩家）
    ) const;
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    // (教育版功能) 设置 "代理" 实体的所有者
    MCAPI static void _setAgentOwner(::Player& owner, ::Agent& agent);

    // 遍历所有通过附加包（Add-on）注册的自定义刷怪蛋
    MCAPI static void
    forEachCustomEgg(::ItemRegistryRef itemRegistry, ::std::function<void(::Item const&)> const& callback);

    // 注册所有来自附加包的自定义刷怪蛋
    MCAPI static void registerCustomEggs(::ItemRegistryRef itemRegistry, ::ActorInfoRegistry const& registry);

    // (教育版功能) 生成或移动 "代理" 实体
    MCAPI static ::Actor* spawnOrMoveAgent(::Vec3 const& pos, ::Actor& owner);
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    // 存储自定义刷怪蛋信息的映射表
    MCAPI static ::std::unordered_map<uint, ::std::string>& mCustomSpawnEggs();

    // 缓存刷怪蛋材质信息的映射表，用于提高渲染性能
    MCAPI static ::std::unordered_map<::HashedString, ::ResolvedItemIconInfo>& mEggTextureInfoMap();
    // NOLINTEND
    
public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tearDown();

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isLiquidClipItem() const;

    MCAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCFOLD bool $isMultiColorTinted(::ItemStack const&) const;

    MCFOLD ::mce::Color $getBaseColor(::ItemStack const&) const;

    MCFOLD ::mce::Color $getSecondaryColor(::ItemStack const&) const;

    MCFOLD bool $isActorPlacerItem() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
