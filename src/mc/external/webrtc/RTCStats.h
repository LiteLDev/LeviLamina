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
    // vIndex: 0
    virtual ~RTCStats() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::RTCStats> copy() const = 0;

    // vIndex: 2
    virtual char const* type() const = 0;

    // vIndex: 3
    virtual ::std::vector<::webrtc::Attribute> AttributesImpl(uint64) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::webrtc::Attribute> Attributes() const;

    MCAPI RTCStats(::webrtc::RTCStats const&);

    MCAPI ::std::string ToJson() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RTCStats const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
