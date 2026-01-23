#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Type.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourceLocation;
class ScreenContext;
class Tessellator;
struct UIActorOffscreenCaptureDescription;
struct UIMeshOffscreenCaptureDescription;
struct UIStructureVolumeOffscreenCaptureDescription;
struct UIThumbnailMeshOffscreenCaptureDescription;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce::Font { struct RenderingParameters; }
// clang-format on

class Font : public ::std::enable_shared_from_this<::Font> {
public:
    // Font inner types declare
    // clang-format off
    struct GlyphQuad;
    struct TextObject;
    // clang-format on

    // Font inner types define
    struct GlyphQuad {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8>  mUnk3013a9;
        ::ll::UntypedStorage<4, 8>  mUnkc206ed;
        ::ll::UntypedStorage<4, 8>  mUnk4a26dc;
        ::ll::UntypedStorage<4, 8>  mUnk3d5642;
        ::ll::UntypedStorage<4, 4>  mUnkfaaafb;
        ::ll::UntypedStorage<4, 16> mUnk51fe87;
        // NOLINTEND

    public:
        // prevent constructor by default
        GlyphQuad& operator=(GlyphQuad const&);
        GlyphQuad(GlyphQuad const&);
        GlyphQuad();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void append(::Tessellator& t, bool linearClampFormat) const;
        // NOLINTEND
    };

    struct TextObject {
    public:
        // TextObject inner types declare
        // clang-format off
        struct Page;
        // clang-format on

        // TextObject inner types define
        struct Page {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 528> mUnk7800af;
            ::ll::UntypedStorage<8, 32>  mUnk18cb6a;
            ::ll::UntypedStorage<4, 4>   mUnkc6f829;
            // NOLINTEND

        public:
            // prevent constructor by default
            Page& operator=(Page const&);
            Page(Page const&);
            Page();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk3485a9;
        ::ll::UntypedStorage<4, 16> mUnkc92af5;
        ::ll::UntypedStorage<1, 1>  mUnk8913b2;
        ::ll::UntypedStorage<1, 1>  mUnk72ea3b;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextObject& operator=(TextObject const&);
        TextObject(TextObject const&);
        TextObject();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void render(
            ::ScreenContext&          screenContext,
            ::Font const&             font,
            ::mce::MaterialPtr const* optionalMat,
            ::std::variant<
                ::std::monostate,
                ::UIActorOffscreenCaptureDescription,
                ::UIThumbnailMeshOffscreenCaptureDescription,
                ::UIMeshOffscreenCaptureDescription,
                ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription
        ) const;

        MCNAPI ~TextObject();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CurrentLineCallback = ::std::function<bool(::std::string const&, ::std::string&, float, uint&)> const;

    using StringCache = ::std::map<
        ::std::tuple<::std::string, ::mce::Color, float, float, bool, bool>,
        ::std::vector<::std::shared_ptr<::Font::TextObject>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 512, ::mce::Color[32]>                            mColors;
    ::ll::TypedStorage<4, 4, float>                                         mScalarOverride;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::tuple<int, int, float>>> mScaleOverrideCharacter;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>       mTextureGroup;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::std::tuple<::std::string, ::mce::Color, float, float, bool, bool>,
            ::std::vector<::std::shared_ptr<::Font::TextObject>>>>
                                                  mStringCache;
    ::ll::TypedStorage<4, 4, int>                 mObfuscatedIndex;
    ::ll::TypedStorage<4, 4, float>               mObfuscatedTextTime;
    ::ll::TypedStorage<4, 8, ::Vec2>              mCaretRenderPosition;
    ::ll::TypedStorage<4, 8, ::Vec2>              mCaretRenderSize;
    ::ll::TypedStorage<1, 1, bool>                mAlwaysUnicode;
    ::ll::TypedStorage<1, 1, bool>                mAutoResetFormat;
    ::ll::TypedStorage<1, 1, bool>                mUseCache;
    ::ll::TypedStorage<4, 16, ::mce::Color>       mCurrentColor;
    ::ll::TypedStorage<4, 4, int>                 mFontTexture;
    ::ll::TypedStorage<4, 16, ::mce::Color>       mCaretColor;
    ::ll::TypedStorage<1, 1, bool>                mItalic;
    ::ll::TypedStorage<1, 1, bool>                mBold;
    ::ll::TypedStorage<1, 1, bool>                mStrikethrough;
    ::ll::TypedStorage<1, 1, bool>                mUnderlined;
    ::ll::TypedStorage<1, 1, bool>                mObfuscated;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mFontMat;
    // NOLINTEND

public:
    // prevent constructor by default
    Font();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Font();

