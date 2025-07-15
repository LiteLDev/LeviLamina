#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AngryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk187cdb;
    ::ll::UntypedStorage<4, 4>   mUnkeed211;
    ::ll::UntypedStorage<1, 1>   mUnk562251;
    ::ll::UntypedStorage<1, 1>   mUnk3e467b;
    ::ll::UntypedStorage<1, 1>   mUnk4ad1e6;
    ::ll::UntypedStorage<1, 1>   mUnked03f1;
    ::ll::UntypedStorage<4, 4>   mUnkf71526;
    ::ll::UntypedStorage<8, 64>  mUnk49d0c8;
    ::ll::UntypedStorage<8, 104> mUnk808237;
    ::ll::UntypedStorage<8, 24>  mUnk2304a5;
    ::ll::UntypedStorage<8, 64>  mUnka8537d;
    ::ll::UntypedStorage<8, 32>  mUnkf88ffc;
    ::ll::UntypedStorage<4, 8>   mUnk32b233;
    // NOLINTEND

public:
    // prevent constructor by default
    AngryDefinition& operator=(AngryDefinition const&);
    AngryDefinition(AngryDefinition const&);
    AngryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addBroadcastTargetByName(::std::string const& name);

    MCNAPI ~AngryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AngryDefinition>>& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
