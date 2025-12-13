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

class RTCAudioPlayoutStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk5e0647;
    ::ll::UntypedStorage<8, 16> mUnk6c3840;
    ::ll::UntypedStorage<8, 16> mUnk548713;
    ::ll::UntypedStorage<8, 16> mUnkada058;
    ::ll::UntypedStorage<8, 16> mUnk8d9c3a;
    ::ll::UntypedStorage<8, 16> mUnk395f2c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCAudioPlayoutStats& operator=(RTCAudioPlayoutStats const&);
    RTCAudioPlayoutStats(RTCAudioPlayoutStats const&);
    RTCAudioPlayoutStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCAudioPlayoutStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCAudioPlayoutStats(::std::string const& id, ::webrtc::Timestamp timestamp);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& id, ::webrtc::Timestamp timestamp);
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
