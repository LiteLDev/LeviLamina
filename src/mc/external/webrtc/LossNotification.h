#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/Psfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class LossNotification : public ::webrtc::rtcp::Psfb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk52a3a1;
    ::ll::UntypedStorage<2, 2> mUnk15b9e0;
    ::ll::UntypedStorage<1, 1> mUnkc79004;
    // NOLINTEND

public:
    // prevent constructor by default
    LossNotification& operator=(LossNotification const&);
    LossNotification(LossNotification const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LossNotification() /*override*/;

    virtual uint64 BlockLength() const /*override*/;

    virtual bool Create(
        uchar*                                                   packet,
        uint64*                                                  index,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LossNotification();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI bool Set(ushort last_decoded, ushort last_received, bool decodability_flag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $BlockLength() const;

    MCNAPI bool $Create(
        uchar*                                                   packet,
        uint64*                                                  index,
        uint64                                                   max_length,
        ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
