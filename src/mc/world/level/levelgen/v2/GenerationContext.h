#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct GenerationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8da9b6;
    ::ll::UntypedStorage<8, 72> mUnk5738e1;
    ::ll::UntypedStorage<8, 8>  mUnk5fdc24;
    ::ll::UntypedStorage<8, 8>  mUnk468cd5;
    ::ll::UntypedStorage<8, 8>  mUnk814cef;
    // NOLINTEND

public:
    // prevent constructor by default
    GenerationContext& operator=(GenerationContext const&);
    GenerationContext(GenerationContext const&);
    GenerationContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GenerationContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
