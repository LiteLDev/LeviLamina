#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DrawsByMaterial;
class RenderController;
namespace mce { class MaterialPtr; }
// clang-format on

class DrawsByRenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RenderController const*>         mRenderController;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrawsByMaterial>> mDrawsByMaterial;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DrawsByMaterial* getDraw(::mce::MaterialPtr const& materialPtr);
    // NOLINTEND
};
