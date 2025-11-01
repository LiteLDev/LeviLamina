#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct DcSctpSocketHandoverState {
public:
    // DcSctpSocketHandoverState inner types declare
    // clang-format off
    struct Capabilities;
    struct OrderedStream;
    struct OutgoingStream;
    struct Receive;
    struct Transmission;
    struct UnorderedStream;
    // clang-format on
    
    // DcSctpSocketHandoverState inner types define
    enum class SocketState : int {
        KClosed = 0,
        KConnected = 1,
    };
    
    struct Capabilities {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk4cf276;
        ::ll::UntypedStorage<1, 1> mUnka4ef5f;
        ::ll::UntypedStorage<1, 1> mUnk690c49;
        ::ll::UntypedStorage<1, 1> mUnk564b7d;
        ::ll::UntypedStorage<2, 2> mUnkeb86ee;
        ::ll::UntypedStorage<2, 2> mUnkcd17ad;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Capabilities& operator=(Capabilities const&);
        Capabilities(Capabilities const&);
        Capabilities();
    
    };
    
    struct OutgoingStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk135506;
        ::ll::UntypedStorage<4, 4> mUnkb04d85;
        ::ll::UntypedStorage<4, 4> mUnka877ec;
        ::ll::UntypedStorage<4, 4> mUnk87c8c5;
        ::ll::UntypedStorage<2, 2> mUnk35be5f;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        OutgoingStream& operator=(OutgoingStream const&);
        OutgoingStream(OutgoingStream const&);
        OutgoingStream();
    
    };
    
    struct Transmission {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk856faa;
        ::ll::UntypedStorage<4, 4> mUnkb30011;
        ::ll::UntypedStorage<4, 4> mUnke1e5c3;
        ::ll::UntypedStorage<4, 4> mUnk221d98;
        ::ll::UntypedStorage<4, 4> mUnkc1bba8;
        ::ll::UntypedStorage<4, 4> mUnk1a65aa;
        ::ll::UntypedStorage<8, 24> mUnkcc11a9;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Transmission& operator=(Transmission const&);
        Transmission(Transmission const&);
        Transmission();
    
    };
    
    struct OrderedStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk77295c;
        ::ll::UntypedStorage<4, 4> mUnk9b0497;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        OrderedStream& operator=(OrderedStream const&);
        OrderedStream(OrderedStream const&);
        OrderedStream();
    
    };
    
    struct UnorderedStream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkc19cbe;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        UnorderedStream& operator=(UnorderedStream const&);
        UnorderedStream(UnorderedStream const&);
        UnorderedStream();
    
    };
    
    struct Receive {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk78b9a3;
        ::ll::UntypedStorage<4, 4> mUnkb5717b;
        ::ll::UntypedStorage<4, 4> mUnk299dc8;
        ::ll::UntypedStorage<4, 4> mUnk90110c;
        ::ll::UntypedStorage<4, 4> mUnk6727a2;
        ::ll::UntypedStorage<8, 24> mUnk6ccb28;
        ::ll::UntypedStorage<8, 24> mUnk8e7e03;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Receive& operator=(Receive const&);
        Receive(Receive const&);
        Receive();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Receive();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8611ae;
    ::ll::UntypedStorage<4, 4> mUnkf565e1;
    ::ll::UntypedStorage<4, 4> mUnk55ee4c;
    ::ll::UntypedStorage<4, 4> mUnkabe6a6;
    ::ll::UntypedStorage<4, 4> mUnk8dd4c6;
    ::ll::UntypedStorage<8, 8> mUnk4185be;
    ::ll::UntypedStorage<2, 8> mUnk10d443;
    ::ll::UntypedStorage<8, 48> mUnk43058d;
    ::ll::UntypedStorage<8, 72> mUnke3bdc9;
    // NOLINTEND

public:
    // prevent constructor by default
    DcSctpSocketHandoverState& operator=(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState(DcSctpSocketHandoverState const&);
    DcSctpSocketHandoverState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DcSctpSocketHandoverState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
