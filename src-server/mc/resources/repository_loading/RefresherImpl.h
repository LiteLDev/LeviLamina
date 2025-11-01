#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/IResourcePackRepositoryRefresher.h"

namespace RepositoryLoading {

class RefresherImpl : public ::IResourcePackRepositoryRefresher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfb93f7;
    // NOLINTEND

public:
    // prevent constructor by default
    RefresherImpl& operator=(RefresherImpl const&);
    RefresherImpl(RefresherImpl const&);
    RefresherImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::Threading::Async<void> initialize() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<void> refreshPacks() /*override*/;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<void> reloadUserPacks() /*override*/;

    // vIndex: 0
    virtual ~RefresherImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> $initialize();

    MCNAPI ::Bedrock::Threading::Async<void> $refreshPacks();

    MCNAPI ::Bedrock::Threading::Async<void> $reloadUserPacks();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
