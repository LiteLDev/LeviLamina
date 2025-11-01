#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class PeerRecordTable : public ::NetherNet::ContextProxy {
public:
    // PeerRecordTable inner types declare
    // clang-format off
    struct PeerRecord;
    // clang-format on
    
    // PeerRecordTable inner types define
    struct PeerRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6d0d23;
        ::ll::UntypedStorage<8, 80> mUnkabaa69;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        PeerRecord& operator=(PeerRecord const&);
        PeerRecord(PeerRecord const&);
        PeerRecord();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PeerRecord();
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
    ::ll::UntypedStorage<8, 96> mUnkdc67f9;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerRecordTable& operator=(PeerRecordTable const&);
    PeerRecordTable(PeerRecordTable const&);
    PeerRecordTable();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PeerRecordTable() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddOrUpdate(::NetherNet::NetworkID networkID, ::rtc::SocketAddress const& address, ::std::chrono::steady_clock::time_point timeOfDiscovery);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::pair<::NetherNet::NetworkID, ::NetherNet::PeerRecordTable::PeerRecord>> RemoveExpiredRecords(::NetherNet::Utils::ThreadSafe<::std::map<::NetherNet::NetworkID, ::NetherNet::PeerRecordTable::PeerRecord>>::View const& exclusiveTable);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
