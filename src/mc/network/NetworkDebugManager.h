#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/TrackerType.h"

// auto generated forward declare list
// clang-format off
class NetworkStatistics;
// clang-format on

class NetworkDebugManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
    class Tracker;
    // clang-format on

    // NetworkDebugManager inner types define
    class Tracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80>  mUnk8f8fe3;
        ::ll::UntypedStorage<8, 152> mUnkc955b2;
        ::ll::UntypedStorage<8, 8>   mUnkad80c2;
        ::ll::UntypedStorage<8, 24>  mUnkf5da89;
        ::ll::UntypedStorage<4, 4>   mUnkb89ac4;
        // NOLINTEND

    public:
        // prevent constructor by default
        Tracker& operator=(Tracker const&);
        Tracker(Tracker const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Tracker();

        MCNAPI ~Tracker();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1088> mUnk448985;
    ::ll::UntypedStorage<4, 4>    mUnkddd6be;
    ::ll::UntypedStorage<8, 16>   mUnk931b60;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkDebugManager& operator=(NetworkDebugManager const&);
    NetworkDebugManager(NetworkDebugManager const&);
    NetworkDebugManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkDebugManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NetworkStatistics* getNetworkStatistics(::TrackerType type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& UPDATE_INTERVAL_MILLISECONDS();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
