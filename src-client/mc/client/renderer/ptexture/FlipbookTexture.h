#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/TextureSetLayerType.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
struct FlipbookTextureDescription;
struct MinecraftGraphics;
struct TextureUVCoordinateSet;
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct ViewportInfo; }
namespace mce::framebuilder { struct BlitFlipbookSingleTextureDescription; }
// clang-format on

class FlipbookTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk3e10d2;
    ::ll::UntypedStorage<8, 88>  mUnkba2b97;
    ::ll::UntypedStorage<4, 4>   mUnk3e9001;
    ::ll::UntypedStorage<8, 32>  mUnk662201;
    ::ll::UntypedStorage<8, 16>  mUnk31f342;
    ::ll::UntypedStorage<8, 8>   mUnkc8f59e;
    ::ll::UntypedStorage<8, 528> mUnk3657f7;
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
    MCNAPI FlipbookTexture(
        ::MinecraftGraphics&                   minecraftGraphics,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FlipbookTextureDescription const&    flipbookTextureDescription,
        ::TextureUVCoordinateSet const&        uvs,
        int                                    padSize,
        ::cg::TextureSetLayerType              textureType
    );

    MCNAPI ::mce::framebuilder::BlitFlipbookSingleTextureDescription
    createDescription(::ScreenContext& screenContext, ::mce::ViewportInfo const& viewportInfo) const;

    MCNAPI void load();

    MCNAPI void render(::ScreenContext& screenContext, ::mce::TexturePtr const&, ::mce::ViewportInfo const&) const;

    MCNAPI ~FlipbookTexture();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MinecraftGraphics&                   minecraftGraphics,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        ::FlipbookTextureDescription const&    flipbookTextureDescription,
        ::TextureUVCoordinateSet const&        uvs,
        int                                    padSize,
        ::cg::TextureSetLayerType              textureType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
