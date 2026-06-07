#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/ResourceBase.h"
#include "mc/deps/renderer/hal/null/TextureNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { struct TextureDescription; }
// clang-format on

namespace mce {

class Texture : public ::mce::ResourceBase<::mce::TextureNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkccf3f0;
    ::ll::UntypedStorage<8, 16> mUnk9ecf64;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Texture();

    MCNAPI Texture(::mce::Texture&& other);

    MCNAPI void bindTexture(::mce::RenderContext& renderContext, uint textureUnit, uint shaderStagesBits) const;

    MCNAPI void createTexture(::mce::RenderContext& renderContext, ::mce::TextureDescription const& textureDescription);

    MCNAPI void deleteTexture();

    MCNAPI ::mce::TextureDescription const& getDescription() const;

    MCNAPI bool isCreated() const;

    MCNAPI ::mce::Texture& operator=(::mce::Texture&& texture);

    MCNAPI void resolveTexture(::mce::RenderContext& renderContext, ::mce::Texture* src);

    MCNAPI void safelyDeleteTexture();

    MCNAPI void transitionToNonPixelShaderResourceState() const;

    MCNAPI void transitionToPixelShaderResourceState() const;

    MCNAPI void unbindTexture(::mce::RenderContext& renderContext, uint shaderStagesBits) const;

    MCNAPI ~Texture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::Texture&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