    virtual void switchFontsource(::Core::Path const&, ::Core::Path const&) = 0;

    virtual ::std::pair<::Core::PathBuffer<::std::string> const&, ::Core::PathBuffer<::std::string> const&>
    getFontSources() const = 0;

    virtual void fetchPage(int);

    virtual void drawCached(
        ::ScreenContext&          screenContext,
        ::std::string const&      str,
        float                     x,
        float                     y,
        ::mce::Color const&       color,
        bool                      ignoreColorFormatting,
        bool                      darken,
        bool                      drawColorSymbol,
        ::mce::MaterialPtr const* optionalMat,
        int                       caretPosition,
        bool                      shadow,
        float                     linePadding,
        ::mce::Color const&       resetColorOverride,
        ::mce::Color const&       shaderDarkColor,
        float                     outlineWidth,
        float                     yCaretOffset,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        bool                                                       autoGenNormalsAndTangents
    );

    virtual bool supportsChar(int const&) = 0;

    virtual int getLineLength(::std::string const& str, float fontSize, bool showColorSymbol);

    virtual float getWrapHeight() const = 0;

    virtual float getScaleFactor() const = 0;

    virtual float getScaleFactor(int) const;

    virtual ::Vec2 getTranslationFactor() const;

    virtual bool isScreenPixelAligned() const = 0;

    virtual bool materialCanBeOverridden() const = 0;

    virtual void uploadTextureToGPU() = 0;

    virtual void setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    virtual ::mce::Font::Type getType(int glyphSheet) const;

    virtual ::std::optional<::mce::Font::RenderingParameters> tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    virtual void onAppSuspended();

    virtual void onDeviceLost();

    virtual void reloadFontTextures(::Bedrock::NonOwnerPointer<::ResourceLoadManager> const&, bool);

    virtual bool isReloadingTextures();

    virtual void unloadTextures();

    virtual void onLanguageChanged(::std::string const&);

    virtual float buildChar(::std::vector<::Font::GlyphQuad>&, int, ::mce::Color const&, bool, float, float, bool) = 0;

    virtual ::mce::MaterialPtr const& getMaterial(int, bool) const = 0;

    virtual void loadFontData(bool) = 0;

    virtual int _getReplacementCharacter();

    virtual bool _supportsShadowInSingleDraw() = 0;

    virtual float _getCharWidth(int, bool) = 0;

    virtual void _scanUnicodeCharacterSize(int, int, bool) = 0;

    virtual ::ResourceLocation _getFontSheetLocation(int, bool) const = 0;

