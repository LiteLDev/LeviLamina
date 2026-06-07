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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    GatheringsConfigurationJoinInfo& operator=(GatheringsConfigurationJoinInfo const&);
    GatheringsConfigurationJoinInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    GatheringsConfigurationJoinInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GatheringsConfigurationJoinInfo(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);

    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo&&);

#ifdef LL_PLAT_C
    MCNAPI ::ServerConfiguration::GatheringsConfigurationJoinInfo&
    operator=(::ServerConfiguration::GatheringsConfigurationJoinInfo const&);
#endif

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
