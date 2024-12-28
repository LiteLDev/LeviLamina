#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinition;
class BehaviorTreeDefinitionPtr;
class ResourcePackManager;
// clang-format on

class AutomationBehaviorTreeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6be485;
    ::ll::UntypedStorage<8, 8>  mUnkf40c09;
    ::ll::UntypedStorage<8, 64> mUnk9e3c09;
    ::ll::UntypedStorage<8, 64> mUnkcdf6b0;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationBehaviorTreeGroup& operator=(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AutomationBehaviorTreeGroup(::ResourcePackManager& packManager, ::BehaviorFactory& factory);

    MCAPI void _removeRef(::BehaviorTreeDefinitionPtr& ref);

    MCAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(::std::string const& defId);

    MCAPI ~AutomationBehaviorTreeGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& packManager, ::BehaviorFactory& factory);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
