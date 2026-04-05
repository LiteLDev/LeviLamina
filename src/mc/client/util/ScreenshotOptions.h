#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/util/ScreenshotPostProcessFilter.h"
#include "mc/deps/core/file/PathBuffer.h"

struct ScreenshotOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mCropToRatio;
    ::ll::TypedStorage<4, 4, int>                                mWidthRatio;
    ::ll::TypedStorage<4, 4, int>                                mHeightRatio;
    ::ll::TypedStorage<4, 4, uint>                               mMaxWidth;
    ::ll::TypedStorage<4, 4, uint>                               mMaxHeight;
    ::ll::TypedStorage<1, 1, bool>                               mRestrictScreenshotSize;
    ::ll::TypedStorage<1, 1, bool>                               mApplySquareFrame;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedFileName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedFilePath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mRequestedExtension;
    ::ll::TypedStorage<1, 1, bool>                               mReplaceImage;
    ::ll::TypedStorage<1, 1, bool>                               mUseScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool>                               mHideUI;
    ::ll::TypedStorage<1, 1, bool>                               mLogRequest;
    ::ll::TypedStorage<1, 1, bool>                               mWriteScreenshotToFile;
    ::ll::TypedStorage<1, 1, bool>                               mIsSavegameScreenshot;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutFileName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutFileDir;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mOutExtension;
    ::ll::TypedStorage<4, 4, ::ScreenshotPostProcessFilter>      mPostProcessFilter;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mScreenshotBorderResourcePath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ScreenshotOptions();

    MCAPI ScreenshotOptions(::ScreenshotOptions&&);

    MCAPI ScreenshotOptions(::ScreenshotOptions const&);

    MCAPI ::ScreenshotOptions& operator=(::ScreenshotOptions&&);

    MCAPI ::ScreenshotOptions& operator=(::ScreenshotOptions const&);

    MCAPI ~ScreenshotOptions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ScreenshotOptions&&);

    MCAPI void* $ctor(::ScreenshotOptions const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
