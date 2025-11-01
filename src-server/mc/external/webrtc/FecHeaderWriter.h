#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ForwardErrorCorrection.h"

namespace webrtc {

class FecHeaderWriter {
public:
    // FecHeaderWriter inner types declare
    // clang-format off
    struct ProtectedStream;
    // clang-format on
    
    // FecHeaderWriter inner types define
    struct ProtectedStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdd6f6f;
        ::ll::UntypedStorage<2, 2> mUnk34bdd4;
        ::ll::UntypedStorage<8, 16> mUnkd2f50e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ProtectedStream& operator=(ProtectedStream const&);
        ProtectedStream(ProtectedStream const&);
        ProtectedStream();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke11c02;
    ::ll::UntypedStorage<8, 8> mUnk1458ba;
    ::ll::UntypedStorage<8, 8> mUnk2cf929;
    // NOLINTEND

public:
    // prevent constructor by default
    FecHeaderWriter& operator=(FecHeaderWriter const&);
    FecHeaderWriter(FecHeaderWriter const&);
    FecHeaderWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FecHeaderWriter();

    // vIndex: 1
    virtual uint64 MinPacketMaskSize(uchar const*, uint64) const = 0;

    // vIndex: 2
    virtual uint64 FecHeaderSize(uint64) const = 0;

    // vIndex: 3
    virtual void FinalizeFecHeader(::rtc::ArrayView<::webrtc::FecHeaderWriter::ProtectedStream const>, ::webrtc::ForwardErrorCorrection::Packet&) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FecHeaderWriter(uint64 max_media_packets, uint64 max_fec_packets, uint64 max_packet_overhead);

    MCNAPI uint64 MaxFecPackets() const;

    MCNAPI uint64 MaxMediaPackets() const;

    MCNAPI uint64 MaxPacketOverhead() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint64 max_media_packets, uint64 max_fec_packets, uint64 max_packet_overhead);
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

}
