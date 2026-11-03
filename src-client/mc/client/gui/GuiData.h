#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/game/IConfigListener.h"
#include "mc/client/gui/GuiMessage.h"
#include "mc/client/gui/ScreenSizeData.h"
#include "mc/client/gui/SoundDirection.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/screens/MenuPointer.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/util/HudVisibility.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/PlayerInventorySlotData.h"

// auto generated forward declare list
// clang-format off
class Config;
class DevConsoleLogger;
class GuiMessage;
class IClientInstance;
class TextObjectRoot;
class Vec2;
struct ContentLogMessage;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class GuiData : public ::IConfigListener, public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // GuiData inner types declare
    // clang-format off
    struct MessageConfig;
    // clang-format on

    // GuiData inner types define
    struct MessageConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::GuiMessage::MessageType>       messageType;
        ::ll::TypedStorage<8, 32, ::std::string>                  username;
        ::ll::TypedStorage<8, 32, ::std::string>                  message;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> filteredMessage;
        ::ll::TypedStorage<8, 32, ::std::string>                  ttsMessage;
        ::ll::TypedStorage<4, 4, float>                           lifeTime;
        ::ll::TypedStorage<1, 1, bool>                            forceVisible;
        ::ll::TypedStorage<1, 1, bool>                            ttsRequired;
        ::ll::TypedStorage<8, 32, ::std::string>                  xuid;
        ::ll::TypedStorage<8, 32, ::std::string const>            platformId;
        ::ll::TypedStorage<1, 1, bool>                            enableEmoticonify;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageConfig& operator=(MessageConfig const&);
        MessageConfig();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MessageConfig(::GuiData::MessageConfig const&);

        MCNAPI MessageConfig(
            ::GuiMessage::MessageType             _messageType,
            ::std::string const&                  _username,
            ::std::string const&                  _message,
            ::std::optional<::std::string> const& _filteredMessage,
            ::std::string const&                  _ttsMessage,
            float                                 _lifeTime,
            bool                                  _forceVisible,
            bool                                  _ttsRequired,
            ::std::string const&                  _xuid,
            ::std::string const&                  _platformId
        );

        MCNAPI ~MessageConfig();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::GuiData::MessageConfig const&);

        MCNAPI void* $ctor(
            ::GuiMessage::MessageType             _messageType,
            ::std::string const&                  _username,
            ::std::string const&                  _message,
            ::std::optional<::std::string> const& _filteredMessage,
            ::std::string const&                  _ttsMessage,
            float                                 _lifeTime,
            bool                                  _forceVisible,
            bool                                  _ttsRequired,
            ::std::string const&                  _xuid,
            ::std::string const&                  _platformId
        );
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
    ::ll::TypedStorage<4, 24, ::ScreenSizeData>                                       mScreenSizeData;
    ::ll::TypedStorage<1, 1, bool>                                                    mScreenSizeDataValid;
    ::ll::TypedStorage<4, 4, float>                                                   mGuiScale;
    ::ll::TypedStorage<4, 4, float>                                                   mInvGuiScale;
    ::ll::TypedStorage<1, 1, bool>                                                    mOverlappingControlsExist;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsCurrentlyActive;
    ::ll::TypedStorage<8, 16, ::std::set<int>>                                        mPostedErrors;
    ::ll::TypedStorage<1, 1, ::MenuPointer>                                           mMenuPointer;
    ::ll::TypedStorage<2, 2, short>                                                   mPointerX;
    ::ll::TypedStorage<2, 2, short>                                                   mPointerY;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasShowPreexistingMessages;
    ::ll::TypedStorage<1, 1, bool>                                                    mToolbarWasRendered;
    ::ll::TypedStorage<4, 4, int>                                                     mPrevSelectedSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                           mPrevSelectedInventoryContainer;
    ::ll::TypedStorage<4, 4, int>                                                     mFlashSlotId;
    ::ll::TypedStorage<8, 8, double>                                                  mFlashSlotStartTime;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                      mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                        mToolbarArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                        mToolbarAreaContainer;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLastPopupText;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLastPopupSubtitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLastJukeboxPopupText;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLastJukeboxPopupSubtitleText;
    ::ll::TypedStorage<4, 4, int>                                                     mTickCount;
    ::ll::TypedStorage<4, 4, float>                                                   mItemNameOverlayTime;
    ::ll::TypedStorage<4, 4, float>                                                   mJukeboxNameOverlayTime;
    ::ll::TypedStorage<1, 1, bool>                                                    mPopupNoticeDirty;
    ::ll::TypedStorage<1, 1, bool>                                                    mJukeboxPopupNoticeDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::GuiMessage>>                            mGuiMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::GuiMessage>>                            mSubtitleMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mDevConsoleMessages;
    ::ll::TypedStorage<4, 4, int>                                                     mMaxDevConsoleMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentLogMessage>>                     mContentLogMessages;
    ::ll::TypedStorage<8, 8, uint64>                                                  mContentLogErrorCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mPerfTurtleMessages;
    ::ll::TypedStorage<8, 376, ::std::optional<::ModalScreenData>>                    mModalScreenData;
    ::ll::TypedStorage<8, 232, ::TitleMessage>                                        mTitleMessage;
    ::ll::TypedStorage<4, 52, ::std::array<::HudVisibility, 13>>                      mHudVisibilityState;
    ::ll::TypedStorage<4, 4, uint>                                                    mServerSettingsId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mServerSettings;
    ::ll::TypedStorage<1, 1, bool>                                                    mMuteChat;
    ::ll::TypedStorage<4, 4, float>                                                   mCurrentDropTicks;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData>                               mCurrentDropSlot;
    ::ll::TypedStorage<4, 8, ::PlayerInventorySlotData>                               mLastSelectedSlot;
    ::ll::TypedStorage<1, 1, bool>                                                    mShowProgress;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mTipMessage;
    ::ll::TypedStorage<4, 4, float>                                                   mTipMessageLength;
    ::ll::TypedStorage<8, 608, ::mce::Mesh>                                           mRcFeedbackOuter;
    ::ll::TypedStorage<8, 608, ::mce::Mesh>                                           mRcFeedbackInner;
    ::ll::TypedStorage<8, 608, ::mce::Mesh>                                           mVignette;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                     mInvFillMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                     mCursorMat;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger>>      mDevConsoleLogger;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastTickTime;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::GuiMessage>>> mDelayedMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mQueuedDevConsoleMessages;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                           mQueuedDevMessagesMutex;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseEditorGuiScale;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                        mHUDHotbarRectangle;
    ::ll::TypedStorage<1, 1, ::CoordinateCaptureType>                                 mCoordinateCaptureType;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGuiScaleUpdatedPublisher;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mServerFormDataAvailable;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiData& operator=(GuiData const&);
    GuiData(GuiData const&);
    GuiData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onConfigChanged(::Config const& c) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GuiData(::IClientInstance& client);

    MCNAPI void _addMessage(::GuiMessage message, ::ProfanityFilterContext profanityFilterContext);

    MCNAPI void _addMessage(::GuiData::MessageConfig messageConfig, ::ProfanityFilterContext profanityFilterContext);

    MCNAPI void _setSubtitleInternal(::std::string const& subtitle, ::std::optional<::std::string> filteredSubtitle);

    MCNAPI void _setTitleInternal(::std::string const& title, ::std::optional<::std::string> filteredTitle);

    MCNAPI void addSubtitle(::std::string const& message, ::SoundDirection direction, bool isLocalPlayer);

    MCAPI float calculateGuiScale(
        ::Vec2 const&                  totalScreenSize,
        ::Vec2 const&                  safeZone,
        ::cg::math::Rect<float> const& clientViewportModifiers
    );

    MCNAPI int calculateMaxGuiScaleIndex(::Vec2 const& screenSize) const;

    MCNAPI int calculateOptimalGuiScaleIndex(::Vec2 const& safezoneClientScreenSize) const;

    MCNAPI void clearPlayerMessages();

    MCNAPI void clearSessionState();

    MCNAPI void displayAnnouncementMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  xuid,
        ::std::string const&                  platformId
    );

    MCNAPI void displayChatMessage(
        ::std::string const&                  author,
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  xuid,
        ::std::string const&                  platformId
    );

    MCAPI void displayClientMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        bool                                  ttsRequired
    );

    MCNAPI void displayDevConsoleMessage(::std::string const& messages);

    MCNAPI void displayLocalizableMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::vector<::std::string> const&   params
    );

    MCNAPI void
    displayLocalizedMessage(::std::string const& message, ::std::optional<::std::string> const& filteredMessage);

    MCNAPI void displaySystemMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  ttsMessage,
        ::ProfanityFilterContext              profanityFilterContext
    );

    MCNAPI void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    xuid,
        ::std::string const&    platformId
    );

    MCNAPI void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCNAPI void displayTextObjectWhisperMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    xuid,
        ::std::string const&    platformId
    );

    MCNAPI void displayWhisperMessage(
        ::std::string const&                  author,
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  xuid,
        ::std::string const&                  platformId
    );

    MCNAPI void flushQueuedDevConsoleMessages();

    MCNAPI int getClampedGuiScaleOffset() const;

    MCAPI float getGuiScale() const;

    MCNAPI ::std::string const getLastFilteredChatMessage();

    MCNAPI ::RectangleArea getLayoutCustomizationMainPanelRectangle() const;

    MCNAPI bool getNewJukeboxPopupNotice(::std::string& message, ::std::string& subtitle);

    MCNAPI bool getNewPopupNotice(::std::string& message, ::std::string& subtitle);

    MCAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCNAPI ::RectangleArea getWYSIWYGBottomHudReservedArea() const;

    MCNAPI ::RectangleArea getWYSIWYGTopReservedArea() const;

    MCNAPI bool handleClick();

    MCNAPI void postError(int errCode);

    MCNAPI ::RectangleArea const& recomputeHUDHotbarRectangle(float scale);

    MCAPI void setActionBarMessage(::std::string const& message, ::std::optional<::std::string> const& filteredMessage);

    MCNAPI void setScreenSizeData(::ScreenSizeData const& screenSizeData);

    MCNAPI void setSubtitle(::std::string const& subtitle, ::std::optional<::std::string> filteredSubtitle);

    MCNAPI void setTextToSpeechEnabled(bool enabled);

    MCNAPI void setTitle(::std::string const& title, ::std::optional<::std::string> filteredTitle);

    MCNAPI ::RectangleArea setTouchToolbarArea(::RectangleArea const& toolbarArea);

    MCNAPI void showJukeboxPopupNotice(::std::string const& message, ::std::string const& subtitle);

    MCNAPI void showPopupNotice(::std::string const& message, ::std::string const& subtitle);

    MCNAPI void showTipMessage(::std::string const& message);

    MCNAPI void tick();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<float, 8> const& GUI_SCALE_VALUES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onConfigChanged(::Config const& c);
    // NOLINTEND
};
