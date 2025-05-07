#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GuardianAttackDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6326c4;
    ::ll::UntypedStorage<4, 4> mUnk26cedf;
    ::ll::UntypedStorage<4, 4> mUnkb4f3cd;
    ::ll::UntypedStorage<4, 4> mUnk6dc843;
    ::ll::UntypedStorage<4, 4> mUnk1c79c3;
    ::ll::UntypedStorage<4, 4> mUnkf1d257;
    ::ll::UntypedStorage<4, 4> mUnkd1de50;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianAttackDefinition& operator=(GuardianAttackDefinition const&);
    GuardianAttackDefinition(GuardianAttackDefinition const&);
    GuardianAttackDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool validateMobType(::Mob& mob) const /*override*/;

    // vIndex: 0
    virtual ~GuardianAttackDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GuardianAttackDefinition>>& root
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $validateMobType(::Mob& mob) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
