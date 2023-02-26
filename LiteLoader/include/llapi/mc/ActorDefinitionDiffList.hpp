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
     * @symbol  ??0ActorDefinitionDiffList\@\@QEAA\@AEAVActorDefinitionGroup\@\@\@Z
     */
    MCAPI ActorDefinitionDiffList(class ActorDefinitionGroup &);
    /**
     * @symbol  ?addDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addDefinition(std::string const &);
    /**
     * @symbol  ?addPendingPropertyChange\@ActorDefinitionDiffList\@\@QEAAX_KV?$variant\@HM_N_K\@std\@\@\@Z
     */
    MCAPI void addPendingPropertyChange(unsigned __int64, class std::variant<int, float, bool, unsigned __int64>);
    /**
     * @symbol  ?buildAdditiveDescriptionFrom\@ActorDefinitionDiffList\@\@QEBA?AVActorDefinitionDescriptor\@\@_K0\@Z
     */
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64) const;
    /**
     * @symbol  ?clearChangedDescription\@ActorDefinitionDiffList\@\@QEAAXXZ
     */
    MCAPI void clearChangedDescription();
    /**
     * @symbol  ?clearDefinitions\@ActorDefinitionDiffList\@\@QEAAXXZ
     */
    MCAPI void clearDefinitions();
    /**
     * @symbol  ?definitionListToString\@ActorDefinitionDiffList\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI std::string definitionListToString(std::string const &) const;
    /**
     * @symbol  ?getAddedDefinitionGroup\@ActorDefinitionDiffList\@\@QEBAAEBVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup const & getAddedDefinitionGroup() const;
    /**
     * @symbol  ?getAddedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup & getAddedDefinitionGroupMutable();
    /**
     * @symbol  ?getChangedDescription\@ActorDefinitionDiffList\@\@QEAAAEAVActorDefinitionDescriptor\@\@XZ
     */
    MCAPI class ActorDefinitionDescriptor & getChangedDescription();
    /**
     * @symbol  ?getDefinitionStack\@ActorDefinitionDiffList\@\@QEBAAEBV?$vector\@UDiffListPair\@\@V?$allocator\@UDiffListPair\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct DiffListPair> const & getDefinitionStack() const;
    /**
     * @symbol  ?getDescription\@ActorDefinitionDiffList\@\@QEAA?AV?$unique_ptr\@VActorDefinitionDescriptor\@\@U?$default_delete\@VActorDefinitionDescriptor\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    /**
     * @symbol  ?getRemovedDefinitionGroup\@ActorDefinitionDiffList\@\@QEBAAEBVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup const & getRemovedDefinitionGroup() const;
    /**
     * @symbol  ?getRemovedDefinitionGroupMutable\@ActorDefinitionDiffList\@\@QEAAAEAVDefinitionInstanceGroup\@\@XZ
     */
    MCAPI class DefinitionInstanceGroup & getRemovedDefinitionGroupMutable();
    /**
     * @symbol  ?hasChanged\@ActorDefinitionDiffList\@\@QEBA_NXZ
     */
    MCAPI bool hasChanged() const;
    /**
     * @symbol  ?hasDefinition\@ActorDefinitionDiffList\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool hasDefinition(std::string const &) const;
    /**
     * @symbol  ?lockChanges\@ActorDefinitionDiffList\@\@QEAAXXZ
     */
    MCAPI void lockChanges();
    /**
     * @symbol  ?removeDefinition\@ActorDefinitionDiffList\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeDefinition(std::string const &);
    /**
     * @symbol  ?setDefinitionStack\@ActorDefinitionDiffList\@\@QEAAXAEAV?$vector\@UDiffListPair\@\@V?$allocator\@UDiffListPair\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setDefinitionStack(std::vector<struct DiffListPair> &);
    /**
     * @symbol  ?size\@ActorDefinitionDiffList\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol  ?unlockChanges\@ActorDefinitionDiffList\@\@QEAAXXZ
     */
    MCAPI void unlockChanges();
    /**
     * @symbol  ??1ActorDefinitionDiffList\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionDiffList();

//private:
    /**
     * @symbol  ?_updateStack\@ActorDefinitionDiffList\@\@AEAAXXZ
     */
    MCAPI void _updateStack();

private:

};