#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class IClientInstance;
class RectangleArea;
class Vec2;
// clang-format on

class MinecraftKeyboardManager : public ::KeyboardManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mDelayedInputResume;
    bool                                                  mIsKeyboardActive    : 1;
    bool                                                  mIsKeyboardEnabled   : 1;
    bool                                                  mKeyboardClosedEvent : 1;
    ::ll::TypedStorage<4, 4, float>                       mKeyboardForcedHeight;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>    mResumeInputCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>> mDisableInputToOtherClientsCallback;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>          mClientInstance;
    ::ll::TypedStorage<1, 1, bool>                        mWasEnabledWithMultiline;
    ::ll::TypedStorage<1, 1, bool>                        mIsNumbersOnly;
    ::ll::TypedStorage<4, 4, int>                         mMaxLength;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftKeyboardManager& operator=(MinecraftKeyboardManager const&);
    MinecraftKeyboardManager(MinecraftKeyboardManager const&);
    MinecraftKeyboardManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftKeyboardManager() /*override*/;

    virtual bool tryEnableKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        ::Vec2 const&        position,
        float                controlHeight
    ) /*override*/;

    virtual bool isFullScreenKeyboard() const /*override*/;

    virtual void disableKeyboard() /*override*/;

    virtual bool canActivateKeyboard() /*override*/;

    virtual bool isKeyboardEnabled() const /*override*/;

    virtual bool isKeyboardActive() const /*override*/;

    virtual bool wasEnabledWithMultiline() const /*override*/;

    virtual bool isNumbersOnly() const /*override*/;

    virtual int getMaxLength() const /*override*/;

    virtual void setResumeInputCallback(::std::function<void()> callback);

    virtual void setDisableInputToOtherClientsCallback(::std::function<void(int)> callback);

    virtual bool tryClaimKeyboardOwnership() /*override*/;

    virtual void releaseKeyboardOwnership() /*override*/;

    virtual void setForcedHeight(float height) /*override*/;

    virtual float getKeyboardHeight() const /*override*/;

    virtual bool getKeyboardClosedEvent() /*override*/;

    virtual void clearKeyboardClosedEvent() /*override*/;

    virtual void updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::Vec2 const&          caretPosition,
        ::Vec2 const&          caretSize
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::GuiData const> _getGuiData() const;

    MCAPI float _getGuiScale() const;

    MCAPI float _getInvGuiScale() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& mGlobalKeyboardOwnerId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $tryEnableKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        ::Vec2 const&        position,
        float                controlHeight
    );

    MCAPI bool $isFullScreenKeyboard() const;

    MCAPI void $disableKeyboard();

    MCAPI bool $canActivateKeyboard();

    MCFOLD bool $isKeyboardEnabled() const;

    MCFOLD bool $isKeyboardActive() const;

    MCFOLD bool $wasEnabledWithMultiline() const;

    MCAPI bool $isNumbersOnly() const;

    MCFOLD int $getMaxLength() const;

    MCAPI void $setResumeInputCallback(::std::function<void()> callback);

    MCAPI void $setDisableInputToOtherClientsCallback(::std::function<void(int)> callback);

    MCAPI bool $tryClaimKeyboardOwnership();

    MCAPI void $releaseKeyboardOwnership();

    MCAPI void $setForcedHeight(float height);

    MCAPI float $getKeyboardHeight() const;

    MCFOLD bool $getKeyboardClosedEvent();

    MCAPI void $clearKeyboardClosedEvent();

    MCAPI void $updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::Vec2 const&          caretPosition,
        ::Vec2 const&          caretSize
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
