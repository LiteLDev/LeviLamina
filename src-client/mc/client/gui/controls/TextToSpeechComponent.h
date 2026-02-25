#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class TextToSpeechComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mTTSComponentNamePriority;
    ::ll::TypedStorage<4, 4, int>            mTTSComponentValuePriority;
    ::ll::TypedStorage<4, 4, int>            mTTSIndexValuePriority;
    ::ll::TypedStorage<8, 32, ::std::string> mOverrideComponentValue;
    ::ll::TypedStorage<8, 32, ::std::string> mComponentHeader;
    ::ll::TypedStorage<8, 32, ::std::string> mSectionHeaderOverride;
    ::ll::TypedStorage<8, 32, ::std::string> mTTSControlType;
    ::ll::TypedStorage<1, 1, bool>           mInheritTTSSiblings;
    ::ll::TypedStorage<1, 1, bool>           mMessageInterruptible;
    ::ll::TypedStorage<8, 32, ::std::string> mMessageInterruptibleId;
    ::ll::TypedStorage<4, 4, int>            mTTSIndexOrder;
    ::ll::TypedStorage<1, 1, bool>           mIgnoreSubsections;
    ::ll::TypedStorage<1, 1, bool>           mIgnoreForTTSIndexCount;
    ::ll::TypedStorage<1, 1, bool>           mSkipNarration;
    ::ll::TypedStorage<1, 1, bool>           mSkipChildren;
    ::ll::TypedStorage<1, 1, bool>           mPlayOnUnchangedFocusControl;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextToSpeechComponent() /*override*/;

    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const _convertString(
        ::std::string const& value,
        ::std::function<::std::string(::std::string const&, ::std::optional<::std::vector<::std::string>>)> const&
            localizationCallback
    ) const;

    MCAPI int _getControlIndex(::std::shared_ptr<::UIControl> ancestor);

    MCAPI ::std::pair<int, int> _getControlIndexAndSectionCount(::std::shared_ptr<::UIControl> ancestor);

    MCAPI int getSectionCount();

    MCAPI void populateMessageQueue(
        ::std::multimap<int, ::std::string>& messageQueue,
        bool                                 excludeHeader,
        ::std::string&                       sectionHeader,
        ::std::function<::std::string(::std::string const&, ::std::optional<::std::vector<::std::string>>)> const&
            localizationCallback
    );
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

    MCFOLD void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
