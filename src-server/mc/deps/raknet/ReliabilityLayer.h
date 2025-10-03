#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BPSTracker.h"
#include "mc/deps/raknet/CCRakNetSlidingWindow.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/RakNetStatistics.h"
#include "mc/deps/raknet/data_structures/Heap.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/MemoryPool.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/RangeList.h"
#include "mc/deps/raknet/uint24_t.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Heap; }
namespace DataStructures { class OrderedList; }
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct InternalPacketRefCountedData; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ReliabilityLayer {
public:
    // ReliabilityLayer inner types declare
    // clang-format off
    struct DatagramHistoryNode;
    struct MessageNumberNode;
    struct UnreliableWithAckReceiptNode;
    // clang-format on

    // ReliabilityLayer inner types define
    struct MessageNumberNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                             messageNumber;
        ::ll::TypedStorage<8, 8, ::RakNet::ReliabilityLayer::MessageNumberNode*> next;
        // NOLINTEND
    };

    struct DatagramHistoryNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::ReliabilityLayer::MessageNumberNode*> head;
        ::ll::TypedStorage<8, 8, uint64>                                         timeSent;
        // NOLINTEND
    };

    struct UnreliableWithAckReceiptNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RakNet::uint24_t> datagramNumber;
        ::ll::TypedStorage<4, 4, uint>               sendReceiptSerial;
        ::ll::TypedStorage<8, 8, uint64>             nextActionTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::InternalPacket*>> outputQueue;
    ::ll::TypedStorage<4, 4, int>                                                 splitMessageProgressInterval;
    ::ll::TypedStorage<8, 8, uint64>                                              unreliableTimeout;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::ReliabilityLayer::DatagramHistoryNode>> datagramHistory;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::ReliabilityLayer::MessageNumberNode>>
        datagramHistoryMessagePool;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::ReliabilityLayer::UnreliableWithAckReceiptNode>>
                                                                                      unreliableWithAckReceiptHistory;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                                      datagramHistoryPopCount;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::InternalPacket>> internalPacketPool;
    ::ll::TypedStorage<8, 4096, ::RakNet::InternalPacket* [512]>                      resendBuffer;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                               resendLinkedListHead;
    ::ll::TypedStorage<8, 8, ::RakNet::InternalPacket*>                               unreliableLinkedListHead;
    ::ll::TypedStorage<4, 4, uint>                                                    timeLastDatagramArrived;
    ::ll::TypedStorage<8, 24, ::DataStructures::Heap<uint64, ::RakNet::InternalPacket*, 0>> outgoingPacketBuffer;
    ::ll::TypedStorage<8, 32, uint64[4]> outgoingPacketBufferNextWeights;
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<ushort, ::RakNet::SplitPacketChannel*, $unknown_type>>
                                                           splitPacketChannelList;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>           sendReliableMessageNumberIndex;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>           internalOrderIndex;
    ::ll::TypedStorage<1, 1, bool>                         deadConnection;
    ::ll::TypedStorage<1, 1, bool>                         cheater;
    ::ll::TypedStorage<2, 2, ushort>                       splitPacketId;
    ::ll::TypedStorage<4, 4, uint>                         timeoutTime;
    ::ll::TypedStorage<8, 224, ::RakNet::RakNetStatistics> statistics;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>     orderedWriteIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>     sequencedWriteIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>     orderedReadIndex;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>     highestSequencedReadIndex;
    ::ll::TypedStorage<8, 768, ::DataStructures::Heap<uint64, ::RakNet::InternalPacket*, 0>[32]> orderingHeaps;
    ::ll::TypedStorage<4, 128, ::RakNet::uint24_t[32]>                                           heapIndexOffsets;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<bool>>                                     hasReceivedPacketQueue;
    ::ll::TypedStorage<4, 4, ::RakNet::uint24_t>                                 receivedPacketsBaseIndex;
    ::ll::TypedStorage<1, 1, bool>                                               resetReceivedPackets;
    ::ll::TypedStorage<8, 8, uint64>                                             lastUpdateTime;
    ::ll::TypedStorage<8, 8, uint64>                                             timeBetweenPackets;
    ::ll::TypedStorage<8, 8, uint64>                                             nextSendTime;
    ::ll::TypedStorage<8, 8, uint64>                                             ackPingSum;
    ::ll::TypedStorage<1, 1, uchar>                                              ackPingIndex;
    ::ll::TypedStorage<8, 8, uint64>                                             remoteSystemTime;
    ::ll::TypedStorage<8, 8, uint64>                                             nextAllowedThroughputSample;
    ::ll::TypedStorage<1, 1, bool>                                               bandwidthExceededStatistic;
    ::ll::TypedStorage<8, 8, int64>                                              throughputCapCountdown;
    ::ll::TypedStorage<4, 4, uint>                                               receivePacketCount;
    ::ll::TypedStorage<8, 8, uint64>                                             elapsedTimeSinceLastUpdate;
    ::ll::TypedStorage<8, 8, uint64>                                             nextAckTimeToSend;
    ::ll::TypedStorage<8, 80, ::RakNet::CCRakNetSlidingWindow>                   congestionManager;
    ::ll::TypedStorage<4, 4, uint>                                               unacknowledgedBytes;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::InternalPacket*>> packetsToSendThisUpdate;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<bool>>                      packetsToDeallocThisUpdate;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<uint>> packetsToSendThisUpdateDatagramBoundaries;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<bool>> datagramsToSendThisUpdateIsPair;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<uint>> datagramSizesInBytes;
    ::ll::TypedStorage<4, 4, uint>                          datagramSizeSoFar;
    ::ll::TypedStorage<4, 4, uint>                          allDatagramSizesSoFar;
    ::ll::TypedStorage<8, 8, double>                        totalUserDataBytesAcked;
    ::ll::TypedStorage<8, 8, uint64>                        timeOfLastContinualSend;
    ::ll::TypedStorage<8, 8, uint64>                        timeToNextUnreliableCull;
    ::ll::TypedStorage<8, 16, ::DataStructures::RangeList<::RakNet::uint24_t>> incomingAcks;
    ::ll::TypedStorage<4, 4, int>                                              countdownToNextPacketPair;
    ::ll::TypedStorage<8, 16, ::DataStructures::RangeList<::RakNet::uint24_t>> acknowlegements;
    ::ll::TypedStorage<8, 16, ::DataStructures::RangeList<::RakNet::uint24_t>> NAKs;
    ::ll::TypedStorage<1, 1, bool>                                             remoteSystemNeedsBAndAS;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::InternalPacketRefCountedData>> refCountedDataPool;
    ::ll::TypedStorage<8, 280, ::RakNet::BPSTracker[7]>                                             bpsMetrics;
    ::ll::TypedStorage<8, 8, uint64>                                                                lastBpsClear;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RakNet::InternalPacket* AllocateFromInternalPacketPool();

    MCAPI ::RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(::RakNet::SplitPacketChannel* splitPacketChannel, uint64 time);

    MCAPI void ClearPacketsAndDatagrams();

    MCAPI ::RakNet::InternalPacket* CreateInternalPacketFromBitStream(::RakNet::BitStream* bitStream, uint64 time);

    MCAPI void FreeInternalPacketData(::RakNet::InternalPacket* internalPacket, char const* file, uint line);

    MCAPI void FreeThreadSafeMemory();

    MCAPI uint64 GetNextWeight(int priorityLevel);

    MCAPI ::RakNet::RakNetStatistics* GetStatistics(::RakNet::RakNetStatistics* rns);

    MCAPI bool HandleSocketReceiveFromConnectedPlayer(
        char const*                                          buffer,
        uint                                                 length,
        ::RakNet::SystemAddress&                             systemAddress,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        int                                                  MTUSize,
        ::RakNet::RakNetSocket2*                             s,
        ::RakNet::RakNetRandom*                              rnr,
        uint64                                               timeRead,
        ::RakNet::BitStream&                                 updateBitStream
    );

    MCAPI void InitializeVariables();

    MCAPI void InsertIntoSplitPacketList(::RakNet::InternalPacket* internalPacket, uint64 time);

    MCAPI void PushDatagram();

    MCAPI void PushPacket(uint64 time, ::RakNet::InternalPacket* internalPacket, bool isReliable);

    MCAPI void ReleaseToInternalPacketPool(::RakNet::InternalPacket* ip);

    MCAPI ReliabilityLayer();

    MCAPI void RemoveFromDatagramHistory(::RakNet::uint24_t index);

    MCAPI uint RemovePacketFromResendListAndDeleteOlderReliableSequenced(
        ::RakNet::uint24_t                                   messageNumber,
        uint64                                               time,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        ::RakNet::SystemAddress const&                       systemAddress
    );

    MCAPI void ResetPacketsAndDatagrams();

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

    MCAPI void SendACKs(
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        uint64                   time,
        ::RakNet::RakNetRandom*  rnr,
        ::RakNet::BitStream&     updateBitStream
    );

    MCAPI void SendBitStream(
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        ::RakNet::BitStream*     bitStream,
        ::RakNet::RakNetRandom*  rnr,
        uint64                   currentTime
    );

    MCAPI void SplitPacket(::RakNet::InternalPacket* internalPacket);

    MCAPI void Update(
        ::RakNet::RakNetSocket2*                             s,
        ::RakNet::SystemAddress&                             systemAddress,
        int                                                  MTUSize,
        uint64                                               time,
        uint                                                 bitsPerSecondLimit,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        ::RakNet::RakNetRandom*                              rnr,
        ::RakNet::BitStream&                                 updateBitStream
    );

    MCAPI uint WriteToBitStreamFromInternalPacket(
        ::RakNet::BitStream*                  bitStream,
        ::RakNet::InternalPacket const* const internalPacket,
        uint64                                curTime
    );

    MCAPI ~ReliabilityLayer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RakNet
