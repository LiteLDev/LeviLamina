#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/DirtyTicksCounter.h"
#include "mc/world/level/chunk/SubChunkStorage.h"
#include "mc/world/level/chunk/sub_chunk_storage_unit/PruneType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPalette;
class BlockPos;
class BlockVolume;
class IDataInput;
class IDataOutput;
class SpinLockImpl;
class SubChunkBrightnessStorage;
class SubChunkPos;
struct DeserializationChanges;
// clang-format on

struct SubChunk {
public:
    // SubChunk 内部类型定义
    
    // 定义层的类型别名，通常用于表示方块层
    using Layer = uchar;

    // 方块层枚举。每个方块位置可以有两层方块。
    enum class BlockLayer : uchar {
        Standard = 0, // 标准层，存放主要的方块（如石头、泥土）
        Extra    = 1, // 附加层，存放可以和标准层方块共存的方块（如水、熔岩）
        Count    = 2, // 层的总数，方便用于循环
    };

    // 子区块状态枚举，主要用于客户端跟踪从服务器加载区块的进度。
    enum class SubChunkState : int {
        Invalid                    = -1, // 无效状态
        Normal                     = 0,  // 正常状态
        IsLightingSystemSubChunk   = 1,  // 是光照系统的子区块
        NeedsRequest               = 2,  // 需要向服务器请求数据
        ReceivedResponseFromServer = 3,  // 已从服务器收到响应
        ProcessingSubChunk         = 4,  // 正在处理子区块数据
        WaitingForCacheResponse    = 5,  // 等待缓存响应
        ProcessedSubChunk          = 6,  // 已处理完子区块
        RequestFinished            = 7,  // 请求流程已完成
    };

public:
    // 成员变量
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::DirtyTicksCounter>                               mDirtyTicksCounter;       // 脏刻计数器，标记此子区块是否需要更新
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mSkyLight;                // 天空光照存储
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkBrightnessStorage>>    mBlockLight;              // 方块光照存储
    ::ll::TypedStorage<1, 1, bool>                                              mHasMaxSkyLight;          // 标记整个子区块是否都暴露在天空下（最大天空光），用于优化
    ::ll::TypedStorage<4, 4, ::SubChunk::SubChunkState>                         mSubChunkState;           // 当前子区块的状态
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsInitLighting;       // 标记是否需要初始化光照
    ::ll::TypedStorage<1, 1, bool>                                              mNeedsClientLighting;     // 标记客户端是否需要计算光照
    ::ll::TypedStorage<8, 16, ::std::unique_ptr<::SubChunkStorage<::Block>>[2]> mBlocks;                  // 存储方块数据，数组大小为2，分别对应标准层和附加层
    ::ll::TypedStorage<8, 16, ::SubChunkStorage<::Block>* [2]>                  mBlocksReadPtr;           // 用于快速读取方块数据的原始指针，是对 mBlocks 的缓存，避免 unique_ptr 开销
    ::ll::TypedStorage<8, 8, ::SpinLockImpl*>                                   mWriteLock;               // 指向自旋锁的指针，用于保护写入操作，通常由父级 LevelChunk 提供
    ::ll::TypedStorage<8, 8, uint64>                                            mHash;                    // 子区块数据的哈希值，用于网络同步和变更检测
    ::ll::TypedStorage<1, 1, bool>                                              mHashDirty;               // 标记哈希值是否已过期（即子区块数据已改变），需要重新计算
    ::ll::TypedStorage<1, 1, char>                                              mAbsoluteIndex;           // 该子区块在 LevelChunk 中的绝对垂直索引 (Y值)
    ::ll::TypedStorage<1, 1, bool>                                              mIsReplacementSubChunk;   // 标记这是否是一个临时的替换用子区块（在加载过程中使用）
    ::ll::TypedStorage<1, 1, uchar>                                             mRenderChunkTrackingVersionNumber; // 渲染区块追踪版本号，当数据变化时递增，通知渲染引擎需要更新模型
    // NOLINTEND

public:
    // 禁用默认和拷贝构造/赋值，确保 SubChunk 对象被正确创建且不被意外复制。
    SubChunk& operator=(SubChunk const&);
    SubChunk(SubChunk const&);
    SubChunk();

public:
    // 成员函数
    // NOLINTBEGIN
    
    // 构造函数
    MCAPI
    SubChunk(::Block const* initBlock, bool maxSkyLight, bool fullyLit, ::SpinLockImpl& spinLock, schar absoluteIndex);

    // 创建方块光照存储
    MCAPI void _createBlockLightStorage();

    // 创建天空光照存储
    MCAPI void _createSkyLightStorage();

    // 重置光照信息
    MCAPI void _resetLight(bool maxSkyLight, bool maxLight);

    // 在指定层和索引处设置方块（内部使用）
    MCAPI void _setBlock(uchar layer, ushort index, ::Block const& block);

    // 从数据流中反序列化（加载）子区块数据
    MCAPI void deserialize(
        ::IDataInput&                              stream,                // 输入数据流
        ::BlockPalette const&                      palette,               // 用于解析方块ID的调色板
        ::SubChunkPos const&                       subChunkPos,           // 子区块的位置
        ::std::optional<::DeserializationChanges*> deserializationChanges // （可选）记录反序列化过程中的变更
    );

    // 获取子区块内的方块数据并填充到 BlockVolume 中
    MCAPI void fetchBlocks(
        ::BlockPos const& subChunkOrigin,   // 子区块的原点坐标
        ::BlockPos const& volumeOrigin,     // 目标 BlockVolume 的原点坐标
        short             dimensionMinHeight, // 维度的最低高度
        ::BlockVolume&    volume              // 用于接收方块数据的 BlockVolume
    ) const;

    // 检查子区块是否由同一种方块均匀填充（例如，整个子区块都是空气或石头），这是一种优化
    MCAPI bool isUniform(::Block const& block) const;

    // 移动赋值运算符
    MCAPI ::SubChunk& operator=(::SubChunk&& rhs);

    // 修剪（Prune）存储。如果子区块是均匀的，则可以释放详细的存储空间，只保存单一的方块状态以节省内存。
    MCAPI void prune(::SubChunkStorageUnit::PruneType pruneType);

    // 重新计算哈希值并返回序列化后的数据，主要用于网络传输。
    MCAPI ::std::string recalculateHashAndSerialize(bool network);

    // 将子区块重置为均匀填充的状态
    MCAPI void reset(::Block const* resetBlock, bool maxSkyLight, bool fullyLit);

    // 将子区块数据序列化（保存）到数据流
    MCAPI void serialize(::IDataOutput& stream, bool network) const;

    // 将子区块的所有方块设置为同一种方块
    MCAPI void setBlocksToUniform(::Block const& initBlock, bool maxSkyLight, bool fullyLit);

    // 从一个 BlockVolume 中读取数据来设置子区块的方块
    MCAPI void setFromBlockVolume(::BlockVolume const& box, short height);

    // 设置指定索引位置的天空光值
    MCAPI void setSkyLight(ushort index, uchar lightValue);

    // 析构函数
    MCAPI ~SubChunk();
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    // 刷新垃圾回收器。可能用于清理一些延迟释放的内存资源，例如不再使用的方块调色板数据。
    MCAPI static void flushGarbageCollectors();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Block const* initBlock, bool maxSkyLight, bool fullyLit, ::SpinLockImpl& spinLock, schar absoluteIndex);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
