#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class RuntimeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk23fbfa;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeConditions& operator=(RuntimeConditions const&);
    RuntimeConditions(RuntimeConditions const&);
    RuntimeConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const& runtimeConditions);

    MCNAPI ::std::string toString() const;
    // NOLINTEND
};

} // namespace Scripting
