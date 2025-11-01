#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/factory/DefinitionInstanceGroup.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionDescriptor;
class ActorDefinitionGroup;
struct DiffListPair;
// clang-format on

class ActorDefinitionDiffList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup&> mDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiffListPair>> mDefinitionStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mChangedDescription;
    ::ll::TypedStorage<1, 1, bool> mChanged;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup> mAddedDefinitionGroup;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup> mRemovedDefinitionGroup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>> mPendingPropertyChanges;
    ::ll::TypedStorage<1, 1, bool> mLockedChanges;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<bool, ::std::string>>> mPendingChanges;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>> mDeferredPropertyChanges;
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

    MCAPI void clearChangedDescription();

    MCAPI ::std::string definitionListToString(::std::string const& delimiter) const;

    MCAPI ::std::unique_ptr<::ActorDefinitionDescriptor> getDescription(bool needsUpdate);

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
