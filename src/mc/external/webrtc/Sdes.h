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

class Sdes : public ::webrtc::rtcp::RtcpPacket {
public:
    // Sdes inner types declare
    // clang-format off
    struct Chunk;
    // clang-format on

    // Sdes inner types define
    struct Chunk {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnka234ae;
        ::ll::UntypedStorage<8, 32> mUnk39b793;
        // NOLINTEND

    public:
        // prevent constructor by default
        Chunk& operator=(Chunk const&);
        Chunk(Chunk const&);
        Chunk();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Chunk();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka6911a;
    ::ll::UntypedStorage<8, 8>  mUnk4e6e46;
    // NOLINTEND

public:
    // prevent constructor by default
    Sdes& operator=(Sdes const&);
    Sdes(Sdes const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Sdes() /*override*/;

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
    MCNAPI bool AddCName(uint ssrc, ::std::string_view cname);

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI Sdes();
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
