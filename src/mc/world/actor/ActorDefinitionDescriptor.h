#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDescriptor {

public:
    /**
     * @symbol ??0ActorDefinitionDescriptor\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor const&); // NOLINT
    /**
     * @symbol ??0ActorDefinitionDescriptor\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionDescriptor(); // NOLINT
    /**
     * @symbol ??0ActorDefinitionDescriptor\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ActorDefinitionDescriptor(class ActorDefinitionDescriptor&&); // NOLINT
    /**
     * @symbol ?combine\@ActorDefinitionDescriptor\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor& combine(class ActorDefinitionDescriptor const&); // NOLINT
    /**
     * @symbol ?contains\@ActorDefinitionDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool contains(class ActorDefinitionDescriptor const&) const; // NOLINT
    /**
     * @symbol
     * ?findAttributeByName\@ActorDefinitionDescriptor\@\@QEBA?AV?$optional\@UActorDefinitionAttribute\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI class std::optional<struct ActorDefinitionAttribute> findAttributeByName(std::string const&) const; // NOLINT
    /**
     * @symbol ?hasComponent\@ActorDefinitionDescriptor\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool hasComponent(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?hasJumpSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasJumpSubComponent(); // NOLINT
    /**
     * @symbol ?hasMovementSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasMovementSubComponent(); // NOLINT
    /**
     * @symbol ?hasNavigationSubComponent\@ActorDefinitionDescriptor\@\@QEAA_NXZ
     */
    MCAPI bool hasNavigationSubComponent(); // NOLINT
    /**
     * @symbol ??4ActorDefinitionDescriptor\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor const&); // NOLINT
    /**
     * @symbol ??4ActorDefinitionDescriptor\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor&&); // NOLINT
    /**
     * @symbol ?overlaps\@ActorDefinitionDescriptor\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool overlaps(class ActorDefinitionDescriptor const&) const; // NOLINT
    /**
     * @symbol ?subtract\@ActorDefinitionDescriptor\@\@QEAAAEAV1\@AEBV1\@\@Z
     */
    MCAPI class ActorDefinitionDescriptor& subtract(class ActorDefinitionDescriptor const&); // NOLINT
    /**
     * @symbol ??1ActorDefinitionDescriptor\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionDescriptor(); // NOLINT
    /**
     * @symbol
     * ?executeEvent\@ActorDefinitionDescriptor\@\@SA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool executeEvent(class Actor&, std::string const&, class VariantParameterList const&); // NOLINT
    /**
     * @symbol
     * ?executeTrigger\@ActorDefinitionDescriptor\@\@SA_NAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool
    executeTrigger(class Actor&, class ActorDefinitionTrigger const&, class VariantParameterList const&); // NOLINT
    /**
     * @symbol
     * ?forceExecuteTrigger\@ActorDefinitionDescriptor\@\@SAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void
    forceExecuteTrigger(class Actor&, class ActorDefinitionTrigger const&, class VariantParameterList const&); // NOLINT
    /**
     * @symbol
     * ?forceExecuteTriggerChain\@ActorDefinitionDescriptor\@\@SAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void
    forceExecuteTriggerChain(class Actor&, class ActorDefinitionTrigger const&, std::vector<struct std::pair<std::string const, std::string const>>&, class VariantParameterList const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_executeEvent\@ActorDefinitionDescriptor\@\@CA_NAEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@4\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static bool
    _executeEvent(class Actor&, std::string const&, std::vector<struct std::pair<std::string const, std::string const>>&, class VariantParameterList const&); // NOLINT
    /**
     * @symbol
     * ?_forceExecuteTrigger\@ActorDefinitionDescriptor\@\@CAXAEAVActor\@\@AEBVActorDefinitionTrigger\@\@AEAV?$vector\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$CBV12\@\@std\@\@\@2\@\@std\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI static void
    _forceExecuteTrigger(class Actor&, class ActorDefinitionTrigger const&, std::vector<struct std::pair<std::string const, std::string const>>&, class VariantParameterList const&); // NOLINT

private:
};
