#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/components/ReplayStateConfig.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

/**
 * @class ClientReplayStatePolicy
 * @brief 客户端重放状态策略类。
 *
 * 该类实现了 IReplayStatePolicy 接口，为客户端实体（尤其是玩家）提供具体的逻辑，
 * 用于决定何时需要根据服务器状态进行移动修正（重放输入），以及如何进行修正。
 * 这是实现平滑的客户端预测和服务器和解的关键部分。
 */
class ClientReplayStatePolicy : public ::IReplayStatePolicy {
public:
    // 成员变量
    // NOLINTBEGIN (忽略特定代码风格检查的开始标记)
 
    // mLastDimension: 存储实体上一次所在的维度。
    // 用于检测玩家是否切换了维度（例如从主世界进入下界），这是一个需要强制同步和状态重置的强力信号。
    // 类型是 std::optional<::DimensionType>，表示它可能没有值（例如，在初始化时）。
    ::ll::TypedStorage<4, 8, ::std::optional<::DimensionType>> mLastDimension;
    
    // mConfig: 存储此策略的配置信息。
    // ReplayStateConfig 结构体中可能包含了修正阈值、平滑因子等参数。
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>             mConfig;
    
    // NOLINTEND (忽略特定代码风格检查的结束标记)

public:
    // 虚函数（从 IReplayStatePolicy 继承并实现）
    // NOLINTBEGIN

    /**
     * @vIndex 1
     * @brief 判断是否需要进行重放。
     * @param result 游戏帧推进的结果。
     * @return 如果需要重放，返回 true；否则返回 false。
     * 
     * 这个函数在每一帧（tick）被调用，用来快速判断是否有触发重放的条件。
     * 例如，如果 AdvanceFrameResult 表明刚刚收到了一个新的服务器状态包，
     * 那么就可能需要进行重放来核对和修正。
     */
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const /*override*/;

    /**
     * @vIndex 2
     * @brief 决定是否应该以及如何修正移动。
     * @param entityContext 实体的上下文信息。
     * @param packet 客户端收到的玩家权威输入包（通常是服务器转发回来的）。
     * @param serverTick 服务器当前的 tick。
     * @param flags 一些标志位。
     * @param isTeleport 是否为传送。
     * @return MovementCorrection 结构体，描述了修正的类型和数据。
     *
     * 这是策略的核心。当收到服务器的权威位置更新后，此函数被调用。
     * 它会比较客户端的预测位置和服务器的权威位置，如果差距超过了 mConfig 中设定的阈值，
     * 就会返回一个表示需要修正的 MovementCorrection 对象。
     */
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool) /*override*/;

    /**
     * @vIndex 3
     * @brief 通知策略一个外部修正已经发生。
     * @param tick 发生修正时的 tick。
     *
     * 当实体因为其他原因（如服务器的传送命令 /tp）被强制移动时，会调用此函数。
     * 这让策略可以重置其内部状态（例如，清空历史输入记录），以避免与这次外部修正冲突。
     */
    virtual void notifyOfExternalCorrection(uint64) /*override*/;

    /**
     * @vIndex 0
     * @brief 虚析构函数。
     * 
     * 允许通过基类指针安全地删除派生类对象。`= default` 表示使用编译器生成的默认析构函数。
     */
    virtual ~ClientReplayStatePolicy() /*override*/ = default;
public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult result) const;

    MCAPI ::MovementCorrection
    $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool);

    MCFOLD void $notifyOfExternalCorrection(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
