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
    MCAPI SimulcastLayer(::cricket::SimulcastLayer const&);

    MCAPI SimulcastLayer(::std::string_view, bool);

    MCAPI ~SimulcastLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::SimulcastLayer const&);

    MCAPI void* $ctor(::std::string_view, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
