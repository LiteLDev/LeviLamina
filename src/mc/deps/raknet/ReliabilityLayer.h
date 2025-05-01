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
    struct UnreliableWithAckReceiptNode;
    // clang-format on

    // ReliabilityLayer inner types define
    struct MessageNumberNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3b91de;
        ::ll::UntypedStorage<8, 8> mUnk470a41;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageNumberNode& operator=(MessageNumberNode const&);
        MessageNumberNode(MessageNumberNode const&);
        MessageNumberNode();
    };

    struct DatagramHistoryNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb2aca8;
        ::ll::UntypedStorage<8, 8> mUnk187106;
        // NOLINTEND

    public:
        // prevent constructor by default
        DatagramHistoryNode& operator=(DatagramHistoryNode const&);
        DatagramHistoryNode(DatagramHistoryNode const&);
        DatagramHistoryNode();
    };

    struct UnreliableWithAckReceiptNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkced6ba;
        ::ll::UntypedStorage<4, 4> mUnkc09fef;
        ::ll::UntypedStorage<8, 8> mUnk5e6576;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnreliableWithAckReceiptNode& operator=(UnreliableWithAckReceiptNode const&);
        UnreliableWithAckReceiptNode(UnreliableWithAckReceiptNode const&);
        UnreliableWithAckReceiptNode();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>   mUnkb712df;
    ::ll::UntypedStorage<4, 4>    mUnk840b3d;
    ::ll::UntypedStorage<8, 8>    mUnkbf4abf;
    ::ll::UntypedStorage<8, 24>   mUnk4856bd;
    ::ll::UntypedStorage<8, 32>   mUnk25ac52;
    ::ll::UntypedStorage<8, 16>   mUnk65efb3;
    ::ll::UntypedStorage<4, 4>    mUnke0d0e4;
    ::ll::UntypedStorage<8, 32>   mUnk493899;
    ::ll::UntypedStorage<8, 4096> mUnk98ff56;
    ::ll::UntypedStorage<8, 8>    mUnkdbb8b1;
    ::ll::UntypedStorage<8, 8>    mUnk42c756;
    ::ll::UntypedStorage<4, 4>    mUnk4fce02;
    ::ll::UntypedStorage<8, 24>   mUnk3028f9;
    ::ll::UntypedStorage<8, 32>   mUnk5500c6;
    ::ll::UntypedStorage<8, 16>   mUnk7b00f9;
    ::ll::UntypedStorage<4, 4>    mUnk70b42d;
    ::ll::UntypedStorage<4, 4>    mUnke5db24;
    ::ll::UntypedStorage<1, 1>    mUnkd2c69a;
    ::ll::UntypedStorage<1, 1>    mUnk2b126c;
    ::ll::UntypedStorage<2, 2>    mUnked101a;
    ::ll::UntypedStorage<4, 4>    mUnk25583b;
    ::ll::UntypedStorage<8, 224>  mUnk312262;
    ::ll::UntypedStorage<4, 128>  mUnk2d6c36;
    ::ll::UntypedStorage<4, 128>  mUnkc9f6bc;
    ::ll::UntypedStorage<4, 128>  mUnkb1cd4b;
    ::ll::UntypedStorage<4, 128>  mUnk84e899;
    ::ll::UntypedStorage<8, 768>  mUnk624080;
    ::ll::UntypedStorage<4, 128>  mUnkf09dad;
    ::ll::UntypedStorage<8, 24>   mUnka55249;
    ::ll::UntypedStorage<4, 4>    mUnk4f040f;
    ::ll::UntypedStorage<1, 1>    mUnk68c359;
    ::ll::UntypedStorage<8, 8>    mUnkcaea37;
    ::ll::UntypedStorage<8, 8>    mUnkbf33ec;
    ::ll::UntypedStorage<8, 8>    mUnk1ea222;
    ::ll::UntypedStorage<8, 8>    mUnk5452b1;
    ::ll::UntypedStorage<1, 1>    mUnkc7aa05;
    ::ll::UntypedStorage<8, 8>    mUnka206a5;
    ::ll::UntypedStorage<8, 8>    mUnka0e4ac;
    ::ll::UntypedStorage<1, 1>    mUnk1bb973;
    ::ll::UntypedStorage<8, 8>    mUnkfd0cc0;
    ::ll::UntypedStorage<4, 4>    mUnkb6e824;
    ::ll::UntypedStorage<8, 8>    mUnka5fb46;
    ::ll::UntypedStorage<8, 8>    mUnkf2e3ac;
    ::ll::UntypedStorage<8, 80>   mUnkfdcab6;
    ::ll::UntypedStorage<4, 4>    mUnk14e142;
    ::ll::UntypedStorage<8, 16>   mUnkdd8076;
    ::ll::UntypedStorage<8, 16>   mUnkbcf583;
    ::ll::UntypedStorage<8, 16>   mUnkf29fc0;
    ::ll::UntypedStorage<8, 16>   mUnk95919f;
    ::ll::UntypedStorage<8, 16>   mUnk28c684;
    ::ll::UntypedStorage<4, 4>    mUnked8b3a;
    ::ll::UntypedStorage<4, 4>    mUnkce4201;
    ::ll::UntypedStorage<8, 8>    mUnkcac138;
    ::ll::UntypedStorage<8, 8>    mUnkf24c45;
    ::ll::UntypedStorage<8, 8>    mUnkbdacd7;
    ::ll::UntypedStorage<8, 16>   mUnkab6e9b;
    ::ll::UntypedStorage<4, 4>    mUnk17b738;
    ::ll::UntypedStorage<8, 16>   mUnk8683a4;
    ::ll::UntypedStorage<8, 16>   mUnk7a400d;
    ::ll::UntypedStorage<1, 1>    mUnk4ee7a5;
    ::ll::UntypedStorage<8, 32>   mUnkb4cedf;
    ::ll::UntypedStorage<8, 280>  mUnk1078b2;
    ::ll::UntypedStorage<8, 8>    mUnkf5fac4;
    // NOLINTEND

