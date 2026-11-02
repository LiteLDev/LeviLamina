#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Diagnostics {

struct MinimapServerDebugStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb7ebe4;
    ::ll::UntypedStorage<8, 8> mUnk5484ba;
    ::ll::UntypedStorage<8, 8> mUnk53811f;
    ::ll::UntypedStorage<8, 8> mUnke3541c;
    ::ll::UntypedStorage<8, 8> mUnk9160d7;
    ::ll::UntypedStorage<8, 8> mUnkc5cd99;
    ::ll::UntypedStorage<8, 8> mUnkddefe4;
    ::ll::UntypedStorage<8, 8> mUnk142c7f;
    ::ll::UntypedStorage<8, 8> mUnk7252cd;
    ::ll::UntypedStorage<8, 8> mUnkc8f848;
    ::ll::UntypedStorage<8, 8> mUnkda7f13;
    ::ll::UntypedStorage<8, 8> mUnk1802d2;
    ::ll::UntypedStorage<8, 8> mUnk39c71d;
    ::ll::UntypedStorage<8, 8> mUnkff3245;
    ::ll::UntypedStorage<8, 8> mUnk6ac149;
    ::ll::UntypedStorage<8, 8> mUnk869665;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapServerDebugStats& operator=(MinimapServerDebugStats const&);
    MinimapServerDebugStats(MinimapServerDebugStats const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinimapServerDebugStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Editor::Diagnostics
