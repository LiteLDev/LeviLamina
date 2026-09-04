#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorTreeDefinitionPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BehaviorData;
class BehaviorFactory;
class BehaviorNode;
namespace Json { class Value; }
// clang-format on

class BehaviorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>               mName;
    ::ll::TypedStorage<8, 16, ::BehaviorTreeDefinitionPtr> mTreeDefinition;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BehaviorDefinition() = default;

    virtual void load(::Json::Value value, ::BehaviorFactory const& factory);

    virtual ::std::unique_ptr<::BehaviorNode>
    createNode(::Actor& owner, ::BehaviorFactory const& factory, ::BehaviorNode* parent, ::BehaviorData* data) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Json::Value value, ::BehaviorFactory const& factory);

    MCAPI ::std::unique_ptr<::BehaviorNode>
    $createNode(::Actor& owner, ::BehaviorFactory const& factory, ::BehaviorNode* parent, ::BehaviorData* data) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
