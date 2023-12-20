#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FecMaskType.h"

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
        // prevent constructor by default
        Packet& operator=(Packet const&);
        Packet(Packet const&);

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: ??1Packet@ForwardErrorCorrection@webrtc@@UEAA@XZ
        virtual ~Packet();

        // vIndex: 1, symbol: ?AddRef@Packet@ForwardErrorCorrection@webrtc@@UEAAHXZ
        virtual int AddRef();

        // vIndex: 2, symbol: ?Release@Packet@ForwardErrorCorrection@webrtc@@UEAAHXZ
        virtual int Release();

        // symbol: ??0Packet@ForwardErrorCorrection@webrtc@@QEAA@XZ
        MCAPI Packet();

        // NOLINTEND
    };

    class ProtectedPacket {
    public:
        // prevent constructor by default
        ProtectedPacket& operator=(ProtectedPacket const&);
        ProtectedPacket(ProtectedPacket const&);
        ProtectedPacket();

    public:
        // NOLINTBEGIN
        // symbol: ??1ProtectedPacket@ForwardErrorCorrection@webrtc@@QEAA@XZ
        MCAPI ~ProtectedPacket();

        // NOLINTEND
    };

    class ReceivedFecPacket {
    public:
        // prevent constructor by default
        ReceivedFecPacket& operator=(ReceivedFecPacket const&);
        ReceivedFecPacket(ReceivedFecPacket const&);
        ReceivedFecPacket();

    public:
        // NOLINTBEGIN
        // symbol: ??1ReceivedFecPacket@ForwardErrorCorrection@webrtc@@QEAA@XZ
        MCAPI ~ReceivedFecPacket();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ForwardErrorCorrection& operator=(ForwardErrorCorrection const&);
    ForwardErrorCorrection(ForwardErrorCorrection const&);
    ForwardErrorCorrection();

public:
    // NOLINTBEGIN
    // symbol:
    // ?EncodeFec@ForwardErrorCorrection@webrtc@@QEAAHAEBV?$list@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@@2@@std@@EH_NW4FecMaskType@2@PEAV?$list@PEAVPacket@ForwardErrorCorrection@webrtc@@V?$allocator@PEAVPacket@ForwardErrorCorrection@webrtc@@@std@@@4@@Z
    MCAPI int
    EncodeFec(std::list<std::unique_ptr<class webrtc::ForwardErrorCorrection::Packet>> const&, uchar, int, bool, ::webrtc::FecMaskType, std::list<class webrtc::ForwardErrorCorrection::Packet*>*);

    // symbol: ?MaxPacketOverhead@ForwardErrorCorrection@webrtc@@QEBA_KXZ
    MCAPI uint64 MaxPacketOverhead() const;

    // symbol: ??1ForwardErrorCorrection@webrtc@@QEAA@XZ
    MCAPI ~ForwardErrorCorrection();

    // symbol:
    // ?CreateFlexfec@ForwardErrorCorrection@webrtc@@SA?AV?$unique_ptr@VForwardErrorCorrection@webrtc@@U?$default_delete@VForwardErrorCorrection@webrtc@@@std@@@std@@II@Z
    MCAPI static std::unique_ptr<class webrtc::ForwardErrorCorrection> CreateFlexfec(uint, uint);

    // symbol:
    // ?CreateUlpfec@ForwardErrorCorrection@webrtc@@SA?AV?$unique_ptr@VForwardErrorCorrection@webrtc@@U?$default_delete@VForwardErrorCorrection@webrtc@@@std@@@std@@I@Z
    MCAPI static std::unique_ptr<class webrtc::ForwardErrorCorrection> CreateUlpfec(uint);

    // symbol: ?NumFecPackets@ForwardErrorCorrection@webrtc@@SAHHH@Z
    MCAPI static int NumFecPackets(int, int);

    // symbol: ?ParseSequenceNumber@ForwardErrorCorrection@webrtc@@SAGPEBE@Z
    MCAPI static ushort ParseSequenceNumber(uchar const*);

    // symbol: ?ParseSsrc@ForwardErrorCorrection@webrtc@@SAIPEBE@Z
    MCAPI static uint ParseSsrc(uchar const*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0ForwardErrorCorrection@webrtc@@IEAA@V?$unique_ptr@VFecHeaderReader@webrtc@@U?$default_delete@VFecHeaderReader@webrtc@@@std@@@std@@V?$unique_ptr@VFecHeaderWriter@webrtc@@U?$default_delete@VFecHeaderWriter@webrtc@@@std@@@3@II@Z
    MCAPI ForwardErrorCorrection(
        std::unique_ptr<class webrtc::FecHeaderReader>,
        std::unique_ptr<class webrtc::FecHeaderWriter>,
        uint,
        uint
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FinalizeFecHeaders@ForwardErrorCorrection@webrtc@@AEAAX_KIG@Z
    MCAPI void FinalizeFecHeaders(uint64, uint, ushort);

    // symbol:
    // ?GenerateFecPayloads@ForwardErrorCorrection@webrtc@@AEAAXAEBV?$list@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@@2@@std@@_K@Z
    MCAPI void
    GenerateFecPayloads(std::list<std::unique_ptr<class webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    // symbol:
    // ?InsertZerosInPacketMasks@ForwardErrorCorrection@webrtc@@AEAAHAEBV?$list@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VPacket@ForwardErrorCorrection@webrtc@@U?$default_delete@VPacket@ForwardErrorCorrection@webrtc@@@std@@@std@@@2@@std@@_K@Z
    MCAPI int
    InsertZerosInPacketMasks(std::list<std::unique_ptr<class webrtc::ForwardErrorCorrection::Packet>> const&, uint64);

    // symbol: ?XorHeaders@ForwardErrorCorrection@webrtc@@CAXAEBVPacket@12@PEAV312@@Z
    MCAPI static void
    XorHeaders(class webrtc::ForwardErrorCorrection::Packet const&, class webrtc::ForwardErrorCorrection::Packet*);

    // symbol: ?XorPayloads@ForwardErrorCorrection@webrtc@@CAXAEBVPacket@12@_K1PEAV312@@Z
    MCAPI static void
    XorPayloads(class webrtc::ForwardErrorCorrection::Packet const&, uint64, uint64, class webrtc::ForwardErrorCorrection::Packet*);

    // NOLINTEND
};

}; // namespace webrtc
