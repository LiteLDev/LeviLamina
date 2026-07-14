#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ClientPBRTextureData;
class DrawsByRenderController;
class DrawsByTexture;
class RenderController;
class ScreenContext;
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
    MCAPI void clear();

    MCAPI ::DrawsByTexture* getDraw(
        ::RenderController const*     renderController,
        ::mce::MaterialPtr const&     materialPtr,
        ::mce::Mesh*                  mesh,
        ::ClientPBRTextureData const& textures
    );

    MCFOLD void render(::ScreenContext& screenContext);

    MCAPI ~SortedMeshDrawList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
