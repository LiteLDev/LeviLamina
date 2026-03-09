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

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::ScreenshotOptions&&);

    MCAPI_C void* $ctor(::ScreenshotOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
