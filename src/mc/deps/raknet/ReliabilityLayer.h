#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/resources/PacketPriority.h"
#include "mc/resources/PacketReliability.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {

class ReliabilityLayer {
public:
    // ReliabilityLayer inner types declare
    // clang-format off
    struct DatagramHistoryNode;
    struct MessageNumberNode;
    // clang-format on

    // ReliabilityLayer inner types define
    struct DatagramHistoryNode {
    public:
        // prevent constructor by default
        DatagramHistoryNode& operator=(DatagramHistoryNode const&);
        DatagramHistoryNode(DatagramHistoryNode const&);
        DatagramHistoryNode();
    };

    struct MessageNumberNode {
    public:
        // prevent constructor by default
        MessageNumberNode& operator=(MessageNumberNode const&);
        MessageNumberNode(MessageNumberNode const&);
        MessageNumberNode();
    };

public:
    // prevent constructor by default
    ReliabilityLayer& operator=(ReliabilityLayer const&);
    ReliabilityLayer(ReliabilityLayer const&);

public:
    // NOLINTBEGIN
    // symbol: ?AckTimeout@ReliabilityLayer@RakNet@@QEAA_N_K@Z
    MCAPI bool AckTimeout(uint64 curTime);

    // symbol: ?AreAcksWaiting@ReliabilityLayer@RakNet@@QEAA_NXZ
    MCAPI bool AreAcksWaiting();

    // symbol: ?GetStatistics@ReliabilityLayer@RakNet@@QEAAPEAURakNetStatistics@2@PEAU32@@Z
    MCAPI struct RakNet::RakNetStatistics* GetStatistics(struct RakNet::RakNetStatistics* rns);

    // symbol: ?GetTimeoutTime@ReliabilityLayer@RakNet@@QEAAIXZ
    MCAPI uint GetTimeoutTime();

    // symbol:
    // ?HandleSocketReceiveFromConnectedPlayer@ReliabilityLayer@RakNet@@QEAA_NPEBDIAEAUSystemAddress@2@AEAV?$List@PEAVPluginInterface2@RakNet@@@DataStructures@@HPEAVRakNetSocket2@2@PEAVRakNetRandom@2@_KAEAVBitStream@2@@Z
    MCAPI bool HandleSocketReceiveFromConnectedPlayer(
        char const*                                                  buffer,
        uint                                                         length,
        struct RakNet::SystemAddress&                                systemAddress,
        class DataStructures::List<class RakNet::PluginInterface2*>& messageHandlerList,
        int                                                          MTUSize,
        class RakNet::RakNetSocket2*                                 s,
        class RakNet::RakNetRandom*                                  rnr,
        uint64                                                       timeRead,
        class RakNet::BitStream&                                     updateBitStream
    );

    // symbol: ?IsDeadConnection@ReliabilityLayer@RakNet@@QEBA_NXZ
    MCAPI bool IsDeadConnection() const;

    // symbol: ?IsOutgoingDataWaiting@ReliabilityLayer@RakNet@@QEAA_NXZ
    MCAPI bool IsOutgoingDataWaiting();

    // symbol: ?Receive@ReliabilityLayer@RakNet@@QEAAIPEAPEAE@Z
    MCAPI uint Receive(uchar** data);

    // symbol: ??0ReliabilityLayer@RakNet@@QEAA@XZ
    MCAPI ReliabilityLayer();

    // symbol: ?Reset@ReliabilityLayer@RakNet@@QEAAX_NH0@Z
    MCAPI void Reset(bool resetVariables, int MTUSize, bool _useSecurity);

    // symbol: ?Send@ReliabilityLayer@RakNet@@QEAA_NPEADIW4PacketPriority@@W4PacketReliability@@E_NH_KI@Z
    MCAPI bool Send(
        char*               data,
        uint                numberOfBitsToSend,
        ::PacketPriority    priority,
        ::PacketReliability reliability,
        uchar               orderingChannel,
        bool                makeDataCopy,
        int                 MTUSize,
        uint64              currentTime,
        uint                receipt
    );

    // symbol: ?SetSplitMessageProgressInterval@ReliabilityLayer@RakNet@@QEAAXH@Z
    MCAPI void SetSplitMessageProgressInterval(int interval);

    // symbol: ?SetTimeoutTime@ReliabilityLayer@RakNet@@QEAAXI@Z
    MCAPI void SetTimeoutTime(uint time);

    // symbol: ?SetUnreliableTimeout@ReliabilityLayer@RakNet@@QEAAXI@Z
    MCAPI void SetUnreliableTimeout(uint timeoutMS);

    // symbol:
    // ?Update@ReliabilityLayer@RakNet@@QEAAXPEAVRakNetSocket2@2@AEAUSystemAddress@2@H_KIAEAV?$List@PEAVPluginInterface2@RakNet@@@DataStructures@@PEAVRakNetRandom@2@AEAVBitStream@2@@Z
    MCAPI void Update(
        class RakNet::RakNetSocket2*                                 s,
        struct RakNet::SystemAddress&                                systemAddress,
        int                                                          MTUSize,
        uint64                                                       time,
        uint                                                         bitsPerSecondLimit,
        class DataStructures::List<class RakNet::PluginInterface2*>& messageHandlerList,
        class RakNet::RakNetRandom*                                  rnr,
        class RakNet::BitStream&                                     updateBitStream
    );

    // symbol: ??1ReliabilityLayer@RakNet@@QEAA@XZ
    MCAPI ~ReliabilityLayer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AllocateFromInternalPacketPool@ReliabilityLayer@RakNet@@AEAAPEAUInternalPacket@2@XZ
    MCAPI struct RakNet::InternalPacket* AllocateFromInternalPacketPool();

