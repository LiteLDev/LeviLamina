#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

class VanillaClientInputMappingFactory : public ::ClientInputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                mIsEdu;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IOptionRegistry>> mOptions;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mRegenerateTemplatesDueToScriptKeys;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createInputMappingTemplates(::IOptionRegistry& options) /*override*/;

    virtual void _updateKeyboardAndMouseControls(::IOptionRegistry& options) /*override*/;

    virtual void _updateGameControllerControls() /*override*/;

    virtual void _updateTouchMappingControls() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createInputMappingTemplates(::IOptionRegistry& options);

    MCAPI void $_updateKeyboardAndMouseControls(::IOptionRegistry& options);

    MCAPI void $_updateGameControllerControls();

    MCAPI void $_updateTouchMappingControls();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
