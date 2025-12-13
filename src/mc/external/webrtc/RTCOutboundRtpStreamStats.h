#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCSentRtpStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Attribute; }
namespace webrtc { class RTCStats; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCOutboundRtpStreamStats : public ::webrtc::RTCSentRtpStreamStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk6c6c7d;
    ::ll::UntypedStorage<8, 40> mUnk332d26;
    ::ll::UntypedStorage<8, 40> mUnk28dcf4;
    ::ll::UntypedStorage<8, 40> mUnk5fe4b7;
    ::ll::UntypedStorage<8, 16> mUnk66ed4c;
    ::ll::UntypedStorage<8, 16> mUnk96d194;
    ::ll::UntypedStorage<8, 16> mUnk12309b;
    ::ll::UntypedStorage<8, 16> mUnkb3220d;
    ::ll::UntypedStorage<4, 8>  mUnkbfce3f;
    ::ll::UntypedStorage<4, 8>  mUnk8f9f59;
    ::ll::UntypedStorage<8, 16> mUnk4ed5d2;
    ::ll::UntypedStorage<8, 16> mUnk909146;
    ::ll::UntypedStorage<4, 8>  mUnk1bd55c;
    ::ll::UntypedStorage<4, 8>  mUnk5774f3;
    ::ll::UntypedStorage<8, 16> mUnk8e9a6f;
    ::ll::UntypedStorage<4, 8>  mUnkd89704;
    ::ll::UntypedStorage<4, 8>  mUnkca9f4c;
    ::ll::UntypedStorage<8, 16> mUnk1204b1;
    ::ll::UntypedStorage<8, 40> mUnk83dbc5;
    ::ll::UntypedStorage<8, 24> mUnkcffb6d;
    ::ll::UntypedStorage<4, 8>  mUnke10955;
    ::ll::UntypedStorage<8, 40> mUnk966fdd;
    ::ll::UntypedStorage<8, 40> mUnkf4560d;
    ::ll::UntypedStorage<4, 8>  mUnkaa25e5;
    ::ll::UntypedStorage<4, 8>  mUnkb7d5d9;
    ::ll::UntypedStorage<4, 8>  mUnkd35db1;
    ::ll::UntypedStorage<8, 16> mUnk8c2e77;
    ::ll::UntypedStorage<1, 2>  mUnkc05417;
    ::ll::UntypedStorage<1, 2>  mUnk4f7477;
    ::ll::UntypedStorage<8, 40> mUnk5b4666;
    ::ll::UntypedStorage<4, 8>  mUnk1319d9;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCOutboundRtpStreamStats& operator=(RTCOutboundRtpStreamStats const&);
    RTCOutboundRtpStreamStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCOutboundRtpStreamStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCOutboundRtpStreamStats(::webrtc::RTCOutboundRtpStreamStats const&);

    MCNAPI RTCOutboundRtpStreamStats(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCOutboundRtpStreamStats const&);

    MCNAPI void* $ctor(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::vector<::webrtc::Attribute> $AttributesImpl(uint64 additional_capacity) const;

    MCNAPI ::std::unique_ptr<::webrtc::RTCStats> $copy() const;

    MCNAPI char const* $type() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
