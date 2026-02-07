#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { struct TextureUVs; }
// clang-format on

namespace ClientBlockPipeline {

class Material : public ::Bedrock::EnableNonOwnerReferences {
public:
    // Material inner types declare
    // clang-format off
    struct PackedBools;
    // clang-format on

    // Material inner types define
    struct PackedBools {
    public:
        // member variables
        // NOLINTBEGIN
        bool mFaceDimming          : 1;
        bool mRandomizeUVRotation  : 1;
        bool mHasTextureVariations : 1;
        bool mAlphaMaskedTint      : 1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ClientBlockPipeline::TextureUVs>> mUvSets;
    ::ll::TypedStorage<4, 4, float>                                             mAmbientOcclusion;
    ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                                mBlockRenderLayer;
    ::ll::TypedStorage<1, 1, ::TintMethod>                                      mTintMethod;
    ::ll::TypedStorage<1, 1, ::ClientBlockPipeline::Material::PackedBools>      mPackedBools;
    // NOLINTEND

public:
    // prevent constructor by default
    Material();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Material() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Material(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::TextureUVCoordinateSet> const& EMPTY_TEXTURES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::vector<::TextureUVCoordinateSet> const& uvSets, ::BlockRenderLayer terrainLayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
