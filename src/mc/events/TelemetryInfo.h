#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5e8caf;
    ::ll::UntypedStorage<8, 24> mUnk98f41a;
    ::ll::UntypedStorage<8, 32> mUnk31c3b4;
    ::ll::UntypedStorage<4, 4>  mUnkdac95a;
    ::ll::UntypedStorage<1, 1>  mUnkd37089;
    ::ll::UntypedStorage<1, 1>  mUnkaee5ec;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    TelemetryInfo& operator=(TelemetryInfo const&);
    TelemetryInfo(TelemetryInfo const&);
    TelemetryInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    TelemetryInfo& operator=(TelemetryInfo const&);
    TelemetryInfo(TelemetryInfo const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TelemetryInfo();

    MCNAPI void _detectTampering();

    MCNAPI ::std::string _generateTamperGuard(::std::string const& content) const;

    MCNAPI void _load();

    MCNAPI void _save();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