    // symbol:
    // ?BuildPacketFromSplitPacketList@ReliabilityLayer@RakNet@@AEAAPEAUInternalPacket@2@PEAUSplitPacketChannel@2@_K@Z
    MCAPI struct RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(struct RakNet::SplitPacketChannel* splitPacketChannel, uint64 time);

    // symbol:
    // ?BuildPacketFromSplitPacketList@ReliabilityLayer@RakNet@@AEAAPEAUInternalPacket@2@G_KPEAVRakNetSocket2@2@AEAUSystemAddress@2@PEAVRakNetRandom@2@AEAVBitStream@2@@Z
    MCAPI struct RakNet::InternalPacket* BuildPacketFromSplitPacketList(
        ushort                        splitPacketId,
        uint64                        time,
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        class RakNet::RakNetRandom*   rnr,
        class RakNet::BitStream&      updateBitStream
    );

    // symbol: ?ClearPacketsAndDatagrams@ReliabilityLayer@RakNet@@AEAAXXZ
    MCAPI void ClearPacketsAndDatagrams();

    // symbol: ?CreateInternalPacketFromBitStream@ReliabilityLayer@RakNet@@AEAAPEAUInternalPacket@2@PEAVBitStream@2@_K@Z
    MCAPI struct RakNet::InternalPacket*
    CreateInternalPacketFromBitStream(class RakNet::BitStream* bitStream, uint64 time);

    // symbol: ?FreeInternalPacketData@ReliabilityLayer@RakNet@@AEAAXPEAUInternalPacket@2@PEBDI@Z
    MCAPI void FreeInternalPacketData(struct RakNet::InternalPacket* internalPacket, char const* file, uint line);

    // symbol: ?FreeThreadSafeMemory@ReliabilityLayer@RakNet@@AEAAXXZ
    MCAPI void FreeThreadSafeMemory();

    // symbol:
    // ?GetMessageNumberNodeByDatagramIndex@ReliabilityLayer@RakNet@@AEAAPEAUMessageNumberNode@12@Uuint24_t@2@PEA_K@Z
    MCAPI struct RakNet::ReliabilityLayer::MessageNumberNode*
    GetMessageNumberNodeByDatagramIndex(struct RakNet::uint24_t index, uint64* timeSent);

    // symbol: ?GetNextWeight@ReliabilityLayer@RakNet@@AEAA_KH@Z
    MCAPI uint64 GetNextWeight(int priorityLevel);

    // symbol: ?InitializeVariables@ReliabilityLayer@RakNet@@AEAAXXZ
    MCAPI void InitializeVariables();

    // symbol: ?InsertIntoSplitPacketList@ReliabilityLayer@RakNet@@AEAAXPEAUInternalPacket@2@_K@Z
    MCAPI void InsertIntoSplitPacketList(struct RakNet::InternalPacket* internalPacket, uint64 time);

    // symbol: ?PushDatagram@ReliabilityLayer@RakNet@@AEAAXXZ
    MCAPI void PushDatagram();

    // symbol: ?PushPacket@ReliabilityLayer@RakNet@@AEAAX_KPEAUInternalPacket@2@_N@Z
    MCAPI void PushPacket(uint64 time, struct RakNet::InternalPacket* internalPacket, bool isReliable);

    // symbol: ?RemoveFromDatagramHistory@ReliabilityLayer@RakNet@@AEAAXUuint24_t@2@@Z
    MCAPI void RemoveFromDatagramHistory(struct RakNet::uint24_t index);

    // symbol:
    // ?RemovePacketFromResendListAndDeleteOlderReliableSequenced@ReliabilityLayer@RakNet@@AEAAIUuint24_t@2@_KAEAV?$List@PEAVPluginInterface2@RakNet@@@DataStructures@@AEBUSystemAddress@2@@Z
    MCAPI uint RemovePacketFromResendListAndDeleteOlderReliableSequenced(
        struct RakNet::uint24_t                                      messageNumber,
        uint64                                                       time,
        class DataStructures::List<class RakNet::PluginInterface2*>& messageHandlerList,
        struct RakNet::SystemAddress const&                          systemAddress
    );

    // symbol:
    // ?SendACKs@ReliabilityLayer@RakNet@@AEAAXPEAVRakNetSocket2@2@AEAUSystemAddress@2@_KPEAVRakNetRandom@2@AEAVBitStream@2@@Z
    MCAPI void SendACKs(
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        uint64                        time,
        class RakNet::RakNetRandom*   rnr,
        class RakNet::BitStream&      updateBitStream
    );

    // symbol:
    // ?SendBitStream@ReliabilityLayer@RakNet@@AEAAXPEAVRakNetSocket2@2@AEAUSystemAddress@2@PEAVBitStream@2@PEAVRakNetRandom@2@_K@Z
    MCAPI void SendBitStream(
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        class RakNet::BitStream*      bitStream,
        class RakNet::RakNetRandom*   rnr,
        uint64                        currentTime
    );

    // symbol: ?SplitPacket@ReliabilityLayer@RakNet@@AEAAXPEAUInternalPacket@2@@Z
    MCAPI void SplitPacket(struct RakNet::InternalPacket* internalPacket);

    // symbol:
    // ?WriteToBitStreamFromInternalPacket@ReliabilityLayer@RakNet@@AEAAIPEAVBitStream@2@QEBUInternalPacket@2@_K@Z
    MCAPI uint WriteToBitStreamFromInternalPacket(
        class RakNet::BitStream*                   bitStream,
        struct RakNet::InternalPacket const* const internalPacket,
        uint64                                     curTime
    );

    // NOLINTEND
};

}; // namespace RakNet
