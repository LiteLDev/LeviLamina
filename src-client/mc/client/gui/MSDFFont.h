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
    virtual float _getCharWidth(int, bool) /*override*/;

    virtual bool supportsChar(int const&) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const
        /*override*/;

    virtual ::Vec2 getTranslationFactor() const /*override*/;

    virtual void _scanUnicodeCharacterSize(int, int, bool) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual void loadFontData(bool) /*override*/;

    virtual float
    buildChar(::std::vector<::Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;

    virtual int _getReplacementCharacter() /*override*/;

    virtual ::std::string _remapString(::std::string_view str) const /*override*/;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MSDFFont(
        ::Core::Path const&                    fontPagePrefix,
        ::std::shared_ptr<::mce::TextureGroup> textureGroup,
        bool                                   uploadOnConstruction
    );
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
