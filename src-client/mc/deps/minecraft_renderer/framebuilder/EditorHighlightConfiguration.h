#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/minecraft_renderer/framebuilder/HighlightDrawMode.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder::gamecomponents {

struct EditorHighlightConfiguration {
public:
    // EditorHighlightConfiguration inner types declare
    // clang-format off
    struct Style;
    // clang-format on

    // EditorHighlightConfiguration inner types define
    struct Style {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::mce::Color> mColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mOutlineColor;
        ::ll::TypedStorage<4, 16, ::mce::Color> mBlockEdgeColor;
        ::ll::TypedStorage<4, 4, float>         mAlpha;
        ::ll::TypedStorage<4, 4, float>         mOutlineWidth;
        ::ll::TypedStorage<4, 4, float>         mBlockEdgeThickness;
        ::ll::TypedStorage<4, 4, float>         mHiddenBlocksAlpha;
        ::ll::TypedStorage<4, 4, float>         mOverlayTextureStretch;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource> const>
                                                                                     mSelectedBlocksOverlayTex;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::gamecomponents::HighlightDrawMode> mDrawMode;
    ::ll::TypedStorage<4, 68, ::mce::framebuilder::gamecomponents::EditorHighlightConfiguration::Style> mStyle;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
