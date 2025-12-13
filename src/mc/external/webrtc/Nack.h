#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/Rtpfb.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Nack : public ::webrtc::rtcp::Rtpfb {
public:
    // Nack inner types declare
    // clang-format off
    struct PackedNack;
    // clang-format on

    // Nack inner types define
    struct PackedNack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkc31428;
        ::ll::UntypedStorage<2, 2> mUnka1eb66;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackedNack& operator=(PackedNack const&);
        PackedNack(PackedNack const&);
        PackedNack();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1bf495;
    ::ll::UntypedStorage<8, 24> mUnkfd36a8;
    // NOLINTEND

public:
    // prevent constructor by default
    Nack& operator=(Nack const&);
    Nack(Nack const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Nack() /*override*/;

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
    MCNAPI Nack();

    MCNAPI void Pack();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const& packet);

    MCNAPI void SetPacketIds(::std::vector<ushort> nack_list);

    MCNAPI void SetPacketIds(ushort const* nack_list, uint64 length);

    MCNAPI void Unpack();
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
