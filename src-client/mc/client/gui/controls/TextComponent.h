#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class UIComponent;
class UIControl;
class UIMeasureStrategy;
class UIRenderContext;
// clang-format on

class TextComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mPrimaryFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mBackupFontHandle;
    ::ll::TypedStorage<4, 4, float>                         mTextOffset;
    ::ll::TypedStorage<4, 16, ::mce::Color>                 mColor;
    ::ll::TypedStorage<4, 4, float>                         mLockedAlpha;
    ::ll::TypedStorage<4, 16, ::mce::Color>                 mLockedColor;
    ::ll::TypedStorage<4, 4, ::ui::FontSize>                mFontSize;
    ::ll::TypedStorage<4, 4, float>                         mFontScaleFactor;
    ::ll::TypedStorage<4, 4, float>                         mLinePadding;
    ::ll::TypedStorage<4, 4, ::ui::TextAlignment>           mAlignment;
    ::ll::TypedStorage<8, 32, ::std::string>                mLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                mLabelTTS;
    ::ll::TypedStorage<4, 4, float>                         mCurrentTime;
    ::ll::TypedStorage<4, 4, int>                           mLastNumChanges;
    ::ll::TypedStorage<8, 8, uint64>                        mLastTextHash;
    ::ll::TypedStorage<8, 8, uint64>                        mLastFilteredTextHash;
    ::ll::TypedStorage<8, 32, ::std::string>                mFilteredText;
    ::ll::TypedStorage<8, 32, ::std::string>                mMeasuredText;
    ::ll::TypedStorage<8, 32, ::std::string>                mCachedText;
    ::ll::TypedStorage<8, 32, ::std::string>                mLOCCachedText;
    ::ll::TypedStorage<8, 32, ::std::string>                mCachedLangCode;
    ::ll::TypedStorage<8, 32, ::std::string>                mCachedFontSources;
    ::ll::TypedStorage<8, 32, ::std::string>                mCachedTextTTS;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>           mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>                         mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>                         mLineHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mNotifyControlsOnEllipses;
    ::ll::TypedStorage<8, 64, ::std::function<::std::pair<::FontHandle, ::FontHandle>(::std::string const&)>>
                                                            mGetFontsFromFontTypeCallback;
    ::ll::TypedStorage<4, 12, ::std::optional<::glm::vec2>> mLastClickRelativePosition;
    bool                                                    mShadow                     : 1;
    bool                                                    mShouldRenderCaret          : 1;
    bool                                                    mLocalize                   : 1;
    bool                                                    mCaretBlinkVisible          : 1;
    bool                                                    mHideHyphen                 : 1;
    bool                                                    mEnableProfanityFilter      : 1;
    bool                                                    mProfanityFilterToggleState : 1;
    bool                                                    mBackupFontHandleOverridden : 1;
    bool                                                    mNotifyEllipsesOnSiblings   : 1;
    bool                                                    mCachedTextDirty            : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    TextComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual void render(::UIRenderContext& context);

    virtual void updateUI(::UIMeasureStrategy const& context) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TextComponent(::UIControl& owner);

    MCAPI bool _fontSourcesChanged();

    MCAPI ::std::string _getMeasuredText(::UIRenderContext& context);

    MCAPI ::RectangleArea _getParentArea(::UIRenderContext& context);

    MCAPI void _notifyOnEllipses(bool usingEllipses);

    MCAPI bool _updateCachedText();

    MCAPI ::std::string calculateUpdatedText();

    MCAPI void setFontType(::std::string const& fontType);

    MCAPI void setText(::std::string const& label);

    MCAPI void setTextTTS(::std::string const& label);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::UIComponent> $clone(::UIControl& cloneOwner) const;

    MCAPI void $reset();

    MCAPI void $render(::UIRenderContext& context);

    MCAPI void $updateUI(::UIMeasureStrategy const& context);

    MCFOLD ::std::string const& $getTextToSpeechComponentValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
