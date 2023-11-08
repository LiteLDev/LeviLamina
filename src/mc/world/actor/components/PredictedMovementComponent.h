#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PredictedMovementComponent {
public:
    // PredictedMovementComponent inner types declare
    // clang-format off
    class HistoryCache;
    class HistoryTimestampData;
    struct PredictionDbgData;
    struct RuntimePredictionData;
    // clang-format on

    // PredictedMovementComponent inner types define
    class HistoryCache {
    public:
        // prevent constructor by default
        HistoryCache& operator=(HistoryCache const&);
        HistoryCache(HistoryCache const&);
        HistoryCache();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?toString@HistoryCache@PredictedMovementComponent@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string toString();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?_clearHistory@HistoryCache@PredictedMovementComponent@@AEAAXXZ
        MCAPI void _clearHistory();

        // NOLINTEND
    };

    class HistoryTimestampData {
    public:
        // prevent constructor by default
        HistoryTimestampData& operator=(HistoryTimestampData const&);
        HistoryTimestampData(HistoryTimestampData const&);
        HistoryTimestampData();

    private:
        // NOLINTBEGIN
        // symbol: ?mSequenceIdGenerator@HistoryTimestampData@PredictedMovementComponent@@0IA
        MCAPI static uint mSequenceIdGenerator;

        // NOLINTEND

        // member accessor
    public:
        // NOLINTBEGIN
        static auto& $mSequenceIdGenerator() { return mSequenceIdGenerator; }

        // NOLINTEND
    };

    struct PredictionDbgData {
    public:
        // prevent constructor by default
        PredictionDbgData& operator=(PredictionDbgData const&);
        PredictionDbgData(PredictionDbgData const&);
        PredictionDbgData();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?toString@PredictionDbgData@PredictedMovementComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string toString() const;

        // symbol: ??1PredictionDbgData@PredictedMovementComponent@@QEAA@XZ
        MCAPI ~PredictionDbgData();

        // NOLINTEND
    };

    struct RuntimePredictionData {
    public:
        // RuntimePredictionData inner types declare
        // clang-format off
        class LerpedInterval;
        // clang-format on

        // RuntimePredictionData inner types define
        class LerpedInterval {
        public:
            // prevent constructor by default
            LerpedInterval& operator=(LerpedInterval const&);
            LerpedInterval(LerpedInterval const&);
            LerpedInterval();

        private:
            // NOLINTBEGIN
            // symbol: ?mMaxTicks@LerpedInterval@RuntimePredictionData@PredictedMovementComponent@@0IB
            MCAPI static uint const mMaxTicks;

            // NOLINTEND

            // member accessor
        public:
            // NOLINTBEGIN
            static auto& $mMaxTicks() { return mMaxTicks; }

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RuntimePredictionData& operator=(RuntimePredictionData const&);
        RuntimePredictionData(RuntimePredictionData const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1RuntimePredictionData@PredictedMovementComponent@@UEAA@XZ
        virtual ~RuntimePredictionData() = default;

        // symbol: ??0RuntimePredictionData@PredictedMovementComponent@@QEAA@XZ
        MCAPI RuntimePredictionData();

        // symbol: ?reset@RuntimePredictionData@PredictedMovementComponent@@QEAAXXZ
        MCAPI void reset();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PredictedMovementComponent& operator=(PredictedMovementComponent const&);
    PredictedMovementComponent(PredictedMovementComponent const&);
    PredictedMovementComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0PredictedMovementComponent@@QEAA@AEAVActor@@@Z
    MCAPI explicit PredictedMovementComponent(class Actor&);

    // symbol: ?isEnabled@PredictedMovementComponent@@QEBA_NXZ
    MCAPI bool isEnabled() const;

    // symbol: ?reset@PredictedMovementComponent@@QEAAXXZ
    MCAPI void reset();

    // symbol:
    // ?tick@PredictedMovementComponent@@QEAAXAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void tick(std::chrono::steady_clock::time_point const&);

    // symbol: ??1PredictedMovementComponent@@QEAA@XZ
    MCAPI ~PredictedMovementComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_debugLog@PredictedMovementComponent@@AEBAXAEBUPredictionDbgData@1@@Z
    MCAPI void _debugLog(struct PredictedMovementComponent::PredictionDbgData const&) const;

    // symbol: ?_isDebugLoggingEnabled@PredictedMovementComponent@@AEBA_NXZ
    MCAPI bool _isDebugLoggingEnabled() const;

    // symbol:
    // ?_tickNextPosition@PredictedMovementComponent@@AEAAXAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void _tickNextPosition(std::chrono::steady_clock::time_point const&);

    // symbol:
    // ?_tryInterpolate@PredictedMovementComponent@@AEAA_NAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool _tryInterpolate(std::chrono::steady_clock::time_point const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?LERP_STEP_SIZE@PredictedMovementComponent@@0IB
    MCAPI static uint const LERP_STEP_SIZE;

    // symbol:
    // ?mGlobalRuntimePredictionData@PredictedMovementComponent@@0V?$unique_ptr@URuntimePredictionData@PredictedMovementComponent@@U?$default_delete@URuntimePredictionData@PredictedMovementComponent@@@std@@@std@@A
    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $LERP_STEP_SIZE() { return LERP_STEP_SIZE; }

    static auto& $mGlobalRuntimePredictionData() { return mGlobalRuntimePredictionData; }

    // NOLINTEND
};
