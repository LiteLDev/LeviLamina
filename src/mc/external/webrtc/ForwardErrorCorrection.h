#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FecMaskType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FecHeaderReader; }
namespace webrtc { class FecHeaderWriter; }
// clang-format on

namespace webrtc {

class ForwardErrorCorrection {
public:
    // ForwardErrorCorrection inner types declare
    // clang-format off
    class Packet;
    class ProtectedPacket;
    class ReceivedFecPacket;
    // clang-format on

    // ForwardErrorCorrection inner types define
    class Packet {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Packet();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class ProtectedPacket {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ProtectedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ReceivedFecPacket {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ReceivedFecPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ForwardErrorCorrection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int EncodeFec(
        ::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&,
        uchar,
        int,
        bool,
        ::webrtc::FecMaskType,
        ::std::list<::webrtc::ForwardErrorCorrection::Packet*>*
    );

    MCNAPI void FinalizeFecHeaders(uint64, uint, ushort);

    MCNAPI ForwardErrorCorrection(
        ::std::unique_ptr<::webrtc::FecHeaderReader>,
        ::std::unique_ptr<::webrtc::FecHeaderWriter>,
        uint,
        uint
    );

    MCNAPI void
    GenerateFecPayloads(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    MCNAPI int
    InsertZerosInPacketMasks(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    MCNAPI uint64 MaxPacketOverhead() const;

    MCNAPI ~ForwardErrorCorrection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateFlexfec(uint, uint);

    MCNAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateUlpfec(uint);

    MCNAPI static int NumFecPackets(int, int);

    MCNAPI static ushort ParseSequenceNumber(uchar const*);

    MCNAPI static uint ParseSsrc(uchar const*);

    MCNAPI static void
    XorHeaders(::webrtc::ForwardErrorCorrection::Packet const&, ::webrtc::ForwardErrorCorrection::Packet*);

    MCNAPI static void XorPayloads(
        ::webrtc::ForwardErrorCorrection::Packet const&,
        uint64,
        uint64,
        ::webrtc::ForwardErrorCorrection::Packet*
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::std::unique_ptr<::webrtc::FecHeaderReader>, ::std::unique_ptr<::webrtc::FecHeaderWriter>, uint, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
