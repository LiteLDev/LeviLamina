#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class PacketLogger : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        logDirectMessages;
    ::ll::TypedStorage<1, 1, bool>        printId;
    ::ll::TypedStorage<1, 1, bool>        printAcks;
    ::ll::TypedStorage<1, 256, char[256]> prefix;
    ::ll::TypedStorage<1, 256, char[256]> suffix;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PacketLogger() /*override*/ = default;

    // vIndex: 18
    virtual void FormatLine(
        char*,
        char const*,
        char const*,
        uint,
        uint,
        uchar,
        uint const,
        uint64,
        ::RakNet::SystemAddress const&,
        ::RakNet::SystemAddress const&,
        uint,
        uint,
        uint,
        uint
    );

    // vIndex: 17
    virtual void FormatLine(
        char*,
        char const*,
        char const*,
        uint,
        uint,
        char const*,
        uint const,
        uint64,
        ::RakNet::SystemAddress const&,
        ::RakNet::SystemAddress const&,
        uint,
        uint,
        uint,
        uint
    );

    // vIndex: 11
    virtual void OnDirectSocketSend(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    // vIndex: 12
    virtual void OnDirectSocketReceive(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    // vIndex: 13
    virtual void OnReliabilityLayerNotification(char const*, uint const, ::RakNet::SystemAddress, bool) /*override*/;

    // vIndex: 14
    virtual void OnInternalPacket(::RakNet::InternalPacket*, uint, ::RakNet::SystemAddress, uint, int) /*override*/;

    // vIndex: 15
    virtual void OnAck(uint, ::RakNet::SystemAddress, uint) /*override*/;

    // vIndex: 16
    virtual void OnPushBackPacket(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    // vIndex: 19
    virtual void LogHeader();

    // vIndex: 20
    virtual void WriteLog(char const*);

    // vIndex: 21
    virtual void WriteMiscellaneous(char const*, char const*);

    // vIndex: 22
    virtual void SetPrintID(bool);

    // vIndex: 23
    virtual void SetPrintAcks(bool);

    // vIndex: 24
    virtual void SetPrefix(char const*);

    // vIndex: 25
    virtual void SetSuffix(char const*);

    // vIndex: 10
    virtual bool UsesReliabilityLayer() const /*override*/;

    // vIndex: 26
    virtual void AddToLog(char const*);

    // vIndex: 27
    virtual char const* UserIDTOString(uchar);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
