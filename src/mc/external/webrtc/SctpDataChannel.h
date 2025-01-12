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
        MCAPI void SetDelegate(::webrtc::DataChannelObserver*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CloseAbruptlyWithDataChannelFailure(::std::string const&);

    MCAPI void CloseAbruptlyWithError(::webrtc::RTCError);

    MCAPI void DeliverQueuedReceivedData();

    MCAPI ::webrtc::DataChannelStats GetStats() const;

    MCAPI void MaybeSendOnBufferedAmountChanged();

    MCAPI void OnBufferedAmountLow();

    MCAPI void OnClosingProcedureComplete();

    MCAPI void OnClosingProcedureStartedRemotely();

    MCAPI void OnDataReceived(::webrtc::DataMessageType, ::rtc::CopyOnWriteBuffer const&);

    MCAPI void OnTransportChannelClosed(::webrtc::RTCError);

    MCAPI void OnTransportChannelCreated();

    MCAPI void OnTransportReady();

    MCAPI
    SctpDataChannel(::webrtc::InternalDataChannelInit const&, ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::rtc::Thread*, ::rtc::Thread*);

    MCAPI bool SendControlMessage(::rtc::CopyOnWriteBuffer const&);

    MCAPI ::webrtc::RTCError SendDataMessage(::webrtc::DataBuffer const&, bool);

    MCAPI ::webrtc::RTCError SendImpl(::webrtc::DataBuffer);

    MCAPI void SetSctpSid_n(::webrtc::StreamId);

    MCAPI void SetState(::webrtc::DataChannelInterface::DataState);

    MCAPI void UpdateState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::SctpDataChannel>
    Create(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::webrtc::InternalDataChannelInit const&, ::rtc::Thread*, ::rtc::Thread*);

    MCAPI static ::webrtc::scoped_refptr<::webrtc::DataChannelInterface>
        CreateProxy(::webrtc::scoped_refptr<::webrtc::SctpDataChannel>, ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::InternalDataChannelInit const&, ::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface>, ::std::string const&, bool, ::rtc::Thread*, ::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
