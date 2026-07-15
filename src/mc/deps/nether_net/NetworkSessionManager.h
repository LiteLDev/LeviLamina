#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class NetworkSession; }
// clang-format on

namespace NetherNet {

class NetworkSessionManager : public ::NetherNet::ContextProxy {
public:
    // NetworkSessionManager inner types declare
    // clang-format off
    struct NetworkSessionRecord;
    // clang-format on

    // NetworkSessionManager inner types define
    struct NetworkSessionRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkc9f574;
        // NOLINTEND

    public:
        // prevent constructor by default
        NetworkSessionRecord& operator=(NetworkSessionRecord const&);
        NetworkSessionRecord(NetworkSessionRecord const&);
        NetworkSessionRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk27e415;
    ::ll::UntypedStorage<8, 16> mUnk98d923;
    ::ll::UntypedStorage<8, 8>  mUnk829b85;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkSessionManager& operator=(NetworkSessionManager const&);
    NetworkSessionManager(NetworkSessionManager const&);
    NetworkSessionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkSessionManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void PeriodicDeadSessionCleanupOnSignalThread();
    // NOLINTEND
};

} // namespace NetherNet
