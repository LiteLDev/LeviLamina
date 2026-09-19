#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinitionDescriptor;
// clang-format on

class AtomicClientEntityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk4263e1;
    ::ll::UntypedStorage<8, 48>  mUnk9cdcdb;
    ::ll::UntypedStorage<8, 32>  mUnk5fd314;
    ::ll::UntypedStorage<8, 200> mUnk549a20;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDefinition& operator=(AtomicClientEntityDefinition const&);
    AtomicClientEntityDefinition(AtomicClientEntityDefinition const&);
    AtomicClientEntityDefinition();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AtomicClientEntityDefinition(::std::string const& identifier);

    MCNAPI AtomicClientEntityDefinition(::AtomicClientEntityDefinition&& other);

    MCNAPI void parse(::std::string const& identifier, ::AtomicClientEntityDefinitionDescriptor descriptor);

    MCNAPI ~AtomicClientEntityDefinition();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& identifier);

    MCNAPI void* $ctor(::AtomicClientEntityDefinition&& other);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
