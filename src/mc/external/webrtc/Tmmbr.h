#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/Rtpfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class TmmbItem; }
// clang-format on

namespace webrtc::rtcp {

class Tmmbr : public ::webrtc::rtcp::Rtpfb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6a0968;
    // NOLINTEND

public:
    // prevent constructor by default
    Tmmbr& operator=(Tmmbr const&);
    Tmmbr(Tmmbr const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Tmmbr() /*override*/;

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
    MCNAPI void AddTmmbr(::webrtc::rtcp::TmmbItem const& item);

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI Tmmbr();
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
