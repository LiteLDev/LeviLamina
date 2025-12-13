#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceTransportInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
// clang-format on

namespace webrtc {

class IceTransportWithPointer : public ::webrtc::IceTransportInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc51d01;
    ::ll::UntypedStorage<8, 8> mUnk246d96;
    // NOLINTEND

public:
    // prevent constructor by default
    IceTransportWithPointer& operator=(IceTransportWithPointer const&);
    IceTransportWithPointer(IceTransportWithPointer const&);
    IceTransportWithPointer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cricket::IceTransportInternal* internal() /*override*/;

    virtual ~IceTransportWithPointer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::IceTransportInternal* $internal();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
