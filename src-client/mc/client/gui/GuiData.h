#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/CoordinateCaptureType.h"
#include "mc/client/game/IConfigListener.h"
#include "mc/client/gui/ScreenSizeData.h"
#include "mc/client/gui/TitleMessage.h"
#include "mc/client/gui/screens/MenuPointer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/util/HudVisibility.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/player/PlayerInventorySlotData.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ItemStackBase;
class TextObjectRoot;
class Vec2;
struct Config;
struct ContentLogMessage;
struct DevConsoleLogger;
struct GuiMessage;
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
        ::ll::UntypedStorage<4, 4>  mUnkdb5650;
        ::ll::UntypedStorage<8, 32> mUnk67df5b;
        ::ll::UntypedStorage<8, 32> mUnkecb5f8;
        ::ll::UntypedStorage<8, 40> mUnk481001;
        ::ll::UntypedStorage<8, 32> mUnk3cc08d;
        ::ll::UntypedStorage<4, 4>  mUnk7ff951;
        ::ll::UntypedStorage<1, 1>  mUnk5da9d1;
        ::ll::UntypedStorage<1, 1>  mUnk143f9d;
        ::ll::UntypedStorage<8, 32> mUnk4554ac;
        ::ll::UntypedStorage<8, 32> mUnk165a23;
        ::ll::UntypedStorage<1, 1>  mUnkad93cd;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageConfig& operator=(MessageConfig const&);
        MessageConfig();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MessageConfig(::GuiData::MessageConfig const&);

        MCNAPI ~MessageConfig();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::GuiData::MessageConfig const&);
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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mDevConsoleMessages;
    ::ll::TypedStorage<4, 4, int>                                                     mMaxDevConsoleMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::ContentLogMessage>>                     mContentLogMessages;
    ::ll::TypedStorage<8, 8, uint64>                                                  mContentLogErrorCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mPerfTurtleMessages;
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
    ::ll::TypedStorage<8, 528, ::mce::Mesh>                                           mRcFeedbackOuter;
    ::ll::TypedStorage<8, 528, ::mce::Mesh>                                           mRcFeedbackInner;
    ::ll::TypedStorage<8, 528, ::mce::Mesh>                                           mVignette;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                     mInvFillMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                     mCursorMat;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DevConsoleLogger>>      mDevConsoleLogger;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastTickTime;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::GuiMessage>>> mDelayedMessages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mQueuedDevConsoleMessages;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                            mQueuedDevMessagesMutex;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseEditorGuiScale;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                        mHUDHotbarRectangle;
    ::ll::TypedStorage<1, 1, ::CoordinateCaptureType>                                 mCoordinateCaptureType;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnGuiScaleUpdatedPublisher;
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

    virtual ~GuiData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GuiData(::IClientInstance& client);

    MCAPI void _addMessage(::GuiMessage message, ::ProfanityFilterContext profanityFilterContext);

    MCAPI void _addMessage(::GuiData::MessageConfig messageConfig, ::ProfanityFilterContext profanityFilterContext);

    MCAPI void _setSubtitleInternal(::std::string const& subtitle, ::std::optional<::std::string> filteredSubtitle);

    MCAPI void _setTitleInternal(::std::string const& title, ::std::optional<::std::string> filteredTitle);

    MCAPI void _tickDelayedMessages();

    MCAPI void _tickItemDrop();

    MCAPI void addContentLogMessage(::ContentLogMessage const& message);

    MCAPI int calculateMaxGuiScaleIndex(::Vec2 const& screenSize) const;

    MCAPI void clearPlayerMessages();

    MCAPI void clearSessionState();

    MCAPI void displayAnnouncementMessage(
        ::std::string const&                  author,
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  xuid,
        ::std::string const&                  platformId
    );

    MCAPI void displayChatMessage(
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

    MCAPI void displayDevConsoleMessage(::std::string const& messages);

    MCAPI void displayLocalizableMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::vector<::std::string> const&   params
    );

    MCAPI void
    displayLocalizedMessage(::std::string const& message, ::std::optional<::std::string> const& filteredMessage);

    MCAPI void displaySystemMessage(
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  ttsMessage,
        ::ProfanityFilterContext              profanityFilterContext
    );

    MCAPI void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    xuid,
        ::std::string const&    platformId
    );

    MCAPI void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI void displayWhisperMessage(
        ::std::string const&                  author,
        ::std::string const&                  message,
        ::std::optional<::std::string> const& filteredMessage,
        ::std::string const&                  xuid,
        ::std::string const&                  platformId
    );

    MCAPI float floorAlignToScreenPixel(float v) const;

    MCAPI void flushQueuedDevConsoleMessages();

    MCAPI float getGuiScale() const;

    MCAPI ::RectangleArea getLayoutCustomizationMainPanelRectangle() const;

    MCAPI ::std::vector<::GuiMessage> getPreexistingMessages();

    MCAPI ::RectangleArea getSafeScreenZoneArea() const;

    MCAPI ::RectangleArea getWYSIWYGBottomHudReservedArea() const;

    MCAPI ::RectangleArea getWYSIWYGSafeScreenZoneArea() const;

    MCAPI ::RectangleArea getWYSIWYGTopReservedArea() const;

    MCAPI bool handleClick();

    MCAPI bool isOddGuiScale() const;

    MCAPI void postError(int errCode);

    MCAPI ::RectangleArea const& recomputeHUDHotbarRectangle(float scale);

    MCAPI void setActionBarMessage(::std::string const& message, ::std::optional<::std::string> const& filteredMessage);

    MCAPI void setScreenSizeData(::ScreenSizeData const& screenSizeData);

    MCAPI void setTextToSpeechEnabled(bool enabled);

    MCAPI ::RectangleArea setTouchToolbarArea(::RectangleArea const& toolbarArea);

    MCAPI void showPopupNotice(::ItemStackBase const& item);

    MCAPI void showPopupNotice(::std::string const& message, ::std::string const& subtitle);

    MCAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getGuiScaleIndexForLargeScreen(::Vec2 const& screenSize);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& BUTTONS_TRANSPARENCY();

    MCAPI static float const& DropTicks();

    MCAPI static ::std::array<float, 8> const& GUI_SCALE_VALUES();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onConfigChanged(::Config const& c);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIConfigListener();

    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
