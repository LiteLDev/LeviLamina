#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class SimulcastDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb3502b;
    ::ll::UntypedStorage<8, 24> mUnk7d63cd;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulcastDescription(SimulcastDescription const&);
    SimulcastDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI ::cricket::SimulcastDescription& operator=(::cricket::SimulcastDescription const&);

    MCNAPI ~SimulcastDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
