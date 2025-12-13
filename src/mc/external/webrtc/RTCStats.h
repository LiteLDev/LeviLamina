#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Attribute; }
// clang-format on

namespace webrtc {

class RTCStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk91f4ec;
    ::ll::UntypedStorage<8, 8>  mUnk39fdb3;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCStats& operator=(RTCStats const&);
    RTCStats();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RTCStats();

    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const = 0;

    virtual char const* type() const = 0;

    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64 additional_capacity) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::webrtc::Attribute> Attributes() const;

    MCNAPI RTCStats(::webrtc::RTCStats const& other);

    MCNAPI ::std::string ToJson() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RTCStats const& other);
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
