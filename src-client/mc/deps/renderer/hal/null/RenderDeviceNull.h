#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/base/RenderDeviceBase.h"
#include "mc/deps/renderer/hal/enums/RenderFeature.h"

// auto generated forward declare list
// clang-format off
namespace mce { class SampleDescription; }
// clang-format on

namespace mce {

class RenderDeviceNull : public ::mce::RenderDeviceBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 20> mUnk8f4888;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceNull& operator=(RenderDeviceNull const&);
    RenderDeviceNull(RenderDeviceNull const&);
    RenderDeviceNull();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool checkFeatureSupport(::mce::RenderFeature renderFeature) const;

    MCNAPI uint getMaxVertexCount();

    MCNAPI void getMultisampleQualityLevels(
        ::mce::TextureFormat                     textureFormat,
        ::std::vector<::mce::SampleDescription>& supportedMultisampleQualityLevels
    ) const;
    // NOLINTEND
};

} // namespace mce
