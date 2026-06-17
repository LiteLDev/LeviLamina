#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ConstantBufferConstantsBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat3; }
namespace mce { class ShaderConstantFloat4; }
namespace mce { class ShaderConstantInt1; }
namespace mce { class ShaderConstantMatrix4x4; }
// clang-format on

namespace mce {

class ShaderConstants : public ::mce::ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    CURRENT_COLOR;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    DARKEN;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat3*>    TEXTURE_DIMENSIONS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*>    HUD_OPACITY;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantMatrix4x4*> UV_TRANSFORM;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantInt1*>      MSAA_SAMPLECOUNT;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void init() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ShaderConstants();

    MCAPI void getConstants();

    MCAPI float const& getHUDOpacity() const;

    MCAPI void setHUDOpacity(::mce::RenderContext& renderContext, float hudOpacity);

    MCAPI void setMSAASampleCount(::mce::RenderContext& renderContext, int const& value);

    MCAPI void setTextureDimensions(::mce::RenderContext& renderContext, ::glm::vec3 const& textureSize);

    MCAPI void setUVTransform(::mce::RenderContext& transform, ::glm::mat2x3 const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
