#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecHeaderWriter.h"
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class Flexfec03HeaderWriter : public ::webrtc::FecHeaderWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Flexfec03HeaderWriter() /*override*/;

    virtual uint64 MinPacketMaskSize(uchar const* packet_mask, uint64 packet_mask_size) const /*override*/;

    virtual uint64 FecHeaderSize(uint64 packet_mask_size) const /*override*/;

    virtual void FinalizeFecHeader(
        ::rtc::ArrayView<::webrtc::FecHeaderWriter::ProtectedStream const> protected_streams,
        ::webrtc::ForwardErrorCorrection::Packet&                          fec_packet
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Flexfec03HeaderWriter();
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
    MCNAPI uint64 $MinPacketMaskSize(uchar const* packet_mask, uint64 packet_mask_size) const;

    MCNAPI uint64 $FecHeaderSize(uint64 packet_mask_size) const;

    MCNAPI void $FinalizeFecHeader(
        ::rtc::ArrayView<::webrtc::FecHeaderWriter::ProtectedStream const> protected_streams,
        ::webrtc::ForwardErrorCorrection::Packet&                          fec_packet
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
