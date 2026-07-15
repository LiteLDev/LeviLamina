#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class FontAlias : public ::Font {
public:
    // FontAlias inner types declare
    // clang-format off
    struct ReferenceData;
    // clang-format on

    // FontAlias inner types define
    struct ReferenceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::FontHandle>                         mFontHandle;
        ::ll::TypedStorage<8, 32, ::std::string>                        mLanguageCode;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> mIncludedUnicodeRanges;
        ::ll::TypedStorage<4, 4, float>                                 mFontScale;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FontAlias::ReferenceData>> mFontReferences;
    ::ll::TypedStorage<8, 32, ::std::string>                             mCurrentLanguageCode;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesMaterialsCanBeOverridden;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesScreenPixelAligned;
    ::ll::TypedStorage<1, 1, bool>                                       mAllReferencesSupportShadowInSingleDraw;
    ::ll::TypedStorage<4, 4, float>                                      mMaxWrapHeight;
    ::ll::TypedStorage<4, 4, float>                                      mMaxScalar;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontAlias() /*override*/ = default;

    virtual float _getCharWidth(int, bool) /*override*/;

    virtual bool supportsChar(int const&) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual float getScaleFactor(int) const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const
        /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const /*override*/;

    virtual ::mce::Font::Type getType(int glyphSheet) const /*override*/;

    virtual ::std::optional<::mce::Font::RenderingParameters> tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const /*override*/;

    virtual void loadFontData(bool) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual void onLanguageChanged(::std::string_view) /*override*/;

    virtual void _scanUnicodeCharacterSize(int, int, bool) /*override*/;

    virtual float
    buildChar(::std::vector<::Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool) /*override*/;

    virtual ::std::string _remapString(::std::string_view str) const /*override*/;

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
