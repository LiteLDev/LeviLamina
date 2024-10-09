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
        // vIndex: 0
        virtual ~HistoryItem();

        // vIndex: 1
        virtual bool isValidStartItem() const = 0;

        // vIndex: 2
        virtual bool isAddedActorItem() const = 0;

        // vIndex: 3
        virtual bool isMotionHintItem() const = 0;

        // vIndex: 4
        virtual std::string toString() const;

        // vIndex: 5
        virtual class Vec3 const& getPos() const = 0;

        // vIndex: 6
        virtual class Vec2 const& getRot() const = 0;

        // vIndex: 7
        virtual float getYHeadRot() const = 0;

        // vIndex: 8
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
        MCAPI void addHistory(
            class MoveActorAbsoluteData const&           moveData,
            std::chrono::steady_clock::time_point const& receiveTimepoint
        );

        MCAPI std::string toString();

        MCAPI ~HistoryCache();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        MCAPI void _addHistoryItem(std::shared_ptr<struct PredictedMovementComponent::HistoryItem const> const& item);

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
        // vIndex: 0
        virtual ~MoveHistoryItem() = default;

        // vIndex: 1
        virtual bool isValidStartItem() const;

        // vIndex: 2
        virtual bool isAddedActorItem() const;

        // vIndex: 3
        virtual bool isMotionHintItem() const;

        // vIndex: 5
        virtual class Vec3 const& getPos() const;

        // vIndex: 6
        virtual class Vec2 const& getRot() const;

        // vIndex: 7
        virtual float getYHeadRot() const;

        // vIndex: 8
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
        MCAPI std::string toString() const;

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
            MCAPI static uint const mMaxTicks;

            // NOLINTEND
        };

    public:
        // prevent constructor by default
        RuntimePredictionData& operator=(RuntimePredictionData const&);
        RuntimePredictionData(RuntimePredictionData const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RuntimePredictionData() = default;

        MCAPI RuntimePredictionData();

        MCAPI void reset();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PredictedMovementComponent& operator=(PredictedMovementComponent const&);
    PredictedMovementComponent(PredictedMovementComponent const&);

public:
    // NOLINTBEGIN
    MCAPI PredictedMovementComponent();

    MCAPI void reset();

    MCAPI void tickNextPosition(
        struct PredictedMovementSystemParams&        params,
        std::chrono::steady_clock::time_point const& timepoint
    );

    MCAPI static uint const LERP_STEP_SIZE;

    MCAPI static std::unique_ptr<struct PredictedMovementComponent::RuntimePredictionData> mGlobalRuntimePredictionData;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _debugLog(
        struct PredictedMovementSystemParams&                       params,
        struct PredictedMovementComponent::PredictionDbgData const& debugData
    ) const;

    MCAPI bool _tryInterpolate(
        struct PredictedMovementSystemParams&        params,
        std::chrono::steady_clock::time_point const& renderTimepoint
    );

    // NOLINTEND
};
