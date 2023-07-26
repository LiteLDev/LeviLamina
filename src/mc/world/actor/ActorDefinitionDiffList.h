#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDiffList {

public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&) = delete;
    ActorDefinitionDiffList(ActorDefinitionDiffList const&)            = delete;
    ActorDefinitionDiffList()                                          = delete;

public:
    /**
     * @symbol
     * ?addDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinition(std::string const&); // NOLINT
    /**
     * @symbol ?addPendingPropertyChange\@ActorDefinitionDiffList\@\@QEAAX_KV?$variant\@HM_N_K\@std\@\@\@Z
     */
    MCAPI void
    addPendingPropertyChange(unsigned __int64, class std::variant<int, float, bool, unsigned __int64>); // NOLINT
    /**
     * @symbol ?buildAdditiveDescriptionFrom\@ActorDefinitionDiffList\@\@QEBA?AVActorDefinitionDescriptor\@\@_K0\@Z
     */
    MCAPI class ActorDefinitionDescriptor
    buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64) const; // NOLINT
    /**
     * @symbol
     * ?definitionListToString\@ActorDefinitionDiffList\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string definitionListToString(std::string const&) const; // NOLINT
    /**
     * @symbol ?getAddedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup& getAddedDefinitionGroupMutable(); // NOLINT
    /**
     * @symbol ?getChangedDescription\@ActorDefinitionDiffList\@\@QEAAAEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor& getChangedDescription(); // NOLINT
    /**
     * @symbol
     * ?getDefinitionStack\@ActorDefinitionDiffList\@\@QEBAAEBV?$vector\@UDiffListPair\@\@V?$allocator\@UDiffListPair\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct DiffListPair> const& getDefinitionStack() const; // NOLINT
    /**
     * @symbol
     * ?getDescription\@ActorDefinitionDiffList\@\@QEAA?AV?$unique_ptr\@VActorDefinitionDescriptor\@\@U?$default_delete\@VActorDefinitionDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool); // NOLINT
    /**
     * @symbol ?getRemovedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup& getRemovedDefinitionGroupMutable(); // NOLINT
    /**
     * @symbol
     * ?removeDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinition(std::string const&); // NOLINT
    /**
     * @symbol ?size\@ActorDefinitionDiffList\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const; // NOLINT

    // private:
    /**
     * @symbol ?_updateStack\@ActorDefinitionDiffList\@\@AEAAXXZ
     */
    MCAPI void _updateStack(); // NOLINT

private:
};
