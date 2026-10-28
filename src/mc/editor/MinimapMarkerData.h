#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct MinimapMarkerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkeb0bd7;
    ::ll::UntypedStorage<8, 32> mUnke58e32;
    ::ll::UntypedStorage<4, 12> mUnk985c5c;
    ::ll::UntypedStorage<4, 4>  mUnka23444;
    ::ll::UntypedStorage<4, 16> mUnk5a779d;
    ::ll::UntypedStorage<8, 32> mUnk2c4e09;
    ::ll::UntypedStorage<8, 32> mUnka6bdd3;
    ::ll::UntypedStorage<1, 1>  mUnk609df9;
    ::ll::UntypedStorage<4, 4>  mUnk1eefbc;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapMarkerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinimapMarkerData(::Editor::Services::MinimapMarkerData const&);

    MCNAPI ::Editor::Services::MinimapMarkerData& operator=(::Editor::Services::MinimapMarkerData&&);

    MCNAPI ::Editor::Services::MinimapMarkerData& operator=(::Editor::Services::MinimapMarkerData const&);

    MCNAPI ~MinimapMarkerData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Services::MinimapMarkerData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
