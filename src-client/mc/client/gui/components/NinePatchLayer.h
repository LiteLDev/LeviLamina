#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ScreenRenderer.h"
#include "mc/client/gui/components/NinePatchDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
// clang-format on

class NinePatchLayer : public ::ScreenRenderer {
public:
    // NinePatchLayer inner types declare
    // clang-format off
    struct CachedQuad;
    // clang-format on

    // NinePatchLayer inner types define
    struct CachedQuad {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             w;
    ::ll::TypedStorage<4, 4, float>                             h;
    ::ll::TypedStorage<4, 56, ::NinePatchDescription>           desc;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                texture;
    ::ll::TypedStorage<4, 4, int>                               excluded;
    ::ll::TypedStorage<4, 324, ::NinePatchLayer::CachedQuad[9]> quads;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NinePatchLayer() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void draw(::ScreenContext& screenContext, ::Tessellator& tessellator, float x, float y);

    MCAPI void setSize(float w, float h);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
