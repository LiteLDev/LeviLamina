/**
 * @file  MC/ActorDefinitionDiffList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1017674240
     * @symbol ??0ActorDefinitionDiffList@@QEAA@AEAVActorDefinitionGroup@@@Z
     */
    MCAPI ActorDefinitionDiffList(class ActorDefinitionGroup &);
    /**
     * @hash   -1675323020
     * @symbol ?addDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addDefinition(std::string const &);
    /**
     * @hash   -1656959998
     * @symbol ?addPendingPropertyChange@ActorDefinitionDiffList@@QEAAX_KV?$variant@HM_N_K@std@@@Z
     */
    MCAPI void addPendingPropertyChange(unsigned __int64, class std::variant<int, float, bool, unsigned __int64>);
    /**
     * @hash   -64973430
     * @symbol ?buildAdditiveDescriptionFrom@ActorDefinitionDiffList@@QEBA?AVActorDefinitionDescriptor@@_K0@Z
     */
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64) const;
    /**
     * @hash   -1430659233
     * @symbol ?clearChangedDescription@ActorDefinitionDiffList@@QEAAXXZ
     */
    MCAPI void clearChangedDescription();
    /**
     * @hash   -1222092455
     * @symbol ?clearDefinitions@ActorDefinitionDiffList@@QEAAXXZ
     */
    MCAPI void clearDefinitions();
    /**
     * @hash   -1348557905
     * @symbol ?definitionListToString@ActorDefinitionDiffList@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI std::string definitionListToString(std::string const &) const;
    /**
     * @hash   -1926074856
     * @symbol ?getAddedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
     */
    MCAPI class DefinitionInstanceGroup const & getAddedDefinitionGroup() const;
    /**
     * @hash   1157603648
     * @symbol ?getAddedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
     */
    MCAPI class DefinitionInstanceGroup & getAddedDefinitionGroupMutable();
    /**
     * @hash   1140280854
     * @symbol ?getChangedDescription@ActorDefinitionDiffList@@QEAAAEAVActorDefinitionDescriptor@@XZ
     */
    MCAPI class ActorDefinitionDescriptor & getChangedDescription();
    /**
     * @hash   -820514270
     * @symbol ?getDefinitionStack@ActorDefinitionDiffList@@QEBAAEBV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct DiffListPair> const & getDefinitionStack() const;
    /**
     * @hash   1470372955
     * @symbol ?getDescription@ActorDefinitionDiffList@@QEAA?AV?$unique_ptr@VActorDefinitionDescriptor@@U?$default_delete@VActorDefinitionDescriptor@@@std@@@std@@_N@Z
     */
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    /**
     * @hash   1987022152
     * @symbol ?getRemovedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
     */
    MCAPI class DefinitionInstanceGroup const & getRemovedDefinitionGroup() const;
    /**
     * @hash   1553808496
     * @symbol ?getRemovedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
     */
    MCAPI class DefinitionInstanceGroup & getRemovedDefinitionGroupMutable();
    /**
     * @hash   -979838150
     * @symbol ?hasChanged@ActorDefinitionDiffList@@QEBA_NXZ
     */
    MCAPI bool hasChanged() const;
    /**
     * @hash   -686603609
     * @symbol ?hasDefinition@ActorDefinitionDiffList@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool hasDefinition(std::string const &) const;
    /**
     * @hash   -1689339259
     * @symbol ?lockChanges@ActorDefinitionDiffList@@QEAAXXZ
     */
    MCAPI void lockChanges();
    /**
     * @hash   -30303168
     * @symbol ?removeDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void removeDefinition(std::string const &);
    /**
     * @hash   -1984839764
     * @symbol ?setDefinitionStack@ActorDefinitionDiffList@@QEAAXAEAV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@@Z
     */
    MCAPI void setDefinitionStack(std::vector<struct DiffListPair> &);
    /**
     * @hash   -1215958795
     * @symbol ?size@ActorDefinitionDiffList@@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   1548576611
     * @symbol ?unlockChanges@ActorDefinitionDiffList@@QEAAXXZ
     */
    MCAPI void unlockChanges();
    /**
     * @hash   1537137239
     * @symbol ??1ActorDefinitionDiffList@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionDiffList();

//private:
    /**
     * @hash   -1918606623
     * @symbol ?_updateStack@ActorDefinitionDiffList@@AEAAXXZ
     */
    MCAPI void _updateStack();

private:

};