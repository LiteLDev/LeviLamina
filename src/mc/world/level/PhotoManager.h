#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class PhotoManager {
public:
    // prevent constructor by default
    PhotoManager& operator=(PhotoManager const&);
    PhotoManager(PhotoManager const&);
    PhotoManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual class Bedrock::PubSub::Connector<
        void(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&)>&
    getPictureTakenConnector();

    // vIndex: 1
    virtual ~PhotoManager() = default;

    MCAPI PhotoManager(class StackRefResult<class LevelStorage> const& levelStorage, bool isClientSide);

    MCAPI void createPhotoStorage();

    MCAPI void createScreenshotsFolder(std::string const& levelId, class AppPlatform& appPlatform);

    MCAPI class PhotoStorage& getPhotoStorage();

    MCAPI class Core::PathBuffer<std::string> const& getScreenshotsFolder() const;

    MCAPI void takePicture(
        class cg::ImageBuffer&    outImage,
        class Actor*              camera,
        class Actor*              target,
        struct ScreenshotOptions& screenshotOptions
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Core::PathBuffer<std::string> _getPhotoStoragePath();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class StackRefResult<class LevelStorage> const& levelStorage, bool isClientSide);

    MCAPI class Bedrock::PubSub::Connector<
        void(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&)>&
    getPictureTakenConnector$();

    // NOLINTEND
};
