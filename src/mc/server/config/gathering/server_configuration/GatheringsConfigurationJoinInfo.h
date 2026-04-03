#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct GatheringsConfigurationJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb1c891;
    ::ll::UntypedStorage<8, 32> mUnk8546c2;
    ::ll::UntypedStorage<8, 16> mUnk9a922d;
    ::ll::UntypedStorage<8, 32> mUnk9ab8ef;
    ::ll::UntypedStorage<8, 32> mUnk6c520d;
    ::ll::UntypedStorage<8, 16> mUnkb16b80;
    ::ll::UntypedStorage<8, 32> mUnk538aef;
    ::ll::UntypedStorage<8, 32> mUnk445a81;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringsConfigurationJoinInfo(GatheringsConfigurationJoinInfo const&);
    GatheringsConfigurationJoinInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GatheringsConfigurationJoinInfo(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ~GatheringsConfigurationJoinInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
