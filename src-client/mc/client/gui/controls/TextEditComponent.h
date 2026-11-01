#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/controls/ComponentReceiveActionType.h"
#include "mc/client/gui/controls/TextCharEventResult.h"
#include "mc/client/gui/controls/TextType.h"
#include "mc/client/gui/controls/UIComponent.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class ScreenInputContext;
class UIAnimationController;
class UIControl;
class VisualTree;
struct ScreenEvent;
// clang-format on

class TextEditComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                          mMaxLength;
    ::ll::TypedStorage<1, 1, bool>                          mConstrainToRect;
    ::ll::TypedStorage<1, 1, bool>                          mEnabledNewline;
    ::ll::TypedStorage<4, 4, ::TextType>                    mTextType;
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mFontHandle;
    ::ll::TypedStorage<4, 16, ::mce::Color>                 mPlaceHolderHoverColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>                 mPlaceHolderDefaultColor;
    ::ll::TypedStorage<1, 1, bool>                          mHover;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mVirtualKeyboardBufferControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mLabelControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> mPlaceHolderControl;
    ::ll::TypedStorage<8, 32, ::std::string>                mGridCollectionName;
    ::ll::TypedStorage<4, 4, uint>                          mTextEditComponentId;
    ::ll::TypedStorage<1, 1, bool>                          mCanBeDeselected;
    ::ll::TypedStorage<1, 1, bool>                          mSelected;
    ::ll::TypedStorage<1, 1, bool>                          mFocused;
    ::ll::TypedStorage<1, 1, bool>                          mAlwaysListening;
    // NOLINTEND

public:
    // prevent constructor by default
    TextEditComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextEditComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual void onVisibilityChanged(bool visible) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextEditComponent(::UIControl& owner);

    MCNAPI void _hidePlaceHolderControl();

    MCNAPI void _showPlaceHolderControl();

    MCNAPI bool _textFitsInControl(::std::string const& text) const;

    MCNAPI void deselectControl();

    MCNAPI ::RectangleArea getMinTextArea() const;

    MCNAPI ::std::string getText() const;

    MCNAPI ::RectangleArea getTextArea() const;

    MCNAPI void handleFocusSet(bool focused);

    MCNAPI ::TextCharEventResult handleTextCharEvent(::VisualTree& visualTree, ::std::string const& inputUtf8);

    MCNAPI void registerPropertyChangedNotifications();

    MCNAPI void selectControl();

    MCNAPI void setText(::std::string const& text);

    MCNAPI bool trySetText(::std::string text);

    MCNAPI void updateCaretBlink(float dt);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCNAPI void $reload(::UIComponent const& rhs);

    MCNAPI void $reset();

    MCNAPI ::ComponentReceiveActionType $receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    );

    MCNAPI void $onVisibilityChanged(bool visible);

    MCNAPI ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND
};
