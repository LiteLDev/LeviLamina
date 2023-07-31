#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDiffList {

public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&) = delete;
    ActorDefinitionDiffList(ActorDefinitionDiffList const&)            = delete;
    ActorDefinitionDiffList()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?addDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinition(std::string const&);
    /**
     * @symbol ?addPendingPropertyChange\@ActorDefinitionDiffList\@\@QEAAX_KV?$variant\@HM_N_K\@std\@\@\@Z
     */
    MCAPI void addPendingPropertyChange(uint64_t, std::variant<int, float, bool, uint64_t>);
    /**
     * @symbol ?buildAdditiveDescriptionFrom\@ActorDefinitionDiffList\@\@QEBA?AVActorDefinitionDescriptor\@\@_K0\@Z
     */
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(uint64_t, uint64_t) const;
    /**
     * @symbol
     * ?definitionListToString\@ActorDefinitionDiffList\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string definitionListToString(std::string const&) const;
    /**
     * @symbol ?getAddedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup& getAddedDefinitionGroupMutable();
    /**
     * @symbol ?getChangedDescription\@ActorDefinitionDiffList\@\@QEAAAEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor& getChangedDescription();
    /**
     * @symbol
     * ?getDefinitionStack\@ActorDefinitionDiffList\@\@QEBAAEBV?$vector\@UDiffListPair\@\@V?$allocator\@UDiffListPair\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct DiffListPair> const& getDefinitionStack() const;
    /**
     * @symbol
     * ?getDescription\@ActorDefinitionDiffList\@\@QEAA?AV?$unique_ptr\@VActorDefinitionDescriptor\@\@U?$default_delete\@VActorDefinitionDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    /**
     * @symbol ?getRemovedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup& getRemovedDefinitionGroupMutable();
    /**
     * @symbol
     * ?removeDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinition(std::string const&);
    /**
     * @symbol ?size\@ActorDefinitionDiffList\@\@QEBA_KXZ
     */
    MCAPI uint64_t size() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_updateStack\@ActorDefinitionDiffList\@\@AEAAXXZ
     */
    MCAPI void _updateStack();
    // NOLINTEND
};
