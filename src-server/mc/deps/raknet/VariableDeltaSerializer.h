#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/VariableListDeltaTracker.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/MemoryPool.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class OrderedList; }
// clang-format on

namespace RakNet {

class VariableDeltaSerializer {
public:
    // VariableDeltaSerializer inner types declare
    // clang-format off
    struct ChangedVariablesList;
    struct DeserializationContext;
    struct RemoteSystemVariableHistory;
    struct SerializationContext;
    // clang-format on

    // VariableDeltaSerializer inner types define
    struct RemoteSystemVariableHistory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>               guid;
        ::ll::TypedStorage<8, 24, ::RakNet::VariableListDeltaTracker> variableListDeltaTracker;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::
                OrderedList<uint, ::RakNet::VariableDeltaSerializer::ChangedVariablesList*, $unknown_type>>
            updatedVariablesHistory;
        // NOLINTEND
    };

    struct ChangedVariablesList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>       sendReceipt;
        ::ll::TypedStorage<2, 2, ushort>     bitWriteIndex;
        ::ll::TypedStorage<1, 56, uchar[56]> bitField;
        // NOLINTEND
    };

    struct SerializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                                           guid;
        ::ll::TypedStorage<8, 8, ::RakNet::BitStream*>                                            bitStream;
        ::ll::TypedStorage<4, 4, uint>                                                            rakPeerSendReceipt;
        ::ll::TypedStorage<8, 8, ::RakNet::VariableDeltaSerializer::RemoteSystemVariableHistory*> variableHistory;
        ::ll::TypedStorage<8, 8, ::RakNet::VariableDeltaSerializer::RemoteSystemVariableHistory*>
            variableHistoryIdentical;
        ::ll::TypedStorage<8, 8, ::RakNet::VariableDeltaSerializer::RemoteSystemVariableHistory*> variableHistoryUnique;
        ::ll::TypedStorage<8, 8, ::RakNet::VariableDeltaSerializer::ChangedVariablesList*>        changedVariables;
        ::ll::TypedStorage<4, 4, uint>                                                            sendReceipt;
        ::ll::TypedStorage<4, 4, ::PacketReliability>                                             serializationMode;
        ::ll::TypedStorage<1, 1, bool>                                                            anyVariablesWritten;
        ::ll::TypedStorage<1, 1, bool>                                                            newSystemSend;
        // NOLINTEND
    };

    struct DeserializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::BitStream*> bitStream;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::VariableDeltaSerializer::RemoteSystemVariableHistory*>>
        remoteSystemVariableHistoryList;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::VariableDeltaSerializer::ChangedVariablesList>>
                                                    updatedVariablesMemoryPool;
    ::ll::TypedStorage<1, 1, bool>                  didComparisonThisTick;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream> identicalSerializationBs;
    // NOLINTEND
};

} // namespace RakNet
