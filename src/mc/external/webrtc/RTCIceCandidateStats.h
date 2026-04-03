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

class RTCIceCandidateStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk986655;
    ::ll::UntypedStorage<1, 2>  mUnk6748a5;
    ::ll::UntypedStorage<8, 40> mUnk4169f8;
    ::ll::UntypedStorage<8, 40> mUnkde8025;
    ::ll::UntypedStorage<8, 40> mUnkfd71a6;
    ::ll::UntypedStorage<4, 8>  mUnka4a56a;
    ::ll::UntypedStorage<8, 40> mUnk40d17f;
    ::ll::UntypedStorage<8, 40> mUnkfeca4d;
    ::ll::UntypedStorage<8, 40> mUnkab5e21;
    ::ll::UntypedStorage<4, 8>  mUnk3b0203;
    ::ll::UntypedStorage<8, 40> mUnk2f20c8;
    ::ll::UntypedStorage<8, 40> mUnk44e159;
    ::ll::UntypedStorage<8, 40> mUnk45d10a;
    ::ll::UntypedStorage<4, 8>  mUnkd51704;
    ::ll::UntypedStorage<8, 40> mUnk953390;
    ::ll::UntypedStorage<8, 40> mUnk12703a;
    ::ll::UntypedStorage<1, 2>  mUnkb7d605;
    ::ll::UntypedStorage<8, 40> mUnk8007c5;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCIceCandidateStats& operator=(RTCIceCandidateStats const&);
    RTCIceCandidateStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCIceCandidateStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCIceCandidateStats(::webrtc::RTCIceCandidateStats const&);

    MCNAPI RTCIceCandidateStats(::std::string id, ::webrtc::Timestamp timestamp, bool is_remote);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kType();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCIceCandidateStats const&);

    MCNAPI void* $ctor(::std::string id, ::webrtc::Timestamp timestamp, bool is_remote);
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
