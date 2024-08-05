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
    MCAPI explicit ActorDefinitionDiffList(class ActorDefinitionGroup& definitions);

    MCAPI void addDefinition(std::string const& def);

    MCAPI void addPendingPropertyChange(uint64, std::variant<int, float, bool, uint64> value);

    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(uint64 start, uint64 end) const;

    MCAPI void clearChangedDescription();

    MCAPI void clearDefinitions();

    MCAPI std::string definitionListToString(std::string const& delimiter) const;

    MCAPI class DefinitionInstanceGroup const& getAddedDefinitionGroup() const;

    MCAPI class DefinitionInstanceGroup& getAddedDefinitionGroupMutable();

    MCAPI class ActorDefinitionDescriptor& getChangedDescription();

    MCAPI std::vector<struct DiffListPair> const& getDefinitionStack() const;

    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool needsUpdate);

    MCAPI class DefinitionInstanceGroup const& getRemovedDefinitionGroup() const;

    MCAPI class DefinitionInstanceGroup& getRemovedDefinitionGroupMutable();

    MCAPI bool hasChanged() const;

    MCAPI bool hasDefinition(std::string const& def) const;

    MCAPI void lockChanges();

    MCAPI void removeDefinition(std::string const& def);

    MCAPI void setDefinitionStack(std::vector<struct DiffListPair>& stack);

    MCAPI uint64 size() const;

    MCAPI void unlockChanges();

    MCAPI ~ActorDefinitionDiffList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updateStack();

    // NOLINTEND
};
