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
    struct DecodeFecResult;
    class Packet;
    class ProtectedPacket;
    struct ProtectedStream;
    class ReceivedFecPacket;
    class ReceivedPacket;
    class RecoveredPacket;
    class SortablePacket;
    // clang-format on
    
    // ForwardErrorCorrection inner types define
    class Packet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk519b5d;
        ::ll::UntypedStorage<4, 4> mUnkc3877a;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Packet& operator=(Packet const&);
        Packet(Packet const&);
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Packet();
    
        // vIndex: 1
        virtual int AddRef();
    
        // vIndex: 2
        virtual int Release();
        // NOLINTEND
    
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
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI int $AddRef();
    
        MCNAPI int $Release();
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
    class SortablePacket {
    public:
        // SortablePacket inner types declare
        // clang-format off
        struct LessThan;
        // clang-format on
        
        // SortablePacket inner types define
        struct LessThan {
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkc6051e;
        ::ll::UntypedStorage<2, 2> mUnka603e7;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SortablePacket& operator=(SortablePacket const&);
        SortablePacket(SortablePacket const&);
        SortablePacket();
    
    };
    
    class ReceivedPacket : public ::webrtc::ForwardErrorCorrection::SortablePacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkb81145;
        ::ll::UntypedStorage<1, 1> mUnk7b9065;
        ::ll::UntypedStorage<1, 22> mUnk255cb8;
        ::ll::UntypedStorage<8, 8> mUnkd84dab;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ReceivedPacket& operator=(ReceivedPacket const&);
        ReceivedPacket(ReceivedPacket const&);
        ReceivedPacket();
    
    };
    
    class RecoveredPacket : public ::webrtc::ForwardErrorCorrection::SortablePacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkca17c0;
        ::ll::UntypedStorage<1, 1> mUnk34911e;
        ::ll::UntypedStorage<8, 8> mUnk278bd2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RecoveredPacket& operator=(RecoveredPacket const&);
        RecoveredPacket(RecoveredPacket const&);
        RecoveredPacket();
    
    };
    
    class ProtectedPacket : public ::webrtc::ForwardErrorCorrection::SortablePacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk52c3a1;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ProtectedPacket& operator=(ProtectedPacket const&);
        ProtectedPacket(ProtectedPacket const&);
        ProtectedPacket();
    
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
    
    struct ProtectedStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnke8464e;
        ::ll::UntypedStorage<2, 2> mUnke0a5cf;
        ::ll::UntypedStorage<8, 8> mUnk980d83;
        ::ll::UntypedStorage<8, 8> mUnk5f94e6;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ProtectedStream& operator=(ProtectedStream const&);
        ProtectedStream(ProtectedStream const&);
        ProtectedStream();
    
    };
    
    class ReceivedFecPacket : public ::webrtc::ForwardErrorCorrection::SortablePacket {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk78c24f;
        ::ll::UntypedStorage<4, 4> mUnk97aa27;
        ::ll::UntypedStorage<8, 8> mUnk74075a;
        ::ll::UntypedStorage<8, 104> mUnke43c6f;
        ::ll::UntypedStorage<8, 8> mUnkfcd4d3;
        ::ll::UntypedStorage<8, 8> mUnk9ecc3e;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ReceivedFecPacket& operator=(ReceivedFecPacket const&);
        ReceivedFecPacket(ReceivedFecPacket const&);
        ReceivedFecPacket();
    
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
    
    struct DecodeFecResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke71362;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        DecodeFecResult& operator=(DecodeFecResult const&);
        DecodeFecResult(DecodeFecResult const&);
        DecodeFecResult();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc4c078;
    ::ll::UntypedStorage<4, 4> mUnkeeed3e;
    ::ll::UntypedStorage<8, 8> mUnk8af18c;
    ::ll::UntypedStorage<8, 8> mUnk1e61e5;
    ::ll::UntypedStorage<8, 24> mUnkad0b4d;
    ::ll::UntypedStorage<8, 16> mUnke407cf;
    ::ll::UntypedStorage<1, 288> mUnk229c62;
    ::ll::UntypedStorage<1, 288> mUnk27a6c9;
    ::ll::UntypedStorage<8, 8> mUnke95171;
    // NOLINTEND

public:
    // prevent constructor by default
    ForwardErrorCorrection& operator=(ForwardErrorCorrection const&);
    ForwardErrorCorrection(ForwardErrorCorrection const&);
    ForwardErrorCorrection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int EncodeFec(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const& media_packets, uchar protection_factor, int num_important_packets, bool use_unequal_protection, ::webrtc::FecMaskType fec_mask_type, ::std::list<::webrtc::ForwardErrorCorrection::Packet*>* fec_packets);

    MCNAPI void FinalizeFecHeaders(uint64 num_fec_packets, uint media_ssrc, ushort seq_num_base);

    MCNAPI ForwardErrorCorrection(::std::unique_ptr<::webrtc::FecHeaderReader> fec_header_reader, ::std::unique_ptr<::webrtc::FecHeaderWriter> fec_header_writer, uint ssrc, uint protected_media_ssrc);

    MCNAPI void GenerateFecPayloads(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const& media_packets, uint64 num_fec_packets);

    MCNAPI int InsertZerosInPacketMasks(::std::list<::std::unique_ptr<::webrtc::ForwardErrorCorrection::Packet>> const& media_packets, uint64 num_fec_packets);

    MCNAPI uint64 MaxPacketOverhead() const;

    MCNAPI ~ForwardErrorCorrection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateFlexfec(uint ssrc, uint protected_media_ssrc);

    MCNAPI static ::std::unique_ptr<::webrtc::ForwardErrorCorrection> CreateUlpfec(uint ssrc);

    MCNAPI static int NumFecPackets(int num_media_packets, int protection_factor);

    MCNAPI static ushort ParseSequenceNumber(uchar const* packet);

    MCNAPI static uint ParseSsrc(uchar const* packet);

    MCNAPI static void XorHeaders(::webrtc::ForwardErrorCorrection::Packet const& src, ::webrtc::ForwardErrorCorrection::Packet* dst);

    MCNAPI static void XorPayloads(::webrtc::ForwardErrorCorrection::Packet const& src, uint64 payload_length, uint64 dst_offset, ::webrtc::ForwardErrorCorrection::Packet* dst);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::FecHeaderReader> fec_header_reader, ::std::unique_ptr<::webrtc::FecHeaderWriter> fec_header_writer, uint ssrc, uint protected_media_ssrc);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
