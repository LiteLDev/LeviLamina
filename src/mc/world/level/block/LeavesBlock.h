#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class HashedString;
class Vec3;
struct BlockAnimateTickData;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class LeavesBlock : public ::BlockLegacy {
public:
    // LeavesBlock inner types declare
    // clang-format off
    struct ParticleParams;
    // clang-format on

    // LeavesBlock inner types define
    struct ParticleParams {
    public:
        // ParticleParams inner types declare
        // clang-format off
        struct BiomeTintedColor;
        // clang-format on

        // ParticleParams inner types define
        struct BiomeTintedColor {};

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 20> mUnk6794b1;
        ::ll::UntypedStorage<4, 4>  mUnk885c5b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParticleParams& operator=(ParticleParams const&);
        ParticleParams(ParticleParams const&);
        ParticleParams();
    };

public:
    // 成员变量
    // NOLINTBEGIN
    // 一个布尔值，用于标记树叶的渲染模式。true 表示使用透明贴图（高品质），false 表示不透明（流畅）
    ::ll::TypedStorage<1, 1, bool> mHasTransparentLeaves; 
    // 存储与此树叶方块对应的树苗的哈希字符串名称
    ::ll::TypedStorage<8, 8, ::HashedString const&> mSapling;
    // 一个可选的粒子参数。如果树叶有粒子效果（如下雨时滴水），这里会存储相关参数
    ::ll::TypedStorage<4, 28, ::std::optional<::LeavesBlock::ParticleParams>> mParticleParams;
    // NOLINTEND

public:
    // 禁用默认的构造函数和赋值操作符，确保该类的实例通过特定方式（如工厂函数）创建
    LeavesBlock& operator=(LeavesBlock const&);
    LeavesBlock(LeavesBlock const&);
    LeavesBlock();

public:
    // 虚函数（virtual functions），子类可以重写这些函数以实现不同的行为
    // NOLINTBEGIN
    // vIndex: 131 - 当方块被从世界中移除时调用
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 117 - 获取方块的变种。对于树叶来说，这可以区分不同种类的树木（如橡木、桦木）
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 113 - 判断方块颜色是否受季节/生物群系影响。树叶颜色通常会随生物群系变化
    virtual bool isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const /*override*/;

    // vIndex: 138 - 获取方块的渲染层。根据图形设置，树叶可以在不同的层上渲染（如透明层）
    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const
        /*override*/;

    // vIndex: 140 - 获取方块的剔除层。用于优化渲染，决定哪些方块可以被遮挡剔除
    virtual ::HashedString const& getCullingLayer() const /*override*/;

    // vIndex: 123 - 方块的动画刻。用于产生粒子效果，比如树叶在下雨时会滴水
    virtual void animateTick(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 83 - 判断此方块是否会破坏下落的方块（如沙子、砂砾）。树叶通常不会
    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    // vIndex: 91 - 获取放置时的方块状态。用于确定玩家放置树叶方块时的最终形态
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 114 - 当游戏的图形模式改变时（例如从“流畅”切换到“高品质”）调用
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    // vIndex: 22 - 判断方块是否能提供支撑。树叶通常不能支撑其他重物
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 23 - 判断方块是否能为多面方块（如藤蔓）提供支撑
    virtual bool canProvideMultifaceSupport(::Block const& block, uchar face) const /*override*/;

    // vIndex: 130 - 为方块添加硬编码的组件，这些是方块行为的基础
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0 - 虚析构函数，允许通过基类指针安全地销毁子类对象
    virtual ~LeavesBlock() /*override*/ = default;
    // NOLINTEND

public:
    // 普通成员函数
    // NOLINTBEGIN
    // 内部函数，处理树叶“死亡”（即因为附近没有木头而消失）的逻辑
    MCAPI void _die(::BlockSource& region, ::BlockPos const& pos) const;

    // 处理方块的随机刻事件。树叶的随机刻用于检查是否应该凋零
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // 静态成员函数，可以直接通过类名调用
    // NOLINTBEGIN
    // 运行树叶的凋零逻辑。检查指定位置和范围内的树叶，看它们是否应该消失
    MCAPI static void runDecay(::BlockSource& region, ::BlockPos const& pos, int range);
    // NOLINTEND

public:
    // 静态成员变量
    // NOLINTBEGIN
    // 获取一个静态的、用于受生物群系颜色影响的树叶的粒子参数常量
    MCAPI static ::LeavesBlock::ParticleParams const& BIOME_TINTED_LEAVES_PARTICLE_PARAMS();
    // NOLINTEND


public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI bool $isSeasonTinted(::Block const& block, ::BlockSource& region, ::BlockPos const& p) const;

    MCAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::HashedString const& $getCullingLayer() const;

    MCAPI void $animateTick(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCFOLD bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCFOLD bool $canProvideMultifaceSupport(::Block const& block, uchar face) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
