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
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextEditComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reload(::UIComponent const& rhs) /*override*/;

    virtual void reset() /*override*/;

    virtual ::ComponentReceiveActionType receive(
        ::VisualTree&            visualTree,
        ::ScreenInputContext&    context,
        ::UIAnimationController& animationController,
        ::ScreenEvent const&     screenEvent
    ) /*override*/;

    virtual void onVisibilityChanged(bool) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _textFitsInControl(::std::string const& text) const;

    MCAPI void deselectControl();

    MCAPI ::RectangleArea getMinTextArea() const;

    MCAPI ::std::string getText() const;

    MCAPI ::RectangleArea getTextArea() const;

    MCAPI void handleFocusSet(bool focused);

    MCAPI ::TextCharEventResult handleTextCharEvent(::VisualTree& visualTree, ::std::string const& inputUtf8);

    MCAPI void registerPropertyChangedNotifications();

    MCAPI void selectControl();

    MCAPI void setText(::std::string const& text);

    MCAPI bool trySetText(::std::string text);

    MCAPI void updateCaretBlink(float dt);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
