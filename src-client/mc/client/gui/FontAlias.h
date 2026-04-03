#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ScreenContext;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class TextureGroup; }
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

    public:
        // prevent constructor by default
        ReferenceData& operator=(ReferenceData const&);
        ReferenceData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ReferenceData(::FontAlias::ReferenceData const&);

        MCAPI ::FontAlias::ReferenceData& operator=(::FontAlias::ReferenceData&&);

        MCAPI ~ReferenceData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::FontAlias::ReferenceData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    // prevent constructor by default
    FontAlias();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontAlias() /*override*/ = default;

    virtual float _getCharWidth(int uniChar, bool forceUnicode) /*override*/;

    virtual bool supportsChar(int const& character) /*override*/;

    virtual float getWrapHeight() const /*override*/;

    virtual float getScaleFactor() const /*override*/;

    virtual float getScaleFactor(int uniChar) const /*override*/;

    virtual bool isScreenPixelAligned() const /*override*/;

    virtual bool materialCanBeOverridden() const /*override*/;

    virtual void setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const /*override*/;

    virtual void uploadTextureToGPU() /*override*/;

    virtual ::ResourceLocation _getFontSheetLocation(int sheet, bool forceUnicode) const /*override*/;

    virtual ::mce::MaterialPtr const& getMaterial(int sheet, bool isOddGuiScale) const /*override*/;

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

    virtual void loadFontData(bool uploadTextureImmediately) /*override*/;

    virtual bool _supportsShadowInSingleDraw() /*override*/;

    virtual void onLanguageChanged(::std::string_view languageCode) /*override*/;

    virtual void _scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode) /*override*/;

    virtual float buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    ) /*override*/;

    virtual ::std::string _remapString(::std::string_view str) const /*override*/;

    virtual void switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FontAlias(
        ::std::shared_ptr<::mce::TextureGroup>      textureGroup,
        ::std::vector<::FontAlias::ReferenceData>&& fontReferences,
        float                                       scaleFactor
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForSheet(int const& sheet) const;

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForUnicode(int const& character) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>      textureGroup,
        ::std::vector<::FontAlias::ReferenceData>&& fontReferences,
        float                                       scaleFactor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCAPI bool $supportsChar(int const& character);

    MCAPI float $getWrapHeight() const;

    MCAPI float $getScaleFactor() const;

    MCAPI float $getScaleFactor(int uniChar) const;

    MCAPI bool $isScreenPixelAligned() const;

    MCAPI bool $materialCanBeOverridden() const;

    MCAPI void $setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCFOLD void $uploadTextureToGPU();

    MCAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool forceUnicode) const;

    MCAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCAPI ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI ::std::optional<::mce::Font::RenderingParameters> $tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    MCFOLD void $loadFontData(bool uploadTextureImmediately);

    MCAPI bool $_supportsShadowInSingleDraw();

    MCAPI void $onLanguageChanged(::std::string_view languageCode);

    MCAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCAPI ::std::string $_remapString(::std::string_view str) const;

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
