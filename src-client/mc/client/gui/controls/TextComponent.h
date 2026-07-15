#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/RenderableComponent.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FontRepository;
class UIComponent;
class UIControl;
class UIMeasureStrategy;
class UIRenderContext;
// clang-format on

class TextComponent : public ::RenderableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::FontHandle>                                          mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                          mPrimaryFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                          mBackupFontHandle;
    ::ll::TypedStorage<4, 4, float>                                                  mTextOffset;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                          mColor;
    ::ll::TypedStorage<4, 4, float>                                                  mLockedAlpha;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                          mLockedColor;
    ::ll::TypedStorage<4, 4, ::ui::FontSize>                                         mFontSize;
    ::ll::TypedStorage<4, 4, float>                                                  mFontScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                  mLinePadding;
    ::ll::TypedStorage<4, 4, ::ui::TextAlignment>                                    mAlignment;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLabel;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLabelTTS;
    ::ll::TypedStorage<4, 4, float>                                                  mCurrentTime;
    ::ll::TypedStorage<4, 4, int>                                                    mLastNumChanges;
    ::ll::TypedStorage<8, 8, uint64>                                                 mLastTextHash;
    ::ll::TypedStorage<8, 8, uint64>                                                 mLastFilteredTextHash;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mFilteredText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mMeasuredText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCachedText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLOCCachedText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCachedLangCode;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCachedFontSources;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCachedTextTTS;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                    mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>                                                  mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mLineHeight;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mNotifyControlsOnEllipses;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>> mFontRepository;
    ::ll::TypedStorage<4, 12, ::std::optional<::glm::vec2>>                          mLastClickRelativePosition;
    bool                                                                             mShadow                     : 1;
    bool                                                                             mShouldRenderCaret          : 1;
    bool                                                                             mLocalize                   : 1;
    bool                                                                             mCaretBlinkVisible          : 1;
    bool                                                                             mHideHyphen                 : 1;
    bool                                                                             mEnableProfanityFilter      : 1;
    bool                                                                             mProfanityFilterToggleState : 1;
    bool                                                                             mBackupFontHandleOverridden : 1;
    bool                                                                             mNotifyEllipsesOnSiblings   : 1;
    bool                                                                             mCachedTextDirty            : 1;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextComponent() /*override*/ = default;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl&) const /*override*/;

    virtual void reset() /*override*/;

    virtual void render(::UIRenderContext&);

    virtual void updateUI(::UIMeasureStrategy const& context) /*override*/;

    virtual ::std::string const& getTextToSpeechComponentValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setFontType(::std::string const& fontType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
