#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 256> mUnkbcd9a2;
    ::ll::UntypedStorage<8, 72>  mUnk2be4db;
    ::ll::UntypedStorage<8, 48>  mUnkb6979c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigurationJoinInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerConfigurationJoinInfo(::ServerConfiguration::ServerConfigurationJoinInfo const&);

    MCNAPI ::ServerConfiguration::ServerConfigurationJoinInfo&
    operator=(::ServerConfiguration::ServerConfigurationJoinInfo const&);

    MCNAPI ~ServerConfigurationJoinInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::ServerConfigurationJoinInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
