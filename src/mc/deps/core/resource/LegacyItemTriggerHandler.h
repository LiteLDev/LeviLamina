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
    // vIndex: 0, symbol: __gen_??1LegacyItemTriggerHandler@@UEAA@XZ
    virtual ~LegacyItemTriggerHandler() = default;

    // vIndex: 1, symbol:
    // ?executeTrigger@LegacyItemTriggerHandler@@UEBA_NAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@@std@@@2@@std@@AEAVItemStackBase@@AEBVDefinitionTrigger@@AEAVRenderParams@@@Z
    virtual bool
    executeTrigger(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, class DefinitionTrigger const&, class RenderParams&)
        const;

    // symbol: ??0LegacyItemTriggerHandler@@QEAA@$$QEAULegacyItemTriggerHandlerConfig@@@Z
    MCAPI explicit LegacyItemTriggerHandler(struct LegacyItemTriggerHandlerConfig&&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_executeEvent@LegacyItemTriggerHandler@@AEBAXAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@@std@@@2@@std@@AEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@3@AEAVRenderParams@@@Z
    MCAPI void
    _executeEvent(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, std::string const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // symbol:
    // ?_forceExecuteTrigger@LegacyItemTriggerHandler@@AEBA_NAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDefinitionEvent@@@std@@@2@@std@@AEAVItemStackBase@@AEBVDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@3@AEAVRenderParams@@@Z
    MCAPI bool
    _forceExecuteTrigger(std::unordered_map<std::string, class DefinitionEvent> const&, class ItemStackBase&, class DefinitionTrigger const&, std::vector<std::pair<std::string const, std::string const>>&, class RenderParams&)
        const;

    // NOLINTEND
};
