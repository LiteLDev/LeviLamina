#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ILegacyItemTriggerHandler.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
struct LegacyItemTriggerHandlerConfig;
// clang-format on

class LegacyItemTriggerHandler : public ::ILegacyItemTriggerHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnkca5d44;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandler& operator=(LegacyItemTriggerHandler const&);
    LegacyItemTriggerHandler(LegacyItemTriggerHandler const&);
    LegacyItemTriggerHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const /*override*/;

    // vIndex: 0
    virtual ~LegacyItemTriggerHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyItemTriggerHandler(::LegacyItemTriggerHandlerConfig&& config);

    MCAPI void _executeEvent(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const&         eventHandlers,
        ::ItemStackBase&                                                      item,
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCAPI bool _forceExecuteTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const&         eventHandlers,
        ::ItemStackBase&                                                      item,
        ::DefinitionTrigger const&                                            trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyItemTriggerHandlerConfig&& config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
