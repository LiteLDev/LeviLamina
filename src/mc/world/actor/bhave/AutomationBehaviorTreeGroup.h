#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinition;
class ResourcePackManager;
// clang-format on

class AutomationBehaviorTreeGroup {
public:
    // AutomationBehaviorTreeGroup inner types define
    using BehaviorDefinitionMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorTreeDefinition>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::BehaviorFactory&>     mFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::BehaviorTreeDefinition>>>
                                                                                  mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BehaviorTreeDefinitionPtr*>> mRegisteredPtrs;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationBehaviorTreeGroup& operator=(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _removeRef(::BehaviorTreeDefinitionPtr& ref);

    MCAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(::std::string const& defId);
    // NOLINTEND
};
