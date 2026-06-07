#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSExportEntry {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<8, 16> mUnkcb0bb9;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnk98f851;
#endif
    ::ll::UntypedStorage<4, 4> mUnk478611;
    ::ll::UntypedStorage<4, 4> mUnkade76c;
    ::ll::UntypedStorage<4, 4> mUnk40f3bc;
    // NOLINTEND

public:
    // prevent constructor by default
    JSExportEntry& operator=(JSExportEntry const&);
    JSExportEntry(JSExportEntry const&);
    JSExportEntry();
};
