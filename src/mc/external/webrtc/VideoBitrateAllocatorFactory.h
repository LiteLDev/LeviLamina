#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class VideoBitrateAllocator; }
namespace webrtc { class VideoCodec; }
// clang-format on

namespace webrtc {

class VideoBitrateAllocatorFactory {
public:
    // prevent constructor by default
    VideoBitrateAllocatorFactory& operator=(VideoBitrateAllocatorFactory const&);
    VideoBitrateAllocatorFactory(VideoBitrateAllocatorFactory const&);
    VideoBitrateAllocatorFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoBitrateAllocatorFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::webrtc::VideoBitrateAllocator>
    CreateVideoBitrateAllocator(::webrtc::VideoCodec const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
