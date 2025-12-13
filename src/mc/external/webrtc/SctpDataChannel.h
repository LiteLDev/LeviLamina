#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/DataChannelObserver.h"
#include "mc/external/webrtc/DataMessageType.h"
#include "mc/external/webrtc/Priority.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannelControllerInterface; }
namespace webrtc { class StreamId; }
namespace webrtc { struct DataBuffer; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
// clang-format on

namespace webrtc {

class SctpDataChannel : public ::webrtc::DataChannelInterface {
public:
    // SctpDataChannel inner types declare
    // clang-format off
    class ObserverAdapter;
    // clang-format on

    // SctpDataChannel inner types define
    enum class HandshakeState : int {
        KHandshakeInit           = 0,
        KHandshakeShouldSendOpen = 1,
        KHandshakeShouldSendAck  = 2,
        KHandshakeWaitingForAck  = 3,
        KHandshakeReady          = 4,
    };

    class ObserverAdapter : public ::webrtc::DataChannelObserver {
    public:
        // ObserverAdapter inner types declare
        // clang-format off
        class CachedGetters;
        // clang-format on

        // ObserverAdapter inner types define
        class CachedGetters {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8>  mUnke9c609;
            ::ll::UntypedStorage<1, 1>  mUnkab083b;
            ::ll::UntypedStorage<4, 4>  mUnk62ccd6;
            ::ll::UntypedStorage<8, 48> mUnkeb9e32;
            // NOLINTEND

        public:
            // prevent constructor by default
            CachedGetters& operator=(CachedGetters const&);
            CachedGetters(CachedGetters const&);
            CachedGetters();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeeafcb;
        ::ll::UntypedStorage<8, 8> mUnka1f486;
        ::ll::UntypedStorage<8, 8> mUnk40ed1f;
        ::ll::UntypedStorage<8, 8> mUnkb40647;
        ::ll::UntypedStorage<8, 8> mUnk4bf475;
        ::ll::UntypedStorage<8, 8> mUnk307686;
        // NOLINTEND

    public:
        // prevent constructor by default
        ObserverAdapter& operator=(ObserverAdapter const&);
        ObserverAdapter(ObserverAdapter const&);
        ObserverAdapter();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnStateChange() /*override*/;

        virtual void OnMessage(::webrtc::DataBuffer const& buffer) /*override*/;

        virtual void OnBufferedAmountChange(uint64 sent_data_size) /*override*/;

        virtual bool IsOkToCallOnTheNetworkThread() /*override*/;

        virtual ~ObserverAdapter() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void SetDelegate(::webrtc::DataChannelObserver* delegate);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnStateChange();

        MCNAPI void $OnMessage(::webrtc::DataBuffer const& buffer);

        MCNAPI void $OnBufferedAmountChange(uint64 sent_data_size);

        MCNAPI bool $IsOkToCallOnTheNetworkThread();


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbda45a;
    ::ll::UntypedStorage<8, 8>  mUnk13548f;
    ::ll::UntypedStorage<2, 4>  mUnkab3466;
    ::ll::UntypedStorage<4, 4>  mUnk9256c4;
    ::ll::UntypedStorage<8, 32> mUnk840781;
    ::ll::UntypedStorage<8, 32> mUnk19117a;
    ::ll::UntypedStorage<4, 8>  mUnkffae17;
    ::ll::UntypedStorage<4, 8>  mUnkb09717;
    ::ll::UntypedStorage<4, 8>  mUnk3ae18a;
    ::ll::UntypedStorage<1, 1>  mUnk269941;
    ::ll::UntypedStorage<1, 1>  mUnk4cf2fb;
    ::ll::UntypedStorage<8, 8>  mUnkf28c17;
    ::ll::UntypedStorage<8, 8>  mUnkd0441c;
    ::ll::UntypedStorage<8, 8>  mUnkea17bd;
    ::ll::UntypedStorage<4, 4>  mUnka12f55;
    ::ll::UntypedStorage<8, 48> mUnk321db7;
    ::ll::UntypedStorage<4, 4>  mUnk94579e;
    ::ll::UntypedStorage<8, 8>  mUnkc1e3df;
    ::ll::UntypedStorage<4, 4>  mUnkc2f6a8;
    ::ll::UntypedStorage<8, 8>  mUnk11159a;
    ::ll::UntypedStorage<8, 16> mUnk96602b;
    ::ll::UntypedStorage<4, 4>  mUnke0f8f0;
    ::ll::UntypedStorage<1, 1>  mUnkdfae7e;
    ::ll::UntypedStorage<8, 48> mUnkc9a510;
    ::ll::UntypedStorage<8, 8>  mUnkdb0ebb;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpDataChannel& operator=(SctpDataChannel const&);
    SctpDataChannel(SctpDataChannel const&);
    SctpDataChannel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void RegisterObserver(::webrtc::DataChannelObserver* observer) /*override*/;

    virtual void UnregisterObserver() /*override*/;

    virtual ::std::string label() const /*override*/;

    virtual bool reliable() const /*override*/;

    virtual bool ordered() const /*override*/;

    virtual ushort maxRetransmitTime() const /*override*/;

