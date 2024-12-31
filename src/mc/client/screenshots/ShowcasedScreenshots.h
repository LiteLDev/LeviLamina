#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/screenshots/IShowcasedScreenshots.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"

namespace Screenshots {

class ShowcasedScreenshots : public ::Screenshots::IShowcasedScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfb2e45;
    ::ll::UntypedStorage<8, 8>  mUnkc598fa;
    ::ll::UntypedStorage<8, 32> mUnkab068e;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshots& operator=(ShowcasedScreenshots const&);
    ShowcasedScreenshots(ShowcasedScreenshots const&);
    ShowcasedScreenshots();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShowcasedScreenshots() /*override*/ = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadGallery() /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadCount() /*override*/;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    loadShowcasedScreenshot(::std::string const&) /*override*/;

    // vIndex: 4
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadFeaturedScreenshot() /*override*/;

    // vIndex: 5
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    addScreenshotToShowcase(int64, bool, ::Core::PathBuffer<::std::string> const&) /*override*/;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    removeShowcasedScreenshot(::std::string const&, bool) /*override*/;

    // vIndex: 7
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    setFeaturedScreenshot(::std::string const&) /*override*/;

    // vIndex: 8
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> removeFeaturedScreenshot() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Screenshots
