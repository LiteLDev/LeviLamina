#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/CrashDumpLogStringID.h"

struct CDScopedGameplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkef270b;
    ::ll::UntypedStorage<2, 2> mUnkc0b39b;
    ::ll::UntypedStorage<4, 4> mUnk71c85f;
    ::ll::UntypedStorage<4, 4> mUnkadb785;
    // NOLINTEND

public:
    // prevent constructor by default
    CDScopedGameplay& operator=(CDScopedGameplay const&);
    CDScopedGameplay(CDScopedGameplay const&);
    CDScopedGameplay();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CDScopedGameplay(
        ::CrashDumpLogStringID func,
        ::CrashDumpLogStringID tagStart,
        ::CrashDumpLogStringID tagEnd,
        int                    clientId,
        int                    buildActionIntention
    );

    MCNAPI ~CDScopedGameplay();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::CrashDumpLogStringID func,
        ::CrashDumpLogStringID tagStart,
        ::CrashDumpLogStringID tagEnd,
        int                    clientId,
        int                    buildActionIntention
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
