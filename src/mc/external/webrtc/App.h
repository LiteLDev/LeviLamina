#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/RtcpPacket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class App : public ::webrtc::rtcp::RtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk28d016;
    ::ll::UntypedStorage<4, 4>  mUnkd5d374;
    ::ll::UntypedStorage<8, 24> mUnka79393;
    // NOLINTEND

public:
    // prevent constructor by default
    App& operator=(App const&);
    App(App const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~App() /*override*/;

    // vIndex: 1
    virtual uint64 BlockLength() const /*override*/;

    // vIndex: 2
    virtual bool Create(uchar*, uint64*, uint64, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI App();

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $BlockLength() const;

    MCAPI bool $Create(uchar*, uint64*, uint64, ::rtc::FunctionView<void(::rtc::ArrayView<uchar const>)>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
