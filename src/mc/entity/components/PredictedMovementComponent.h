#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MovePredictionType.h"

// auto generated forward declare list
// clang-format off
class MoveActorAbsoluteData;
class Vec2;
class Vec3;
struct PredictedMovementSystemParams;
// clang-format on

class PredictedMovementComponent {
public:
    // PredictedMovementComponent inner types declare
    // clang-format off
    class HistoryCache;
    struct HistoryItem;
    struct HistoryTimestampData;
    struct MotionHistoryItem;
    struct MoveHistoryItem;
    struct PredictionDbgData;
    struct PredictionDbgWindowData;
    struct RuntimePredictionData;
    // clang-format on

    // PredictedMovementComponent inner types define
    struct HistoryItem {
    public:
        // HistoryItem inner types define
        enum class ItemType : int {
            Motion = 0,
            Move   = 1,
            Max    = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk6b77a7;
        ::ll::UntypedStorage<4, 4>  mUnk67f84b;
        ::ll::UntypedStorage<1, 1>  mUnke37de6;
        // NOLINTEND

    public:
        // prevent constructor by default
        HistoryItem& operator=(HistoryItem const&);
        HistoryItem(HistoryItem const&);
        HistoryItem();

    public:
        // virtual functions
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
        virtual ::std::string toString() const;

        // vIndex: 5
        virtual ::Vec3 const& getPos() const = 0;

        // vIndex: 6
        virtual ::Vec2 const& getRot() const = 0;

        // vIndex: 7
        virtual float getYHeadRot() const = 0;

        // vIndex: 8
        virtual bool isOnGround() const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::string $toString() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct MoveHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkf7e85b;
        ::ll::UntypedStorage<4, 8>  mUnk188a45;
        ::ll::UntypedStorage<4, 4>  mUnk4ca4c2;
        ::ll::UntypedStorage<1, 1>  mUnk262622;
        ::ll::UntypedStorage<1, 1>  mUnk1dbcf5;
        // NOLINTEND

    public:
        // prevent constructor by default
        MoveHistoryItem& operator=(MoveHistoryItem const&);
        MoveHistoryItem(MoveHistoryItem const&);
        MoveHistoryItem();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual bool isValidStartItem() const /*override*/;

        // vIndex: 2
        virtual bool isAddedActorItem() const /*override*/;

        // vIndex: 3
        virtual bool isMotionHintItem() const /*override*/;

        // vIndex: 5
        virtual ::Vec3 const& getPos() const /*override*/;

        // vIndex: 6
        virtual ::Vec2 const& getRot() const /*override*/;

        // vIndex: 7
        virtual float getYHeadRot() const /*override*/;

        // vIndex: 8
        virtual bool isOnGround() const /*override*/;

        // vIndex: 0
        virtual ~MoveHistoryItem() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $isValidStartItem() const;

        MCAPI bool $isAddedActorItem() const;

        MCAPI bool $isMotionHintItem() const;

        MCAPI ::Vec3 const& $getPos() const;

        MCAPI ::Vec2 const& $getRot() const;

        MCAPI float $getYHeadRot() const;

        MCAPI bool $isOnGround() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct MotionHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkeba6ba;
        ::ll::UntypedStorage<4, 12> mUnka8087d;
        ::ll::UntypedStorage<1, 1>  mUnkd62109;
        ::ll::UntypedStorage<4, 12> mUnk391ca0;
        ::ll::UntypedStorage<4, 8>  mUnkccd7ff;
        ::ll::UntypedStorage<4, 4>  mUnk131d7f;
        ::ll::UntypedStorage<1, 1>  mUnkeea86e;
        ::ll::UntypedStorage<1, 1>  mUnk3bfc51;
        ::ll::UntypedStorage<1, 1>  mUnk766402;
        // NOLINTEND

    public:
        // prevent constructor by default
        MotionHistoryItem& operator=(MotionHistoryItem const&);
        MotionHistoryItem(MotionHistoryItem const&);
        MotionHistoryItem();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual bool isValidStartItem() const /*override*/;

        // vIndex: 2
        virtual bool isAddedActorItem() const /*override*/;

        // vIndex: 3
        virtual bool isMotionHintItem() const /*override*/;

        // vIndex: 5
        virtual ::Vec3 const& getPos() const /*override*/;

        // vIndex: 6
        virtual ::Vec2 const& getRot() const /*override*/;

        // vIndex: 7
        virtual float getYHeadRot() const /*override*/;

        // vIndex: 8
        virtual bool isOnGround() const /*override*/;

        // vIndex: 0
        virtual ~MotionHistoryItem() /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI bool $isValidStartItem() const;

        MCAPI bool $isAddedActorItem() const;

        MCAPI bool $isMotionHintItem() const;

        MCAPI ::Vec3 const& $getPos() const;

        MCAPI ::Vec2 const& $getRot() const;

        MCAPI float $getYHeadRot() const;

        MCAPI bool $isOnGround() const;
        // NOLINTEND
    };

    struct HistoryTimestampData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcc9bee;
        ::ll::UntypedStorage<8, 8> mUnk4baf21;
        ::ll::UntypedStorage<4, 4> mUnk274cb5;
        // NOLINTEND

    public:
        // prevent constructor by default
        HistoryTimestampData& operator=(HistoryTimestampData const&);
        HistoryTimestampData(HistoryTimestampData const&);
        HistoryTimestampData();

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static uint& mSequenceIdGenerator();
        // NOLINTEND
    };

