#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionEvent;
class DefinitionTrigger;
class ItemStackBase;
class RenderParams;
// clang-format on

class ILegacyItemTriggerHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILegacyItemTriggerHandler() = default;

    virtual bool executeTrigger(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers,
        ::ItemStackBase&                                              item,
        ::DefinitionTrigger const&                                    trigger,
        ::RenderParams&                                               params
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
