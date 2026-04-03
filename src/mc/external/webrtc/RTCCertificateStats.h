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

class RTCCertificateStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk625cb1;
    ::ll::UntypedStorage<8, 40> mUnk86e064;
    ::ll::UntypedStorage<8, 40> mUnkb62695;
    ::ll::UntypedStorage<8, 40> mUnk4af99c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCCertificateStats& operator=(RTCCertificateStats const&);
    RTCCertificateStats(RTCCertificateStats const&);
    RTCCertificateStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCCertificateStats() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCCertificateStats(::std::string id, ::webrtc::Timestamp timestamp);
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
