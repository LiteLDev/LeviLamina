#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/CardinalDirection.h"
#include "mc/client/gui/screens/RecentFocusVector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class FocusManagerProxy;
class UIControl;
struct FocusContainerComponent;
struct SweepDescription;
struct SweepResult;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class FocusManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                    mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::UIControl>>> mFocusControls;
    bool                                                                     mFocusActive             : 1;
    bool                                                                     mFocusResetFlag          : 1;
    bool                                                                     mFindClosestControl      : 1;
    bool                                                                     mFocusPositionCaptured   : 1;
    bool                                                                     mNeedsDefaultFocusUpdate : 1;
    bool                                                                     mIncludeMagnetControls   : 1;
    bool                                                                     mRepeatTTS               : 1;
    ::ll::TypedStorage<1, 1, bool>                                           mScrollToFocusedControlIfClipped;
    bool                                                                     mHoverNothing : 1;
    ::ll::TypedStorage<4, 4, int>                                            mFocusedControlIndex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mFocusedControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mPreviousFocusedControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mLostFocusControl;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mCurrentModalRoot;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mCurrentFocusContainer;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                  mRootOfFocusTree;
    ::ll::TypedStorage<8, 32, ::RecentFocusVector>                           mRecentFocusList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FocusManagerProxy>>         mProxy;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPendingFocusControlID;
    ::ll::TypedStorage<4, 4, int>                                            mPendingFocusControlIndex;
    ::ll::TypedStorage<1, 1, bool>                                           mHasPendingFocusControl;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPendingFocusCollectionIndexName;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<
            void(::std::weak_ptr<::UIControl>, ::std::weak_ptr<::UIControl>),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>
        mFocusChangePub;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FocusManager();

    MCAPI ::std::shared_ptr<::UIControl> _findFocusContainerControlFor(::std::shared_ptr<::UIControl> forControl) const;

    MCAPI int _findFocusControlIndex(::UIControl const& startControl) const;

    MCAPI ::SweepResult _getControlAtFocusPoint(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls
    );

    MCAPI ::std::shared_ptr<::UIControl> _getFocusContainterControl();

    MCAPI ::std::shared_ptr<::UIControl> _getLastGoodFocusedControl(::std::shared_ptr<::UIControl> oldFocusedControl);

    MCAPI bool _handleFocusContainerLogic(::ui::CardinalDirection direction, ::std::shared_ptr<::UIControl> toControl);

    MCAPI void _setFocusControlFromIndex(int focusControlIndex, bool overrideLastFocus);

    MCAPI void _setFocusControlFromWeakPtr(::std::weak_ptr<::UIControl> control);

    MCAPI void _setFocusControlInternal(::UIControl const& control, bool allowDefault, bool overrideLastFocus);

    MCAPI void _sweepForClosestControl(::std::shared_ptr<::UIControl> focusedControl);

    MCAPI ::SweepResult _sweepForControl(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls,
        bool                                                 hasWrapped
    );

    MCAPI ::SweepResult _sweepForControlDirectional(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls,
        bool                                                 hasWrapped
    );

    MCAPI ::SweepResult _sweepForControlFocusOverride(
        ::SweepDescription const&                            desc,
        ::std::vector<::std::shared_ptr<::UIControl>> const& controls,
        bool                                                 hasWrapped
    );

    MCAPI void
    _sweepToNextFocusObject(::ui::CardinalDirection direction, bool overrideOrigin, ::glm::vec2 const& overridePos);

    MCAPI void _updateFocusContainer(
        ::std::weak_ptr<::UIControl> oldFocusedControl,
        bool                         updateControlIndex,
        bool                         overrideLastFocus
    );

    MCAPI void _updateFocusControlIndex();

    MCAPI void _updateLostFocusControlList(::std::weak_ptr<::UIControl> control);

    MCAPI void _updateRootOfFocusTree();

    MCAPI bool _useLastFocus(
        ::ui::CardinalDirection    direction,
        ::FocusContainerComponent* toFocusContainerComp,
        ::FocusContainerComponent* fromFocusContainerComp
    ) const;

    MCAPI void addControl(::UIControl& control);

    MCAPI void clearPendingFocusControl();

    MCAPI void defaultFocus();

    MCAPI bool hasFocusedControl();

    MCAPI void removeControl(
        ::UIControl& control,
        ::std::map<::std::vector<::std::shared_ptr<::UIControl>>*, ::std::vector<::std::shared_ptr<::UIControl>>>&
            controlsToRemove
    );

    MCAPI bool setFocusControl(::UIControl const& control, bool allowDefault);

    MCAPI void setFocusedControlToLostFocus();

    MCAPI void setModalRoot(::std::shared_ptr<::UIControl>& control);

    MCAPI void setPendingFocusControl(::std::string const& name, ::std::string const& collectionName, int index);

    MCAPI void updateDefaultFocusIfNeeded();

    MCAPI bool updatePendingFocusControl();

    MCAPI void validateFocusControl();

    MCAPI ~FocusManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
