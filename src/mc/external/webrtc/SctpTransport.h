#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataChannelTransportInterface.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/SctpTransportInterface.h"
#include "mc/external/webrtc/SctpTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class SctpTransportInternal; }
namespace rtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpTransportInformation; }
namespace webrtc { class SctpTransportObserverInterface; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class SctpTransport : public ::webrtc::SctpTransportInterface, public ::webrtc::DataChannelTransportInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke8b820;
    ::ll::UntypedStorage<8, 40> mUnk1fa385;
    ::ll::UntypedStorage<8, 8>  mUnk38f880;
    ::ll::UntypedStorage<8, 8>  mUnk494399;
    ::ll::UntypedStorage<8, 8>  mUnk4ed708;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpTransport& operator=(SctpTransport const&);
    SctpTransport(SctpTransport const&);
    SctpTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    // vIndex: 4
    virtual ::webrtc::SctpTransportInformation Information() const /*override*/;

    // vIndex: 5
    virtual void RegisterObserver(::webrtc::SctpTransportObserverInterface* observer) /*override*/;

    // vIndex: 6
    virtual void UnregisterObserver() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RTCError OpenChannel(int channel_id) /*override*/;

    // vIndex: 2
    virtual ::webrtc::RTCError SendData(
        int                             channel_id,
        ::webrtc::SendDataParams const& params,
        ::rtc::CopyOnWriteBuffer const& buffer
    ) /*override*/;

    // vIndex: 3
    virtual ::webrtc::RTCError CloseChannel(int channel_id) /*override*/;

    // vIndex: 4
    virtual void SetDataSink(::webrtc::DataChannelSink* sink) /*override*/;

    // vIndex: 5
    virtual bool IsReadyToSend() const /*override*/;

    // vIndex: 6
    virtual uint64 buffered_amount(int channel_id) const /*override*/;

    // vIndex: 7
    virtual uint64 buffered_amount_low_threshold(int channel_id) const /*override*/;

    // vIndex: 8
    virtual void SetBufferedAmountLowThreshold(int channel_id, uint64 bytes) /*override*/;

    // vIndex: 0
    virtual ~SctpTransport() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI void OnAssociationChangeCommunicationUp();

    MCNAPI void OnDtlsStateChange(::cricket::DtlsTransportInternal* transport, ::webrtc::DtlsTransportState state);

    MCNAPI SctpTransport(
        ::std::unique_ptr<::cricket::SctpTransportInternal> internal,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport>    dtls_transport
    );

    MCNAPI void Start(int local_port, int remote_port, int max_message_size);

    MCNAPI void UpdateInformation(::webrtc::SctpTransportState state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::cricket::SctpTransportInternal> internal,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport>    dtls_transport
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
    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> $dtls_transport() const;

    MCNAPI ::webrtc::SctpTransportInformation $Information() const;

    MCNAPI void $RegisterObserver(::webrtc::SctpTransportObserverInterface* observer);

    MCNAPI void $UnregisterObserver();

    MCNAPI ::webrtc::RTCError $OpenChannel(int channel_id);

    MCNAPI ::webrtc::RTCError
    $SendData(int channel_id, ::webrtc::SendDataParams const& params, ::rtc::CopyOnWriteBuffer const& buffer);

    MCNAPI ::webrtc::RTCError $CloseChannel(int channel_id);

    MCNAPI void $SetDataSink(::webrtc::DataChannelSink* sink);

    MCNAPI bool $IsReadyToSend() const;

    MCNAPI uint64 $buffered_amount(int channel_id) const;

    MCNAPI uint64 $buffered_amount_low_threshold(int channel_id) const;

    MCNAPI void $SetBufferedAmountLowThreshold(int channel_id, uint64 bytes);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSctpTransportInterface();

    MCNAPI static void** $vftableForDataChannelTransportInterface();
    // NOLINTEND
};

} // namespace webrtc
