#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class HTTPConnection2 : public ::RakNet::PluginInterface2 {
public:
    // HTTPConnection2 inner types declare
    // clang-format off
    struct Request;
    // clang-format on
    
    // HTTPConnection2 inner types define
    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5d9dd1;
        ::ll::UntypedStorage<8, 8> mUnke096eb;
        ::ll::UntypedStorage<8, 8> mUnkfb5ed2;
        ::ll::UntypedStorage<8, 136> mUnk76fb85;
        ::ll::UntypedStorage<8, 136> mUnk4b91a1;
        ::ll::UntypedStorage<2, 2> mUnkfb4a76;
        ::ll::UntypedStorage<1, 1> mUnk6a6c57;
        ::ll::UntypedStorage<4, 4> mUnkdf4c59;
        ::ll::UntypedStorage<4, 4> mUnk3b251f;
        ::ll::UntypedStorage<4, 4> mUnkdb560f;
        ::ll::UntypedStorage<8, 8> mUnkeadb83;
        ::ll::UntypedStorage<1, 1> mUnk199ccd;
        ::ll::UntypedStorage<8, 8> mUnk8e7224;
        ::ll::UntypedStorage<8, 8> mUnka63d8c;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Request& operator=(Request const&);
        Request(Request const&);
        Request();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5a7ff0;
    ::ll::UntypedStorage<8, 16> mUnke3cc12;
    ::ll::UntypedStorage<8, 16> mUnkf0fe77;
    ::ll::UntypedStorage<8, 40> mUnk4aeb40;
    ::ll::UntypedStorage<8, 40> mUnkca0079;
    ::ll::UntypedStorage<8, 40> mUnk333296;
    // NOLINTEND

public:
    // prevent constructor by default
    HTTPConnection2& operator=(HTTPConnection2 const&);
    HTTPConnection2(HTTPConnection2 const&);
    HTTPConnection2();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HTTPConnection2() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