public:
    // prevent constructor by default
    ReliabilityLayer& operator=(ReliabilityLayer const&);
    ReliabilityLayer(ReliabilityLayer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RakNet::InternalPacket* AllocateFromInternalPacketPool();

    MCNAPI ::RakNet::InternalPacket*
    BuildPacketFromSplitPacketList(::RakNet::SplitPacketChannel* splitPacketChannel, uint64 time);

    MCNAPI ::RakNet::InternalPacket* BuildPacketFromSplitPacketList(
        ushort                   splitPacketId,
        uint64                   time,
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        ::RakNet::RakNetRandom*  updateBitStream,
        ::RakNet::BitStream&     rnr
    );

    MCNAPI void ClearPacketsAndDatagrams();

    MCNAPI ::RakNet::InternalPacket* CreateInternalPacketFromBitStream(::RakNet::BitStream* bitStream, uint64 time);

    MCNAPI void FreeInternalPacketData(::RakNet::InternalPacket* internalPacket, char const* file, uint line);

    MCNAPI void FreeThreadSafeMemory();

    MCNAPI uint64 GetNextWeight(int priorityLevel);

    MCNAPI ::RakNet::RakNetStatistics* GetStatistics(::RakNet::RakNetStatistics* rns);

    MCNAPI bool HandleSocketReceiveFromConnectedPlayer(
        char const*                                          buffer,
        uint                                                 length,
        ::RakNet::SystemAddress&                             systemAddress,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        int                                                  s,
        ::RakNet::RakNetSocket2*                             timeRead,
        ::RakNet::RakNetRandom*                              updateBitStream,
        uint64                                               MTUSize,
        ::RakNet::BitStream&                                 rnr
    );

    MCNAPI void InitializeVariables();

    MCNAPI void InsertIntoSplitPacketList(::RakNet::InternalPacket* internalPacket, uint64 time);

    MCNAPI void PushPacket(uint64 internalPacket, ::RakNet::InternalPacket* isReliable, bool time);

    MCNAPI void ReleaseToInternalPacketPool(::RakNet::InternalPacket* ip);

    MCNAPI ReliabilityLayer();

    MCNAPI void RemoveFromDatagramHistory(::RakNet::uint24_t index);

    MCNAPI uint RemovePacketFromResendListAndDeleteOlderReliableSequenced(
        ::RakNet::uint24_t                                   messageNumber,
        uint64                                               time,
        ::DataStructures::List<::RakNet::PluginInterface2*>& messageHandlerList,
        ::RakNet::SystemAddress const&                       systemAddress
    );

    MCNAPI void ResetPacketsAndDatagrams();

    MCNAPI bool Send(
        char*               data,
        uint                numberOfBitsToSend,
        ::PacketPriority    priority,
        ::PacketReliability reliability,
        uchar               orderingChannel,
        bool                makeDataCopy,
        int                 currentTime,
        uint64              receipt,
        uint                MTUSize
    );

    MCNAPI void SendACKs(
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        uint64                   time,
        ::RakNet::RakNetRandom*  updateBitStream,
        ::RakNet::BitStream&     rnr
    );

    MCNAPI void SendBitStream(
        ::RakNet::RakNetSocket2* s,
        ::RakNet::SystemAddress& systemAddress,
        ::RakNet::BitStream*     bitStream,
        ::RakNet::RakNetRandom*  currentTime,
        uint64                   rnr
    );

    MCNAPI void SplitPacket(::RakNet::InternalPacket* internalPacket);

    MCNAPI void Update(
        ::RakNet::RakNetSocket2*                             s,
        ::RakNet::SystemAddress&                             systemAddress,
        int                                                  time,
        uint64                                               bitsPerSecondLimit,
        uint                                                 messageHandlerList,
        ::DataStructures::List<::RakNet::PluginInterface2*>& updateBitStream,
        ::RakNet::RakNetRandom*                              MTUSize,
        ::RakNet::BitStream&                                 rnr
    );

    MCNAPI uint WriteToBitStreamFromInternalPacket(
        ::RakNet::BitStream*                  bitStream,
        ::RakNet::InternalPacket const* const internalPacket,
        uint64                                curTime
    );

    MCNAPI ~ReliabilityLayer();
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
};

} // namespace RakNet
