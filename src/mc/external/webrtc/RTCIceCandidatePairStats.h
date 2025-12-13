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

class RTCIceCandidatePairStats : public ::webrtc::RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkce0798;
    ::ll::UntypedStorage<8, 40> mUnkbc952a;
    ::ll::UntypedStorage<8, 40> mUnk6703c3;
    ::ll::UntypedStorage<8, 40> mUnk4acbe6;
    ::ll::UntypedStorage<8, 16> mUnkabced7;
    ::ll::UntypedStorage<1, 2>  mUnka9e687;
    ::ll::UntypedStorage<1, 2>  mUnk1ef149;
    ::ll::UntypedStorage<8, 16> mUnkc7379a;
    ::ll::UntypedStorage<8, 16> mUnk991825;
    ::ll::UntypedStorage<8, 16> mUnk2f907e;
    ::ll::UntypedStorage<8, 16> mUnk90fc4a;
    ::ll::UntypedStorage<8, 16> mUnk715b93;
    ::ll::UntypedStorage<8, 16> mUnk37bb8f;
    ::ll::UntypedStorage<8, 16> mUnkd0a1cf;
    ::ll::UntypedStorage<8, 16> mUnkbf6b29;
    ::ll::UntypedStorage<8, 16> mUnk795395;
    ::ll::UntypedStorage<8, 16> mUnk81b198;
    ::ll::UntypedStorage<8, 16> mUnk89a631;
    ::ll::UntypedStorage<8, 16> mUnk134237;
    ::ll::UntypedStorage<8, 16> mUnka2109c;
    ::ll::UntypedStorage<8, 16> mUnk78be27;
    ::ll::UntypedStorage<8, 16> mUnkf0f41a;
    ::ll::UntypedStorage<8, 16> mUnkcc04d6;
    ::ll::UntypedStorage<8, 16> mUnk77efda;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCIceCandidatePairStats& operator=(RTCIceCandidatePairStats const&);
    RTCIceCandidatePairStats(RTCIceCandidatePairStats const&);
    RTCIceCandidatePairStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const /*override*/;

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const /*override*/;

    virtual char const* type() const /*override*/;

    virtual ~RTCIceCandidatePairStats() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTCIceCandidatePairStats(::std::string id, ::webrtc::Timestamp timestamp);
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
