#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinition;
class IMinecraftEventing;
class ResourcePackManager;
// clang-format on

class AtomicClientEntityDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbd866c;
    ::ll::UntypedStorage<8, 8>  mUnk25eb93;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionGroup& operator=(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AtomicClientEntityDefinitionGroup& operator=(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup(AtomicClientEntityDefinitionGroup const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AtomicClientEntityDefinitionGroup();

    MCNAPI ::std::shared_ptr<::AtomicClientEntityDefinition const>
    _registerDefinition(::AtomicClientEntityDefinition&& definition);

    MCNAPI void
    loadDefinitionsFromResourcePacks(::ResourcePackManager& resourcePackManager, ::IMinecraftEventing& eventing);

    MCNAPI ::std::shared_ptr<::AtomicClientEntityDefinition const> tryGetDefinition(::std::string const& identifier);

    MCNAPI ~AtomicClientEntityDefinitionGroup();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
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
