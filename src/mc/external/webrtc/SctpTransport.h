#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DataChannelTransportInterface.h"
#include "mc/external/webrtc/SctpTransportInterface.h"
#include "mc/external/webrtc/SctpTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class PriorityValue; }
namespace webrtc { class RTCError; }
namespace webrtc { class SctpTransportInformation; }
namespace webrtc { class SctpTransportInternal; }
namespace webrtc { class SctpTransportObserverInterface; }
namespace webrtc { struct SctpOptions; }
namespace webrtc { struct SendDataParams; }
// clang-format on

namespace webrtc {

class SctpTransport : public ::webrtc::SctpTransportInterface, public ::webrtc::DataChannelTransportInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9854a3;
    ::ll::UntypedStorage<8, 40> mUnk1fa385;
    ::ll::UntypedStorage<8, 8>  mUnk5d91c0;
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
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> dtls_transport() const /*override*/;

    virtual ::webrtc::SctpTransportInformation Information() const /*override*/;

    virtual void RegisterObserver(::webrtc::SctpTransportObserverInterface* observer) /*override*/;

    virtual void UnregisterObserver() /*override*/;

    virtual ::webrtc::RTCError OpenChannel(int channel_id, ::webrtc::PriorityValue priority) /*override*/;

    virtual ::webrtc::RTCError SendData(
        int                                channel_id,
        ::webrtc::SendDataParams const&    params,
        ::webrtc::CopyOnWriteBuffer const& buffer
    ) /*override*/;

    virtual ::webrtc::RTCError CloseChannel(int channel_id) /*override*/;

    virtual void SetDataSink(::webrtc::DataChannelSink* sink) /*override*/;

    virtual bool IsReadyToSend() const /*override*/;

    virtual uint64 buffered_amount(int channel_id) const /*override*/;

    virtual uint64 buffered_amount_low_threshold(int channel_id) const /*override*/;

    virtual void SetBufferedAmountLowThreshold(int channel_id, uint64 bytes) /*override*/;

    virtual ~SctpTransport() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI SctpTransport(
        ::std::unique_ptr<::webrtc::SctpTransportInternal> internal,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport>   dtls_transport
    );

    MCNAPI void Start(::webrtc::SctpOptions const& options);

    MCNAPI void UpdateInformation(::webrtc::SctpTransportState state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::webrtc::SctpTransportInternal> internal,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport>   dtls_transport
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

    MCNAPI ::webrtc::RTCError $OpenChannel(int channel_id, ::webrtc::PriorityValue priority);

    MCNAPI ::webrtc::RTCError
    $SendData(int channel_id, ::webrtc::SendDataParams const& params, ::webrtc::CopyOnWriteBuffer const& buffer);

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
