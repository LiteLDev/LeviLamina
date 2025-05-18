#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/DataMessageType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelObserver; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpDataChannelControllerInterface; }
namespace webrtc { class StreamId; }
namespace webrtc { struct DataBuffer; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct InternalDataChannelInit; }
// clang-format on

namespace webrtc {

class SctpDataChannel {
public:
    // SctpDataChannel inner types declare
    // clang-format off
    class ObserverAdapter;
    // clang-format on

    // SctpDataChannel inner types define
    class ObserverAdapter {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void SetDelegate(::webrtc::DataChannelObserver*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SctpDataChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CloseAbruptlyWithDataChannelFailure(::std::string const&);

    MCNAPI void CloseAbruptlyWithError(::webrtc::RTCError);

    MCNAPI void DeliverQueuedReceivedData();

    MCNAPI ::webrtc::DataChannelStats GetStats() const;

    MCNAPI void MaybeSendOnBufferedAmountChanged();

    MCNAPI void OnBufferedAmountLow();

    MCNAPI void OnClosingProcedureComplete();

    MCNAPI void OnClosingProcedureStartedRemotely();

    MCNAPI void OnDataReceived(::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&);

    MCNAPI void OnTransportChannelClosed(::webrtc::RTCError);

    MCNAPI void OnTransportChannelCreated();

    MCNAPI void OnTransportReady();

    MCNAPI
    SctpDataChannel(::webrtc::InternalDataChannelInit const&, ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::rtc::Thread*, ::rtc::Thread*);

    MCNAPI bool SendControlMessage(::rtc::CopyOnWriteBuffer const&);

    MCNAPI ::webrtc::RTCError SendDataMessage(::webrtc::DataBuffer const&, bool);

    MCNAPI ::webrtc::RTCError SendImpl(::webrtc::DataBuffer);

    MCNAPI void SetSctpSid_n(::webrtc::StreamId);

    MCNAPI void SetState(::webrtc::DataChannelInterface::DataState);

    MCNAPI void UpdateState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::SctpDataChannel>
    Create(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::webrtc::InternalDataChannelInit const&, ::rtc::Thread*, ::rtc::Thread*);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::DataChannelInterface>
        CreateProxy(::webrtc::scoped_refptr<::webrtc::SctpDataChannel>, ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::InternalDataChannelInit const&, ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::rtc::Thread*, ::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
