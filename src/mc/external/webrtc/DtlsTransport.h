#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInformation; }
namespace webrtc { class DtlsTransportInternal; }
namespace webrtc { class DtlsTransportObserverInterface; }
namespace webrtc { class IceTransportInterface; }
// clang-format on

namespace webrtc {

class DtlsTransport : public ::webrtc::DtlsTransportInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf33c20;
    ::ll::UntypedStorage<8, 8>  mUnke0da3a;
    ::ll::UntypedStorage<8, 40> mUnk912461;
    ::ll::UntypedStorage<8, 56> mUnk35d5aa;
    ::ll::UntypedStorage<8, 8>  mUnk8ea1be;
    ::ll::UntypedStorage<8, 8>  mUnka7df75;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsTransport& operator=(DtlsTransport const&);
    DtlsTransport(DtlsTransport const&);
    DtlsTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> ice_transport() /*override*/;

    virtual ::webrtc::DtlsTransportInformation Information() /*override*/;

    virtual void RegisterObserver(::webrtc::DtlsTransportObserverInterface* observer) /*override*/;

    virtual void UnregisterObserver() /*override*/;

    virtual ~DtlsTransport() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI explicit DtlsTransport(::std::unique_ptr<::webrtc::DtlsTransportInternal> internal);

    MCNAPI void UpdateInformation();

    MCNAPI void set_info(::webrtc::DtlsTransportInformation&& info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::DtlsTransportInternal> internal);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::IceTransportInterface> $ice_transport();

    MCNAPI ::webrtc::DtlsTransportInformation $Information();

    MCNAPI void $RegisterObserver(::webrtc::DtlsTransportObserverInterface* observer);

    MCNAPI void $UnregisterObserver();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
