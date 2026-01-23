#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaContentDescription; }
// clang-format on

namespace cricket {

class ContentInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1e8cb0;
    ::ll::UntypedStorage<4, 4>  mUnka3b407;
    ::ll::UntypedStorage<1, 1>  mUnka04fd8;
    ::ll::UntypedStorage<1, 1>  mUnkad8ec6;
    ::ll::UntypedStorage<8, 8>  mUnk709375;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentInfo& operator=(ContentInfo const&);
    ContentInfo(ContentInfo const&);
    ContentInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cricket::MediaContentDescription const* media_description() const;

    MCNAPI ::cricket::MediaContentDescription* media_description();

    MCNAPI ~ContentInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
