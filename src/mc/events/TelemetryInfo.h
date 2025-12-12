#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e8caf;
    ::ll::UntypedStorage<8, 24> mUnk98f41a;
    ::ll::UntypedStorage<8, 32> mUnkbfaeca;
    ::ll::UntypedStorage<4, 4>  mUnkdac95a;
    ::ll::UntypedStorage<1, 1>  mUnkd37089;
    ::ll::UntypedStorage<1, 1>  mUnkaee5ec;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryInfo& operator=(TelemetryInfo const&);
    TelemetryInfo(TelemetryInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C TelemetryInfo();

    MCNAPI_C void _detectTampering();

    MCNAPI_C ::std::string _generateTamperGuard(::std::string const& content) const;

    MCNAPI_C void _load();

    MCNAPI_C void _save();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND
};
