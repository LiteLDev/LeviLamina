#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCNAPI explicit ActorDefinitionDiffList(::ActorDefinitionGroup& definitions);

    MCNAPI void _updateStack();

    MCNAPI void addDefinition(::std::string const& def);

    MCNAPI void clearChangedDescription();

    MCNAPI ::std::string definitionListToString(::std::string const& delimiter) const;

    MCNAPI ::std::unique_ptr<::ActorDefinitionDescriptor> getDescription(bool needsUpdate);

    MCNAPI void removeDefinition(::std::string const& def);

    MCNAPI void setDefinitionStack(::std::vector<::DiffListPair>& stack);

    MCNAPI void unlockChanges();

    MCNAPI ~ActorDefinitionDiffList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup& definitions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
