/**
 * @file  ActorDefinitionDescriptor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ActorDefinitionDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor const &);
    /**
     * @symbol  ??0ActorDefinitionDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor &&);
    /**
     * @symbol  ??0ActorDefinitionDescriptor\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionDescriptor();
    /**
     * @symbol  ?combine\@ActorDefinitionDescriptor\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor & combine(class ActorDefinitionDescriptor const &);
    /**
     * @symbol  ?contains\@ActorDefinitionDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool contains(class ActorDefinitionDescriptor const &) const;
    /**
     * @symbol  ?hasComponent\@ActorDefinitionDescriptor\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasComponent(class HashedString const &) const;
    /**
     * @symbol  ?hasJumpSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasJumpSubComponent();
    /**
     * @symbol  ?hasMovementSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasMovementSubComponent();
    /**
     * @symbol  ?hasNavigationSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasNavigationSubComponent();
    /**
     * @symbol  ??4ActorDefinitionDescriptor\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor &&);
    /**
     * @symbol  ??4ActorDefinitionDescriptor\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor & operator=(class ActorDefinitionDescriptor const &);
    /**
     * @symbol  ?overlaps\@ActorDefinitionDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool overlaps(class ActorDefinitionDescriptor const &) const;
    /**
     * @symbol  ?subtract\@ActorDefinitionDescriptor\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor & subtract(class ActorDefinitionDescriptor const &);
    /**
     * @symbol  ??1ActorDefinitionDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionDescriptor();
    /**
     * @symbol  ?executeEvent\@ActorDefinitionDescriptor\@\@SA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool executeEvent(class Actor &, std::string const &, class VariantParameterList const &);
    /**
     * @symbol  ?executeTrigger\@ActorDefinitionDescriptor\@\@SA_NAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool executeTrigger(class Actor &, class ActorDefinitionTrigger const &, class VariantParameterList const &);
    /**
     * @symbol  ?forceExecuteTrigger\@ActorDefinitionDescriptor\@\@SAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void forceExecuteTrigger(class Actor &, class ActorDefinitionTrigger const &, class VariantParameterList const &);
    /**
     * @symbol  ?forceExecuteTriggerChain\@ActorDefinitionDescriptor\@\@SAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void forceExecuteTriggerChain(class Actor &, class ActorDefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);

//private:
    /**
     * @symbol  ?_executeEvent\@ActorDefinitionDescriptor\@\@CA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@4\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool _executeEvent(class Actor &, std::string const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);
    /**
     * @symbol  ?_forceExecuteTrigger\@ActorDefinitionDescriptor\@\@CAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void _forceExecuteTrigger(class Actor &, class ActorDefinitionTrigger const &, std::vector<struct std::pair<std::string const, std::string const>> &, class VariantParameterList const &);

private:

};