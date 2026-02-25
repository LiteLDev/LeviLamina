#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactory;
class UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class FactoryComponent : public ::UIComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControlFactory>>                mControlFactory;
    ::ll::TypedStorage<8, 32, ::std::string>                                      mFactoryName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mControlIdToTemplateLookup;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string const, ::Json::Value const>>> mVariables;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UIControl>>                                       mControlTemplate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>>                          mProgeny;
    ::ll::TypedStorage<1, 1, bool>                                                                  mFactoryIsChild;
    ::ll::TypedStorage<4, 4, int>                                                                   mMaxSize;
    ::ll::TypedStorage<4, 4, ::ui::ChildInsertPosition>                                             mInsertPosition;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::UIPropertyBag>> mPropertyBagToPropagateToChildren;
    // NOLINTEND

public:
    // prevent constructor by default
    FactoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ~FactoryComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FactoryComponent(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);

    MCAPI void _prepareControlForDestruction(::std::shared_ptr<::UIControl> control);

    MCAPI void _trim();

    MCAPI ::std::weak_ptr<::UIControl> create(::UIPropertyBag const& properties, bool ensureCreation);

    MCAPI void destroy(::std::string const& name);

    MCAPI void destroyAll();

    MCAPI void destroyAllStartingAtIndex(uint index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);
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
