#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AvoidMobTypeDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk83ce21;
    ::ll::UntypedStorage<4, 4>   mUnk50d225;
    ::ll::UntypedStorage<4, 4>   mUnkabe867;
    ::ll::UntypedStorage<4, 4>   mUnk24b650;
    ::ll::UntypedStorage<4, 4>   mUnkcfc28c;
    ::ll::UntypedStorage<4, 4>   mUnk400c69;
    ::ll::UntypedStorage<4, 4>   mUnkf08cd0;
    ::ll::UntypedStorage<4, 4>   mUnka4d38b;
    ::ll::UntypedStorage<4, 4>   mUnkd1aab1;
    ::ll::UntypedStorage<4, 4>   mUnka078d6;
    ::ll::UntypedStorage<1, 1>   mUnk905770;
    ::ll::UntypedStorage<8, 104> mUnk184a73;
    ::ll::UntypedStorage<8, 32>  mUnkc6dbc8;
    ::ll::UntypedStorage<4, 8>   mUnkf0f9c2;
    ::ll::UntypedStorage<8, 24>  mUnk167642;
    // NOLINTEND

public:
    // prevent constructor by default
    AvoidMobTypeDefinition& operator=(AvoidMobTypeDefinition const&);
    AvoidMobTypeDefinition(AvoidMobTypeDefinition const&);
    AvoidMobTypeDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AvoidMobTypeDefinition() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                   name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AvoidMobTypeDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
