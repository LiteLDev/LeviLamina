#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/FecHeaderWriter.h"
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class UlpfecHeaderWriter : public ::webrtc::FecHeaderWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UlpfecHeaderWriter() /*override*/ = default;

    virtual uint64 MinPacketMaskSize(uchar const*, uint64 packet_mask_size) const /*override*/;

    virtual uint64 FecHeaderSize(uint64 packet_mask_size) const /*override*/;

    virtual void FinalizeFecHeader(
        ::webrtc::ArrayView<::webrtc::FecHeaderWriter::ProtectedStream const, 18446744073709546905> protected_streams,
        ::webrtc::ForwardErrorCorrection::Packet&                                                   fec_packet
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UlpfecHeaderWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $MinPacketMaskSize(uchar const*, uint64 packet_mask_size) const;

    MCNAPI uint64 $FecHeaderSize(uint64 packet_mask_size) const;

    MCNAPI void $FinalizeFecHeader(
        ::webrtc::ArrayView<::webrtc::FecHeaderWriter::ProtectedStream const, 18446744073709546905> protected_streams,
        ::webrtc::ForwardErrorCorrection::Packet&                                                   fec_packet
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
