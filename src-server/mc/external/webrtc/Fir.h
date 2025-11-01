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

class Fir : public ::webrtc::rtcp::Psfb {
public:
    // Fir inner types declare
    // clang-format off
    struct Request;
    // clang-format on
    
    // Fir inner types define
    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk4013c3;
        ::ll::UntypedStorage<1, 1> mUnka5f37f;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Request& operator=(Request const&);
        Request(Request const&);
        Request();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka4b8a7;
    // NOLINTEND

public:
    // prevent constructor by default
    Fir& operator=(Fir const&);
    Fir(Fir const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Fir() /*override*/;

    // vIndex: 1
    virtual uint64 BlockLength() const /*override*/;

    // vIndex: 2
    virtual bool Create(uchar* packet, uint64* index, uint64 max_length, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)> callback) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Fir();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);
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
