#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

namespace Audio {

class IAudioAssetProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAudioAssetProvider();

    virtual ::std::unique_ptr<::Audio::IStreamableAudioAsset> openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const = 0;
    // NOLINTEND
};

} // namespace Audio
