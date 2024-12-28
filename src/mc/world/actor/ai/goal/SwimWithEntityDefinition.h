#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SwimWithEntityDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk69761f;
    ::ll::UntypedStorage<4, 4>  mUnkf1369d;
    ::ll::UntypedStorage<4, 4>  mUnkd52906;
    ::ll::UntypedStorage<4, 4>  mUnk8dd378;
    ::ll::UntypedStorage<4, 4>  mUnkdaae3f;
    ::ll::UntypedStorage<4, 4>  mUnkeca960;
    ::ll::UntypedStorage<4, 4>  mUnkcf534f;
    ::ll::UntypedStorage<4, 4>  mUnkf7cf58;
    ::ll::UntypedStorage<4, 4>  mUnk36a010;
    ::ll::UntypedStorage<8, 24> mUnk7ce515;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimWithEntityDefinition& operator=(SwimWithEntityDefinition const&);
    SwimWithEntityDefinition(SwimWithEntityDefinition const&);
    SwimWithEntityDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SwimWithEntityDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                     name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SwimWithEntityDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
