#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/Font.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
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
        ::ll::UntypedStorage<8, 80> mUnk45e29b;
        ::ll::UntypedStorage<8, 32> mUnk9c4f1e;
        ::ll::UntypedStorage<8, 24> mUnkec3bd2;
        ::ll::UntypedStorage<4, 4>  mUnke1aeda;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReferenceData& operator=(ReferenceData const&);
        ReferenceData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ReferenceData(::FontAlias::ReferenceData const&);

        MCNAPI ::FontAlias::ReferenceData& operator=(::FontAlias::ReferenceData&&);

        MCNAPI ~ReferenceData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::FontAlias::ReferenceData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7b7975;
    ::ll::UntypedStorage<8, 32> mUnkdc48d3;
    ::ll::UntypedStorage<1, 1>  mUnkc30fdf;
    ::ll::UntypedStorage<1, 1>  mUnk4a9bd0;
    ::ll::UntypedStorage<1, 1>  mUnk667ea0;
    ::ll::UntypedStorage<4, 4>  mUnkfa7a74;
    ::ll::UntypedStorage<4, 4>  mUnk50d4f6;
    // NOLINTEND

public:
    // prevent constructor by default
    FontAlias& operator=(FontAlias const&);
    FontAlias(FontAlias const&);
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

    virtual void onLanguageChanged(::std::string const& languageCode) /*override*/;

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

    virtual ::std::string _remapString(::std::string const& str) const /*override*/;

    virtual void switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName) /*override*/;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontAlias(
        ::std::shared_ptr<::mce::TextureGroup>      textureGroup,
        ::std::vector<::FontAlias::ReferenceData>&& fontReferences,
        float                                       scaleFactor
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForSheet(int const& sheet) const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::FontHandle const> getFontReferenceForUnicode(int const& character) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::mce::TextureGroup>      textureGroup,
        ::std::vector<::FontAlias::ReferenceData>&& fontReferences,
        float                                       scaleFactor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $_getCharWidth(int uniChar, bool forceUnicode);

    MCNAPI bool $supportsChar(int const& character);

    MCNAPI float $getWrapHeight() const;

    MCNAPI float $getScaleFactor() const;

    MCNAPI float $getScaleFactor(int uniChar) const;

    MCNAPI bool $isScreenPixelAligned() const;

    MCNAPI bool $materialCanBeOverridden() const;

    MCNAPI void $setTextConstantsInScreenContext(
        ::ScreenContext&    screenContext,
        int                 glyphSheet,
        float               guiScale,
        ::mce::Color const& textColor,
        bool                hasShadow
    ) const;

    MCNAPI void $uploadTextureToGPU();

    MCNAPI ::ResourceLocation $_getFontSheetLocation(int sheet, bool forceUnicode) const;

    MCNAPI ::mce::MaterialPtr const& $getMaterial(int sheet, bool isOddGuiScale) const;

    MCNAPI ::mce::Font::Type $getType(int glyphSheet) const;

    MCNAPI ::std::optional<::mce::Font::RenderingParameters> $tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    MCNAPI void $loadFontData(bool uploadTextureImmediately);

    MCNAPI bool $_supportsShadowInSingleDraw();

    MCNAPI void $onLanguageChanged(::std::string const& languageCode);

    MCNAPI void $_scanUnicodeCharacterSize(int character, int sheet, bool forceUnicode);

    MCNAPI float $buildChar(
        ::std::vector<::Font::GlyphQuad>& quads,
        int                               i,
        ::mce::Color const&               color,
        bool                              italic,
        float                             x,
        float                             y,
        bool                              unicode
    );

    MCNAPI ::std::string $_remapString(::std::string const& str) const;

    MCNAPI void $switchFontsource(::Core::Path const& asciiName, ::Core::Path const& unicodeName);

    MCNAPI ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    $getFontSources() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
