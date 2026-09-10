#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
// clang-format on

class AtomicClientEntityDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd866c;
    ::ll::UntypedStorage<8, 8>  mUnkf5cc98;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDefinitionGroup& operator=(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void
    loadDefinitionsFromResourcePacks(::ResourcePackManager& resourcePackManager, ::IMinecraftEventing& eventing);

    MCNAPI ~AtomicClientEntityDefinitionGroup();
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
