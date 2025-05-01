#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SctpTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInterface; }
// clang-format on

namespace webrtc {

class SctpTransportInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk835d12;
    ::ll::UntypedStorage<8, 8>  mUnkda0b33;
    ::ll::UntypedStorage<8, 16> mUnk65d332;
    ::ll::UntypedStorage<4, 8>  mUnk952b61;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpTransportInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SctpTransportInformation(::webrtc::SctpTransportInformation const&);

    MCNAPI
    SctpTransportInformation(::webrtc::SctpTransportState, ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>, ::std::optional<double>, ::std::optional<int>);

    MCNAPI ::webrtc::SctpTransportInformation& operator=(::webrtc::SctpTransportInformation const&);

    MCNAPI ~SctpTransportInformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SctpTransportInformation const&);

    MCNAPI void*
        $ctor(::webrtc::SctpTransportState, ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>, ::std::optional<double>, ::std::optional<int>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
