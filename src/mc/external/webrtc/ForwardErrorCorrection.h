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
        MCAPI Packet();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class ProtectedPacket {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ProtectedPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class ReceivedFecPacket {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ReceivedFecPacket();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int
    EncodeFec(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&, uchar, int, bool, ::webrtc::FecMaskType, ::std::list<::webrtc::ForwardErrorCorrection::Packet*>*);

    MCAPI void FinalizeFecHeaders(uint64, uint, ushort);

    MCAPI ForwardErrorCorrection(
        ::std::unique_ptr<::webrtc::FecHeaderReader>,
        ::std::unique_ptr<::webrtc::FecHeaderWriter>,
        uint,
        uint
    );

    MCAPI void
    GenerateFecPayloads(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    MCAPI int
    InsertZerosInPacketMasks(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    MCAPI uint64 MaxPacketOverhead() const;

    MCAPI ~ForwardErrorCorrection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateFlexfec(uint, uint);

    MCAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateUlpfec(uint);

    MCAPI static int NumFecPackets(int, int);

    MCAPI static ushort ParseSequenceNumber(uchar const*);

    MCAPI static uint ParseSsrc(uchar const*);

    MCAPI static void
    XorHeaders(::webrtc::ForwardErrorCorrection::Packet const&, ::webrtc::ForwardErrorCorrection::Packet*);

    MCAPI static void
    XorPayloads(::webrtc::ForwardErrorCorrection::Packet const&, uint64, uint64, ::webrtc::ForwardErrorCorrection::Packet*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(::std::unique_ptr<::webrtc::FecHeaderReader>, ::std::unique_ptr<::webrtc::FecHeaderWriter>, uint, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
