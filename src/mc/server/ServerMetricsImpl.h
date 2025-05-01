#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/ServerMetrics.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

class ServerMetricsImpl : public ::ServerMetrics {
public:
    // ServerMetricsImpl inner types declare
    // clang-format off
    struct DataTransferred;
    // clang-format on

    // ServerMetricsImpl inner types define
    struct DataTransferred {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6f732d;
        ::ll::UntypedStorage<8, 8> mUnk7d4a71;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataTransferred& operator=(DataTransferred const&);
        DataTransferred(DataTransferred const&);
        DataTransferred();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnke1d394;
    ::ll::UntypedStorage<8, 64>  mUnka9d3a6;
    ::ll::UntypedStorage<8, 8>   mUnk6262f1;
    ::ll::UntypedStorage<1, 1>   mUnk2cff8a;
    ::ll::UntypedStorage<8, 616> mUnkd52975;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&);
    ServerMetricsImpl(ServerMetricsImpl const&);
    ServerMetricsImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMetricsImpl() /*override*/ = default;

    // vIndex: 1
    virtual void sendPeriodicMetrics(::ServerInstance& serverInstance) /*override*/;

    // vIndex: 2
    virtual void sendServerTickTime(::std::chrono::nanoseconds const& timepoint) /*override*/;

    // vIndex: 3
    virtual void sendChunkLoadTelemetryData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void sendPeriodicMetricsInternal(::ServerInstance& serverInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $sendPeriodicMetrics(::ServerInstance& serverInstance);

    MCNAPI void $sendServerTickTime(::std::chrono::nanoseconds const& timepoint);

    MCNAPI void $sendChunkLoadTelemetryData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
