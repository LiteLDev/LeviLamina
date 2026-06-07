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
    // NOLINTEND

public:
    // prevent constructor by default
    FactoryComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::UIComponent> clone(::UIControl& cloneOwner) const /*override*/;

    virtual void reset() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FactoryComponent(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);

    MCAPI void _prepareControlForDestruction(::std::shared_ptr<::UIControl> control);

    MCAPI void _trim();

    MCAPI void addControlIdToTemplateName(::std::string const& controlId, ::std::string const& templateName);

    MCAPI void addVariable(::std::string const& varName, ::Json::Value const& var);

    MCAPI ::std::weak_ptr<::UIControl> create(::UIPropertyBag const& properties, bool ensureCreation);

    MCAPI void destroy(::std::string const& name);

    MCAPI void destroyAll();

    MCAPI void destroyAllStartingAtIndex(uint index);

    MCFOLD ::std::shared_ptr<::UIControl> getControlTemplate() const;

    MCFOLD ::std::string const& getFactoryName() const;

    MCAPI void removeExcessControls();

    MCAPI void setControlTemplate(::std::shared_ptr<::UIControl> controlTemplate);

    MCAPI void setFactoryIsChild(bool isChild);

    MCFOLD void setFactoryName(::std::string const& name);

    MCFOLD void setInsertPosition(::ui::ChildInsertPosition insertPosition);

    MCAPI void setMaxSize(int maxSize);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::UIControl& owner, ::std::weak_ptr<::UIControlFactory> factoryPtr);
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
