#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct GatheringsConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb1c891;
    ::ll::UntypedStorage<8, 32> mUnk8546c2;
    ::ll::UntypedStorage<8, 24> mUnk358c16;
    ::ll::UntypedStorage<8, 40> mUnkff611f;
    ::ll::UntypedStorage<8, 32> mUnk6c520d;
    ::ll::UntypedStorage<8, 24> mUnkd3c5e2;
    ::ll::UntypedStorage<8, 40> mUnk5af099;
    ::ll::UntypedStorage<8, 40> mUnk537d55;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringsConfigurationJoinInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GatheringsConfigurationJoinInfo(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ~GatheringsConfigurationJoinInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
