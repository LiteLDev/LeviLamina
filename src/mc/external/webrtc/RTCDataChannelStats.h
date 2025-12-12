#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCStats.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Attribute; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCDataChannelStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4a6ecb;
    ::ll::UntypedStorage<8, 40> mUnk46fa3f;
    ::ll::UntypedStorage<4, 8>  mUnkbe6535;
    ::ll::UntypedStorage<8, 40> mUnke1b7f7;
    ::ll::UntypedStorage<4, 8>  mUnkc1a4ad;
    ::ll::UntypedStorage<8, 16> mUnk3363a0;
    ::ll::UntypedStorage<8, 16> mUnkfec2c6;
    ::ll::UntypedStorage<4, 8>  mUnk6a9b8d;
    ::ll::UntypedStorage<8, 16> mUnk76b55c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCDataChannelStats& operator=(RTCDataChannelStats const&);
    RTCDataChannelStats(RTCDataChannelStats const&);
    RTCDataChannelStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCDataChannelStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCDataChannelStats(::std::string id, ::webrtc::Timestamp timestamp);
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

} // namespace webrtc
