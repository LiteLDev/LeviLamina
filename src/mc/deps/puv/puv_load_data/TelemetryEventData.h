#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PuvLoadData { struct LoadResultWithTiming; }
// clang-format on

namespace PuvLoadData {

struct TelemetryEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc211a5;
    ::ll::UntypedStorage<8, 8>  mUnkb7a9fd;
    ::ll::UntypedStorage<8, 8>  mUnk8d9bcc;
    ::ll::UntypedStorage<8, 8>  mUnkc69752;
    ::ll::UntypedStorage<8, 8>  mUnk88f998;
    ::ll::UntypedStorage<8, 8>  mUnk6ff321;
    ::ll::UntypedStorage<8, 8>  mUnkd6cea3;
    ::ll::UntypedStorage<8, 8>  mUnk595b64;
    ::ll::UntypedStorage<8, 8>  mUnke46294;
    ::ll::UntypedStorage<8, 8>  mUnk2cb9d8;
    ::ll::UntypedStorage<8, 8>  mUnk7559d0;
    ::ll::UntypedStorage<8, 8>  mUnk6c442c;
    ::ll::UntypedStorage<8, 8>  mUnk552fee;
    ::ll::UntypedStorage<8, 8>  mUnk7accdc;
    ::ll::UntypedStorage<8, 8>  mUnkad04a2;
    ::ll::UntypedStorage<8, 8>  mUnkbf6cb6;
    ::ll::UntypedStorage<8, 8>  mUnk554b1a;
    ::ll::UntypedStorage<8, 8>  mUnk797556;
    ::ll::UntypedStorage<4, 4>  mUnka28486;
    ::ll::UntypedStorage<8, 64> mUnk4e0021;
    ::ll::UntypedStorage<8, 24> mUnk6402cc;
    ::ll::UntypedStorage<8, 24> mUnk8f7128;
    ::ll::UntypedStorage<8, 24> mUnk9fc0a8;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryEventData& operator=(TelemetryEventData const&);
    TelemetryEventData(TelemetryEventData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TelemetryEventData();

    MCNAPI void _calculatePuvStepStats(
        ::std::vector<double>& times,
        double&                min,
        double&                max,
        double&                p50,
        double&                p95,
        double&                deviation
    );

    MCNAPI void addLoadTime(::PuvLoadData::LoadResultWithTiming const& loadTime);

    MCNAPI_C void tryAddPackName(::std::string const& packName);

    MCNAPI ~TelemetryEventData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PuvLoadData
