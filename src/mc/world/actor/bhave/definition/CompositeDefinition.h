#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
class BehaviorFactory;
class BehaviorTreeDefinitionPtr;
namespace Json { class Value; }
// clang-format on

class CompositeDefinition : public ::BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke01eb4;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositeDefinition& operator=(CompositeDefinition const&);
    CompositeDefinition(CompositeDefinition const&);
    CompositeDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompositeDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _compositeLoadChildrenBehaviors(
        ::Json::Value                                           value,
        ::std::vector<::std::unique_ptr<::BehaviorDefinition>>& childList,
        ::BehaviorFactory const&                                factory,
        ::BehaviorTreeDefinitionPtr                             ptr
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