    virtual ushort maxRetransmits() const /*override*/;

    virtual ::std::optional<int> maxPacketLifeTime() const /*override*/;

    virtual ::std::optional<int> maxRetransmitsOpt() const /*override*/;

    virtual ::std::string protocol() const /*override*/;

    virtual bool negotiated() const /*override*/;

    virtual int id() const /*override*/;

    virtual ::webrtc::Priority priority() const /*override*/;

    virtual uint64 buffered_amount() const /*override*/;

    virtual void Close() /*override*/;

    virtual ::webrtc::DataChannelInterface::DataState state() const /*override*/;

    virtual ::webrtc::RTCError error() const /*override*/;

    virtual uint messages_sent() const /*override*/;

    virtual uint64 bytes_sent() const /*override*/;

    virtual uint messages_received() const /*override*/;

    virtual uint64 bytes_received() const /*override*/;

    virtual uint64 bytes_send_buffer() const /*override*/;

    virtual bool Send(::webrtc::DataBuffer const& buffer) /*override*/;

    virtual void
    SendAsync(::webrtc::DataBuffer buffer, ::absl::AnyInvocable<void(::webrtc::RTCError) &&> on_complete) /*override*/;

    virtual ~SctpDataChannel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseAbruptlyWithDataChannelFailure(::std::string const& message);

    MCNAPI void CloseAbruptlyWithError(::webrtc::RTCError error);

    MCNAPI void DeliverQueuedReceivedData();

    MCNAPI ::webrtc::DataChannelStats GetStats() const;

    MCNAPI void MaybeSendOnBufferedAmountChanged();

    MCNAPI void OnBufferedAmountLow();

    MCNAPI void OnClosingProcedureComplete();

    MCNAPI void OnClosingProcedureStartedRemotely();

    MCNAPI void OnDataReceived(::webrtc::DataMessageType type, ::rtc::CopyOnWriteBuffer const& payload);

    MCNAPI void OnTransportChannelClosed(::webrtc::RTCError error);

    MCNAPI void OnTransportChannelCreated();

    MCNAPI void OnTransportReady();

    MCNAPI SctpDataChannel(
        ::webrtc::InternalDataChannelInit const&                     config,
        ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> controller,
        ::std::string const&                                         label,
        bool                                                         connected_to_transport,
        ::rtc::Thread*                                               signaling_thread,
        ::rtc::Thread*                                               network_thread
    );

    MCNAPI bool SendControlMessage(::rtc::CopyOnWriteBuffer const& buffer);

    MCNAPI ::webrtc::RTCError SendDataMessage(::webrtc::DataBuffer const& buffer, bool queue_if_blocked);

    MCNAPI ::webrtc::RTCError SendImpl(::webrtc::DataBuffer buffer);

    MCNAPI void SetSctpSid_n(::webrtc::StreamId sid);

    MCNAPI void SetState(::webrtc::DataChannelInterface::DataState state);

    MCNAPI void UpdateState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::SctpDataChannel> Create(
        ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> controller,
        ::std::string const&                                         label,
        bool                                                         connected_to_transport,
        ::webrtc::InternalDataChannelInit const&                     config,
        ::rtc::Thread*                                               signaling_thread,
        ::rtc::Thread*                                               network_thread
    );

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::DataChannelInterface> CreateProxy(
        ::webrtc::scoped_refptr<::webrtc::SctpDataChannel>       channel,
        ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> signaling_safety
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::InternalDataChannelInit const&                     config,
        ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> controller,
        ::std::string const&                                         label,
        bool                                                         connected_to_transport,
        ::rtc::Thread*                                               signaling_thread,
        ::rtc::Thread*                                               network_thread
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
    MCNAPI void $RegisterObserver(::webrtc::DataChannelObserver* observer);

    MCNAPI void $UnregisterObserver();

    MCNAPI ::std::string $label() const;

    MCNAPI bool $reliable() const;

    MCNAPI bool $ordered() const;

    MCNAPI ushort $maxRetransmitTime() const;

    MCNAPI ushort $maxRetransmits() const;

    MCNAPI ::std::optional<int> $maxPacketLifeTime() const;

    MCNAPI ::std::optional<int> $maxRetransmitsOpt() const;

    MCNAPI ::std::string $protocol() const;

    MCNAPI bool $negotiated() const;

    MCNAPI int $id() const;

    MCNAPI ::webrtc::Priority $priority() const;

    MCNAPI uint64 $buffered_amount() const;

    MCNAPI void $Close();

    MCNAPI ::webrtc::DataChannelInterface::DataState $state() const;

    MCNAPI ::webrtc::RTCError $error() const;

    MCNAPI uint $messages_sent() const;

    MCNAPI uint64 $bytes_sent() const;

    MCNAPI uint $messages_received() const;

    MCNAPI uint64 $bytes_received() const;

    MCNAPI uint64 $bytes_send_buffer() const;

    MCNAPI bool $Send(::webrtc::DataBuffer const& buffer);

    MCNAPI void $SendAsync(::webrtc::DataBuffer buffer, ::absl::AnyInvocable<void(::webrtc::RTCError) &&> on_complete);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
