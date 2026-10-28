#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct BiomeConfigIdentifierMappings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke05b88;
    ::ll::UntypedStorage<8, 48> mUnk7faee8;
    ::ll::UntypedStorage<8, 48> mUnkd664a2;
    ::ll::UntypedStorage<8, 48> mUnk370b49;
    ::ll::UntypedStorage<8, 48> mUnkfe2df6;
    ::ll::UntypedStorage<8, 48> mUnk427e41;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BiomeConfigIdentifierMappings& operator=(BiomeConfigIdentifierMappings const&);
    BiomeConfigIdentifierMappings(BiomeConfigIdentifierMappings const&);
    BiomeConfigIdentifierMappings();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    BiomeConfigIdentifierMappings& operator=(BiomeConfigIdentifierMappings const&);
    BiomeConfigIdentifierMappings();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI BiomeConfigIdentifierMappings(::Editor::Network::BiomeConfigIdentifierMappings const&);

    MCNAPI ::Editor::Network::BiomeConfigIdentifierMappings&
    operator=(::Editor::Network::BiomeConfigIdentifierMappings&&);

    MCNAPI ~BiomeConfigIdentifierMappings();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Editor::Network::BiomeConfigIdentifierMappings const&);
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

} // namespace Editor::Network
