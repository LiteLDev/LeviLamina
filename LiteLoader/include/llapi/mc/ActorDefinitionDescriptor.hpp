/**
 * @file  MC/ActorDefinitionDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionDescriptor.
 *
 */
class ActorDefinitionDescriptor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
public:
    /**
     * @hash   616615281
     * @symbol ??0ActorDefinitionDescriptor@@QEAA@AEBV0@@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor const &);
    /**
     * @hash   -1535272409
     * @symbol ??0ActorDefinitionDescriptor@@QEAA@$$QEAV0@@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor &&);
    /**
     * @hash   -265083485
     * @symbol ??0ActorDefinitionDescriptor@@QEAA@XZ
     */
    MCAPI ActorDefinitionDescriptor();
    /**
     * @hash   -1540685039
     * @symbol ?combine@ActorDefinitionDescriptor@@QEAAAEAV1@AEBV1@@Z
     */
    MCAPI class ActorDefinitionDescriptor & combine(class ActorDefinitionDescriptor const &);
    /**
     * @hash   -1606436979
     * @symbol ?contains@ActorDefinitionDescriptor@@QEBA_NAEBV1@@Z
     */
    MCAPI bool contains(class ActorDefinitionDescriptor const &) const;
    /**
     * @hash   2114033007
     * @symbol ?hasComponent@ActorDefinitionDescriptor@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool hasComponent(class HashedString const &) const;
    /**
     * @hash   1833550112
     * @symbol ?hasJumpSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
     */
    MCAPI bool hasJumpSubComponent();
    /**
     * @hash   1341388256
     * @symbol ?hasMovementSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
     */
    MCAPI bool hasMovementSubComponent();
    /**
     * @hash   -1224075472
     * @symbol ?hasNavigationSubComponent@ActorDefinitionDescriptor@@QEAA_NXZ
     */
    MCAPI bool hasNavigationSubComponent();
    /**
     * @hash   2141825266
     * @symbol ??4ActorDefinitionDescriptor@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor &&);
    /**
     * @hash   -646030084
     * @symbol ??4ActorDefinitionDescriptor@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor const &);
    /**
     * @hash   905990755
     * @symbol ?overlaps@ActorDefinitionDescriptor@@QEBA_NAEBV1@@Z
     */
    MCAPI bool overlaps(class ActorDefinitionDescriptor const &) const;
    /**
     * @hash   -72360711
     * @symbol ?subtract@ActorDefinitionDescriptor@@QEAAAEAV1@AEBV1@@Z
     */
    MCAPI class ActorDefinitionDescriptor & subtract(class ActorDefinitionDescriptor const &);
    /**
     * @hash   -560265725
     * @symbol ??1ActorDefinitionDescriptor@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionDescriptor();
    /**
     * @hash   2060032545
     * @symbol ?executeEvent@ActorDefinitionDescriptor@@SA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI static bool executeEvent(class Actor &, std::string const &, class VariantParameterList const &);
    /**
     * @hash   -1454805581
     * @symbol ?executeTrigger@ActorDefinitionDescriptor@@SA_NAEAVActor@@AEBVActorDefinitionTrigger@@AEBVVariantParameterList@@@Z
     */
    MCAPI static bool executeTrigger(class Actor &, class ActorDefinitionTrigger const &, class VariantParameterList const &);
    /**
     * @hash   684152224
     * @symbol ?forceExecuteTrigger@ActorDefinitionDescriptor@@SAXAEAVActor@@AEBVActorDefinitionTrigger@@AEBVVariantParameterList@@@Z
     */
    MCAPI static void forceExecuteTrigger(class Actor &, class ActorDefinitionTrigger const &, class VariantParameterList const &);
    /**
     * @hash   988007304
     * @symbol ?forceExecuteTriggerChain@ActorDefinitionDescriptor@@SAXAEAVActor@@AEBVActorDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI static void forceExecuteTriggerChain(class Actor &, class ActorDefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);

//private:
    /**
     * @hash   418006201
     * @symbol ?_executeEvent@ActorDefinitionDescriptor@@CA_NAEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@4@AEBVVariantParameterList@@@Z
     */
    MCAPI static bool _executeEvent(class Actor &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);
    /**
     * @hash   1497565015
     * @symbol ?_forceExecuteTrigger@ActorDefinitionDescriptor@@CAXAEAVActor@@AEBVActorDefinitionTrigger@@AEAV?$vector@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$CBV12@@std@@@2@@std@@AEBVVariantParameterList@@@Z
     */
    MCAPI static void _forceExecuteTrigger(class Actor &, class ActorDefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);

private:

};