#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/CachedComponentData.h"
#include "mc/world/level/block/components/BlockComponentDirectData.h"
#include "mc/world/level/block/components/BlockComponentStorage.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BaseGameVersion;
class BlockLegacy;
class BlockPos;
class BlockSource;
class BlockState;
class DefinitionTrigger;
class GetCollisionShapeInterface;
class HashedString;
class HitResult;
class IConstBlockSource;
class ItemActor;
class ItemInstance;
class ItemStackBase;
class Player;
class Random;
class RenderParams;
class Vec3;
namespace mce { class Color; }
// clang-format on

class Block {
public:
    // 定义方块状态值的类型，可以是整数、浮点数、布尔值或字符串
    using BlockStateValueType = std::variant<int, float, bool, std::string>;
    // 定义方块状态列表的类型，是一个由状态名和状态值组成的键值对向量
    using BlockStatesType     = std::vector<std::pair<std::string, BlockStateValueType>>;

    // --- 静态方法：从注册表中获取方块 ---

    /**
     * @brief 尝试通过运行时ID（Runtime ID）从注册表中获取一个方块。
     * @param runtimeID 方块的运行时ID。
     * @return 如果找到，返回一个指向该方块常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint runtimeID);

    /**
     * @brief 尝试通过名称从注册表中获取一个方块。
     * @param name 方块的名称标识符（例如 "minecraft:stone"）。
     * @return 如果找到，返回一个指向该方塊常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name);

    /**
     * @brief 尝试通过名称和旧版数据值从注册表中获取一个方块。
     * @param name 方块的名称标识符。
     * @param legacyData 旧版数据值（例如，不同颜色的羊毛有不同的数据值）。
     * @return 如果找到，返回一个指向该方塊常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, ushort legacyData);
    
    /**
     * @brief 尝试通过旧版方块ID和数据值从注册表中获取一个方块。
     * @param legacyBlockID 旧版数字ID。
     * @param legacyData 旧版数据值。
     * @return 如果找到，返回一个指向该方塊常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(uint legacyBlockID, ushort legacyData);

    /**
     * @brief 尝试通过名称和一组方块状态从注册表中获取一个方块。
     * @param name 方块的名称标识符。
     * @param states 方块状态的列表。
     * @return 如果找到，返回一个指向该方塊常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(std::string_view name, BlockStatesType const& states);

    /**
     * @brief 尝试通过NBT复合标签从注册表中获取一个方块。
     * @param nbt 包含方块名称和状态的NBT数据。
     * @return 如果找到，返回一个指向该方塊常量的 optional_ref；否则返回空。
     */
    LLNDAPI static optional_ref<Block const> tryGetFromRegistry(CompoundTag const& nbt);

    // --- 内联成员函数 ---

    /**
     * @brief 获取方块的类型名称。
     * @return 方块类型名称的字符串常量引用（例如 "minecraft:stone"）。
     */
    [[nodiscard]] inline std::string const& getTypeName() const { return getLegacyBlock().getTypeName(); }

    /**
     * @brief 获取与此方块对应的物品ID。
     * @return 方块的物品ID。
     */
    [[nodiscard]] inline short getBlockItemId() const { return getLegacyBlock().getBlockItemId(); }

    /**
     * @brief 获取此方块实例的数据值 (data value / aux value)。
     * @return 代表此方块状态的 ushort 类型数据值。
     */
    [[nodiscard]] inline ushort getData() const { return mData; }

    // --- 模板成员函数：用于处理方块状态 ---

    /**
     * @brief 通过状态ID获取指定的方块状态值。
     * @tparam T 期望的状态值类型（例如 bool, int）。
     * @param id 状态的唯一ID。
     * @return 如果该状态存在且类型匹配，返回状态值；否则返回 std::nullopt。
     */
    template <typename T>
    std::optional<T> getState(uint64 id) const {
        return mLegacyBlock->getState<T>(id, mData);
    }

    /**
     * @brief 通过方块状态对象获取指定的方块状态值。
     * @tparam T 期望的状态值类型。
     * @param state 方块状态对象。
     * @return 如果该状态存在且类型匹配，返回状态值；否则返回 std::nullopt。
     */
    template <typename T>
    std::optional<T> getState(BlockState const& state) const {
        return mLegacyBlock->getState<T>(state, mData);
    }

    /**
     * @brief 设置指定的方块状态，并返回一个新的方块实例。
     * @tparam T 要设置的状态值的类型。
     * @param id 状态的唯一ID。
     * @param value 要设置的值。
     * @return 返回一个具有新状态的方块实例的 optional_ref。如果操作失败则返回空。
     */
    template <typename T>
    optional_ref<Block const> setState(uint64 id, T value) const {
        return mLegacyBlock->trySetState(id, value, mData);
    }

    /**
     * @brief 设置指定的方块状态，并返回一个新的方块实例。
     * @tparam T 要设置的状态值的类型。
     * @param state 方块状态对象。
     * @param value 要设置的值。
     * @return 返回一个具有新状态的方块实例的 optional_ref。如果操作失败则返回空。
     */
    template <typename T>
    optional_ref<Block const> setState(BlockState const& state, T value) const {
        return mLegacyBlock->trySetState(state, value, mData);
    }

public:
    // --- 成员变量 ---
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::BlockComponentStorage>       mComponents;                    // 方块组件存储
    ::ll::TypedStorage<2, 2, ushort const>                    mData;                          // 此方块排列组合的数据值
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockLegacy*>> mLegacyBlock;                   // 指向其对应的 BlockLegacy 对象的指针
    ::ll::TypedStorage<4, 8, ::CachedComponentData>           mCachedComponentData;           // 缓存的组件数据，用于优化性能
    ::ll::TypedStorage<8, 104, ::BlockComponentDirectData>    mDirectData;                    // 方块组件的直接数据访问
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>  mTags;                          // 方块拥有的标签列表（例如 "stone", "dirt"）
    ::ll::TypedStorage<8, 24, ::CompoundTag>                  mSerializationId;               // 用于序列化（保存到磁盘）的ID
    ::ll::TypedStorage<8, 8, uint64>                          mSerializationIdHash;           // 序列化ID的哈希值
    ::ll::TypedStorage<4, 4, uint>                            mSerializationIdHashForNetwork; // 用于网络同步的序列化ID哈希值
    ::ll::TypedStorage<4, 4, uint>                            mNetworkId;                     // 网络ID
    ::ll::TypedStorage<1, 1, bool>                            mHasRuntimeId;                  // 标记此方块是否具有有效的运行时ID
    // NOLINTEND

public:
    // 默认构造函数被禁用，防止创建无效的 Block 实例
    Block();

public:
    // --- 虚函数 ---
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Block() = default; // 默认虚析构函数
    // NOLINTEND

public:
    // --- 成员函数 ---
    // NOLINTBEGIN
    /**
     * @brief 构造函数。
     * @param data 方块的数据值。
     * @param oldBlock 指向对应的 BlockLegacy 对象的非空指针。
     */
    MCAPI Block(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock);
    
    /**
     * @brief 构造函数。
     * @param data 方块的数据值。
     * @param oldBlock 指向对应的 BlockLegacy 对象的非空指针。
     * @param serId 序列化ID。
     * @param runId 运行时ID。
     */
    MCAPI Block(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);

    /**
     * @brief 检查方块是否为固体方块。
     * @return 如果是固体则返回 true。
     */
    MCAPI bool _isSolid() const;

    /**
     * @brief 根据组件配置将方块加入 tick 队列（计划更新）。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @param random 随机数生成器。
     * @param placingBlock 是否是正在放置此方块。
     */
    MCAPI void _queueForTickBasedOnComponentConfiguration(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Random&         random,
        bool              placingBlock
    ) const;

    /**
     * @brief 将方块从 tick 队列中移除。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     */
    MCAPI void _removeFromTickingQueues(::BlockSource& region, ::BlockPos const& pos) const;

