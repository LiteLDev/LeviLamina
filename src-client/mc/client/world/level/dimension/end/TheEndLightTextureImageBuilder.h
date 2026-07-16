#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
namespace mce { struct Image; }
// clang-format on

class TheEndLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk7c13b0;
    // NOLINTEND

public:
    // prevent constructor by default
    TheEndLightTextureImageBuilder& operator=(TheEndLightTextureImageBuilder const&);
    TheEndLightTextureImageBuilder(TheEndLightTextureImageBuilder const&);
    TheEndLightTextureImageBuilder();

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
