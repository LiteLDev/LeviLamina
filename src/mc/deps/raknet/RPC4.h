#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
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
        ::ll::UntypedStorage<1, 1>  mUnk240e41;
        ::ll::UntypedStorage<8, 16> mUnkf7d870;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalCallback& operator=(LocalCallback const&);
        LocalCallback(LocalCallback const&);
        LocalCallback();
    };

    struct LocalSlotObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcc2b71;
        ::ll::UntypedStorage<4, 4> mUnkbb3b5e;
        ::ll::UntypedStorage<8, 8> mUnkbcddf3;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalSlotObject& operator=(LocalSlotObject const&);
        LocalSlotObject(LocalSlotObject const&);
        LocalSlotObject();
    };

    struct LocalSlot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkb70826;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalSlot& operator=(LocalSlot const&);
        LocalSlot(LocalSlot const&);
        LocalSlot();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkb1e8fd;
    ::ll::UntypedStorage<8, 16>  mUnkef7cd3;
    ::ll::UntypedStorage<8, 16>  mUnkf9a38e;
    ::ll::UntypedStorage<8, 16>  mUnk271103;
    ::ll::UntypedStorage<8, 288> mUnkb7232b;
    ::ll::UntypedStorage<1, 1>   mUnk377221;
    ::ll::UntypedStorage<4, 4>   mUnkd18367;
    ::ll::UntypedStorage<1, 1>   mUnkf58128;
    // NOLINTEND

public:
    // prevent constructor by default
    RPC4& operator=(RPC4 const&);
    RPC4(RPC4 const&);
    RPC4();

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
