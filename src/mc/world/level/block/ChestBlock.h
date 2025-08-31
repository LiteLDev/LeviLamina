#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Container;
class Experiments;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChestBlock : public ::ActorBlock {
public:
    // ChestBlock 内部类型定义
    /**
     * @brief 定义了箱子的不同类型。
     */
    enum class ChestType : int {
        Basic = 0, // 普通箱子
        Trap  = 1, // 陷阱箱，打开时会发出红石信号
        Ender = 2, // 末影箱，其内容为玩家私有，跨维度共享
    };

public:
    // 成员变量
    // NOLINTBEGIN
    // 存储这个箱子方块实例的类型（普通、陷阱或末影）。
    ::ll::TypedStorage<4, 4, ::ChestBlock::ChestType> mType;
    // NOLINTEND

public:
    // 阻止默认构造函数
    ChestBlock();

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 124
    /**
     * @brief 初始化方块。
     */
    virtual ::BlockLegacy& init() /*override*/;

    // vIndex: 66
    /**
     * @brief 设置红石组件。对于陷阱箱，此函数会初始化其作为红石信号源的特性。
     * @param region 世界区域。
     * @param pos 方块位置。
     */
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 131
    /**
     * @brief 当方块被移除时调用。
     * @details 会确保箱子内的物品掉落到世界中。
     * @param region 世界区域。
     * @param pos 方块位置。
     */
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 83
    /**
     * @brief 检查下落的方块是否会在此方块上被破坏。
     * @return 返回 false，因为箱子不会破坏下落的方块（如沙子）。
     */
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 61
    /**
     * @brief 当方块被活塞移动时调用。
     * @param region 世界区域。
     * @param from 移动前的旧位置。
     * @param to 移动后的新位置。
     */
    virtual void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const /*override*/;

    // vIndex: 62
    /**
     * @brief 检查当被活塞推动时，此方块是否会分离。
     * @return 返回 true，箱子不能被活塞推动。
     */
    virtual bool detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 104
    /**
     * @brief 检查此方块是否能向比较器输出信号。
     * @return 返回 true，因为所有箱子都可以。
     */
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 105
    /**
     * @brief 获取此方块输出给比较器的信号强度。
     * @details 信号强度与箱子内物品的填充程度成正比。
     * @return 返回 0 到 15 之间的信号强度。
     */
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 120
    /**
     * @brief 获取映射后的方块表面。用于确定方块的朝向和纹理。
     */
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 87
    /**
     * @brief 获取大箱子的另一半的位置。
     * @param region 只读的世界区域。
     * @param pos 当前这一半箱子的位置。
     * @param out 用于存储另一半箱子位置的输出参数。
     * @return 如果找到了另一半（即这是一个大箱子），则返回 true。
     */
    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    // vIndex: 135
    /**
     * @brief 检查这是否是一个可交互的方块。
     * @return 返回 true，玩家可以右键点击箱子。
     */
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 28
    /**
     * @brief 检查这是否是一个容器方块。
     * @return 返回 true。
     */
    virtual bool isContainerBlock() const /*override*/;

    // vIndex: 43
    /**
     * @brief 检查这是否是一个信号源。
     * @return 只有陷阱箱返回 true。
     */
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 53
    /**
     * @brief 检查红石线是否应该连接到此方块。
     * @return 只有陷阱箱返回 true。
     */
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 22
    /**
     * @brief 检查此方块是否能为其他方块提供支撑。
     * @return 返回 true，箱子是一个完整的方块，可以支撑其他方块。
     */
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    // vIndex: 58
    /**
     * @brief 当发射器尝试发射此方块（作为物品）时调用。
     * @return 成功放置方块则返回 true。
     */
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 130
    /**
     * @brief 为方块添加硬编码的组件（在实验性玩法下）。
     */
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    /**
     * @brief 析构函数。
     */
    virtual ~ChestBlock() /*override*/;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     * @param nameId 方块的名称ID，如 "minecraft:chest"。
     * @param id 方块的数字ID。
     * @param type 箱子的类型。
     * @param materialType 方块的材质。
     */
    MCAPI ChestBlock(::std::string const& nameId, int id, ::ChestBlock::ChestType type, ::MaterialType materialType);

    /**
     * @brief 当方块被放置时调用（通过事件系统）。
     * @details 处理单个箱子合并成大箱子的逻辑。
     */
    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    /**
     * @brief 更新陷阱箱的红石信号强度。
     * @param strength 新的信号强度。
     */
    MCAPI void updateSignalStrength(::BlockSource& region, ::BlockPos const& pos, int strength) const;

    /**
     * @brief 当玩家使用（右键点击）方块时调用（通过事件系统）。
     * @details 打开箱子的用户界面。
     */
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    /**
     * @brief 尝试给一个实体装备一个箱子（例如：给驴装备箱子）。
     * @return 如果装备成功，返回 true。
     */
    MCAPI static bool _tryEquipChest(::Actor& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::ChestBlock::ChestType type, ::MaterialType materialType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockLegacy& $init();

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI void $onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to) const;

    MCFOLD bool $detachesOnPistonMove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD bool $isSignalSource() const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
