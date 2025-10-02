#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace DataStructures { class OrderedList; }
namespace RakNet { class RakString; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class RPC4 : public ::RakNet::PluginInterface2 {
public:
    // RPC4 inner types declare
    // clang-format off
    struct LocalCallback;
    struct LocalSlot;
    struct LocalSlotObject;
    // clang-format on

    // RPC4 inner types define
    struct LocalCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> messageId;
        ::ll::
            TypedStorage<8, 16, ::DataStructures::OrderedList<::RakNet::RakString, ::RakNet::RakString, $unknown_type>>
                functions;
        // NOLINTEND
    };

    struct LocalSlotObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                              registrationCount;
        ::ll::TypedStorage<4, 4, int>                                               callPriority;
        ::ll::TypedStorage<8, 8, void (*)(::RakNet::BitStream*, ::RakNet::Packet*)> functionPointer;
        // NOLINTEND
    };

    struct LocalSlot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::
                OrderedList<::RakNet::RPC4::LocalSlotObject, ::RakNet::RPC4::LocalSlotObject, $unknown_type>>
            slotObjects;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 16, ::DataStructures::Hash<::RakNet::RakString, ::RakNet::RPC4::LocalSlot*, 256, $unknown_type>>
            localSlots;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::
            Hash<::RakNet::RakString, void (*)(::RakNet::BitStream*, ::RakNet::Packet*), 64, $unknown_type>>
        registeredNonblockingFunctions;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::Hash<
            ::RakNet::RakString,
            void (*)(::RakNet::BitStream*, ::RakNet::BitStream*, ::RakNet::Packet*),
            64,
            $unknown_type>>
        registeredBlockingFunctions;
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<uchar, ::RakNet::RPC4::LocalCallback*, $unknown_type>>
                                                    localCallbacks;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream> blockingReturnValue;
    ::ll::TypedStorage<1, 1, bool>                  gotBlockingReturnValue;
    ::ll::TypedStorage<4, 4, uint>                  nextSlotRegistrationCount;
    ::ll::TypedStorage<1, 1, bool>                  interruptSignal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RPC4() /*override*/ = default;

    // vIndex: 1
    virtual void OnAttach() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
