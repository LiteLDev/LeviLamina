#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDefinitionDiffList {
public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionDiffList@@QEAA@AEAVActorDefinitionGroup@@@Z
    MCAPI explicit ActorDefinitionDiffList(class ActorDefinitionGroup& definitions);

    // symbol:
    // ?addDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addDefinition(std::string const& def);

    // symbol: ?addPendingPropertyChange@ActorDefinitionDiffList@@QEAAX_KV?$variant@HM_N_K@std@@@Z
    MCAPI void addPendingPropertyChange(uint64, std::variant<int, float, bool, uint64> value);

    // symbol: ?buildAdditiveDescriptionFrom@ActorDefinitionDiffList@@QEBA?AVActorDefinitionDescriptor@@_K0@Z
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(uint64 start, uint64 end) const;

    // symbol: ?clearChangedDescription@ActorDefinitionDiffList@@QEAAXXZ
    MCAPI void clearChangedDescription();

    // symbol: ?clearDefinitions@ActorDefinitionDiffList@@QEAAXXZ
    MCAPI void clearDefinitions();

    // symbol:
    // ?definitionListToString@ActorDefinitionDiffList@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
    MCAPI std::string definitionListToString(std::string const& delimiter) const;

    // symbol: ?getAddedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
    MCAPI class DefinitionInstanceGroup const& getAddedDefinitionGroup() const;

    // symbol: ?getAddedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
    MCAPI class DefinitionInstanceGroup& getAddedDefinitionGroupMutable();

    // symbol: ?getChangedDescription@ActorDefinitionDiffList@@QEAAAEAVActorDefinitionDescriptor@@XZ
    MCAPI class ActorDefinitionDescriptor& getChangedDescription();

    // symbol:
    // ?getDefinitionStack@ActorDefinitionDiffList@@QEBAAEBV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@XZ
    MCAPI std::vector<struct DiffListPair> const& getDefinitionStack() const;

    // symbol:
    // ?getDescription@ActorDefinitionDiffList@@QEAA?AV?$unique_ptr@VActorDefinitionDescriptor@@U?$default_delete@VActorDefinitionDescriptor@@@std@@@std@@_N@Z
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool needsUpdate);

    // symbol: ?getRemovedDefinitionGroup@ActorDefinitionDiffList@@QEBAAEBVDefinitionInstanceGroup@@XZ
    MCAPI class DefinitionInstanceGroup const& getRemovedDefinitionGroup() const;

    // symbol: ?getRemovedDefinitionGroupMutable@ActorDefinitionDiffList@@QEAAAEAVDefinitionInstanceGroup@@XZ
    MCAPI class DefinitionInstanceGroup& getRemovedDefinitionGroupMutable();

    // symbol: ?hasChanged@ActorDefinitionDiffList@@QEBA_NXZ
    MCAPI bool hasChanged() const;

    // symbol:
    // ?hasDefinition@ActorDefinitionDiffList@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool hasDefinition(std::string const& def) const;

    // symbol: ?lockChanges@ActorDefinitionDiffList@@QEAAXXZ
    MCAPI void lockChanges();

    // symbol:
    // ?removeDefinition@ActorDefinitionDiffList@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void removeDefinition(std::string const& def);

    // symbol:
    // ?setDefinitionStack@ActorDefinitionDiffList@@QEAAXAEAV?$vector@UDiffListPair@@V?$allocator@UDiffListPair@@@std@@@std@@@Z
    MCAPI void setDefinitionStack(std::vector<struct DiffListPair>& stack);

    // symbol: ?size@ActorDefinitionDiffList@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ?unlockChanges@ActorDefinitionDiffList@@QEAAXXZ
    MCAPI void unlockChanges();

    // symbol: ??1ActorDefinitionDiffList@@QEAA@XZ
    MCAPI ~ActorDefinitionDiffList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateStack@ActorDefinitionDiffList@@AEAAXXZ
    MCAPI void _updateStack();

    // NOLINTEND
};
