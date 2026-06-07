#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpFrameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd9e800;
    ::ll::UntypedStorage<4, 4> mUnk60a3ee;
    ::ll::UntypedStorage<8, 8> mUnk15745b;
    ::ll::UntypedStorage<4, 4> mUnk957c6e;
    ::ll::UntypedStorage<4, 4> mUnk7ef28a;
    ::ll::UntypedStorage<4, 4> mUnk3ecde3;
    ::ll::UntypedStorage<4, 4> mUnk6d152b;
    // NOLINTEND

public:
    // prevent constructor by default
    CrashDumpFrameData& operator=(CrashDumpFrameData const&);
    CrashDumpFrameData(CrashDumpFrameData const&);
    CrashDumpFrameData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpFrameData(
        int    numControllers,
        int    primaryControllerId,
        uint64 freeMemory,
        float  x,
        float  y,
        float  z,
        float  direction
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(int numControllers, int primaryControllerId, uint64 freeMemory, float x, float y, float z, float direction);
    // NOLINTEND
};
