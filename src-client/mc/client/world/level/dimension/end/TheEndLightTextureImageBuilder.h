#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
struct BaseLightData;
namespace mce { struct Image; }
// clang-format on

class TheEndLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    ) /*override*/;

    virtual ~TheEndLightTextureImageBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $buildImage(
        ::BaseLightData const& lightData,
        ::mce::Image*          targetImage,
        uint                   imageLength,
        float                  a,
        float                  ambientBoost,
        bool                   clampToMinimum
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
