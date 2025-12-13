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
    ::ll::UntypedStorage<8, 40> mUnkbab829;
    ::ll::UntypedStorage<1, 2>  mUnk6748a5;
    ::ll::UntypedStorage<8, 40> mUnk34748a;
    ::ll::UntypedStorage<8, 40> mUnk52a1d5;
    ::ll::UntypedStorage<8, 40> mUnk6a678c;
    ::ll::UntypedStorage<4, 8>  mUnka4a56a;
    ::ll::UntypedStorage<8, 40> mUnk2e96a1;
    ::ll::UntypedStorage<8, 40> mUnk61362f;
    ::ll::UntypedStorage<8, 40> mUnkb0182b;
    ::ll::UntypedStorage<4, 8>  mUnk3b0203;
    ::ll::UntypedStorage<8, 40> mUnk2d9568;
    ::ll::UntypedStorage<8, 40> mUnke5d5eb;
    ::ll::UntypedStorage<8, 40> mUnk812fe5;
    ::ll::UntypedStorage<4, 8>  mUnkd51704;
    ::ll::UntypedStorage<8, 40> mUnka86b7a;
    ::ll::UntypedStorage<8, 40> mUnk69f42b;
    ::ll::UntypedStorage<1, 2>  mUnkb7d605;
    ::ll::UntypedStorage<8, 40> mUnkc7c4a8;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCIceCandidateStats& operator=(RTCIceCandidateStats const&);
    RTCIceCandidateStats();

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
