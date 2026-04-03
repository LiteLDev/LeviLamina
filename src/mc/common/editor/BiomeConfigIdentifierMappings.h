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

public:
    // prevent constructor by default
    BiomeConfigIdentifierMappings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeConfigIdentifierMappings(::Editor::Network::BiomeConfigIdentifierMappings const&);

    MCNAPI ::Editor::Network::BiomeConfigIdentifierMappings&
    operator=(::Editor::Network::BiomeConfigIdentifierMappings&&);

    MCNAPI ::Editor::Network::BiomeConfigIdentifierMappings&
    operator=(::Editor::Network::BiomeConfigIdentifierMappings const&);

    MCNAPI ~BiomeConfigIdentifierMappings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::BiomeConfigIdentifierMappings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
