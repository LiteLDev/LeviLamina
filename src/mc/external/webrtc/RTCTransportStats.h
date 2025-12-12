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

class RTCTransportStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5ad81d;
    ::ll::UntypedStorage<8, 16> mUnk5065bc;
    ::ll::UntypedStorage<8, 16> mUnk922577;
    ::ll::UntypedStorage<8, 16> mUnke7a1b7;
    ::ll::UntypedStorage<8, 40> mUnka501ea;
    ::ll::UntypedStorage<8, 40> mUnkae3fb3;
    ::ll::UntypedStorage<8, 40> mUnk74ca95;
    ::ll::UntypedStorage<8, 40> mUnk15adda;
    ::ll::UntypedStorage<8, 40> mUnkf820fd;
    ::ll::UntypedStorage<8, 40> mUnkc3649d;
    ::ll::UntypedStorage<8, 40> mUnkb2d680;
    ::ll::UntypedStorage<8, 40> mUnk15671e;
    ::ll::UntypedStorage<8, 40> mUnk9cafa4;
    ::ll::UntypedStorage<4, 8>  mUnk1e8445;
    ::ll::UntypedStorage<8, 40> mUnk21c436;
    ::ll::UntypedStorage<8, 40> mUnkb63ce6;
    ::ll::UntypedStorage<8, 40> mUnk20e1b5;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCTransportStats& operator=(RTCTransportStats const&);
    RTCTransportStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCTransportStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCTransportStats(::webrtc::RTCTransportStats const&);

    MCNAPI RTCTransportStats(::std::string id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCTransportStats const&);

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
