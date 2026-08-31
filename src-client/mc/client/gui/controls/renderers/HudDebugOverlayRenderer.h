#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/DebugHudOptions.h"
#include "mc/deps/core/threading/BackgroundWorker.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

class HudDebugOverlayRenderer {
public:
    // HudDebugOverlayRenderer inner types declare
    // clang-format off
    struct WorkerStatsSnapshot;
    struct WorkerStats;
    struct TaskStatsSnapshot;
    struct TaskStats;
    struct SpinLockMetrics;
    struct SpinLockStats;
    // clang-format on

    // HudDebugOverlayRenderer inner types define
    struct WorkerStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> queued;
        ::ll::TypedStorage<8, 8, uint64> reQueued;
        ::ll::TypedStorage<8, 8, uint64> processed;
        ::ll::TypedStorage<8, 8, uint64> noops;
        ::ll::TypedStorage<8, 8, uint64> maxQueued;
        ::ll::TypedStorage<8, 8, uint64> sorts;
        ::ll::TypedStorage<8, 8, uint64> waits;
        // NOLINTEND
    };

    struct WorkerStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> last;
        ::ll::TypedStorage<8, 56, ::HudDebugOverlayRenderer::WorkerStatsSnapshot> curr;
        // NOLINTEND
    };

    struct TaskStatsSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> count;
        ::ll::TypedStorage<8, 8, uint64> maxCount;
        // NOLINTEND
    };

    struct TaskStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> last;
        ::ll::TypedStorage<8, 16, ::HudDebugOverlayRenderer::TaskStatsSnapshot> curr;
        // NOLINTEND
    };

    struct SpinLockMetrics {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> contention;
        ::ll::TypedStorage<8, 8, uint64> contentionBlocked;
        ::ll::TypedStorage<8, 8, uint64> blockedTicks;
        ::ll::TypedStorage<8, 8, uint64> blockedTicksMax;
        ::ll::TypedStorage<8, 8, uint64> yields;
        ::ll::TypedStorage<8, 8, uint64> lockCount;
        ::ll::TypedStorage<8, 8, uint64> lockTicks;
        ::ll::TypedStorage<8, 8, uint64> lockTicksMax;
        // NOLINTEND
    };

    struct SpinLockStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::HudDebugOverlayRenderer::SpinLockMetrics> last;
        ::ll::TypedStorage<8, 64, ::HudDebugOverlayRenderer::SpinLockMetrics> curr;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDebugDepthArrayTextureMaterial;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BackgroundWorker*, ::HudDebugOverlayRenderer::WorkerStats>>
        mWorkerStats;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BackgroundWorker*, ::HudDebugOverlayRenderer::WorkerStats>>
                                                                                        mCurrentWorkerStats;
    ::ll::TypedStorage<8, 32, ::HudDebugOverlayRenderer::TaskStats>                     mTaskStats;
    ::ll::TypedStorage<8, 128, ::HudDebugOverlayRenderer::SpinLockStats>                mSpinLockStats;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                   mLastUpdateTime;
    ::ll::TypedStorage<4, 8, ::std::optional<::DebugHudOptions>>                        mLastDebugHudOption;
    ::ll::TypedStorage<8, 16, ::std::optional<::std::chrono::steady_clock::time_point>> mDebugHudOptionEndTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HudDebugOverlayRenderer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