    class HistoryCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk28e59b;
        ::ll::UntypedStorage<8, 16> mUnk468c22;
        ::ll::UntypedStorage<8, 16> mUnk93cee2;
        ::ll::UntypedStorage<8, 40> mUnk52177c;
        // NOLINTEND

    public:
        // prevent constructor by default
        HistoryCache& operator=(HistoryCache const&);
        HistoryCache(HistoryCache const&);
        HistoryCache();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _addHistoryItem(::std::shared_ptr<::PredictedMovementComponent::HistoryItem const> const& item);

        MCAPI void _clearHistory();

        MCAPI void addHistory(
            ::MoveActorAbsoluteData const&                 moveData,
            ::std::chrono::steady_clock::time_point const& receiveTimepoint
        );

        MCAPI ::std::string toString();

        MCAPI ~HistoryCache();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RuntimePredictionData {
    public:
        // RuntimePredictionData inner types declare
        // clang-format off
        struct LerpedInterval;
        // clang-format on

        // RuntimePredictionData inner types define
        struct LerpedInterval {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8> mUnk250c8c;
            ::ll::UntypedStorage<8, 8> mUnk83704d;
            ::ll::UntypedStorage<8, 8> mUnkebc783;
            ::ll::UntypedStorage<4, 4> mUnk32a0c2;
            // NOLINTEND

        public:
            // prevent constructor by default
            LerpedInterval& operator=(LerpedInterval const&);
            LerpedInterval(LerpedInterval const&);
            LerpedInterval();

        public:
            // static variables
            // NOLINTBEGIN
            MCAPI static uint const& mMaxTicks();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk961a6a;
        ::ll::UntypedStorage<8, 8>  mUnk44eafe;
        ::ll::UntypedStorage<8, 8>  mUnkbc15c5;
        ::ll::UntypedStorage<8, 8>  mUnk39a977;
        ::ll::UntypedStorage<8, 8>  mUnke72963;
        ::ll::UntypedStorage<8, 8>  mUnkbcf454;
        ::ll::UntypedStorage<8, 32> mUnk628c63;
        ::ll::UntypedStorage<8, 32> mUnk88c081;
        ::ll::UntypedStorage<8, 32> mUnk9ae460;
        ::ll::UntypedStorage<8, 8>  mUnk3fa1bb;
        ::ll::UntypedStorage<4, 28> mUnk38ab66;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimePredictionData& operator=(RuntimePredictionData const&);
        RuntimePredictionData(RuntimePredictionData const&);
        RuntimePredictionData();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RuntimePredictionData();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void reset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct PredictionDbgWindowData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1bec46;
        ::ll::UntypedStorage<4, 4> mUnk5f7d88;
        ::ll::UntypedStorage<8, 8> mUnkbb01d3;
        ::ll::UntypedStorage<8, 8> mUnkdb9862;
        ::ll::UntypedStorage<8, 8> mUnk889cf1;
        ::ll::UntypedStorage<8, 8> mUnk3caed8;
        ::ll::UntypedStorage<1, 1> mUnkf1656b;
        ::ll::UntypedStorage<1, 1> mUnke49c54;
        ::ll::UntypedStorage<1, 1> mUnka3765f;
        ::ll::UntypedStorage<1, 1> mUnk83f21d;
        ::ll::UntypedStorage<1, 1> mUnk1a88fd;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictionDbgWindowData& operator=(PredictionDbgWindowData const&);
        PredictionDbgWindowData(PredictionDbgWindowData const&);
        PredictionDbgWindowData();
    };

    struct PredictionDbgData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk90f739;
        ::ll::UntypedStorage<8, 16> mUnke2b404;
        ::ll::UntypedStorage<8, 16> mUnk933330;
        ::ll::UntypedStorage<4, 12> mUnkd3d419;
        ::ll::UntypedStorage<4, 4>  mUnk683f16;
        ::ll::UntypedStorage<8, 56> mUnkc64f79;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictionDbgData& operator=(PredictionDbgData const&);
        PredictionDbgData(PredictionDbgData const&);
        PredictionDbgData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::std::string toString() const;

        MCAPI ~PredictionDbgData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk298ee1;
    ::ll::UntypedStorage<8, 8>  mUnkdb73d4;
    ::ll::UntypedStorage<8, 16> mUnk2a8dac;
    ::ll::UntypedStorage<8, 16> mUnkb7e1c1;
    ::ll::UntypedStorage<8, 8>  mUnk38f40d;
    ::ll::UntypedStorage<1, 1>  mUnkabe8c3;
    ::ll::UntypedStorage<1, 1>  mUnk54c36b;
    ::ll::UntypedStorage<4, 4>  mUnk644a6d;
    ::ll::UntypedStorage<8, 64> mUnk27b476;
    ::ll::UntypedStorage<8, 16> mUnk81e165;
    // NOLINTEND

public:
    // prevent constructor by default
    PredictedMovementComponent& operator=(PredictedMovementComponent const&);
    PredictedMovementComponent(PredictedMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PredictedMovementComponent();

    MCAPI void _debugLog(
        ::PredictedMovementSystemParams&                       params,
        ::PredictedMovementComponent::PredictionDbgData const& debugData
    ) const;

    MCAPI bool _tryInterpolate(
        ::PredictedMovementSystemParams&               params,
        ::std::chrono::steady_clock::time_point const& renderTimepoint
    );

    MCAPI void reset();

    MCAPI void
    tickNextPosition(::PredictedMovementSystemParams& params, ::std::chrono::steady_clock::time_point const& timepoint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& LERP_STEP_SIZE();

    MCAPI static ::std::unique_ptr<::PredictedMovementComponent::RuntimePredictionData>& mGlobalRuntimePredictionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
