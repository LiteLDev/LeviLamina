#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ContextConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk5da6f2;
    ::ll::UntypedStorage<8, 32>  mUnk782aa9;
    ::ll::UntypedStorage<4, 8>   mUnk67ca24;
    ::ll::UntypedStorage<4, 8>   mUnkcb7615;
    ::ll::UntypedStorage<8, 40>  mUnk3c790a;
    ::ll::UntypedStorage<8, 32>  mUnk28a7b4;
    ::ll::UntypedStorage<8, 104> mUnkc9edc0;
    ::ll::UntypedStorage<1, 1>   mUnkae7c5b;
    ::ll::UntypedStorage<8, 24>  mUnk8dcce4;
    ::ll::UntypedStorage<4, 4>   mUnke423f8;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextConfig(::Scripting::ContextConfig&&);

    MCNAPI ContextConfig(::Scripting::ContextConfig const&);

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig const&);

    MCNAPI ::Scripting::ContextConfig& operator=(::Scripting::ContextConfig&&);

    MCNAPI ~ContextConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ContextConfig&&);

    MCNAPI void* $ctor(::Scripting::ContextConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
