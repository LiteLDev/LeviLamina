#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/asset_streaming/IAudioAssetProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

class ResourcePackAudioAssetProvider : public ::Audio::IAudioAssetProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager const>> mResourcePackManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Audio::IStreamableAudioAsset> openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Audio::IStreamableAudioAsset> $openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;
    // NOLINTEND
};
