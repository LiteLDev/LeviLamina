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
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup&>                        mDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiffListPair>>                 mDefinitionStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mChangedDescription;
    ::ll::TypedStorage<1, 1, bool>                                           mChanged;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                     mAddedDefinitionGroup;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                     mRemovedDefinitionGroup;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>>
                                                                               mPendingPropertyChanges;
    ::ll::TypedStorage<1, 1, bool>                                             mLockedChanges;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<bool, ::std::string>>> mPendingChanges;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>>>
        mDeferredPropertyChanges;
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

    MCNAPI ::std::unique_ptr<::ActorDefinitionDescriptor> _getDescriptionFrom(uint64 start, uint64 end);

    MCNAPI void _updateStack();

    MCNAPI void addDefinition(::std::string const& def);

    MCNAPI void addPendingPropertyChange(uint64 overallPropertyIndex, ::std::variant<int, float, bool, uint64> value);

    MCNAPI void clearChangedDescription();

#ifdef LL_PLAT_C
    MCNAPI ::std::string definitionListToString(::std::string const& delimiter) const;

    MCNAPI ::std::unique_ptr<::ActorDefinitionDescriptor> getDescription(bool needsUpdate);

    MCNAPI bool hasDefinition(::std::string const& def) const;
#endif

    MCNAPI void removeDefinition(::std::string const& def);

#ifdef LL_PLAT_C
    MCNAPI void setDefinitionStack(::std::vector<::DiffListPair>& stack);

    MCNAPI void unlockChanges();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup& definitions);
    // NOLINTEND
};
