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
    ::ll::UntypedStorage<8, 40> mUnkb2513a;
    ::ll::UntypedStorage<8, 40> mUnk9eb477;
    ::ll::UntypedStorage<8, 40> mUnk352054;
    ::ll::UntypedStorage<8, 40> mUnkf4f047;
    ::ll::UntypedStorage<8, 40> mUnk4af9b1;
    ::ll::UntypedStorage<8, 40> mUnk1f83a7;
    ::ll::UntypedStorage<8, 40> mUnkc5a007;
    ::ll::UntypedStorage<8, 40> mUnkc0a4b8;
    ::ll::UntypedStorage<8, 40> mUnkf7ac99;
    ::ll::UntypedStorage<4, 8>  mUnk1e8445;
    ::ll::UntypedStorage<8, 40> mUnka09298;
    ::ll::UntypedStorage<8, 40> mUnk4b8de5;
    ::ll::UntypedStorage<8, 40> mUnk4fe006;
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

    virtual ~RTCTransportStats() /*override*/ = default;
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
