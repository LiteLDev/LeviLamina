#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/frame_renderer/ViewDescription.h"
#include "mc/external/render_dragon/frame_renderer/ViewSet.h"
#include "mc/external/render_dragon/materials/MaterialUniformOverrides.h"
#include "mc/external/render_dragon/rendering/Camera.h"

namespace dragon::framerenderer::drawutils {

struct GenericPassSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 280, ::dragon::rendering::Camera const>                  mCamera;
    ::ll::TypedStorage<4, 292, ::dragon::framerenderer::ViewDescription const>     mViewDesc;
    ::ll::TypedStorage<8, 24, ::dragon::framerenderer::ViewSet const>              mViewSets;
    ::ll::TypedStorage<8, 56, ::dragon::materials::MaterialUniformOverrides const> mGlobalOverrides;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericPassSet& operator=(GenericPassSet const&);
    GenericPassSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GenericPassSet(::dragon::framerenderer::drawutils::GenericPassSet const&);

    MCNAPI ~GenericPassSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::framerenderer::drawutils::GenericPassSet const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer::drawutils
