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
    virtual ~LegacyItemTriggerHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _executeEvent(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const&         eventHandlers,
        ::ItemStackBase&                                                      item,
        ::std::string const&                                                  name,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCNAPI bool _forceExecuteTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const&         eventHandlers,
        ::ItemStackBase&                                                      item,
        ::DefinitionTrigger const&                                            trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $executeTrigger(
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
