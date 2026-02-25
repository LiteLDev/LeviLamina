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
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mAsciiFontName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mUnicodeFontName;
    ::ll::TypedStorage<4, 1024, float[256]>                      mCharWidths;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Image>>   mBitmapFontImage;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>  mUnicodeWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>  mUnicodeOffsets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>  mUnicodePageGlyphWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>         mSheetScannedForWidthsAndOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    BitmapFont& operator=(BitmapFont const&);
    BitmapFont();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitmapFont() /*override*/;

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BitmapFont(::BitmapFont const& rhs);

    MCAPI BitmapFont(
        ::Core::Path const&                    asciiName,
        ::Core::Path const&                    unicodeName,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
    );

    MCAPI void _loadAsciiFontInformation(::Core::Path const& fontName, bool uploadTextureImmediately);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BitmapFont const& rhs);

    MCAPI void* $ctor(
        ::Core::Path const&                    asciiName,
        ::Core::Path const&                    unicodeName,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
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
    MCAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCAPI float $getScaleFactor(int c) const;

    MCAPI float $getScaleFactor() const;

    MCFOLD bool $isScreenPixelAligned() const;

    MCFOLD bool $materialCanBeOverridden() const;

    MCAPI void $uploadTextureToGPU();

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCFOLD bool $_supportsShadowInSingleDraw();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool forceUnicode) const;

    MCAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCAPI void $loadFontData(bool uploadTextureImmediately);

    MCAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCAPI ::Core::PathBuffer<::std::string>
    $getUnicodeFontNameWithPage(::Core::Path const& fontName, uchar const page) const;

    MCAPI void $switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
