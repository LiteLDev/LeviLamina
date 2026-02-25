#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class CollectionItemComponent;
class UIControl;
// clang-format on

class CollectionComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mCurrentLength;
    ::ll::TypedStorage<8, 32, ::std::string>                mCollectionName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mControlBindings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ~CollectionComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CollectionItemComponent const* const _findLastChildColletionItemComponent();

    MCAPI void _reinitializeCollection();

    MCAPI void refreshPanelItems();

    MCAPI void setControlBindings(::std::vector<::std::string> const& controlBindings);
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
