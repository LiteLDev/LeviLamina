#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/network/FranchiseSignalServiceConfig.h"
#include "mc/platform/Copyable.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class FranchiseSignalServiceConfig;
// clang-format on

class AsyncFranchiseSignalServiceConfig
: public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Copyable<::Bedrock::Result<::FranchiseSignalServiceConfig>>> {
public:
    // AsyncFranchiseSignalServiceConfig inner types define
    enum class Error : int {
        Ok                       = 0,
        EmptyAuthFromDiscovery   = 100,
        EmptyUrlFromDiscovery    = 101,
        ExpiredAuthFromDiscovery = 102,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkbe1344;
    ::ll::UntypedStorage<8, 40> mUnk36c770;
    ::ll::UntypedStorage<8, 16> mUnka5b2f4;
    ::ll::UntypedStorage<8, 32> mUnkad8442;
    ::ll::UntypedStorage<8, 8>  mUnk3a10fb;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncFranchiseSignalServiceConfig& operator=(AsyncFranchiseSignalServiceConfig const&);
    AsyncFranchiseSignalServiceConfig(AsyncFranchiseSignalServiceConfig const&);
    AsyncFranchiseSignalServiceConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AsyncFranchiseSignalServiceConfig() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
