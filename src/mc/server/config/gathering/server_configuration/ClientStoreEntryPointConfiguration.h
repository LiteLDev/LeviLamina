#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct ClientStoreEntryPointConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk255c6c;
    ::ll::UntypedStorage<8, 32> mUnk555114;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientStoreEntryPointConfiguration(ClientStoreEntryPointConfiguration const&);
    ClientStoreEntryPointConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerConfiguration::ClientStoreEntryPointConfiguration&
    operator=(::ServerConfiguration::ClientStoreEntryPointConfiguration&&);

    MCNAPI ::ServerConfiguration::ClientStoreEntryPointConfiguration&
    operator=(::ServerConfiguration::ClientStoreEntryPointConfiguration const&);

    MCNAPI ~ClientStoreEntryPointConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
