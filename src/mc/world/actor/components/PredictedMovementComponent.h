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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT_HISTORYCACHE
    public:
        HistoryCache& operator=(HistoryCache const&) = delete;
        HistoryCache(HistoryCache const&)            = delete;
        HistoryCache()                               = delete;
#endif

    public:
        /**
         * @symbol
         * ?toString\@HistoryCache\@PredictedMovementComponent\@\@QEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string toString();

        // private:
        /**
         * @symbol ?_clearHistory\@HistoryCache\@PredictedMovementComponent\@\@AEAAXXZ
         */
        MCAPI void _clearHistory();

    private:
    };

    class HistoryTimestampData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT_HISTORYTIMESTAMPDATA
    public:
        HistoryTimestampData& operator=(HistoryTimestampData const&) = delete;
        HistoryTimestampData(HistoryTimestampData const&)            = delete;
        HistoryTimestampData()                                       = delete;
#endif

    public:
        // private:

    private:
        /**
         * @symbol ?mSequenceIdGenerator\@HistoryTimestampData\@PredictedMovementComponent\@\@0IA
         */
        MCAPI static unsigned int mSequenceIdGenerator;
    };

    struct PredictionDbgData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT_PREDICTIONDBGDATA
    public:
        PredictionDbgData& operator=(PredictionDbgData const&) = delete;
        PredictionDbgData(PredictionDbgData const&)            = delete;
        PredictionDbgData()                                    = delete;
#endif

    public:
        /**
         * @symbol
         * ?toString\@PredictionDbgData\@PredictedMovementComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
         */
        MCAPI std::string toString() const;
        /**
         * @symbol ??1PredictionDbgData\@PredictedMovementComponent\@\@QEAA\@XZ
         */
        MCAPI ~PredictionDbgData();
    };

    struct RuntimePredictionData {
    public:
        // RuntimePredictionData inner types declare
        // clang-format off
        class LerpedInterval;
        // clang-format on

        // RuntimePredictionData inner types define
        class LerpedInterval {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT_RUNTIMEPREDICTIONDATA_LERPEDINTERVAL
        public:
            LerpedInterval& operator=(LerpedInterval const&) = delete;
            LerpedInterval(LerpedInterval const&)            = delete;
            LerpedInterval()                                 = delete;
#endif

        public:
            // private:

        private:
            /**
             * @symbol ?mMaxTicks\@LerpedInterval\@RuntimePredictionData\@PredictedMovementComponent\@\@0IB
             */
            MCAPI static unsigned int const mMaxTicks;
        };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT_RUNTIMEPREDICTIONDATA
    public:
        RuntimePredictionData& operator=(RuntimePredictionData const&) = delete;
        RuntimePredictionData(RuntimePredictionData const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0RuntimePredictionData\@PredictedMovementComponent\@\@QEAA\@XZ
         */
        MCAPI RuntimePredictionData();
        /**
         * @symbol ?reset\@RuntimePredictionData\@PredictedMovementComponent\@\@QEAAXXZ
         */
        MCAPI void reset();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT
public:
    PredictedMovementComponent& operator=(PredictedMovementComponent const&) = delete;
    PredictedMovementComponent(PredictedMovementComponent const&)            = delete;
    PredictedMovementComponent()                                             = delete;
#endif

public:
    /**
     * @symbol ??0PredictedMovementComponent\@\@QEAA\@AEAVActor\@\@\@Z
     */
    MCAPI PredictedMovementComponent(class Actor&);
    /**
     * @symbol ?isEnabled\@PredictedMovementComponent\@\@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @symbol ?reset\@PredictedMovementComponent\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol
     * ?tick\@PredictedMovementComponent\@\@QEAAXAEBV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void tick(class std::chrono::time_point<
                    struct std::chrono::steady_clock,
                    class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const&);
    /**
     * @symbol ??1PredictedMovementComponent\@\@QEAA\@XZ
     */
    MCAPI ~PredictedMovementComponent();

    // private:
    /**
     * @symbol ?_debugLog\@PredictedMovementComponent\@\@AEBAXAEBUPredictionDbgData\@1\@\@Z
     */
    MCAPI void _debugLog(struct PredictedMovementComponent::PredictionDbgData const&) const;
    /**
     * @symbol ?_isDebugLoggingEnabled\@PredictedMovementComponent\@\@AEBA_NXZ
     */
    MCAPI bool _isDebugLoggingEnabled() const;
    /**
     * @symbol
     * ?_tickNextPosition\@PredictedMovementComponent\@\@AEAAXAEBV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void _tickNextPosition(class std::chrono::time_point<
                                 struct std::chrono::steady_clock,
                                 class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const&);
    /**
     * @symbol
     * ?_tryInterpolate\@PredictedMovementComponent\@\@AEAA_NAEBV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool _tryInterpolate(class std::chrono::time_point<
                               struct std::chrono::steady_clock,
                               class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const&);

private:
    /**
     * @symbol ?LERP_STEP_SIZE\@PredictedMovementComponent\@\@0IB
     */
    MCAPI static unsigned int const LERP_STEP_SIZE;
    /**
     * @symbol
     * ?mGlobalRuntimePredictionData\@PredictedMovementComponent\@\@0V?$unique_ptr\@URuntimePredictionData\@PredictedMovementComponent\@\@U?$default_delete\@URuntimePredictionData\@PredictedMovementComponent\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;
};
