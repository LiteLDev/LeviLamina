/**
 * @file  MC/PredictedMovementComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PredictedMovementComponent.
 *
 */
class PredictedMovementComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct RuntimePredictionData {
    RuntimePredictionData() = delete;
    RuntimePredictionData(RuntimePredictionData const&) = delete;
    RuntimePredictionData(RuntimePredictionData const&&) = delete;
};
struct PredictionDbgData {
    PredictionDbgData() = delete;
    PredictionDbgData(PredictionDbgData const&) = delete;
    PredictionDbgData(PredictionDbgData const&&) = delete;
};
struct HistoryItem {
    HistoryItem() = delete;
    HistoryItem(HistoryItem const&) = delete;
    HistoryItem(HistoryItem const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTCOMPONENT
public:
    class PredictedMovementComponent& operator=(class PredictedMovementComponent const &) = delete;
    PredictedMovementComponent(class PredictedMovementComponent const &) = delete;
    PredictedMovementComponent() = delete;
#endif

public:
    /**
     * @hash   1752069421
     * @symbol ??0PredictedMovementComponent@@QEAA@AEAVActor@@@Z
     */
    MCAPI PredictedMovementComponent(class Actor &);
    /**
     * @hash   1985307522
     * @symbol ?isEnabled@PredictedMovementComponent@@QEBA_NXZ
     */
    MCAPI bool isEnabled() const;
    /**
     * @hash   1773940467
     * @symbol ?reset@PredictedMovementComponent@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   1034480201
     * @symbol ?tick@PredictedMovementComponent@@QEAAXAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI void tick(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const &);
    /**
     * @hash   -432740240
     * @symbol ??1PredictedMovementComponent@@QEAA@XZ
     */
    MCAPI ~PredictedMovementComponent();

//private:
    /**
     * @hash   377306471
     * @symbol ?_debugLog@PredictedMovementComponent@@AEBAXAEBUPredictionDbgData@1@@Z
     */
    MCAPI void _debugLog(struct PredictedMovementComponent::PredictionDbgData const &) const;
    /**
     * @hash   -93440485
     * @symbol ?_isDebugLoggingEnabled@PredictedMovementComponent@@AEBA_NXZ
     */
    MCAPI bool _isDebugLoggingEnabled() const;
    /**
     * @hash   1882518889
     * @symbol ?_tickNextPosition@PredictedMovementComponent@@AEAAXAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI void _tickNextPosition(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const &);
    /**
     * @hash   1126987538
     * @symbol ?_tryInterpolate@PredictedMovementComponent@@AEAA_NAEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
     */
    MCAPI bool _tryInterpolate(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> const &);

private:
    /**
     * @hash   -1523864635
     * @symbol ?LERP_STEP_SIZE@PredictedMovementComponent@@0IB
     */
    MCAPI static unsigned int const LERP_STEP_SIZE;
    /**
     * @hash   643460776
     * @symbol ?mGlobalRuntimePredictionData@PredictedMovementComponent@@0V?$unique_ptr@URuntimePredictionData@PredictedMovementComponent@@U?$default_delete@URuntimePredictionData@PredictedMovementComponent@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;

};