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
    // prevent constructor by default
    ILegacyItemTriggerHandler& operator=(ILegacyItemTriggerHandler const&);
    ILegacyItemTriggerHandler(ILegacyItemTriggerHandler const&);
    ILegacyItemTriggerHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyItemTriggerHandler();

    // vIndex: 1
    virtual bool
    executeTrigger(::std::unordered_map<::std::string, ::DefinitionEvent> const&, ::ItemStackBase&, ::DefinitionTrigger const&, ::RenderParams&)
        const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
