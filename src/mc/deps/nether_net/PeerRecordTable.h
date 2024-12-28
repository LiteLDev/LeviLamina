#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class PeerRecordTable {
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
        ::ll::UntypedStorage<8, 8>  mUnk6d0d23;
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
        MCAPI ~PeerRecord();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddOrUpdate(
        ::NetherNet::NetworkID                  networkID,
        ::rtc::SocketAddress const&             address,
        ::std::chrono::steady_clock::time_point timeOfDiscovery
    );

    MCAPI bool Contains(::NetherNet::NetworkID networkID);

    MCAPI bool Find(::NetherNet::NetworkID networkID, ::rtc::SocketAddress* pOut);

    MCAPI ~PeerRecordTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void RemoveExpiredRecords(
        ::NetherNet::Utils::ThreadSafe<
            ::std::map<::NetherNet::NetworkID, ::NetherNet::PeerRecordTable::PeerRecord>>::View const& exclusiveTable
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
