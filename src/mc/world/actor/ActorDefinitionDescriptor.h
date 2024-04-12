#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDescriptor {
public:
    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionDescriptor@@QEAA@XZ
    MCAPI ActorDefinitionDescriptor();

    // symbol: ??0ActorDefinitionDescriptor@@QEAA@$$QEAV0@@Z
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor&&);

    // symbol: ??0ActorDefinitionDescriptor@@QEAA@AEBV0@@Z
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor const&);

    // symbol: ?combine@ActorDefinitionDescriptor@@QEAAAEAV1@AEBV1@@Z
    MCAPI class ActorDefinitionDescriptor& combine(class ActorDefinitionDescriptor const& rhs);

    // symbol: ?contains@ActorDefinitionDescriptor@@QEBA_NAEBV1@@Z
    MCAPI bool contains(class ActorDefinitionDescriptor const& rhs) const;

    // symbol:
    // ?findAttributeByName@ActorDefinitionDescriptor@@QEBA?AV?$optional@UActorDefinitionAttribute@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::optional<struct ActorDefinitionAttribute> findAttributeByName(std::string const& attributeName) const;

    // symbol: ?hasComponent@ActorDefinitionDescriptor@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasComponent(class HashedString const& name) const;

    // symbol: ?hasJumpSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
    MCAPI bool hasJumpSubComponent();

    // symbol: ?hasMovementSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
    MCAPI bool hasMovementSubComponent();

    // symbol: ?hasNavigationSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
    MCAPI bool hasNavigationSubComponent();

    // symbol: ??4ActorDefinitionDescriptor@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor&&);

    // symbol: ??4ActorDefinitionDescriptor@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor const&);

    // symbol: ?overlaps@ActorDefinitionDescriptor@@QEBA_NAEBV1@@Z
    MCAPI bool overlaps(class ActorDefinitionDescriptor const& rhs) const;

    // symbol: ?subtract@ActorDefinitionDescriptor@@QEAAAEAV1@AEBV1@@Z
    MCAPI class ActorDefinitionDescriptor& subtract(class ActorDefinitionDescriptor const& rhs);

    // symbol: ??1ActorDefinitionDescriptor@@QEAA@XZ
    MCAPI ~ActorDefinitionDescriptor();

    // symbol:
    // ?executeEvent@ActorDefinitionDescriptor@@SA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVariantParameterList@@@Z
    MCAPI static bool
    executeEvent(class Actor& entity, std::string const& name, class VariantParameterList const& list);

    // symbol:
    // ?executeTrigger@ActorDefinitionDescriptor@@SA_NAEAVActor@@AEBVActorDefinitionTrigger@@AEBVVariantParameterList@@@Z
    MCAPI static bool executeTrigger(
        class Actor&                        entity,
        class ActorDefinitionTrigger const& trigger,
        class VariantParameterList const&   list
    );

    // symbol:
    // ?forceExecuteTrigger@ActorDefinitionDescriptor@@SAXAEAVActor@@AEBVActorDefinitionTrigger@@AEBVVariantParameterList@@@Z
    MCAPI static void forceExecuteTrigger(
        class Actor&                        entity,
        class ActorDefinitionTrigger const& trigger,
        class VariantParameterList const&   list
    );

    // symbol:
    // ?forceExecuteTriggerChain@ActorDefinitionDescriptor@@SAXAEAVActor@@AEBVActorDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEBVVariantParameterList@@@Z
    MCAPI static void forceExecuteTriggerChain(
        class Actor&                                                  entity,
        class ActorDefinitionTrigger const&                           trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    // symbol:
    // ?hasEvent@ActorDefinitionDescriptor@@SA_NAEBVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static bool hasEvent(class Actor const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_executeEvent@ActorDefinitionDescriptor@@CA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@4@AEBVVariantParameterList@@@Z
    MCAPI static bool _executeEvent(
        class Actor&                                                  entity,
        std::string const&                                            name,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    // symbol:
    // ?_forceExecuteTrigger@ActorDefinitionDescriptor@@CAXAEAVActor@@AEBVActorDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEBVVariantParameterList@@@Z
    MCAPI static void _forceExecuteTrigger(
        class Actor&                                                  entity,
        class ActorDefinitionTrigger const&                           trigger,
        std::vector<std::pair<std::string const, std::string const>>& eventStack,
        class VariantParameterList const&                             list
    );

    // NOLINTEND
};
