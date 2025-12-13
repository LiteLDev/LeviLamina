#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/IPhotoManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class LevelStorage;
class PhotoStorage;
struct ScreenshotOptions;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cg { class ImageBuffer; }
// clang-format on

class PhotoManager : public ::IPhotoManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PhotoStorage>>                 mPhotoStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const> mLevelStorage;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool const>                                        mIsClientSide;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(
                ::cg::ImageBuffer&,
                ::Actor*,
                ::Actor*,
                ::ScreenshotOptions&,
                ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
            ),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mPictureTakenPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PhotoManager() = default;

    virtual ::Bedrock::PubSub::Connector<void(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    )>&
    getPictureTakenConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PhotoManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);

    MCAPI void createPhotoStorage();

    MCAPI void createScreenshotsFolder(::std::string const& levelId, ::AppPlatform& appPlatform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Connector<void(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    )>&
    $getPictureTakenConnector();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
