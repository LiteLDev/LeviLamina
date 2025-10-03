#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace DataStructures { class OrderedList; }
// clang-format on

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
        ::ll::TypedStorage<8, 8, uint64> time;
        ::ll::TypedStorage<8, 8, double> val;
        // NOLINTEND
    };

    struct TimeAndValueQueue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::StatisticsHistory::TimeAndValue>> values;
        ::ll::TypedStorage<8, 8, uint64>                                                              timeToTrackValues;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                                 key;
        ::ll::TypedStorage<8, 8, double>                                                              recentSum;
        ::ll::TypedStorage<8, 8, double> recentSumOfSquares;
        ::ll::TypedStorage<8, 8, double> longTermSum;
        ::ll::TypedStorage<8, 8, double> longTermCount;
        ::ll::TypedStorage<8, 8, double> longTermLowest;
        ::ll::TypedStorage<8, 8, double> longTermHighest;
        ::ll::TypedStorage<8, 8, double> sortValue;
        // NOLINTEND
    };

    struct TrackedObjectData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> objectId;
        ::ll::TypedStorage<4, 4, int>    objectType;
        ::ll::TypedStorage<8, 8, void*>  userData;
        // NOLINTEND
    };

    struct TrackedObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::RakNet::StatisticsHistory::TrackedObjectData> trackedObjectData;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::
                Hash<::RakNet::RakString, ::RakNet::StatisticsHistory::TimeAndValueQueue*, 32, $unknown_type>>
            dataQueues;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<uint64, ::RakNet::StatisticsHistory::TrackedObject*, $unknown_type>>
                                     objects;
    ::ll::TypedStorage<8, 8, uint64> timeToTrack;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StatisticsHistory() = default;
    // NOLINTEND
};

} // namespace RakNet
