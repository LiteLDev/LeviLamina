#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AnvilDamage.h"
#include "mc/world/level/block/AttachmentType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/CauldronLiquidType.h"
#include "mc/world/level/block/ChemistryTableType.h"
#include "mc/world/level/block/ChiselType.h"
#include "mc/world/level/block/CoralColor.h"
#include "mc/world/level/block/CreakingHeartState.h"
#include "mc/world/level/block/DirtType.h"
#include "mc/world/level/block/DoublePlantType.h"
#include "mc/world/level/block/DripstoneThickness.h"
#include "mc/world/level/block/EggCount.h"
#include "mc/world/level/block/FlowerType.h"
#include "mc/world/level/block/FrontAndTop.h"
#include "mc/world/level/block/HatchLevel.h"
#include "mc/world/level/block/LeafSize.h"
#include "mc/world/level/block/LeverDirection.h"
#include "mc/world/level/block/MonsterEggStoneType.h"
#include "mc/world/level/block/NewLeavesType.h"
#include "mc/world/level/block/NewLogType.h"
#include "mc/world/level/block/OldLeavesType.h"
#include "mc/world/level/block/OldLogType.h"
#include "mc/world/level/block/PaleMossCarpetSide.h"
#include "mc/world/level/block/PillarAxis.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/block/PrismarineBlockType.h"
#include "mc/world/level/block/SandType.h"
#include "mc/world/level/block/SandstoneType.h"
#include "mc/world/level/block/SaplingType_DEPRECATED.h"
#include "mc/world/level/block/SeagrassType.h"
#include "mc/world/level/block/SpongeType.h"
#include "mc/world/level/block/StalkThickness.h"
#include "mc/world/level/block/StoneBrickType.h"
#include "mc/world/level/block/StoneSlabType.h"
#include "mc/world/level/block/StoneSlabType2.h"
#include "mc/world/level/block/StoneSlabType3.h"
#include "mc/world/level/block/StoneSlabType4.h"
#include "mc/world/level/block/StoneType.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/block/StructureVoidType.h"
#include "mc/world/level/block/TallGrassType.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/WallBlockType.h"
#include "mc/world/level/block/WallConnectionType.h"
#include "mc/world/level/block/WoodType.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

// auto generated forward declare list
// clang-format off
class BlockState;
class HashedString;
// clang-format on

