#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class FecHeaderReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke75c8d;
    ::ll::UntypedStorage<8, 8> mUnk8278b0;
    // NOLINTEND

public:
    // prevent constructor by default
    FecHeaderReader& operator=(FecHeaderReader const&);
    FecHeaderReader(FecHeaderReader const&);
    FecHeaderReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FecHeaderReader();

    virtual bool ReadFecHeader(::webrtc::ForwardErrorCorrection::ReceivedFecPacket*) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FecHeaderReader(uint64 max_media_packets, uint64 max_fec_packets);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 max_media_packets, uint64 max_fec_packets);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
