#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class FontHandle;
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIResolvedDef;
class UIScene;
struct ScreenEvent;
namespace Json { class Value; }
// clang-format on

class CreditsRenderer : public ::MinecraftUICustomRenderer {
public:
    // CreditsRenderer inner types declare
    // clang-format off
    struct CreditsContent;
    // clang-format on

    // CreditsRenderer inner types define
    struct CreditsContent {
    public:
        // CreditsContent inner types define
        enum class Type : int {
            Text  = 0,
            Image = 1,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CreditsRenderer::CreditsContent::Type> mType;
        ::ll::TypedStorage<4, 4, int>                                     mHeight;
        ::ll::TypedStorage<4, 4, int>                                     mPaddingAfter;
        ::ll::TypedStorage<8, 32, ::std::string>                          mText;
        ::ll::TypedStorage<1, 1, bool>                                    mCentered;
        ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                      mTexturePtr;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreditsContent();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI CreditsContent(::std::string const& text, int height, bool centered, int paddingAfter);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string const& text, int height, bool centered, int paddingAfter);
        // NOLINTEND
    };

    using clock_type = ::std::chrono::steady_clock;

    using duration_sec = ::std::chrono::duration<float, ::std::ratio<1, 1>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mInitialized;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                       mOwnerSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::CreditsRenderer::CreditsContent>> mContent;
    ::ll::TypedStorage<4, 4, uint>                                              mIndex;
    ::ll::TypedStorage<4, 4, float>                                             mCurrentOffset;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mPlayerName;
    ::ll::TypedStorage<4, 4, float>                                             mScrollSpeed;
    ::ll::TypedStorage<1, 1, bool>                                              mFinished;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScreenEvent>>                     mScreenEvents;
    ::ll::TypedStorage<4, 4, uint>                                              mCreditsEndEventId;
    ::ll::TypedStorage<8, 8, double>                                            mTimeNowSeconds;
    ::ll::TypedStorage<8, 8, double>                                            mTimeLastSeconds;
    ::ll::TypedStorage<8, 8, double>                                            mDeltaTimeSeconds;
    // NOLINTEND

public:
    // prevent constructor by default
    CreditsRenderer& operator=(CreditsRenderer const&);
    CreditsRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreditsRenderer() /*override*/;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int) /*override*/;

    virtual void
    collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CreditsRenderer(::CreditsRenderer const&);

    MCAPI explicit CreditsRenderer(::UIResolvedDef const& def);

    MCAPI void _addDisciplineTitleContent(
        ::std::string const&                               sectionTitle,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void _addGroupTitleContent(
        ::std::string const&                               groupTitle,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void _addNameContent(
        ::std::string const&                               name,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void _addSectionTitleContent(
        ::std::string const&                               sectionTitle,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void _loadImageFile(::IClientInstance& client, ::UIControl& owner, ::std::string const& filePath);

    MCAPI void _loadJsonFile(::IClientInstance& client, ::UIControl& owner, ::std::string const& filePath);

    MCAPI void _loadTextFile(::IClientInstance& client, ::UIControl& owner, ::std::string const& filePath);

    MCAPI void _parseDiscipline(
        ::Json::Value const&                               rootData,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void
    _parseFiles(::IClientInstance& client, ::UIControl& owner, ::std::vector<::std::string> const& filePaths);

    MCAPI void _parseSection(
        ::Json::Value const&                               rootData,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );

    MCAPI void _parseTitleGroup(
        ::Json::Value const&                               rootData,
        ::Bedrock::NotNullNonOwnerPtr<::FontHandle> const& fontHandle,
        int                                                ownerWidth
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& FILE_PADDING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreditsRenderer const&);

    MCAPI void* $ctor(::UIResolvedDef const& def);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance& client, ::UIControl& owner, int);

    MCAPI void $collectScreenEvents(::std::queue<::ScreenEvent, ::std::deque<::ScreenEvent>>& screenEvents);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
