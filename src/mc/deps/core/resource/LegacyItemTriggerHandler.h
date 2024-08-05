#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyItemTriggerHandler {
public:
    // prevent constructor by default
    LegacyItemTriggerHandler& operator=(LegacyItemTriggerHandler const&);
    LegacyItemTriggerHandler(LegacyItemTriggerHandler const&);
    LegacyItemTriggerHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyItemTriggerHandler() = default;

    // vIndex: 1
    virtual bool
    executeTrigger(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&)
        const;

    MCAPI explicit LegacyItemTriggerHandler(struct LegacyItemTriggerHandlerConfig&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _executeEvent(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, std::string const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    MCAPI bool
    _forceExecuteTrigger(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, class DefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // NOLINTEND
};
