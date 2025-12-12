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
    ::ll::UntypedStorage<1, 1>   mUnka75ee5;
    ::ll::UntypedStorage<1, 1>   mUnk6e7e17;
    ::ll::UntypedStorage<1, 1>   mUnk72a124;
    ::ll::UntypedStorage<1, 256> mUnk439e27;
    ::ll::UntypedStorage<1, 256> mUnk2674b6;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLogger& operator=(PacketLogger const&);
    PacketLogger(PacketLogger const&);
    PacketLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketLogger() /*override*/ = default;

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

    virtual void OnDirectSocketSend(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    virtual void OnDirectSocketReceive(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    virtual void OnReliabilityLayerNotification(char const*, uint const, ::RakNet::SystemAddress, bool) /*override*/;

    virtual void OnInternalPacket(::RakNet::InternalPacket*, uint, ::RakNet::SystemAddress, uint, int) /*override*/;

    virtual void OnAck(uint, ::RakNet::SystemAddress, uint) /*override*/;

    virtual void OnPushBackPacket(char const*, uint const, ::RakNet::SystemAddress) /*override*/;

    virtual void LogHeader();

    virtual void WriteLog(char const*);

    virtual void WriteMiscellaneous(char const*, char const*);

    virtual void SetPrintID(bool);

    virtual void SetPrintAcks(bool);

    virtual void SetPrefix(char const*);

    virtual void SetSuffix(char const*);

    virtual bool UsesReliabilityLayer() const /*override*/;

    virtual void AddToLog(char const*);

    virtual char const* UserIDTOString(uchar);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
