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
    ContentInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentInfo(::cricket::ContentInfo const&);

    MCAPI ::cricket::MediaContentDescription const* media_description() const;

    MCAPI ::cricket::MediaContentDescription* media_description();

    MCAPI ~ContentInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::ContentInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
