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
// clang-format on

class TrueTypeFont : public ::Font {
public:
    // TrueTypeFont inner types declare
    // clang-format off
    struct LoadedFontInformation;
    struct PageOfGlyphs;
    // clang-format on

    // TrueTypeFont inner types define
    struct LoadedFontInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, ::stbtt_fontinfo> info;
        ::ll::TypedStorage<4, 4, float>              scale;
        ::ll::TypedStorage<4, 4, int>                ascent;
        ::ll::TypedStorage<4, 4, int>                descent;
        ::ll::TypedStorage<4, 4, int>                lineGap;
        ::ll::TypedStorage<8, 32, ::std::string>     resourceData;
        // NOLINTEND
    };

    struct PageOfGlyphs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 7168, ::stbtt_packedchar[256]> characterInfo;
        ::ll::TypedStorage<4, 4, int>                        atlasPageSize;
        // NOLINTEND
    };

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~TrueTypeFont() /*override*/ = default;

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
    MCNAPI void _loadSheetForGlyph(int codepoint, bool uploadTexture, bool forceReload);

    MCNAPI void
    _uploadTextureToGPU(::ResourceLocation const& resourceLocation, ::std::shared_ptr<::cg::ImageBuffer> imageBuffer);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& CACHE_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadFontData(bool uploadTextureImmediately);

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI ::mce::MaterialPtr& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI void $unloadTextures();

    MCNAPI int $_getReplacementCharacter();

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool) const;

    MCNAPI float $_getCharWidth(int uniChar, bool);

    MCNAPI bool $supportsChar(int const& character);

    MCNAPI float $getWrapHeight() const;

    MCNAPI float $getScaleFactor() const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCNAPI void $reloadFontTextures(
        ::Bedrock::NonOwnerPointer<::ResourceLoadManager> const& resourceLoadManager,
        bool                                                     blockingLoad
    );

    MCNAPI bool $isReloadingTextures();

    MCNAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCNAPI ::mce::Font::Type $getType(int glyphSheet) const;

    MCNAPI void $fetchPage(int page);

    MCNAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCNAPI ::Core::PathBuffer<::std::string>
    $getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    MCNAPI void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCNAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND
};
