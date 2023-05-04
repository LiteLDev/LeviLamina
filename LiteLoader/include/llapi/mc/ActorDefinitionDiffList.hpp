/**
 * @file  ActorDefinitionDiffList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionDiffList.
 *
 */
class ActorDefinitionDiffList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONDIFFLIST
public:
    class ActorDefinitionDiffList& operator=(class ActorDefinitionDiffList const &) = delete;
    ActorDefinitionDiffList(class ActorDefinitionDiffList const &) = delete;
    ActorDefinitionDiffList() = delete;
#endif

public:
    /**
     * @symbol ?addDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinition(std::string const &);
    /**
     * @symbol ?addPendingPropertyChange\@ActorDefinitionDiffList\@\@QEAAX_KV?$variant\@HM_N_K\@std\@\@\@Z
     */
    MCAPI void addPendingPropertyChange(unsigned __int64, class std::variant<int, float, bool, unsigned __int64>);
    /**
     * @symbol ?buildAdditiveDescriptionFrom\@ActorDefinitionDiffList\@\@QEBA?AVActorDefinitionDescriptor\@\@_K0\@Z
     */
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64) const;
    /**
     * @symbol ?definitionListToString\@ActorDefinitionDiffList\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string definitionListToString(std::string const &) const;
    /**
     * @symbol ?getAddedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup & getAddedDefinitionGroupMutable();
    /**
     * @symbol ?getChangedDescription\@ActorDefinitionDiffList\@\@QEAAAEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor & getChangedDescription();
    /**
     * @symbol ?getDefinitionStack\@ActorDefinitionDiffList\@\@QEBAAEBV?$vector\@UDiffListPair\@\@V?$allocator\@UDiffListPair\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct DiffListPair> const & getDefinitionStack() const;
    /**
     * @symbol ?getDescription\@ActorDefinitionDiffList\@\@QEAA?AV?$unique_ptr\@VActorDefinitionDescriptor\@\@U?$default_delete\@VActorDefinitionDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    /**
     * @symbol ?getRemovedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup & getRemovedDefinitionGroupMutable();
    /**
     * @symbol ?removeDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinition(std::string const &);
    /**
     * @symbol ?size\@ActorDefinitionDiffList\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;

//private:
    /**
     * @symbol ?_updateStack\@ActorDefinitionDiffList\@\@AEAAXXZ
     */
    MCAPI void _updateStack();

private:

};
