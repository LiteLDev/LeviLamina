#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Screenshots {

struct ShowcasedScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b21db;
    ::ll::UntypedStorage<8, 32> mUnk8e80e1;
    ::ll::UntypedStorage<8, 32> mUnk1044fa;
    ::ll::UntypedStorage<8, 32> mUnk3cb73e;
    ::ll::UntypedStorage<8, 8>  mUnkcb3aa1;
    ::ll::UntypedStorage<8, 8>  mUnkbe6df5;
    ::ll::UntypedStorage<1, 1>  mUnk4060f7;
    ::ll::UntypedStorage<1, 1>  mUnka2a6d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshot& operator=(ShowcasedScreenshot const&);
    ShowcasedScreenshot(ShowcasedScreenshot const&);
    ShowcasedScreenshot();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ShowcasedScreenshot(
        ::std::string                     guid,
        ::Core::PathBuffer<::std::string> thumbnailPath,
        ::Core::PathBuffer<::std::string> imagePath,
        ::std::string                     imageUrl,
        int64                             captureTime,
        int64                             lastModifiedTime,
        bool                              featured,
        bool                              loadingImage
    );

    MCNAPI ~ShowcasedScreenshot();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string                     guid,
        ::Core::PathBuffer<::std::string> thumbnailPath,
        ::Core::PathBuffer<::std::string> imagePath,
        ::std::string                     imageUrl,
        int64                             captureTime,
        int64                             lastModifiedTime,
        bool                              featured,
        bool                              loadingImage
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Screenshots
