#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaContentDescription; }
// clang-format on

namespace webrtc {

class ContentInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke3cac9;
    ::ll::UntypedStorage<1, 1>  mUnk273c2a;
    ::ll::UntypedStorage<1, 1>  mUnkaafbeb;
    ::ll::UntypedStorage<8, 32> mUnkb156f5;
    ::ll::UntypedStorage<8, 8>  mUnk5ede81;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentInfo& operator=(ContentInfo const&);
    ContentInfo(ContentInfo const&);
    ContentInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaContentDescription const* media_description() const;

    MCNAPI ::webrtc::MediaContentDescription* media_description();

    MCNAPI ~ContentInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
