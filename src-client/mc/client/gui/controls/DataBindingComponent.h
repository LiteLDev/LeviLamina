#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenController;
class UIControl;
class UiExpression;
// clang-format on

class DataBindingComponent : public ::UIComponent {
public:
    // DataBindingComponent inner types declare
    // clang-format off
    struct DataBinding;
    // clang-format on

    // DataBindingComponent inner types define
    struct DataBinding {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataBindingComponent::DataBinding>> mBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataBindingComponent::DataBinding>> mPriorityBindings;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataBindingComponent::DataBinding>> mAlwaysBindings;
    ::ll::TypedStorage<1, 1, bool>                                                mDirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;

    virtual ~DataBindingComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addBindings(
        ::BindingType        bindingType,
        ::std::string const& collectionName,
        ::UiExpression&      bindingExpression,
        ::std::string const& bindingNameOverride,
        ::BindingCondition   bindingCondition
    );

    MCAPI void
    _bind(::ScreenController& controller, bool visible, ::std::vector<::DataBindingComponent::DataBinding>& bindings);

    MCAPI void
    _updateCustomComponentsPostBinding(::std::string_view propertyName, ::UIControl& owner, ::UiExpression expression);

    MCAPI void addCollectionDetailsBinding(
        ::std::string const& collectionName,
        ::std::string const& collectionPrefix,
        ::BindingCondition   bindingCondition
    );

    MCAPI void addViewBinding(
        ::std::shared_ptr<::UIControl>& sourceControl,
        ::UiExpression                  sourcePropertyName,
        ::std::string const&            targetPropertyName
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

    MCAPI void $reset();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