    /**
     * @brief 将此方块转换为物品实例。
     * @param region 区域的方块源。
     * @param position 方块的位置。
     * @param withData 是否包含方块的数据值。
     * @return 代表此方块的物品实例。
     */
    MCAPI ::ItemInstance asItemInstance(::BlockSource& region, ::BlockPos const& position, bool withData) const;

    /**
     * @brief 检查此方块是否会破坏其上方的下落方块（如沙子、沙砾）。
     * @param version 游戏版本。
     * @return 如果会破坏则返回 true。
     */
    MCAPI bool breaksFallingBlocks(::BaseGameVersion version) const;

    /**
     * @brief 构建方块的描述性名称（例如 "Stone"）。
     * @return 方块的描述名称字符串。
     */
    MCAPI ::std::string buildDescriptionName() const;

    /**
     * @brief 构建用于序列化的ID。
     * @param latestUpdaterVersion 最新的更新器版本。
     */
    MCAPI void buildSerializationId(uint latestUpdaterVersion);

    /**
     * @brief 构建用于序列化的ID字符串形式。
     * @return 序列化ID的字符串。
     */
    MCAPI ::std::string buildSerializationIdString() const;
    
    /**
     * @brief 检查方块是否能在指定面上提供完整支撑。
     * @param face 方块的面（例如，顶部、底部）。
     * @return 如果能提供完整支撑则返回 true。
     */
    MCAPI bool canProvideFullSupport(uchar face) const;

    /**
     * @brief 检查方块是否可以在指定位置存活。
     * @param region 区域的方块源。
     * @param pos 要检查的位置。
     * @return 如果可以存活则返回 true。
     */
    MCAPI bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    /**
     * @brief 对该方块进行射线检测。
     * @param pos 方块的位置。
     * @param A 射线的起点。
     * @param B 射线的终点。
     * @param aabb 方块的包围盒。
     * @return 碰撞结果。
     */
    MCAPI ::HitResult clip(::BlockPos const& pos, ::Vec3 const& A, ::Vec3 const& B, ::AABB const& aabb) const;

