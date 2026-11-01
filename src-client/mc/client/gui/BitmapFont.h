#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
namespace mce { struct Image; }
// clang-format on

class BitmapFont : public ::Font {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                          mAsciiFontName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                          mUnicodeFontName;
    ::ll::TypedStorage<1, 1, uchar>                                                       mAsciiSheetCount;
    ::ll::TypedStorage<1, 1, uchar>                                                       mAsciiCharacterHeight;
    ::ll::TypedStorage<4, 4, int>                                                         mAsciiCharacterYOffset;
    ::ll::TypedStorage<1, 1, bool>                                                        mUseExtendedAscii;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::array<float, 256>>>        mCharWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::shared_ptr<::mce::Image>>> mBitmapFontImages;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>                           mUnicodeWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>                           mUnicodeOffsets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>                           mUnicodePageGlyphWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>> mSheetScannedForWidthsAndOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    BitmapFont& operator=(BitmapFont const&);
    BitmapFont();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitmapFont() /*override*/ = default;

    virtual float _getCharWidth(int uniChar, bool forceUnicode) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor(int c) const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool forceUnicode) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual float getGlyphHeight(int glyphSheet, bool isUnicode) const /*override*/;

    virtual void loadFontData(bool uploadTextureImmediately) /*override*/;

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

    virtual void switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;

    virtual uchar _getAsciiSheetCount() const /*override*/;

    virtual int _getAsciiGlyphsPerPage() const /*override*/;

    virtual bool _usesLegacyAsciiMapping() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BitmapFont(::BitmapFont const& rhs);

    MCNAPI BitmapFont(
        ::Core::Path const&                    asciiName,
        ::Core::Path const&                    unicodeName,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        uchar                                  asciiSheetCount,
        bool                                   uploadOnConstruction
    );

    MCNAPI ::Core::PathBuffer<::std::string> getAsciiFontNameWithPage(uchar const page) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BitmapFont const& rhs);

    MCNAPI void* $ctor(
        ::Core::Path const&                    asciiName,
        ::Core::Path const&                    unicodeName,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        uchar                                  asciiSheetCount,
        bool                                   uploadOnConstruction
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCNAPI bool $supportsChar(int const& character);

    MCNAPI float $getWrapHeight() const;

    MCNAPI float $getScaleFactor(int c) const;

    MCNAPI float $getScaleFactor() const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool forceUnicode) const;

    MCNAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCNAPI float $getGlyphHeight(int glyphSheet, bool isUnicode) const;

    MCNAPI void $loadFontData(bool uploadTextureImmediately);

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

    MCNAPI void $switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName);

    MCNAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;

    MCNAPI uchar $_getAsciiSheetCount() const;

    MCNAPI int $_getAsciiGlyphsPerPage() const;

    MCNAPI bool $_usesLegacyAsciiMapping() const;
    // NOLINTEND
};
