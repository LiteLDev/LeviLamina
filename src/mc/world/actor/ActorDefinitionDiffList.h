#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class ActorDefinitionGroup;
class DefinitionInstanceGroup;
struct DiffListPair;
// clang-format on

class ActorDefinitionDiffList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbfd811;
    ::ll::UntypedStorage<8, 24> mUnk85875f;
    ::ll::UntypedStorage<8, 8>  mUnk22bcd4;
    ::ll::UntypedStorage<1, 1>  mUnkcfe8c6;
    ::ll::UntypedStorage<8, 72> mUnk3506a3;
    ::ll::UntypedStorage<8, 72> mUnk35e483;
    ::ll::UntypedStorage<8, 64> mUnka83a5c;
    ::ll::UntypedStorage<1, 1>  mUnk34ae2b;
    ::ll::UntypedStorage<8, 24> mUnk4874d3;
    ::ll::UntypedStorage<8, 64> mUnkb8f849;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDiffList& operator=(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList(ActorDefinitionDiffList const&);
    ActorDefinitionDiffList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorDefinitionDiffList(::ActorDefinitionGroup& definitions);

    MCAPI void _updateStack();

    MCAPI void addDefinition(::std::string const& def);

    MCAPI void addPendingPropertyChange(uint64 overallPropertyIndex, ::std::variant<int, float, bool, uint64> value);

    MCAPI void clearChangedDescription();

    MCAPI void clearDefinitions();

    MCAPI ::std::string definitionListToString(::std::string const& delimiter) const;

    MCFOLD ::DefinitionInstanceGroup const& getAddedDefinitionGroup() const;

    MCFOLD ::ActorDefinitionDescriptor& getChangedDescription();

    MCFOLD ::std::vector<::DiffListPair> const& getDefinitionStack() const;

    MCAPI ::std::unique_ptr<::ActorDefinitionDescriptor> getDescription(bool needsUpdate);

    MCFOLD ::DefinitionInstanceGroup const& getRemovedDefinitionGroup() const;

    MCFOLD bool hasChanged() const;

    MCAPI bool hasDefinition(::std::string const& def) const;

    MCAPI void lockChanges();

    MCAPI void removeDefinition(::std::string const& def);

    MCAPI void setDefinitionStack(::std::vector<::DiffListPair>& stack);

    MCAPI void unlockChanges();

    MCAPI ~ActorDefinitionDiffList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDefinitionGroup& definitions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
