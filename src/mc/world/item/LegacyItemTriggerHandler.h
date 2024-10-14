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
    virtual bool executeTrigger(
        std::unordered_map<std::string, class DefinitionEvent> const& eventHandlers,
        class ItemStackBase&                                          item,
        class DefinitionTrigger const&                                trigger,
        class RenderParams&                                           params
    ) const;

    MCAPI explicit LegacyItemTriggerHandler(struct LegacyItemTriggerHandlerConfig&& config);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeEvent(
        std::unordered_map<std::string, class DefinitionEvent> const& eventHandlers,
        class ItemStackBase&                                          item,
        std::string const&                                            name,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    MCAPI bool _forceExecuteTrigger(
        std::unordered_map<std::string, class DefinitionEvent> const& eventHandlers,
        class ItemStackBase&                                          item,
        class DefinitionTrigger const&                                trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class RenderParams&                                           params
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool executeTrigger$(
        std::unordered_map<std::string, class DefinitionEvent> const& eventHandlers,
        class ItemStackBase&                                          item,
        class DefinitionTrigger const&                                trigger,
        class RenderParams&                                           params
    ) const;

    // NOLINTEND
};
