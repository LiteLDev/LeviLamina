#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/data_structures/List.h"

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
    MCAPI bool AckTimeout(uint64 curTime);

    MCAPI bool AreAcksWaiting();

    MCAPI struct RakNet::RakNetStatistics* GetStatistics(struct RakNet::RakNetStatistics* rns);

    MCAPI uint GetTimeoutTime();

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

    MCAPI bool IsDeadConnection() const;

    MCAPI bool IsOutgoingDataWaiting();

    MCAPI uint Receive(uchar** data);

    MCAPI ReliabilityLayer();

    MCAPI void Reset(bool resetVariables, int MTUSize, bool _useSecurity);

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

    MCAPI void SetSplitMessageProgressInterval(int interval);

    MCAPI void SetTimeoutTime(uint time);

    MCAPI void SetUnreliableTimeout(uint timeoutMS);

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

    MCAPI ~ReliabilityLayer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct RakNet::InternalPacket* AllocateFromInternalPacketPool();

    MCAPI struct RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(struct RakNet::SplitPacketChannel* splitPacketChannel, uint64 time);

    MCAPI struct RakNet::InternalPacket* BuildPacketFromSplitPacketList(
        ushort                        splitPacketId,
        uint64                        time,
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        class RakNet::RakNetRandom*   rnr,
        class RakNet::BitStream&      updateBitStream
    );

    MCAPI void ClearPacketsAndDatagrams();

    MCAPI struct RakNet::InternalPacket*
    CreateInternalPacketFromBitStream(class RakNet::BitStream* bitStream, uint64 time);

    MCAPI void FreeInternalPacketData(struct RakNet::InternalPacket* internalPacket, char const* file, uint line);

    MCAPI void FreeThreadSafeMemory();

    MCAPI struct RakNet::ReliabilityLayer::MessageNumberNode*
    GetMessageNumberNodeByDatagramIndex(struct RakNet::uint24_t index, uint64* timeSent);

    MCAPI uint64 GetNextWeight(int priorityLevel);

    MCAPI void InitializeVariables();

    MCAPI void InsertIntoSplitPacketList(struct RakNet::InternalPacket* internalPacket, uint64 time);

    MCAPI void PushDatagram();

    MCAPI void PushPacket(uint64 time, struct RakNet::InternalPacket* internalPacket, bool isReliable);

    MCAPI void RemoveFromDatagramHistory(struct RakNet::uint24_t index);

    MCAPI uint RemovePacketFromResendListAndDeleteOlderReliableSequenced(
        struct RakNet::uint24_t                                      messageNumber,
        uint64                                                       time,
        class DataStructures::List<class RakNet::PluginInterface2*>& messageHandlerList,
        struct RakNet::SystemAddress const&                          systemAddress
    );

    MCAPI void SendACKs(
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        uint64                        time,
        class RakNet::RakNetRandom*   rnr,
        class RakNet::BitStream&      updateBitStream
    );

    MCAPI void SendBitStream(
        class RakNet::RakNetSocket2*  s,
        struct RakNet::SystemAddress& systemAddress,
        class RakNet::BitStream*      bitStream,
        class RakNet::RakNetRandom*   rnr,
        uint64                        currentTime
    );

    MCAPI void SplitPacket(struct RakNet::InternalPacket* internalPacket);

    MCAPI uint WriteToBitStreamFromInternalPacket(
        class RakNet::BitStream*                   bitStream,
        struct RakNet::InternalPacket const* const internalPacket,
        uint64                                     curTime
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet
