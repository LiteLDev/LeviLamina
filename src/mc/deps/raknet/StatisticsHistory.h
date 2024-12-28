#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StatisticsHistory {
public:
    // StatisticsHistory inner types declare
    // clang-format off
    struct TimeAndValue;
    struct TimeAndValueQueue;
    struct TrackedObject;
    struct TrackedObjectData;
    // clang-format on

    // StatisticsHistory inner types define
    enum class SHErrorCode : int {
        Ok               = 0,
        UknownObject     = 1,
        UknownKey        = 2,
        InvalidParameter = 3,
    };

    enum class SHSortOperation : int {
        DoNotSort                          = 0,
        SortByRecentSumAscending           = 1,
        SortByRecentSumDescending          = 2,
        SortByLongTermSumAscending         = 3,
        SortByLongTermSumDescending        = 4,
        SortByRecentSumOfSquaresAscending  = 5,
        SortByRecentSumOfSquaresDescending = 6,
        SortByRecentAverageAscending       = 7,
        SortByRecentAverageDescending      = 8,
        SortByLongTermAverageAscending     = 9,
        SortByLongTermAverageDescending    = 10,
        SortByRecentHighestAscending       = 11,
        SortByRecentHighestDescending      = 12,
        SortByRecentLowestAscending        = 13,
        SortByRecentLowestDescending       = 14,
        SortByLongTermHighestAscending     = 15,
        SortByLongTermHighestDescending    = 16,
        SortByLongTermLowestAscending      = 17,
        SortByLongTermLowestDescending     = 18,
    };

    enum class SHDataCategory : int {
        Discrete   = 0,
        Continuous = 1,
    };

    struct TimeAndValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkad983b;
        ::ll::UntypedStorage<8, 8> mUnk8772bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeAndValue& operator=(TimeAndValue const&);
        TimeAndValue(TimeAndValue const&);
        TimeAndValue();
    };

    struct TimeAndValueQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk1c5e51;
        ::ll::UntypedStorage<8, 8>  mUnkb5853a;
        ::ll::UntypedStorage<8, 8>  mUnk135809;
        ::ll::UntypedStorage<8, 8>  mUnk13803d;
        ::ll::UntypedStorage<8, 8>  mUnk647c66;
        ::ll::UntypedStorage<8, 8>  mUnk4e4bba;
        ::ll::UntypedStorage<8, 8>  mUnkdcb95f;
        ::ll::UntypedStorage<8, 8>  mUnk8aa776;
        ::ll::UntypedStorage<8, 8>  mUnkb37d56;
        ::ll::UntypedStorage<8, 8>  mUnka6bf59;
        // NOLINTEND

    public:
        // prevent constructor by default
        TimeAndValueQueue& operator=(TimeAndValueQueue const&);
        TimeAndValueQueue(TimeAndValueQueue const&);
        TimeAndValueQueue();
    };

    struct TrackedObjectData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5c89ed;
        ::ll::UntypedStorage<4, 4> mUnk70dedd;
        ::ll::UntypedStorage<8, 8> mUnk599f02;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackedObjectData& operator=(TrackedObjectData const&);
        TrackedObjectData(TrackedObjectData const&);
        TrackedObjectData();
    };

    struct TrackedObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk158e8b;
        ::ll::UntypedStorage<8, 16> mUnk36d86c;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackedObject& operator=(TrackedObject const&);
        TrackedObject(TrackedObject const&);
        TrackedObject();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk710e99;
    ::ll::UntypedStorage<8, 8>  mUnkb5f4a4;
    // NOLINTEND

public:
    // prevent constructor by default
    StatisticsHistory& operator=(StatisticsHistory const&);
    StatisticsHistory(StatisticsHistory const&);
    StatisticsHistory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StatisticsHistory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
