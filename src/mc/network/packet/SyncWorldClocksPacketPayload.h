#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/network/packet/SyncWorldClockStateData.h"
#include "mc/world/level/clock/TimeMarkerData.h"
#include "mc/world/level/clock/WorldClockData.h"

// auto generated forward declare list
// clang-format off
struct SyncWorldClockStateData;
struct TimeMarkerData;
struct WorldClockData;
// clang-format on

struct SyncWorldClocksPacketPayload {
public:
    // SyncWorldClocksPacketPayload inner types declare
    // clang-format off
    struct AddTimeMarkerData;
    struct InitializeRegistryData;
    struct RemoveTimeMarkerData;
    struct SyncStateData;
    // clang-format on

    // SyncWorldClocksPacketPayload inner types define
    struct AddTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                           mClockId;
        ::ll::TypedStorage<8, 24, ::std::vector<::TimeMarkerData>> mTimeMarkers;
        // NOLINTEND
    };

    struct InitializeRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::WorldClockData>> mClockData;
        // NOLINTEND
    };

    struct RemoveTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                 mClockId;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mTimeMarkerIds;
        // NOLINTEND
    };

    struct SyncStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::SyncWorldClockStateData>> mClockData;
        // NOLINTEND
    };

    using SyncWorldClocksPacketData = ::std::variant<
        ::SyncWorldClocksPacketPayload::SyncStateData,
        ::SyncWorldClocksPacketPayload::InitializeRegistryData,
        ::SyncWorldClocksPacketPayload::AddTimeMarkerData,
        ::SyncWorldClocksPacketPayload::RemoveTimeMarkerData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::SyncWorldClocksPacketPayload::SyncStateData,
            ::SyncWorldClocksPacketPayload::InitializeRegistryData,
            ::SyncWorldClocksPacketPayload::AddTimeMarkerData,
            ::SyncWorldClocksPacketPayload::RemoveTimeMarkerData>>
        mData;
    // NOLINTEND
};
