#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCReceivedRtpStreamStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Attribute; }
namespace webrtc { class RTCStats; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCRemoteInboundRtpStreamStats : public ::webrtc::RTCReceivedRtpStreamStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke1cb4a;
    ::ll::UntypedStorage<8, 16> mUnka2dc63;
    ::ll::UntypedStorage<8, 16> mUnk929b66;
    ::ll::UntypedStorage<8, 16> mUnk82da7c;
    ::ll::UntypedStorage<4, 8> mUnk89bf2e;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCRemoteInboundRtpStreamStats& operator=(RTCRemoteInboundRtpStreamStats const&);
    RTCRemoteInboundRtpStreamStats(RTCRemoteInboundRtpStreamStats const&);
    RTCRemoteInboundRtpStreamStats();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    // vIndex: 2
    virtual char const* type() const /*override*/;

    // vIndex: 0
    virtual ~RTCRemoteInboundRtpStreamStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCRemoteInboundRtpStreamStats(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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

}
