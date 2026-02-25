#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
        enum class Type : int {};
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
    virtual ~CreditsRenderer() /*override*/ = default;

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

    MCAPI static ::std::string_view const& INDENT_TEXT();

    MCAPI static ::std::string_view const& SECTION_BORDER_TEXT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CreditsRenderer const&);

    MCAPI void* $ctor(::UIResolvedDef const& def);
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
