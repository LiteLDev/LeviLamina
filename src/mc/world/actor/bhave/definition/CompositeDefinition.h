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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::BehaviorDefinition>>> mChildren;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BehaviorDefinition const* get(uint64 index) const;

    MCAPI uint64 getCount() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _compositeLoadChildrenBehaviors(
        ::Json::Value                                           value,
        ::std::vector<::std::unique_ptr<::BehaviorDefinition>>& childList,
        ::BehaviorFactory const&                                factory,
        ::BehaviorTreeDefinitionPtr                             ptr
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