namespace VanillaStates {
// functions
// NOLINTBEGIN
/**
 * @brief 通过名称获取方块状态
 * 
 * @param name 方块状态的哈希字符串名称
 * @return BlockState const* 方块状态指针
 */
MCAPI ::BlockState const* getState(::HashedString const& name);
// NOLINTEND

// static variables
// NOLINTBEGIN
/// @brief 活动状态
MCAPI ::BlockStateVariant<bool> const& Active();

/// @brief 年龄
MCAPI ::BlockStateVariant<int> const& Age();

/// @brief 年龄位
MCAPI ::BlockStateVariant<bool> const& AgeBit();

/// @brief 附着位
MCAPI ::BlockStateVariant<bool> const& AttachedBit();

/// @brief 附着类型
MCAPI ::BlockStateVariant<::AttachmentType> const& Attachment();

/// @brief 竹子叶子大小
MCAPI ::BlockStateVariant<::LeafSize> const& BambooLeafSize();

/// @brief 竹子粗细
MCAPI ::BlockStateVariant<::StalkThickness> const& BambooThickness();

/// @brief 蜂巢蜂蜜等级
MCAPI ::BlockStateVariant<int> const& BeehiveHoneyLevel();

/// @brief 大型垂滴叶头部
MCAPI ::BlockStateVariant<bool> const& BigDripleafHead();

/// @brief 大型垂滴叶倾斜度
MCAPI ::BlockStateVariant<::BigDripleafTilt> const& BigDripleafTilt();

/// @brief 咬合计数器
MCAPI ::BlockStateVariant<int> const& BiteCounter();

/// @brief 开花状态
MCAPI ::BlockStateVariant<bool> const& Bloom();

/// @brief 书架占用槽位
MCAPI ::BlockStateVariant<int> const& BookshelfOccupiedSlots();

/// @brief 酿造台A槽位
MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotABit();

/// @brief 酿造台B槽位
MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotBBit();

/// @brief 酿造台C槽位
MCAPI ::BlockStateVariant<bool> const& BrewingStandSlotCBit();

/// @brief 刷的进度
MCAPI ::BlockStateVariant<int> const& BrushedProgress();

/// @brief 按钮按下位
MCAPI ::BlockStateVariant<bool> const& ButtonPressedBit();

/// @brief 能否召唤
MCAPI ::BlockStateVariant<bool> const& CanSummon();

/// @brief 蜡烛数量
MCAPI ::BlockStateVariant<int> const& Candles();

/// @brief 炼药锅液体
MCAPI ::BlockStateVariant<::CauldronLiquidType> const& CauldronLiquid();

/// @brief 簇计数
MCAPI ::BlockStateVariant<int> const& ClusterCount();

/// @brief 堆肥桶填充等级
MCAPI ::BlockStateVariant<int> const& ComposterFillLevel();

/// @brief 条件位
MCAPI ::BlockStateVariant<bool> const& ConditionalBit();

/// @brief 珊瑚方向
MCAPI ::BlockStateVariant<int> const& CoralDirection();

/// @brief 珊瑚扇方向
MCAPI ::BlockStateVariant<int> const& CoralFanDirection();

/// @brief 覆盖位
MCAPI ::BlockStateVariant<bool> const& CoveredBit();

/// @brief 裂纹状态
MCAPI ::BlockStateVariant<::HatchLevel> const& CrackedState();

/// @brief 合成状态
MCAPI ::BlockStateVariant<bool> const& Crafting();

/// @brief 嘎吱作响的心脏状态
MCAPI ::BlockStateVariant<::CreakingHeartState> const& CreakingHeartState();

/// @brief 已弃用
MCAPI ::BlockStateVariant<int> const& DEPRECATED();

/// @brief 已弃用-允许水下位
MCAPI ::BlockStateVariant<bool> const& DEPRECATED_AllowUnderwaterBit();

/// @brief 已弃用-方块光照等级
MCAPI ::BlockStateVariant<int> const& DEPRECATED_BlockLightLevel();

/// @brief 已弃用-化学桌类型
MCAPI ::BlockStateVariant<::ChemistryTableType> const& DEPRECATED_ChemistryTableType();

/// @brief 已弃用-凿子类型
MCAPI ::BlockStateVariant<::ChiselType> const& DEPRECATED_ChiselType();

/// @brief 已弃用-颜色
MCAPI ::BlockStateVariant<::BlockColor> const& DEPRECATED_Color();

/// @brief 已弃用-颜色位
MCAPI ::BlockStateVariant<bool> const& DEPRECATED_ColorBit();

/// @brief 已弃用-珊瑚颜色
MCAPI ::BlockStateVariant<::CoralColor> const& DEPRECATED_CoralColor();

/// @brief 已弃用-珊瑚悬挂类型位
MCAPI ::BlockStateVariant<bool> const& DEPRECATED_CoralHangTypeBit();

/// @brief 已弃用-损坏
MCAPI ::BlockStateVariant<::AnvilDamage> const& DEPRECATED_Damage();

/// @brief 已弃用-泥土类型
MCAPI ::BlockStateVariant<::DirtType> const& DEPRECATED_DirtType();

/// @brief 已弃用-双层植物类型
MCAPI ::BlockStateVariant<::DoublePlantType> const& DEPRECATED_DoublePlantType();

/// @brief 已弃用-花类型
MCAPI ::BlockStateVariant<::FlowerType> const& DEPRECATED_FlowerType();

/// @brief 已弃用-怪物蛋石头类型
MCAPI ::BlockStateVariant<::MonsterEggStoneType> const& DEPRECATED_MonsterEggStoneType();

/// @brief 已弃用-新树叶类型
MCAPI ::BlockStateVariant<::NewLeavesType> const& DEPRECATED_NewLeavesType();

/// @brief 已弃用-新原木类型
MCAPI ::BlockStateVariant<::NewLogType> const& DEPRECATED_NewLogType();

/// @brief 已弃用-不掉落位
MCAPI ::BlockStateVariant<bool> const& DEPRECATED_NoDropBit();

/// @brief 已弃用-旧树叶类型
MCAPI ::BlockStateVariant<::OldLeavesType> const& DEPRECATED_OldLeavesType();

/// @brief 已弃用-旧原木类型
MCAPI ::BlockStateVariant<::OldLogType> const& DEPRECATED_OldLogType();

/// @brief 已弃用-海晶石块类型
MCAPI ::BlockStateVariant<::PrismarineBlockType> const& DEPRECATED_PrismarineBlockType();

/// @brief 已弃用-沙子类型
MCAPI ::BlockStateVariant<::SandType> const& DEPRECATED_SandType();

/// @brief 已弃用-砂岩类型
MCAPI ::BlockStateVariant<::SandstoneType> const& DEPRECATED_SandstoneType();

/// @brief 已弃用-树苗类型
MCAPI ::BlockStateVariant<::SaplingType_DEPRECATED> const& DEPRECATED_SaplingType();

/// @brief 已弃用-海绵类型
MCAPI ::BlockStateVariant<::SpongeType> const& DEPRECATED_SpongeType();

/// @brief 已弃用-石砖类型
MCAPI ::BlockStateVariant<::StoneBrickType> const& DEPRECATED_StoneBrickType();

/// @brief 已弃用-石台阶类型
MCAPI ::BlockStateVariant<::StoneSlabType> const& DEPRECATED_StoneSlabType();

/// @brief 已弃用-石台阶类型2
MCAPI ::BlockStateVariant<::StoneSlabType2> const& DEPRECATED_StoneSlabType2();

/// @brief 已弃用-石台阶类型3
MCAPI ::BlockStateVariant<::StoneSlabType3> const& DEPRECATED_StoneSlabType3();

/// @brief 已弃用-石台阶类型4
MCAPI ::BlockStateVariant<::StoneSlabType4> const& DEPRECATED_StoneSlabType4();

/// @brief 已弃用-石头类型
MCAPI ::BlockStateVariant<::StoneType> const& DEPRECATED_StoneType();

/// @brief 已弃用-去皮位
MCAPI ::BlockStateVariant<bool> const& DEPRECATED_StrippedBit();

/// @brief 已弃用-结构空洞类型
MCAPI ::BlockStateVariant<::StructureVoidType> const& DEPRECATED_StructureVoidType();

/// @brief 已弃用-高草丛类型
MCAPI ::BlockStateVariant<::TallGrassType> const& DEPRECATED_TallGrassType();

/// @brief 已弃用-墙类型
MCAPI ::BlockStateVariant<::WallBlockType> const& DEPRECATED_WallBlockType();

/// @brief 已弃用-木头类型
MCAPI ::BlockStateVariant<::WoodType> const& DEPRECATED_WoodType();

/// @brief 死亡位
MCAPI ::BlockStateVariant<bool> const& DeadBit();

/// @brief 方向
MCAPI ::BlockStateVariant<int> const& Direction();

/// @brief 解除武装位
MCAPI ::BlockStateVariant<bool> const& DisarmedBit();

/// @brief 门铰链位
MCAPI ::BlockStateVariant<bool> const& DoorHingeBit();

/// @brief 向下拖动
MCAPI ::BlockStateVariant<bool> const& DragDown();

/// @brief 滴水石厚度
MCAPI ::BlockStateVariant<::DripstoneThickness> const& DripstoneThickness();

/// @brief 末地传送门眼睛位
MCAPI ::BlockStateVariant<bool> const& EndPortalEyeBit();

/// @brief 爆炸位
MCAPI ::BlockStateVariant<bool> const& ExplodeBit();

/// @brief 熄灭
MCAPI ::BlockStateVariant<bool> const& Extinguished();

/// @brief 朝向
MCAPI ::BlockStateVariant<int> const& FacingDirection();

/// @brief 填充等级
MCAPI ::BlockStateVariant<int> const& FillLevel();

/// @brief 生长植物年龄
MCAPI ::BlockStateVariant<int> const& GrowingPlantAge();

/// @brief 生长
MCAPI ::BlockStateVariant<int> const& Growth();

/// @brief 悬挂位
MCAPI ::BlockStateVariant<bool> const& HangingBit();

/// @brief 头部组件位
MCAPI ::BlockStateVariant<bool> const& HeadPieceBit();

/// @brief 高度
MCAPI ::BlockStateVariant<int> const& Height();

/// @brief 巨型蘑菇位
MCAPI ::BlockStateVariant<int> const& HugeMushroomBits();

/// @brief 在墙内位
MCAPI ::BlockStateVariant<bool> const& InWallBit();

/// @brief 无限燃烧位
MCAPI ::BlockStateVariant<bool> const& InfiniburnBit();

/// @brief 物品展示框地图位
MCAPI ::BlockStateVariant<bool> const& ItemFrameMapBit();

/// @brief 物品展示框照片位
MCAPI ::BlockStateVariant<bool> const& ItemFramePhotoBit();

/// @brief 海带年龄
MCAPI ::BlockStateVariant<int> const& KelpAge();

/// @brief 拉杆方向
MCAPI ::BlockStateVariant<::LeverDirection> const& LeverDirection();

/// @brief 液体深度
MCAPI ::BlockStateVariant<int> const& LiquidDepth();

/// @brief 点亮
MCAPI ::BlockStateVariant<bool> const& Lit();

/// @brief 湿润量
MCAPI ::BlockStateVariant<int> const& MoisturizedAmount();

/// @brief 多面方向位
MCAPI ::BlockStateVariant<int> const& MultiFaceDirectionBits();

/// @brief 自然
MCAPI ::BlockStateVariant<bool> const& Natural();

/// @brief 占用位
MCAPI ::BlockStateVariant<bool> const& OccupiedBit();

/// @brief 不祥
MCAPI ::BlockStateVariant<bool> const& Ominous();

/// @brief 打开位
MCAPI ::BlockStateVariant<bool> const& OpenBit();

/// @brief 朝向
MCAPI ::BlockStateVariant<::FrontAndTop> const& Orientation();

/// @brief 输出点亮位
MCAPI ::BlockStateVariant<bool> const& OutputLitBit();

/// @brief 输出减少位
MCAPI ::BlockStateVariant<bool> const& OutputSubtractBit();

/// @brief 灰白苔藓地毯东侧
MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideEast();

/// @brief 灰白苔藓地毯北侧
MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideNorth();

/// @brief 灰白苔藓地毯南侧
MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideSouth();

/// @brief 灰白苔藓地毯西侧
MCAPI ::BlockStateVariant<::PaleMossCarpetSide> const& PaleMossCarpetSideWest();

/// @brief 持久位
MCAPI ::BlockStateVariant<bool> const& PersistentBit();

/// @brief 柱子轴向
MCAPI ::BlockStateVariant<::PillarAxis> const& PillarAxis();

/// @brief 传送门轴向
MCAPI ::BlockStateVariant<::PortalAxis> const& PortalAxis();

/// @brief 充能位
MCAPI ::BlockStateVariant<bool> const& PoweredBit();

/// @brief 繁殖阶段
MCAPI ::BlockStateVariant<int> const& PropaguleStage();

/// @brief 铁轨数据位
MCAPI ::BlockStateVariant<bool> const& RailDataBit();

/// @brief 铁轨方向
MCAPI ::BlockStateVariant<int> const& RailDirection();

/// @brief 红石信号
MCAPI ::BlockStateVariant<int> const& RedstoneSignal();

/// @brief 再水合等级
MCAPI ::BlockStateVariant<int> const& RehydrationLevel();

/// @brief 中继器延迟
MCAPI ::BlockStateVariant<int> const& RepeaterDelay();

/// @brief 重生锚充能
MCAPI ::BlockStateVariant<int> const& RespawnAnchorCharge();

/// @brief 旋转
MCAPI ::BlockStateVariant<int> const& Rotation();

/// @brief 幽匿感测体阶段
MCAPI ::BlockStateVariant<int> const& SculkSensorPhase();

/// @brief 海草类型
MCAPI ::BlockStateVariant<::SeagrassType> const& SeagrassType();

/// @brief 稳定性
MCAPI ::BlockStateVariant<int> const& Stability();

/// @brief 稳定性检查位
MCAPI ::BlockStateVariant<bool> const& StabilityCheckBit();

/// @brief 站立旋转
MCAPI ::BlockStateVariant<int> const& StandingRotation();

/// @brief 结构方块类型
MCAPI ::BlockStateVariant<::StructureBlockType> const& StructureBlockType();

/// @brief 悬浮位
MCAPI ::BlockStateVariant<bool> const& SuspendedBit();

/// @brief 尖端
MCAPI ::BlockStateVariant<bool> const& Tip();

/// @brief 切换位
MCAPI ::BlockStateVariant<bool> const& ToggleBit();

/// @brief 顶部槽位
MCAPI ::BlockStateVariant<bool> const& TopSlotBit();

/// @brief 火把朝向
MCAPI ::BlockStateVariant<::TorchFacing> const& TorchFacingDirection();

/// @brief 试炼刷怪笼状态
MCAPI ::BlockStateVariant<int> const& TrialSpawnerState();

/// @brief 触发位
MCAPI ::BlockStateVariant<bool> const& TriggeredBit();

/// @brief 海龟蛋数量
MCAPI ::BlockStateVariant<::EggCount> const& TurtleEggCount();

/// @brief 缠怨藤年龄
MCAPI ::BlockStateVariant<int> const& TwistingVinesAge();

/// @brief 更新位
MCAPI ::BlockStateVariant<bool> const& UpdateBit();

/// @brief 上方方块位
MCAPI ::BlockStateVariant<bool> const& UpperBlockBit();

/// @brief 倒置位
MCAPI ::BlockStateVariant<bool> const& UpsideDownBit();

/// @brief 宝库状态
MCAPI ::BlockStateVariant<::VaultBlockState> const& VaultState();

/// @brief 藤蔓方向位
MCAPI ::BlockStateVariant<int> const& VineDirectionBits();

/// @brief 墙东侧连接类型
MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeEast();

/// @brief 墙北侧连接类型
MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeNorth();

/// @brief 墙南侧连接类型
MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeSouth();

/// @brief 墙西侧连接类型
MCAPI ::BlockStateVariant<::WallConnectionType> const& WallConnectionTypeWest();

/// @brief 墙柱位
MCAPI ::BlockStateVariant<bool> const& WallPostBit();

/// @brief 垂泪藤年龄
MCAPI ::BlockStateVariant<int> const& WeepingVinesAge();

/// @brief 怪异方向
MCAPI ::BlockStateVariant<int> const& WeirdoDirection();
// NOLINTEND

} // namespace VanillaStates
