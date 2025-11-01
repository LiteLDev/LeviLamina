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

class Remb : public ::webrtc::rtcp::Psfb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd50ecd;
    ::ll::UntypedStorage<8, 24> mUnk6ef17e;
    // NOLINTEND

public:
    // prevent constructor by default
    Remb& operator=(Remb const&);
    Remb(Remb const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Remb() /*override*/;

    // vIndex: 1
    virtual uint64 BlockLength() const /*override*/;

    // vIndex: 2
    virtual bool Create(uchar* packet, uint64* index, uint64 max_length, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI Remb();

    MCNAPI bool SetSsrcs(::std::vector<uint> ssrcs);
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

    MCNAPI bool $Create(uchar* packet, uint64* index, uint64 max_length, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
