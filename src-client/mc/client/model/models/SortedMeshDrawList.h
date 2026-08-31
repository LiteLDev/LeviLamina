#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ClientPBRTextureData;
class DrawsByRenderController;
class DrawsByTexture;
class RenderController;
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

class SortedMeshDrawList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByRenderController>> mDrawsByRenderController;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DrawsByTexture* getDraw(
        ::RenderController const*     renderController,
        ::mce::MaterialPtr const&     materialPtr,
        ::mce::Mesh*                  mesh,
        ::ClientPBRTextureData const& textures
    );
    // NOLINTEND
};
