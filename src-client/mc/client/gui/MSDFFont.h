#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
class Vec2;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
// clang-format on

class MSDFFont : public ::Font {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFontPagePrefix;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, float>>  mUnicodeWidths;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>         mSheetScannedForWidthsAndOffsets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, int>>    mRemappedGlyphs;
    // NOLINTEND

public:
    // prevent constructor by default
    MSDFFont();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float _getCharWidth(int uniChar, bool forceUnicode) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void setTextConstantsInScreenContext(
        ::ScreenContext& screenContext,
        int,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const /*override*/;

    virtual ::Vec2 getTranslationFactor() const /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual void loadFontData(bool) /*override*/;

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

    virtual int _getReplacementCharacter() /*override*/;

    virtual ::std::string _remapString(::std::string const& str) const /*override*/;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;

    virtual ~MSDFFont() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MSDFFont(
        ::Core::Path const&                    fontPagePrefix,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
    );

    MCAPI void _loadGlyphRemappingData();

    MCAPI void _loadMsdfFontInformation(::Core::Path const& fontName, uchar page);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::Path const&                    fontPagePrefix,
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

    MCFOLD float $getWrapHeight() const;

    MCFOLD float $getScaleFactor() const;

    MCFOLD bool $isScreenPixelAligned() const;

    MCFOLD bool $materialCanBeOverridden() const;

    MCFOLD void $uploadTextureToGPU();

    MCFOLD void $setTextConstantsInScreenContext(
        ::ScreenContext& screenContext,
        int,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCAPI ::Vec2 $getTranslationFactor() const;

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCFOLD bool $_supportsShadowInSingleDraw();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool) const;

    MCAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI void $loadFontData(bool);

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

    MCFOLD int $_getReplacementCharacter();

    MCAPI ::std::string $_remapString(::std::string const& str) const;

    MCAPI void $switchFontsource(::Core::Path const&, ::Core::Path const&);

    MCAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
