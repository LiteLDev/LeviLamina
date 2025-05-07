#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/target/TargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class NearestAttackableTargetDefinition : public ::TargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk67abec;
    ::ll::UntypedStorage<4, 4> mUnk5c17f0;
    ::ll::UntypedStorage<4, 4> mUnk50ac30;
    ::ll::UntypedStorage<4, 4> mUnk513186;
    ::ll::UntypedStorage<4, 4> mUnk9805ea;
    ::ll::UntypedStorage<4, 4> mUnk3439b5;
    ::ll::UntypedStorage<1, 1> mUnk919701;
    // NOLINTEND

public:
    // prevent constructor by default
    NearestAttackableTargetDefinition& operator=(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition(NearestAttackableTargetDefinition const&);
    NearestAttackableTargetDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool validate(::Mob& mob) const /*override*/;

    // vIndex: 0
    virtual ~NearestAttackableTargetDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const& name,
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::NearestAttackableTargetDefinition>>& root
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $validate(::Mob& mob) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
