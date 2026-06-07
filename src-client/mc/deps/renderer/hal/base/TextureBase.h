#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class Texture; }
namespace mce { struct TextureDescription; }
// clang-format on

namespace mce {

class TextureBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkd1377d;
    ::ll::UntypedStorage<1, 1>  mUnkf4c59a;
    ::ll::UntypedStorage<1, 1>  mUnkef408d;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureBase& operator=(TextureBase const&);
    TextureBase(TextureBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextureBase();

    MCNAPI TextureBase(::mce::TextureBase&& other);

    MCNAPI void bindTexture(::mce::RenderContext& renderContext, uint textureUnit, uint shaderStagesBits) const;

    MCNAPI void
    createTexture(::mce::RenderContext& renderContext, ::mce::TextureDescription const& textureDescriptionIn);

    MCNAPI void deleteTexture();

    MCNAPI ::mce::TextureDescription const& getDescription() const;

    MCNAPI bool isCreated() const;

    MCNAPI ::mce::TextureBase& operator=(::mce::TextureBase&& rhs);

    MCNAPI void resolveTexture(::mce::RenderContext& renderContext, ::mce::Texture* src);

    MCNAPI void transitionToNonPixelShaderResourceState() const;

    MCNAPI void transitionToPixelShaderResourceState() const;

    MCNAPI void unbindTexture(::mce::RenderContext& renderContext, uint shaderStagesBits) const;

    MCNAPI ~TextureBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::TextureBase&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
