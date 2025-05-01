#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/IPhotoManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class LevelStorage;
struct ScreenshotOptions;
namespace cg { class ImageBuffer; }
// clang-format on

class PhotoManager : public ::IPhotoManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk9d30d8;
    ::ll::UntypedStorage<8, 24>  mUnkb6ff69;
    ::ll::UntypedStorage<8, 32>  mUnk15bb57;
    ::ll::UntypedStorage<1, 1>   mUnk418844;
    ::ll::UntypedStorage<8, 128> mUnk52a34c;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoManager& operator=(PhotoManager const&);
    PhotoManager(PhotoManager const&);
    PhotoManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~PhotoManager() = default;

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<
        void(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>)>&
    getPictureTakenConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PhotoManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);

    MCNAPI void createPhotoStorage();

    MCNAPI void createScreenshotsFolder(::std::string const& levelId, ::AppPlatform& appPlatform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<
        void(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&, ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>)>&
    $getPictureTakenConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
