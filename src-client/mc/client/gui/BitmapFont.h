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
    // virtual functions
    // NOLINTBEGIN
    virtual ~BitmapFont() /*override*/ = default;

    virtual float _getCharWidth(int, bool) /*override*/;

    virtual bool supportsChar(int const&) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor(int) const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual void _scanUnicodeCharacterSize(int, int, bool) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const /*override*/;

    virtual void loadFontData(bool) /*override*/;

    virtual float
    buildChar(::std::vector<::Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool) /*override*/;

    virtual ::Core::PathBuffer<::std::string> getUnicodeFontNameWithPage(::Core::Path const&, uchar const) const;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
