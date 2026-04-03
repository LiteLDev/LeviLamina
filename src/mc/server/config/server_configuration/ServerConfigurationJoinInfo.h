#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct ServerConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkbcd9a2;
    ::ll::UntypedStorage<8, 72>  mUnk2be4db;
    ::ll::UntypedStorage<8, 72>  mUnkb6979c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConfigurationJoinInfo& operator=(ServerConfigurationJoinInfo const&);
    ServerConfigurationJoinInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerConfigurationJoinInfo(::ServerConfiguration::ServerConfigurationJoinInfo&&);

    MCNAPI ServerConfigurationJoinInfo(::ServerConfiguration::ServerConfigurationJoinInfo const&);

    MCNAPI ::ServerConfiguration::ServerConfigurationJoinInfo&
    operator=(::ServerConfiguration::ServerConfigurationJoinInfo&&);

    MCNAPI ~ServerConfigurationJoinInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::ServerConfigurationJoinInfo&&);

    MCNAPI void* $ctor(::ServerConfiguration::ServerConfigurationJoinInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
