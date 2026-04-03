#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~AddTimeMarkerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct InitializeRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::WorldClockData>> mClockData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~InitializeRegistryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RemoveTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                 mClockId;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mTimeMarkerIds;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoveTimeMarkerData& operator=(RemoveTimeMarkerData const&);
        RemoveTimeMarkerData(RemoveTimeMarkerData const&);
        RemoveTimeMarkerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SyncWorldClocksPacketPayload::RemoveTimeMarkerData&
        operator=(::SyncWorldClocksPacketPayload::RemoveTimeMarkerData&&);

        MCAPI ~RemoveTimeMarkerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct SyncStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::SyncWorldClockStateData>> mClockData;
        // NOLINTEND

    public:
        // prevent constructor by default
        SyncStateData& operator=(SyncStateData const&);
        SyncStateData(SyncStateData const&);
        SyncStateData();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::SyncWorldClocksPacketPayload::SyncStateData&
        operator=(::SyncWorldClocksPacketPayload::SyncStateData&&);

        MCAPI ~SyncStateData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
