#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace cg { class ImageBuffer; }
namespace mce { class Color; }
namespace mce { class TextureGroup; }
// clang-format on

class TrueTypeFont : public ::Font {
public:
    // TrueTypeFont inner types declare
    // clang-format off
    struct LoadedFontInformation;
    struct PageOfGlyphs;
    // clang-format on

    // TrueTypeFont inner types define
    struct LoadedFontInformation {};

    struct PageOfGlyphs {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::TrueTypeFont::PageOfGlyphs>> mGlyphSheets;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>                               mSheetsThatFailedToRender;
    ::ll::TypedStorage<8, 208, ::TrueTypeFont::LoadedFontInformation>                  mLoadedFontInformation;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       mFontFile;
    ::ll::TypedStorage<4, 4, uint>                                                     mVersion;
    ::ll::TypedStorage<1, 1, uchar>                                                    mDefaultRenderSize;
    ::ll::TypedStorage<2, 2, ushort>                                                   mDefaultAtlasPageSize;
    ::ll::TypedStorage<4, 4, float>                                                    mRenderSizeToGameSizeScalar;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ResourceLocation, ::std::shared_ptr<::cg::ImageBuffer>>>>
                                                  mTexturesToUpload;
    ::ll::TypedStorage<1, 1, bool>                mIsReloading;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mGlyphSheetMutex;
    ::ll::TypedStorage<1, 1, bool>                mIsGlyphSheetBuilt;
    // NOLINTEND

public:
    // prevent constructor by default
    TrueTypeFont();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrueTypeFont() /*override*/;

    virtual void loadFontData(bool uploadTextureImmediately) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::mce::MaterialPtr& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void unloadTextures() /*override*/;

    virtual int _getReplacementCharacter() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool) const /*override*/;

    virtual float _getCharWidth(int uniChar, bool) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const
        /*override*/;

    virtual void reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    ) /*override*/;

    virtual bool isReloadingTextures() /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual void fetchPage(int page) /*override*/;

    virtual float buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    ) /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrueTypeFont(
        ::std::string const&                   ttfFile,
        uint                                   version,
        uchar                                  defaultRenderPixelHeight,
        ushort                                 atlasPageSize,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadTextureOnConstruction
    );

    MCAPI void _cacheAtlas(
        ::Core::Path const&                   atlasPath,
        ::std::shared_ptr<::cg::ImageBuffer>& atlasTexture,
        ::Core::Path const&                   glyphInfoPath,
        ::TrueTypeFont::PageOfGlyphs&         atlasGlyphInfo
    );

    MCAPI void
    _convertAtlas(::std::vector<uchar> const& data, ::std::shared_ptr<::cg::ImageBuffer>& atlasTexture, int atlasSize);

    MCAPI void _loadSheetForGlyph(int codepoint, bool uploadTexture, bool forceReload);

    MCAPI void _scalePageOfGlyphs(::TrueTypeFont::PageOfGlyphs& pageOfGlyphs) const;

    MCAPI void
    _uploadTextureToGPU(::ResourceLocation const& resourceLocation, ::std::shared_ptr<::cg::ImageBuffer> imageBuffer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& CACHE_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                   ttfFile,
        uint                                   version,
        uchar                                  defaultRenderPixelHeight,
        ushort                                 atlasPageSize,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadTextureOnConstruction
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadFontData(bool uploadTextureImmediately);

    MCFOLD bool $_supportsShadowInSingleDraw();

    MCAPI ::mce::MaterialPtr& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCAPI void $uploadTextureToGPU();

    MCAPI void $unloadTextures();

    MCFOLD int $_getReplacementCharacter();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool) const;

    MCAPI float $_getCharWidth(int uniChar, bool);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCFOLD float $getScaleFactor() const;

    MCFOLD bool $isScreenPixelAligned() const;

    MCFOLD bool $materialCanBeOverridden() const;

    MCFOLD void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCAPI void $reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    );

    MCFOLD bool $isReloadingTextures();

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI void $fetchPage(int page);

    MCAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCFOLD ::Core::PathBuffer<::std::string>
    $getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    MCFOLD void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
