#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 32> mUnkdacf89;
    ::ll::UntypedStorage<8, 16> mUnk91fff8;
    // NOLINTEND

public:
    // prevent constructor by default
    BehaviorDefinition& operator=(BehaviorDefinition const&);
    BehaviorDefinition(BehaviorDefinition const&);
    BehaviorDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BehaviorDefinition();

    // vIndex: 1
    virtual void load(::Json::Value value, ::BehaviorFactory const& factory);

    // vIndex: 2
    virtual ::std::unique_ptr<::BehaviorNode>
    createNode(::Actor& owner, ::BehaviorFactory const& factory, ::BehaviorNode* parent, ::BehaviorData* data) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
