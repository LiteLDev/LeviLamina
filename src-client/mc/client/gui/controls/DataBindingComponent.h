#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/UiExpression.h"
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/UIComponent.h"

// auto generated forward declare list
// clang-format off
class ScreenController;
class UIControl;
// clang-format on

class DataBindingComponent : public ::UIComponent {
public:
    // DataBindingComponent inner types declare
    // clang-format off
    struct DataBinding;
    // clang-format on

    // DataBindingComponent inner types define
    struct DataBinding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::BindingType>                 bindingType;
        ::ll::TypedStorage<4, 4, ::BindingCondition>            bindingCondition;
        ::ll::TypedStorage<8, 32, ::std::string>                bindingName;
        ::ll::TypedStorage<8, 32, ::UiExpression>               bindingExpression;
        ::ll::TypedStorage<8, 32, ::std::string>                bindingNameOverride;
        ::ll::TypedStorage<8, 32, ::std::string>                collectionName;
        ::ll::TypedStorage<8, 32, ::std::string>                collectionPrefix;
        ::ll::TypedStorage<8, 32, ::UiExpression>               viewBindingSourcePropertyName;
        ::ll::TypedStorage<8, 32, ::std::string>                viewBindingTargetPropertyName;
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>> viewBindingSourceControl;
        ::ll::TypedStorage<4, 4, uint>                          collectionNameHash;
        ::ll::TypedStorage<4, 4, uint>                          bindingNameHash;
        ::ll::TypedStorage<4, 4, int>                           collectionIndex;
        ::ll::TypedStorage<1, 1, bool>                          alreadyBoundOnce;
        ::ll::TypedStorage<1, 1, bool>                          visible;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataBinding& operator=(DataBinding const&);
        DataBinding();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DataBinding(::DataBindingComponent::DataBinding const&);

        MCAPI DataBinding(::DataBindingComponent::DataBinding&&);

        MCAPI ~DataBinding();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::DataBindingComponent::DataBinding const&);

        MCAPI void* $ctor(::DataBindingComponent::DataBinding&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

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