    virtual ::std::string _remapString(::std::string const& str) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Font(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI bool _chopString(
        ::std::string&                                                            currentLine,
        ::std::string&                                                            activeFormatting,
        float&                                                                    totalHeight,
        uint&                                                                     remainingLineCount,
        float                                                                     maxWidth,
        bool                                                                      showColorSymbol,
        bool                                                                      centered,
        float                                                                     fontSize,
        ::std::function<bool(::std::string const&, ::std::string&, float, uint&)> currentLineCallback
    );

    MCAPI void _drawTextSegment(
        ::ScreenContext&     screenContext,
        ::std::string const& str,
        float                startX,
        float                startY,
        ::mce::Color const&  color,
        bool                 centered,
        bool                 shadow,
        bool                 showColorSymbol,
        ::mce::MaterialPtr*  optionalMat
    );

    MCAPI int _drawWordWrap(
        ::ScreenContext&     screenContext,
        ::std::string const& str,
        float                x,
        float                y,
        float                w,
        ::mce::Color const&  color,
        uint                 maxLine,
        float                fontSize,
        bool                 shadow,
        bool                 centered,
        bool                 showColorSymbol,
        ::mce::MaterialPtr*  optionalMat
    );

    MCAPI int _getStringChopAmount(::std::string const& currentLine, bool showColorSymbol, float maxWidth);

    MCAPI ::std::shared_ptr<::Font::TextObject> _makeTextObject(
        ::Tessellator&       tessellator,
        ::std::string const& str,
        ::mce::Color const&  ccolor,
        bool                 showColorSymbol,
        bool                 ignoreColorFormatting,
        int                  caretPosition,
        bool                 shadow,
        float                linePadding,
        bool                 isOddGuiScale,
        ::mce::Color const&  resetColorOverride,
        bool                 uiMaterial,
        float                outlineWidth,
        float                yCaretOffset,
        bool                 autoGenNormalsAndTangents
    );

    MCAPI int _processHeightWrap(
        ::std::string const&                                                      str,
        float                                                                     startX,
        float                                                                     startY,
        float                                                                     maxWidth,
        uint                                                                      maxLine,
        bool                                                                      showColorSymbol,
        bool                                                                      centered,
        float                                                                     fontSize,
        ::std::function<bool(::std::string const&, ::std::string&, float, uint&)> currentLineCallback
    );

    MCAPI void calculateTextWidths(::std::string const& text, ::std::vector<int>& widths);

    MCAPI void drawShadow(
        ::ScreenContext&     screenContext,
        ::std::string const& str,
        float                x,
        float                y,
        ::mce::Color const&  color,
        bool                 showColorSymbol,
        ::mce::MaterialPtr*  optionalMat,
        float                linePadding
    );

    MCAPI void drawTransformed(
        ::ScreenContext&     screenContext,
        ::std::string const& str,
        float                x,
        float                y,
        ::mce::Color const&  color,
        float                angle,
        float                s,
        bool                 centered,
        float                maxWidth,
        bool                 shadow
    );

    MCAPI ::std::unordered_set<::ResourceLocation> const& getGlyphLocations() const;

    MCAPI ::std::vector<::ResourceLocation> getReloadFontTextures() const;

    MCAPI bool hasFormattingCodes(::std::string const& str) const;

    MCAPI int processLinesInBox(
        ::std::string const&                                                      str,
        float                                                                     maxWidth,
        uint                                                                      maxLines,
        bool                                                                      showColorSymbol,
        ::std::function<bool(::std::string const&, ::std::string&, float, uint&)> currentLineCallback
    );

    MCAPI void resetFontData(bool uploadTextureImmediately);

    MCAPI bool supportsString(::std::string const& str);

    MCAPI void tickObfuscatedTextIndex(float deltaTime, float obfuscateSwitchTime);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool containsWideChar(::std::string const& str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_FONT_HEIGHT();

    MCAPI static int const& DEFAULT_WRAP_HEIGHT();

    MCAPI static ::Core::PathBuffer<::std::string> const& NOT_FOUND_PAGE();

    MCAPI static int const& NULL_CHAR();

    MCAPI static float const& OBFUSCATED_TIME_SWITCH();

    MCAPI static int const& PRIVATE_USE_AREA_BEGIN();

    MCAPI static int const& PRIVATE_USE_AREA_END();

    MCAPI static int const& UNICODE_REPLACEMENT_CHARACTER_CODE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::mce::TextureGroup> textureGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $fetchPage(int);

    MCAPI void $drawCached(
        ::ScreenContext&          screenContext,
        ::std::string const&      str,
        float                     x,
        float                     y,
        ::mce::Color const&       color,
        bool                      ignoreColorFormatting,
        bool                      darken,
        bool                      drawColorSymbol,
        ::mce::MaterialPtr const* optionalMat,
        int                       caretPosition,
        bool                      shadow,
        float                     linePadding,
        ::mce::Color const&       resetColorOverride,
        ::mce::Color const&       shaderDarkColor,
        float                     outlineWidth,
        float                     yCaretOffset,
        ::std::variant<
            ::std::monostate,
            ::UIActorOffscreenCaptureDescription,
            ::UIThumbnailMeshOffscreenCaptureDescription,
            ::UIMeshOffscreenCaptureDescription,
            ::UIStructureVolumeOffscreenCaptureDescription> const& offscreenCaptureDescription,
        bool                                                       autoGenNormalsAndTangents
    );

    MCAPI int $getLineLength(::std::string const& str, float fontSize, bool showColorSymbol);

    MCAPI float $getScaleFactor(int) const;

    MCFOLD ::Vec2 $getTranslationFactor() const;

    MCFOLD void $setTextConstantsInScreenContext(::ScreenContext&, int, float, ::mce::Color const&, bool) const;

    MCFOLD ::mce::Font::Type $getType(int glyphSheet) const;

    MCAPI ::std::optional<::mce::Font::RenderingParameters> $tryGetRenderingParameters(
        ::ScreenContext const& screenContext,
        int                    glyphSheet,
        float                  guiScale,
        ::mce::Color const&    textColor,
        bool                   hasShadow,
        uint                   textureWidth,
        uint                   textureHeight
    ) const;

    MCFOLD void $onAppSuspended();

    MCFOLD void $onDeviceLost();

    MCAPI void $reloadFontTextures(::Bedrock::NonOwnerPointer<::ResourceLoadManager> const&, bool);

    MCAPI bool $isReloadingTextures();

    MCFOLD void $unloadTextures();

    MCFOLD void $onLanguageChanged(::std::string const&);

    MCAPI int $_getReplacementCharacter();

    MCFOLD ::std::string $_remapString(::std::string const& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
