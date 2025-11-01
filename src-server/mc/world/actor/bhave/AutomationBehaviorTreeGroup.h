#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorTreeDefinition;
class BehaviorTreeDefinitionPtr;
// clang-format on

class AutomationBehaviorTreeGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6be485;
    ::ll::UntypedStorage<8, 8> mUnkf40c09;
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
    MCNAPI void _removeRef(::BehaviorTreeDefinitionPtr& ref);

    MCNAPI ::BehaviorTreeDefinitionPtr tryGetDefinition(::std::string const& defId);
    // NOLINTEND

};
