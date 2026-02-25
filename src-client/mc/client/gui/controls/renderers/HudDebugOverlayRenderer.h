#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/DebugHudOptions.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class BackgroundWorker;
// clang-format on

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
    struct WorkerStatsSnapshot {};

    struct WorkerStats {};

    struct TaskStatsSnapshot {};

    struct TaskStats {};

    struct SpinLockMetrics {};

    struct SpinLockStats {};

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
