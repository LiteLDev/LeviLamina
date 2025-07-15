#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SimulcastLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk720aa8;
    ::ll::UntypedStorage<1, 1>  mUnkaec753;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastLayer& operator=(SimulcastLayer const&);
    SimulcastLayer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimulcastLayer(::cricket::SimulcastLayer const&);

    MCNAPI SimulcastLayer(::std::string_view rid, bool is_paused);

    MCNAPI ~SimulcastLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::SimulcastLayer const&);

    MCNAPI void* $ctor(::std::string_view rid, bool is_paused);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
