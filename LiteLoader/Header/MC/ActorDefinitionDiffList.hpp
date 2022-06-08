// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

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
    MCAPI ActorDefinitionDiffList(class ActorDefinitionGroup &);
    MCAPI void addDefinition(std::string const &);
    MCAPI class ActorDefinitionDescriptor buildAdditiveDescriptionFrom(unsigned __int64, unsigned __int64);
    MCAPI void clearChangedDescription();
    MCAPI void clearDefinitions();
    MCAPI std::string definitionListToString(std::string const &) const;
    MCAPI class DefinitionInstanceGroup const & getAddedDefinitionGroup() const;
    MCAPI class DefinitionInstanceGroup & getAddedDefinitionGroupMutable();
    MCAPI class ActorDefinitionDescriptor & getChangedDescription();
    MCAPI std::vector<struct DiffListPair> const & getDefinitionStack() const;
    MCAPI std::unique_ptr<class ActorDefinitionDescriptor> getDescription(bool);
    MCAPI class DefinitionInstanceGroup const & getRemovedDefinitionGroup() const;
    MCAPI class DefinitionInstanceGroup & getRemovedDefinitionGroupMutable();
    MCAPI bool hasChanged() const;
    MCAPI bool hasDefinition(std::string const &) const;
    MCAPI void lockChanges();
    MCAPI void removeDefinition(std::string const &);
    MCAPI void setDefinitionStack(std::vector<struct DiffListPair> &);
    MCAPI unsigned __int64 size() const;
    MCAPI void unlockChanges();
    MCAPI ~ActorDefinitionDiffList();

protected:

private:
    MCAPI void _updateStack();

};