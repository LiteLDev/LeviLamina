#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerConfiguration {

struct GatheringsConfigurationFileJoinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk733799;
    ::ll::UntypedStorage<8, 32> mUnk770d95;
    ::ll::UntypedStorage<8, 16> mUnke82ee6;
    ::ll::UntypedStorage<8, 32> mUnk7b15a2;
    ::ll::UntypedStorage<8, 32> mUnkf6474e;
    ::ll::UntypedStorage<8, 16> mUnk4cfdae;
    ::ll::UntypedStorage<8, 32> mUnk1bf893;
    ::ll::UntypedStorage<8, 32> mUnk7cb57d;
    // NOLINTEND

public:
    // prevent constructor by default
    GatheringsConfigurationFileJoinInfo& operator=(GatheringsConfigurationFileJoinInfo const&);
    GatheringsConfigurationFileJoinInfo(GatheringsConfigurationFileJoinInfo const&);
    GatheringsConfigurationFileJoinInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GatheringsConfigurationFileJoinInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ServerConfiguration
