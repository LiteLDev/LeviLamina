#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
class Tessellator;
namespace mce { class TexturePtr; }
namespace mce { struct ViewportInfo; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

class FlipbookTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbca3d9;
    ::ll::UntypedStorage<8, 88>  mUnkba2b97;
    ::ll::UntypedStorage<4, 4>   mUnk3e9001;
    ::ll::UntypedStorage<8, 32>  mUnk662201;
    ::ll::UntypedStorage<8, 16>  mUnk31f342;
    ::ll::UntypedStorage<8, 592> mUnk3657f7;
    ::ll::UntypedStorage<8, 56>  mUnk350955;
    ::ll::UntypedStorage<4, 4>   mUnkdd2ba5;
    ::ll::UntypedStorage<4, 4>   mUnkaf5df3;
    ::ll::UntypedStorage<4, 4>   mUnk1eb372;
    ::ll::UntypedStorage<4, 4>   mUnk6d4e38;
    ::ll::UntypedStorage<4, 4>   mUnka8d2ff;
    ::ll::UntypedStorage<4, 4>   mUnk6cbe4c;
    ::ll::UntypedStorage<4, 4>   mUnk802493;
    ::ll::UntypedStorage<1, 1>   mUnke903e9;
    ::ll::UntypedStorage<1, 1>   mUnk618aa7;
    // NOLINTEND

public:
    // prevent constructor by default
    FlipbookTexture& operator=(FlipbookTexture const&);
    FlipbookTexture(FlipbookTexture const&);
    FlipbookTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::framebuilder::BlitFlipbookSingleTextureDescription
    createDescription(::ScreenContext& screenContext, ::mce::ViewportInfo const& viewportInfo) const;

    MCNAPI void load(::Tessellator& tessellator);

    MCNAPI void render(::ScreenContext& screenContext, ::mce::TexturePtr const&, ::mce::ViewportInfo const&) const;

    MCNAPI ~FlipbookTexture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
