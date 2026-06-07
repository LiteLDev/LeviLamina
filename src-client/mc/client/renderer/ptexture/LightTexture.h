#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class BaseLightData;
class BaseLightTextureImageBuilder;
class Dimension;
class FrameUpdateContext;
class IClientInstance;
class MinecraftGameplayGraphicsResources;
class Vec2;
struct BrightnessPair;
namespace mce { class Color; }
namespace mce { struct ClientTexture; }
// clang-format on

class LightTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6fbdad;
    ::ll::UntypedStorage<1, 1>  mUnkd27bbb;
    ::ll::UntypedStorage<8, 16> mUnk815074;
    ::ll::UntypedStorage<1, 1>  mUnk4bdd8d;
    ::ll::UntypedStorage<1, 1>  mUnkf5db3e;
    ::ll::UntypedStorage<1, 1>  mUnkddd289;
    ::ll::UntypedStorage<4, 64> mUnk3dfec9;
    ::ll::UntypedStorage<8, 16> mUnkd3656a;
    // NOLINTEND

public:
    // prevent constructor by default
    LightTexture& operator=(LightTexture const&);
    LightTexture(LightTexture const&);
    LightTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LightTexture(::MinecraftGameplayGraphicsResources& minecraftGameplayGraphicsResources, ::SubClientId subClientId);

    MCNAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI ::mce::ClientTexture const& getClientHandle() const;

    MCNAPI ::mce::Color getColorForUV(::glm::vec2 const& lightColor) const;

    MCNAPI ::mce::Color getColorForUV(::BrightnessPair lightColor) const;

    MCNAPI ::BaseLightData const& getLightData() const;

    MCNAPI void refresh(
        ::Dimension const&,
        ::BaseLightTextureImageBuilder* imageBuilder,
        ::IClientInstance*              client,
        float                           a,
        float                           ambientBoost,
        bool                            clampToMinimum
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec2 brightnessToUV(::BrightnessPair brightness);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::MinecraftGameplayGraphicsResources& minecraftGameplayGraphicsResources, ::SubClientId subClientId);
    // NOLINTEND
};
