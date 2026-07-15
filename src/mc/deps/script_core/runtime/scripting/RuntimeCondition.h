#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc2005b;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeCondition& operator=(RuntimeCondition const&);
    RuntimeCondition(RuntimeCondition const&);
    RuntimeCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RuntimeCondition(::std::string const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& id);
    // NOLINTEND
};

} // namespace Scripting
