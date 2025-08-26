#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateConfigThresholds.h"
#include "mc/entity/components/ReplayStateMode.h"

/**
 * @struct ReplayStateConfig
 * @brief 重放状态配置结构体。
 *
 * 这个结构体聚合了所有用于配置客户端移动重放/修正策略的参数。
 * 它本身不执行逻辑，而是作为数据容器被策略类（如 ClientReplayStatePolicy）读取和使用。
 */
struct ReplayStateConfig {
public:
    // 成员变量
    // NOLINTBEGIN (忽略特定代码风格检查的开始标记)

    // 同样，这里使用了 ll::TypedStorage 来精确控制内存布局，以确保与游戏原版二进制文件兼容，这对于 Mod 开发至关重要。

    /**
     * @brief 支持的阈值配置。
     * 
     * 存储了一组阈值（Thresholds），用于判断客户端的预测状态和服务器的权威状态之间的差异是否大到需要进行修正。
     * ReplayStateConfigThresholds 内部可能包含了位置差异阈值、朝向差异阈值等。
     * 例如：如果客户端预测位置与服务器位置的距离超过了这个阈值，就触发一次修正。
     */
    ::ll::TypedStorage<4, 12, ::ReplayStateConfigThresholds> mSupportedThresholds;

    /**
     * @brief 重放状态的工作模式。
     * 
     * 类型为 ReplayStateMode (枚举)。用于控制整个重放系统的开关或行为模式。
     */
    ::ll::TypedStorage<1, 1, ::ReplayStateMode>              mMode;

    /**
     * @brief 最小修正延迟（单位：tick）。
     * 
     * 在检测到需要修正后，系统最少要等待多少个游戏刻（tick）才执行修正。
     * 设置一个最小延迟可以防止因网络抖动引起的、过于频繁的、不必要的修正，避免画面产生微小的抖动。
     */
    ::ll::TypedStorage<1, 1, uchar>                          mMinCorrectionDelay;

    /**
     * @brief 最大修正延迟（单位：tick）。
     * 
     * 在检测到需要修正后，系统最多等待多少个游戏刻（tick）就必须执行修正。
     * 这确保了即使在持续的误差下，客户端的状态也不会与服务器偏离太远。
     */
    ::ll::TypedStorage<1, 1, uchar>                          mMaxCorrectionDelay;

    /**
     * @brief 历史记录大小。
     * 
     * 客户端需要存储最近一段时间内的玩家输入历史（如按键、鼠标移动）。
     * 当需要修正时，系统会从服务器给出的上一个正确位置开始，使用这段历史记录重新模拟（“重放”）玩家的移动，从而计算出新的、正确的当前位置。
     * 这个值定义了要存储多少个 tick 的输入历史。值越大，能修正的时间跨度就越长，但消耗的内存也越多。
     */
    ::ll::TypedStorage<2, 2, ushort>                         mHistorySize;
    
    // NOLINTEND (忽略特定代码风格检查的结束标记)

public:
    // 成员函数
    // NOLINTBEGIN

    /**
     * @brief 设置重放状态配置的阈值。
     * @param baseThreshold 一个基础阈值浮点数。
     * 
     * 这是一个方便的工具函数。它可能接收一个基础值，然后根据这个基础值计算并设置
     * mSupportedThresholds 内部所有具体的阈值（如位置阈值、旋转阈值等）。
     * 这样可以简化配置过程，只需调整一个参数就能统一改变修正的灵敏度。
     */
    MCAPI void setReplayStateConfigThresholds(float baseThreshold);
    
    // NOLINTEND
};