    /**
     * @brief 对该方块进行射线检测（更完整的版本）。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @param A 射线的起点。
     * @param B 射线的终点。
     * @param shapeType 形状类型。
     * @param entity 可选的，进行检测的实体。
     * @return 碰撞结果。
     */
    MCAPI ::HitResult clip(
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    /**
     * @brief 计算用于网络传输的原始序列化ID哈希值。
     * @return 哈希值。
     */
    MCAPI uint computeRawSerializationIdHashForNetwork() const;

    /**
     * @brief 从另一个方块复制指定的方块状态。
     * @param fromBlock 状态的来源方块。
     * @param state 要复制的方块状态类型。
     * @return 一个应用了新状态的方块常量引用。
     */
    MCAPI ::Block const& copyState(::Block const& fromBlock, ::BlockState const& state) const;

    /**
     * @brief 从另一个方块复制所有匹配的方块状态。
     * @param fromBlock 状态的来源方块。
     * @return 一个应用了新状态的方块常量引用。
     */
    MCAPI ::Block const& copyStates(::Block const& fromBlock) const;

    /**
     * @brief 在此方块上执行物品事件。
     * @param item 触发事件的物品。
     * @param eventName 事件名称。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @param actor 触发事件的实体。
     */
    MCAPI void executeItemEvent(
        ::ItemStackBase&     item,
        ::std::string const& eventName,
        ::BlockSource&       region,
        ::BlockPos const&    pos,
        ::Actor*             actor
    ) const;

    /**
     * @brief 执行一个定义触发器。
     * @param trigger 要执行的触发器。
     * @param params 渲染参数。
     * @return 如果执行成功则返回 true。
     */
    MCAPI bool executeTrigger(::DefinitionTrigger const& trigger, ::RenderParams& params) const;

    /**
     * @brief 完成方块组件存储的初始化。
     */
    MCAPI void finalizeBlockComponentStorage();

    /**
     * @brief 获取方块的碰撞箱。
     * @param outAABB 输出的AABB（轴对齐边界框）。
     * @param region 只读的方块源。
     * @param pos 方块的位置。
     * @param entity 可选的，与之进行碰撞检测的实体。
     * @return 如果方块有碰撞箱则返回 true。
     */
    MCAPI bool getCollisionShape(
        ::AABB&                                            outAABB,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    /**
     * @brief 获取方块的描述ID（用于本地化）。
     * @return 描述ID字符串。
     */
    MCAPI ::std::string getDescriptionId() const;
    
    /**
     * @brief 获取此方块实例对应的 BlockLegacy 对象。
     * @return BlockLegacy 对象的常量引用。
     */
    MCAPI ::BlockLegacy const& getLegacyBlock() const;
    
    /**
     * @brief 获取方块在地图上显示的颜色。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @return 地图颜色。
     */
    MCAPI ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos) const;

    /**
     * @brief 根据旧版数据值获取对应的方块状态。
     * @param data 旧版数据值。
     * @return 具有该数据值状态的方块常量引用。
     */
    MCAPI ::Block const& getStateFromLegacyData(ushort data) const;
    
    /**
     * @brief 检查此方块是否拥有指定的方块状态。
     * @param stateType 要检查的方块状态类型。
     * @return 如果拥有该状态则返回 true。
     */
    MCAPI bool hasState(::BlockState const& stateType) const;
    
    /**
     * @brief 检查此方块是否具有指定的标签。
     * @param tagName 标签名称（哈希字符串）。
     * @return 如果有该标签则返回 true。
     */
    MCAPI bool hasTag(::HashedString const& tagName) const;

    /**
     * @brief 检查此方块是否是空气。
     * @return 如果是空气则返回 true。
     */
    MCAPI bool isAir() const;
    
    /**
     * @brief 检查此方块是否是按钮。
     * @return 如果是按钮则返回 true。
     */
    MCAPI bool isButtonBlock() const;
    
    /**
     * @brief 检查此方块是否是作物。
     * @return 如果是作物则返回 true。
     */
    MCAPI bool isCropBlock() const;

    /**
     * @brief 检查此方块是否是门。
     * @return 如果是门则返回 true。
     */
    MCAPI bool isDoorBlock() const;
    
    /**
     * @brief 检查此方块是否阻碍移动。
     * @return 如果阻碍移动则返回 true。
     */
    MCFOLD bool isMotionBlockingBlock() const;
    
    /**
     * @brief 检查此方块是否为部分方块（非完整立方体，如台阶）。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @return 如果是部分方块则返回 true。
     */
    MCAPI bool isPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;

    /**
     * @brief 检查放置此方块时是否会保留原有的介质方块（如水）。
     * @param medium 被替换的介质方块。
     * @return 如果会保留则返回 true。
     */
    MCAPI bool isPreservingMediumWhenPlaced(::Block const& medium) const;

    /**
     * @brief 检查此方块是否是台阶。
     * @return 如果是台阶则返回 true。
     */
    MCAPI bool isSlabBlock() const;

    /**
     * @brief 检查此方块是否是固体且能阻挡实体。
     * @return 如果是则返回 true。
     */
    MCAPI bool isSolidBlockingBlock() const;
    
    /**
     * @brief 检查此方块是否是固体、能阻挡实体且不是信号源（如红石块）。
     * @return 如果是则返回 true。
     */
    MCAPI bool isSolidBlockingBlockAndNotSignalSource() const;

    /**
     * @brief 检查方块的上半部分是否为部分方块。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @return 如果是则返回 true。
     */
    MCAPI bool isTopPartialBlock(::BlockSource const& region, ::BlockPos const& pos) const;
    
    /**
     * @brief 检查一个辅助值（aux value）对于此方块是否有效。
     * @param value 要检查的值。
     * @return 如果有效则返回 true。
     */
    MCAPI bool isValidAuxValue(int value) const;

    /**
     * @brief 检查此方块是否可以被放置在指定位置。
     * @param region 区域的方块源。
     * @param pos 要放置的位置。
     * @param face 放置时所点击的面。
     * @return 如果可以放置则返回 true。
     */
    MCAPI bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;
    
    /**
     * @brief 当相邻方块发生变化时调用。
     * @param region 区域的方块源。
     * @param pos 此方块的位置。
     * @param neighborPos 发生变化的相邻方块的位置。
     */
    MCAPI void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;
    
    /**
     * @brief 当实体掉落在此方块上时调用。
     * @param region 区域的方块源。
     * @param pos 此方块的位置。
     * @param entity 掉落的实体。
     * @param fallDistance 掉落距离。
     */
    MCAPI void onFallOn(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity, float fallDistance) const;

    /**
     * @brief 当此方块被放置时调用。
     * @param region 区域的方块源。
     * @param pos 放置的位置。
     * @param previousBlock 此位置上原有的方块。
     */
    MCAPI void onPlace(::BlockSource& region, ::BlockPos const& pos, ::Block const& previousBlock) const;

    /**
     * @brief 当实体从此方块上走开时调用。
     * @param entity 走开的实体。
     * @param pos 此方块的位置。
     */
    MCAPI void onStepOff(::Actor& entity, ::BlockPos const& pos) const;

    /**
     * @brief 当实体踩在此方块上时调用。
     * @param entity 踩上来的实体。
     * @param pos 此方块的位置。
     */
    MCAPI void onStepOn(::Actor& entity, ::BlockPos const& pos) const;

    /**
     * @brief 当玩家破坏此方块时调用。
     * @param player 破坏方块的玩家。
     * @param pos 方块的位置。
     */
    MCAPI void playerDestroy(::Player& player, ::BlockPos const& pos) const;

    /**
     * @brief 在世界中生成一个掉落物。
     * @param region 区域的方块源。
     * @param pos 生成的位置。
     * @param itemInstance 要生成的物品实例。
     * @return 指向生成的 ItemActor 的指针。
     */
    MCAPI ::ItemActor*
    popResource(::BlockSource& region, ::BlockPos const& pos, ::ItemInstance const& itemInstance) const;
    
    /**
     * @brief 当方块被计划更新（queued tick）时调用。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @param random 随机数生成器。
     */
    MCAPI void queuedTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    /**
     * @brief 当方块发生随机更新（random tick）时调用。
     * @param region 区域的方块源。
     * @param pos 方块的位置。
     * @param random 随机数生成器。
     */
    MCAPI void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    
    /**
     * @brief 获取用于填充命令（/fill）的方块。
     * @return 用于填充的方块。
     */
    MCAPI ::Block const& sanitizeFillBlock() const;
    
    /**
     * @brief 检查此方块是否应该接收随机更新。
     * @return 如果需要随机更新则返回 true。
     */
    MCAPI bool shouldRandomTick() const;

    /**
     * @brief 将方块信息转换为调试字符串。
     * @return 包含调试信息的字符串。
     */
    MCAPI ::std::string toDebugString() const;

    /**
     * @brief 当玩家使用（右键点击）此方块时调用。
     * @param player 使用方块的玩家。
     * @param pos 方块的位置。
     * @param face 被点击的面。
     * @param hit 可选的，精确的点击位置坐标。
     * @return 如果使用成功则返回 true。
     */
    MCAPI bool use(::Player& player, ::BlockPos const& pos, uchar face, ::std::optional<::Vec3> hit) const;
    // NOLINTEND

public:
    // --- 静态变量 ---
    // NOLINTBEGIN
    // 方块描述的前缀，通常是 "tile."
    MCAPI static ::std::string const& BLOCK_DESCRIPTION_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock);

    MCAPI void* $ctor(ushort data, ::gsl::not_null<::BlockLegacy*> oldBlock, ::CompoundTag serId, uint const& runId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
