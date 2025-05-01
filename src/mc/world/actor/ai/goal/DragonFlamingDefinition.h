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

class DragonFlamingDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3536b6;
    ::ll::UntypedStorage<4, 4>  mUnkb59430;
    ::ll::UntypedStorage<4, 4>  mUnkc17971;
    ::ll::UntypedStorage<4, 4>  mUnk3675d7;
    ::ll::UntypedStorage<4, 4>  mUnkccd79b;
    ::ll::UntypedStorage<4, 4>  mUnke4dc3e;
    ::ll::UntypedStorage<8, 32> mUnk3b3a6a;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonFlamingDefinition& operator=(DragonFlamingDefinition const&);
    DragonFlamingDefinition(DragonFlamingDefinition const&);
    DragonFlamingDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool validateMobType(::Mob& mob) const /*override*/;

    // vIndex: 0
    virtual ~DragonFlamingDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                    name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DragonFlamingDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
