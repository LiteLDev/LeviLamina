#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"
#include "mc/client/social/ToastMessageType.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class IToastListener;
struct ToastIconData;
// clang-format on

class ToastMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IToastListener*>                   mListener;
    ::ll::TypedStorage<1, 1, bool>                                mIsMergingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                mHasCustomPocketToast;
    ::ll::TypedStorage<1, 1, bool>                                mUseCustomPocketToast;
    ::ll::TypedStorage<1, 1, bool>                                mIsSilent;
    ::ll::TypedStorage<1, 1, bool>                                mIsPersistent;
    ::ll::TypedStorage<4, 4, ::ToastMessageType>                  mType;
    ::ll::TypedStorage<8, 32, ::std::string>                      mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSubtitle;
    ::ll::TypedStorage<8, 32, ::std::string>                      mMessageId;
    ::ll::TypedStorage<8, 16, ::Json::Value>                      mPropertyBag;
    ::ll::TypedStorage<8, 32, ::std::string>                      mLink;
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::ButtonActionType> mButtonActionType;
    ::ll::TypedStorage<1, 1, bool>                                mHasBeenPressed;
    ::ll::TypedStorage<4, 4, float>                               mTransitInTime;
    ::ll::TypedStorage<4, 4, float>                               mTransitOutTime;
    ::ll::TypedStorage<4, 4, float>                               mAdditionalDisplaySeconds;
    ::ll::TypedStorage<4, 4, float>                               mAlpha;
    ::ll::TypedStorage<4, 4, float>                               mBackgroundAlpha;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mStartPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mIdlePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mEndPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mCustomPocketStartPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mCustomPocketIdlePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mCustomPocketEndPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::ToastIconData>>     mIconRenderIds;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>     mVisibleButton;
    ::ll::TypedStorage<8, 32, ::std::string>                      mControlId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mPocketControlId;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ToastMessage(::ToastMessage const&);

    MCNAPI explicit ToastMessage(::std::string const& message);

    MCNAPI ToastMessage(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag,
        float                displaySeconds
    );

    MCNAPI ToastMessage(
        ::ToastMessageType                  type,
        ::std::string const&                title,
        ::std::string const&                subtitle,
        ::std::string const&                messageId,
        bool                                isSilent,
        ::std::string const&                link,
        ::PlayerMessaging::ButtonActionType buttonActionType
    );

    MCNAPI ::ToastMessage& operator=(::ToastMessage const&);

    MCNAPI ~ToastMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ToastMessage const&);

    MCNAPI void* $ctor(::std::string const& message);

    MCNAPI void* $ctor(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag,
        float                displaySeconds
    );

    MCNAPI void* $ctor(
        ::ToastMessageType                  type,
        ::std::string const&                title,
        ::std::string const&                subtitle,
        ::std::string const&                messageId,
        bool                                isSilent,
        ::std::string const&                link,
        ::PlayerMessaging::ButtonActionType buttonActionType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
