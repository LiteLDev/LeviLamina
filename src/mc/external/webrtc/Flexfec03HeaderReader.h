#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecHeaderReader.h"
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class Flexfec03HeaderReader : public ::webrtc::FecHeaderReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Flexfec03HeaderReader() /*override*/ = default;

    virtual bool ReadFecHeader(::webrtc::ForwardErrorCorrection::ReceivedFecPacket* fec_packet) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Flexfec03HeaderReader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
