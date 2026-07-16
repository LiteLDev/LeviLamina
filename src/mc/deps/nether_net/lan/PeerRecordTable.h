#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
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
        ::ll::UntypedStorage<8, 8>  mUnk6d0d23;
        ::ll::UntypedStorage<8, 80> mUnkc826b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        PeerRecord& operator=(PeerRecord const&);
        PeerRecord(PeerRecord const&);
        PeerRecord();
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
    virtual ~PeerRecordTable() /*override*/ = default;
    // NOLINTEND
};

} // namespace NetherNet
