#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecHeaderReader.h"
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class UlpfecHeaderReader : public ::webrtc::FecHeaderReader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UlpfecHeaderReader() /*override*/;

    // vIndex: 1
    virtual bool ReadFecHeader(::webrtc::ForwardErrorCorrection::ReceivedFecPacket* fec_packet) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UlpfecHeaderReader();
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $ReadFecHeader(::webrtc::ForwardErrorCorrection::ReceivedFecPacket* fec_packet) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
