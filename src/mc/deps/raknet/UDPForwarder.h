#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class UDPForwarder {
public:
    // UDPForwarder inner types declare
    // clang-format off
    struct ForwardEntry;
    struct StartForwardingInputStruct;
    struct StartForwardingOutputStruct;
    struct StopForwardingStruct;
    // clang-format on

    // UDPForwarder inner types define
    struct ForwardEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk380aaf;
        ::ll::UntypedStorage<8, 136> mUnk6bf38b;
        ::ll::UntypedStorage<8, 136> mUnk742f6f;
        ::ll::UntypedStorage<8, 136> mUnkdea5fa;
        ::ll::UntypedStorage<4, 4>   mUnk8a2f34;
        ::ll::UntypedStorage<8, 8>   mUnk8e468f;
        ::ll::UntypedStorage<4, 4>   mUnk94bd82;
        ::ll::UntypedStorage<2, 2>   mUnk67deaf;
        // NOLINTEND

    public:
        // prevent constructor by default
        ForwardEntry& operator=(ForwardEntry const&);
        ForwardEntry(ForwardEntry const&);
        ForwardEntry();
    };

    struct StartForwardingInputStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnkd96e6f;
        ::ll::UntypedStorage<8, 136> mUnke3df74;
        ::ll::UntypedStorage<4, 4>   mUnk6784a8;
        ::ll::UntypedStorage<8, 8>   mUnkb392b6;
        ::ll::UntypedStorage<2, 2>   mUnkdd4e11;
        ::ll::UntypedStorage<4, 4>   mUnk54ee17;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartForwardingInputStruct& operator=(StartForwardingInputStruct const&);
        StartForwardingInputStruct(StartForwardingInputStruct const&);
        StartForwardingInputStruct();
    };

    struct StartForwardingOutputStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkb71c8e;
        ::ll::UntypedStorage<8, 8> mUnk909fb6;
        ::ll::UntypedStorage<4, 4> mUnk619358;
        ::ll::UntypedStorage<4, 4> mUnk27f599;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartForwardingOutputStruct& operator=(StartForwardingOutputStruct const&);
        StartForwardingOutputStruct(StartForwardingOutputStruct const&);
        StartForwardingOutputStruct();
    };

    struct StopForwardingStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 136> mUnk89dd0a;
        ::ll::UntypedStorage<8, 136> mUnke576e7;
        // NOLINTEND

    public:
        // prevent constructor by default
        StopForwardingStruct& operator=(StopForwardingStruct const&);
        StopForwardingStruct(StopForwardingStruct const&);
        StopForwardingStruct();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk43d1fd;
    ::ll::UntypedStorage<8, 24>  mUnk414f6b;
    ::ll::UntypedStorage<8, 40>  mUnk611ccd;
    ::ll::UntypedStorage<8, 136> mUnk83da38;
    ::ll::UntypedStorage<4, 4>   mUnk3dfe40;
    ::ll::UntypedStorage<8, 16>  mUnkdc015d;
    ::ll::UntypedStorage<2, 2>   mUnkc44aa9;
    ::ll::UntypedStorage<4, 4>   mUnk2497c0;
    ::ll::UntypedStorage<4, 4>   mUnk660210;
    // NOLINTEND

public:
    // prevent constructor by default
    UDPForwarder& operator=(UDPForwarder const&);
    UDPForwarder(UDPForwarder const&);
    UDPForwarder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UDPForwarder() = default;
    // NOLINTEND
};

} // namespace RakNet
