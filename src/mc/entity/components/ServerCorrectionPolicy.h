#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/components/ReplayStateConfig.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

/**
 * @class ServerCorrectionPolicy
 * @brief 服务器端的修正策略类。
 *
 * 该类实现了 IReplayStatePolicy 接口，为服务器端的实体（主要是玩家）提供具体的逻辑，
 * 用于验证客户端发来的移动数据，并决定是否需要向客户端发出位置修正指令。
 * 它是服务器维持其作为游戏世界状态权威的关键组件。
 */
class ServerCorrectionPolicy : public ::IReplayStatePolicy {
public:
    // 成员变量
    // NOLINTBEGIN

    /**
     * @brief 上一次进行修正的时间戳（tick）。
     *
     * 记录了服务器上一次向客户端发送修正指令的游戏刻。
     * 这可以用来防止服务器过于频繁地发送修正，避免网络拥塞和客户端抖动。
     */
    ::ll::TypedStorage<8, 8, uint64>                   mLastCorrection;

    /**
     * @brief 上一次由外部因素引发的修正时间戳（tick）。
     *
     * 记录了上一次因为非玩家输入（例如 /tp 命令、重生等）导致的位置剧变的时间。
     * 当这种情况发生后，服务器会在短时间内对客户端的位置报告更加宽容，因为它知道客户端需要时间来同步这个“传送”。
     */
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastExternalCorrection;

    /**
     * @brief 修正策略的配置。
     *
     * 与客户端策略一样，服务器策略也使用 ReplayStateConfig 来获取阈值等参数。
     * 服务器会用这些阈值来判断客户端报告的位置与服务器计算的位置之间的偏差是否“不可接受”。
     */
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig>     mConfig;
    
    // NOLINTEND

public:
    // 虚函数（从 IReplayStatePolicy 继承并实现）
    // NOLINTBEGIN

    /**
     * @vIndex: 2

     */
    virtual ::MovementCorrection shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    ) /*override*/;

    /**
     * @vIndex: 1
     * @brief 判断是否需要进行重放。
     * @return 总是返回 false。
     *
     * 在服务器端，这个函数几乎没有意义。服务器是权威方，它不需要“重放”自己的状态去匹配任何其他方。
     * 它的状态就是最终状态。因此，这个函数在服务器策略中的实现通常直接返回 false。
     */
    virtual bool isReplayNeeded(::AdvanceFrameResult) const /*override*/;

    /**
     * @vIndex: 3
     * @brief 通知策略一个外部修正已经发生。
     * @param frame 发生修正时的 tick/frame。
     *
     * 当服务器通过命令（如 /tp）或游戏逻辑（如死亡后重生）强制改变一个实体的位置时，会调用此函数。
     * 它会更新 mLastExternalCorrection 成员变量，让 shouldCorrectMovement 知道最近有一次合法的、剧烈的位置变动。
     */
    virtual void notifyOfExternalCorrection(uint64 frame) /*override*/;

    /**
     * @vIndex: 0
     * @brief 虚析构函数。
     */
    virtual ~ServerCorrectionPolicy() /*override*/ = default;
        // NOLINTEND
public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MovementCorrection $shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    );

    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult) const;

    MCAPI void $notifyOfExternalCorrection(uint64 frame);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
