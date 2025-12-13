#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/external/webrtc/DataChannelObserver.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataChannelInterface; }
namespace webrtc { struct DataBuffer; }
// clang-format on

namespace NetherNet {

class PacketQueue : public ::NetherNet::ContextProxy {
public:
    // PacketQueue inner types declare
    // clang-format off
    class DataChannel;
    // clang-format on

    // PacketQueue inner types define
    class DataChannel : public ::NetherNet::ContextProxy, public ::webrtc::DataChannelObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkd0c200;
        ::ll::UntypedStorage<8, 64> mUnk7022e3;
        ::ll::UntypedStorage<8, 40> mUnk1116c8;
        ::ll::UntypedStorage<4, 4>  mUnkea7403;
        ::ll::UntypedStorage<8, 8>  mUnk6efd8f;
        ::ll::UntypedStorage<8, 8>  mUnk6bd75c;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataChannel& operator=(DataChannel const&);
        DataChannel(DataChannel const&);
        DataChannel();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~DataChannel() /*override*/;

        virtual void OnStateChange() /*override*/;

        virtual void OnMessage(::webrtc::DataBuffer const& buffer) /*override*/;

        virtual void OnBufferedAmountChange(uint64) /*override*/;

        virtual bool IsOkToCallOnTheNetworkThread() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DataChannel(
            ::NetherNet::ContextProxy const&                              ctx,
            ::brstd::move_only_function<void(::NetherNet::ESessionError)> onClose,
            ::brstd::move_only_function<void(uchar const*, uint64)>       onData
        );

        MCNAPI void _trySend();

        MCNAPI void send(uchar const* source, uint64 size);

        MCNAPI void setChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface> channel);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::NetherNet::ContextProxy const&                              ctx,
            ::brstd::move_only_function<void(::NetherNet::ESessionError)> onClose,
            ::brstd::move_only_function<void(uchar const*, uint64)>       onData
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnStateChange();

        MCNAPI void $OnMessage(::webrtc::DataBuffer const& buffer);

        MCNAPI void $OnBufferedAmountChange(uint64);

        MCNAPI bool $IsOkToCallOnTheNetworkThread();


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForContextProxy();

        MCNAPI static void** $vftableForDataChannelObserver();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnk8b6aec;
    ::ll::UntypedStorage<8, 64>  mUnk9b0d07;
    ::ll::UntypedStorage<8, 248> mUnkb28c4c;
    ::ll::UntypedStorage<8, 248> mUnk330e14;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketQueue& operator=(PacketQueue const&);
    PacketQueue(PacketQueue const&);
    PacketQueue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketQueue() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PacketQueue(
        ::NetherNet::ContextProxy const&                              ctx,
        ::brstd::move_only_function<void(::NetherNet::ESessionError)> onClose
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::NetherNet::ContextProxy const& ctx, ::brstd::move_only_function<void(::NetherNet::ESessionError)> onClose);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
