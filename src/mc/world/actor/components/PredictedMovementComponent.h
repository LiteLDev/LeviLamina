#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PredictedMovementComponent {
public:
    // PredictedMovementComponent inner types declare
    // clang-format off
    struct HistoryItem;
    class HistoryCache;
    class HistoryTimestampData;
    struct MoveHistoryItem;
    struct PredictionDbgData;
    struct RuntimePredictionData;
    // clang-format on

    // PredictedMovementComponent inner types define
    struct HistoryItem {
    public:
        // prevent constructor by default
        HistoryItem& operator=(HistoryItem const&);
        HistoryItem(HistoryItem const&);
        HistoryItem();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1HistoryItem@PredictedMovementComponent@@UEAA@XZ
        virtual ~HistoryItem();

        // vIndex: 1, symbol: ?isValidStartItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isValidStartItem() const = 0;

        // vIndex: 2, symbol: ?isAddedActorItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isAddedActorItem() const = 0;

        // vIndex: 3, symbol: ?isMotionHintItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isMotionHintItem() const = 0;

        // vIndex: 4, symbol:
        // ?toString@HistoryItem@PredictedMovementComponent@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        virtual std::string toString() const;

        // vIndex: 5, symbol: ?getPos@MoveHistoryItem@PredictedMovementComponent@@UEBAAEBVVec3@@XZ
        virtual class Vec3 const& getPos() const = 0;

        // vIndex: 6, symbol: ?getRot@MoveHistoryItem@PredictedMovementComponent@@UEBAAEBVVec2@@XZ
        virtual class Vec2 const& getRot() const = 0;

        // vIndex: 7, symbol: ?getYHeadRot@MoveHistoryItem@PredictedMovementComponent@@UEBAMXZ
        virtual float getYHeadRot() const = 0;

        // vIndex: 8, symbol: ?isOnGround@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isOnGround() const = 0;

        // NOLINTEND
    };

    class HistoryCache {
    public:
        // prevent constructor by default
        HistoryCache& operator=(HistoryCache const&);
        HistoryCache(HistoryCache const&);
        HistoryCache();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?addHistory@HistoryCache@PredictedMovementComponent@@QEAAXAEBVMoveActorAbsoluteData@@AEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
        MCAPI void addHistory(class MoveActorAbsoluteData const&, std::chrono::steady_clock::time_point const&);

        // symbol:
        // ?toString@HistoryCache@PredictedMovementComponent@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
        MCAPI std::string toString();

        // symbol: ??1HistoryCache@PredictedMovementComponent@@QEAA@XZ
        MCAPI ~HistoryCache();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?_addHistoryItem@HistoryCache@PredictedMovementComponent@@AEAAXAEBV?$shared_ptr@$$CBUHistoryItem@PredictedMovementComponent@@@std@@@Z
        MCAPI void _addHistoryItem(std::shared_ptr<struct PredictedMovementComponent::HistoryItem const> const& item);

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

        // private:
        // NOLINTBEGIN
        // symbol: ?mSequenceIdGenerator@HistoryTimestampData@PredictedMovementComponent@@0IA
        MCAPI static uint mSequenceIdGenerator;

        // NOLINTEND
    };

    struct MoveHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // prevent constructor by default
        MoveHistoryItem& operator=(MoveHistoryItem const&);
        MoveHistoryItem(MoveHistoryItem const&);
        MoveHistoryItem();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1MoveHistoryItem@PredictedMovementComponent@@UEAA@XZ
        virtual ~MoveHistoryItem() = default;

        // vIndex: 1, symbol: ?isValidStartItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isValidStartItem() const;

        // vIndex: 2, symbol: ?isAddedActorItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isAddedActorItem() const;

        // vIndex: 3, symbol: ?isMotionHintItem@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isMotionHintItem() const;

        // vIndex: 5, symbol: ?getPos@MoveHistoryItem@PredictedMovementComponent@@UEBAAEBVVec3@@XZ
        virtual class Vec3 const& getPos() const;

        // vIndex: 6, symbol: ?getRot@MoveHistoryItem@PredictedMovementComponent@@UEBAAEBVVec2@@XZ
        virtual class Vec2 const& getRot() const;

        // vIndex: 7, symbol: ?getYHeadRot@MoveHistoryItem@PredictedMovementComponent@@UEBAMXZ
        virtual float getYHeadRot() const;

        // vIndex: 8, symbol: ?isOnGround@MoveHistoryItem@PredictedMovementComponent@@UEBA_NXZ
        virtual bool isOnGround() const;

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

            // private:
            // NOLINTBEGIN
            // symbol: ?mMaxTicks@LerpedInterval@RuntimePredictionData@PredictedMovementComponent@@0IB
            MCAPI static uint const mMaxTicks;

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

public:
    // NOLINTBEGIN
    // symbol: ??0PredictedMovementComponent@@QEAA@XZ
    MCAPI PredictedMovementComponent();

    // symbol: ?reset@PredictedMovementComponent@@QEAAXXZ
    MCAPI void reset();

    // symbol:
    // ?tickNextPosition@PredictedMovementComponent@@QEAAXAEAUPredictedMovementSystemParams@@AEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI void tickNextPosition(struct PredictedMovementSystemParams&, std::chrono::steady_clock::time_point const&);

    // symbol: ?LERP_STEP_SIZE@PredictedMovementComponent@@2IB
    MCAPI static uint const LERP_STEP_SIZE;

    // symbol:
    // ?mGlobalRuntimePredictionData@PredictedMovementComponent@@2V?$unique_ptr@URuntimePredictionData@PredictedMovementComponent@@U?$default_delete@URuntimePredictionData@PredictedMovementComponent@@@std@@@std@@A
    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_debugLog@PredictedMovementComponent@@AEBAXAEAUPredictedMovementSystemParams@@AEBUPredictionDbgData@1@@Z
    MCAPI void
    _debugLog(struct PredictedMovementSystemParams&, struct PredictedMovementComponent::PredictionDbgData const&) const;

    // symbol:
    // ?_tryInterpolate@PredictedMovementComponent@@AEAA_NAEAUPredictedMovementSystemParams@@AEBV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@Z
    MCAPI bool _tryInterpolate(struct PredictedMovementSystemParams&, std::chrono::steady_clock::time_point const&);

    // NOLINTEND
};
