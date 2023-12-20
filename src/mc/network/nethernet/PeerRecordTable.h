#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/nethernet/ThreadSafe.h"

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
        // prevent constructor by default
        PeerRecord& operator=(PeerRecord const&);
        PeerRecord(PeerRecord const&);
        PeerRecord();
    };

public:
    // prevent constructor by default
    PeerRecordTable& operator=(PeerRecordTable const&);
    PeerRecordTable(PeerRecordTable const&);
    PeerRecordTable();

public:
    // NOLINTBEGIN
    // symbol: ?AddOrUpdate@PeerRecordTable@NetherNet@@QEAA_NUNetworkID@2@AEBVSocketAddress@rtc@@@Z
    MCAPI bool AddOrUpdate(struct NetherNet::NetworkID, class rtc::SocketAddress const&);

    // symbol: ?Contains@PeerRecordTable@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool Contains(struct NetherNet::NetworkID);

    // symbol: ?Find@PeerRecordTable@NetherNet@@QEAA_NUNetworkID@2@PEAVSocketAddress@rtc@@@Z
    MCAPI bool Find(struct NetherNet::NetworkID, class rtc::SocketAddress*);

    // symbol: ??1PeerRecordTable@NetherNet@@QEAA@XZ
    MCAPI ~PeerRecordTable();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?RemoveExpiredRecords@PeerRecordTable@NetherNet@@CAXAEBVView@?$ThreadSafe@V?$map@UNetworkID@NetherNet@@UPeerRecord@PeerRecordTable@2@U?$less@UNetworkID@NetherNet@@@std@@V?$allocator@U?$pair@$$CBUNetworkID@NetherNet@@UPeerRecord@PeerRecordTable@2@@std@@@6@@std@@@Utils@2@@Z
    MCAPI static void
    RemoveExpiredRecords(class NetherNet::Utils::ThreadSafe<
                         std::map<struct NetherNet::NetworkID, struct NetherNet::PeerRecordTable::PeerRecord>>::
                             View const&);

    // NOLINTEND
};

}; // namespace NetherNet
