#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace mce { class GlobalConstantBuffers; }
namespace mce { class Mesh; }
namespace mce { class MeshContext; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mce::framebuilder {

struct RenderMeshFallbackDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&> mMesh;
    ::ll::
        TypedStorage<8, 136, ::brstd::static_vector<::mce::ServerResourcePointer<::dragon::ResolvedTextureResource>, 8>>
                                                                     mTextures;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4>                         mWorldMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec3>                           mSortOrigin;
    ::ll::TypedStorage<1, 1, bool>                                   mIsUI;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDrawingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDrawingPersistentUIElement;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDrawingMovingBlock;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDitheringEnabled;
    ::ll::TypedStorage<4, 16, ::mce::Color>                          mCurrentColorUniform;
    ::ll::TypedStorage<4, 16, ::mce::Color>                          mDarkenUniform;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                    mOldMat;
    ::ll::TypedStorage<8, 8, ::mce::GlobalConstantBuffers const&>    mConstants;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mUVAnim;
    ::ll::TypedStorage<4, 4, float>                                  mHudOpacity;
    ::ll::TypedStorage<4, 4, float>                                  mAlphaMaskedTint;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>   mFog;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>>          mClipRegion;
    ::ll::TypedStorage<2, 2, ushort const>                           mViewId;
    ::ll::TypedStorage<8, 56, ::dragon::RenderMetadata const>        mRenderMetadata;
    ::ll::TypedStorage<4, 24, ::std::pair<::glm::vec3, ::glm::vec3>> mBoundingVolume;
    ::ll::TypedStorage<4, 16, ::std::pair<::glm::vec2, ::glm::vec2>> mUVExtent;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMeshFallbackDescription& operator=(RenderMeshFallbackDescription const&);
    RenderMeshFallbackDescription(RenderMeshFallbackDescription const&);
    RenderMeshFallbackDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderMeshFallbackDescription(
        ::mce::MeshContext&                          context,
        ::mce::Mesh const&                           mesh,
        ::glm::mat4x4 const&                         worldMatrix,
        ::mce::MaterialPtr const&                    oldMat,
        ::gsl::span<::mce::ServerTexture>            textures,
        ::glm::vec3 const&                           sortOrigin,
        bool                                         isUI,
        bool                                         isDrawingFirstPersonObjects,
        bool                                         isDrawingMovingBlock,
        bool                                         isDitheringEnabled,
        ::mce::GlobalConstantBuffers const&          globalConstantBuffers,
        ushort const&                                viewId,
        ::std::optional<::glm::vec4> const&          clipRegion,
        ::dragon::RenderMetadata const&              renderMetadata,
        ::std::pair<::glm::vec3, ::glm::vec3> const& boundingVolume
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::MeshContext&                          context,
        ::mce::Mesh const&                           mesh,
        ::glm::mat4x4 const&                         worldMatrix,
        ::mce::MaterialPtr const&                    oldMat,
        ::gsl::span<::mce::ServerTexture>            textures,
        ::glm::vec3 const&                           sortOrigin,
        bool                                         isUI,
        bool                                         isDrawingFirstPersonObjects,
        bool                                         isDrawingMovingBlock,
        bool                                         isDitheringEnabled,
        ::mce::GlobalConstantBuffers const&          globalConstantBuffers,
        ushort const&                                viewId,
        ::std::optional<::glm::vec4> const&          clipRegion,
        ::dragon::RenderMetadata const&              renderMetadata,
        ::std::pair<::glm::vec3, ::glm::vec3> const& boundingVolume
    );
    // NOLINTEND
};

} // namespace mce::framebuilder
