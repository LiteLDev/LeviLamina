#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/deps/minecraft_renderer/game/ItemContextFlags.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
class ItemRenderCall;
namespace dragon { class ResolvedTextureResource; }
namespace mce { class GlobalConstantBuffers; }
namespace mce { class Mesh; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mce::framebuilder {

struct RenderItemInHandDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::Mesh const&>                                                     mMesh;
    ::ll::TypedStorage<8, 16, ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource> const> mTexture;
    ::ll::TypedStorage<8, 16, ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource> const> mGlintTexture;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                                    mMaterial;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4>                                                         mWorldMatrix;
    ::ll::TypedStorage<1, 1, ::ItemContextFlags>                                                     mItemContextFlags;
    ::ll::TypedStorage<1, 1, bool>                                                                   mIsInUIPass;
    ::ll::TypedStorage<1, 1, bool>                                                                   mNeedsBlending;
    ::ll::TypedStorage<1, 1, bool>                                                                   mNeedsAlphaTest;
    ::ll::TypedStorage<1, 1, bool>                                                                   mAlphaMaskedTint;
    ::ll::TypedStorage<1, 1, bool>                                   mIsDitheringEnabled;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mGlintColor;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mOverlayColor;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mChangeColor;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mMultiplicativeTintColor;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mTileLightColor;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                            mTileLightIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec4>                           mBlockLightColor;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription>   mFog;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                            mUVOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                            mUVRotation;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                            mUVScale;
    ::ll::TypedStorage<2, 2, ushort const>                           mViewId;
    ::ll::TypedStorage<8, 56, ::dragon::RenderMetadata const>        mRenderMetadata;
    ::ll::TypedStorage<4, 24, ::std::pair<::glm::vec3, ::glm::vec3>> mBoundingVolume;
    ::ll::TypedStorage<4, 16, ::std::pair<::glm::vec2, ::glm::vec2>> mUVExtent;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderItemInHandDescription& operator=(RenderItemInHandDescription const&);
    RenderItemInHandDescription(RenderItemInHandDescription const&);
    RenderItemInHandDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderItemInHandDescription(
        ::ItemRenderCall const&             renderObject,
        ::ItemContextFlags const&           itemFlags,
        ::mce::MaterialPtr const&           material,
        ::mce::ServerTexture const&         glintTexture,
        ::glm::mat4x4 const&                worldMatrix,
        bool                                isDrawingUI,
        ::mce::GlobalConstantBuffers const& globalConstantBuffers,
        ushort                              viewId,
        ::dragon::RenderMetadata const&     renderMetadata,
        bool                                isDitheringEnabled
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ItemRenderCall const&             renderObject,
        ::ItemContextFlags const&           itemFlags,
        ::mce::MaterialPtr const&           material,
        ::mce::ServerTexture const&         glintTexture,
        ::glm::mat4x4 const&                worldMatrix,
        bool                                isDrawingUI,
        ::mce::GlobalConstantBuffers const& globalConstantBuffers,
        ushort                              viewId,
        ::dragon::RenderMetadata const&     renderMetadata,
        bool                                isDitheringEnabled
    );
    // NOLINTEND
};

} // namespace mce::framebuilder
