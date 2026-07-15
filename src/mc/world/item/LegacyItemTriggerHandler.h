#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ILegacyItemTriggerHandler.h"
#include "mc/world/item/LegacyItemTriggerHandlerConfig.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
// clang-format on

class LegacyItemTriggerHandler : public ::ILegacyItemTriggerHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::LegacyItemTriggerHandlerConfig> mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
