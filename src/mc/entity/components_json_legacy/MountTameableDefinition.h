#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkb8662d;
    ::ll::UntypedStorage<4, 4>   mUnk32ed73;
    ::ll::UntypedStorage<4, 4>   mUnk4a404b;
    ::ll::UntypedStorage<8, 32>  mUnk47e4c2;
    ::ll::UntypedStorage<8, 32>  mUnk800624;
    ::ll::UntypedStorage<8, 104> mUnkab2a53;
    ::ll::UntypedStorage<8, 24>  mUnk5507f5;
    ::ll::UntypedStorage<8, 24>  mUnk656954;
    // NOLINTEND

public:
    // prevent constructor by default
    MountTameableDefinition& operator=(MountTameableDefinition const&);
    MountTameableDefinition(MountTameableDefinition const&);
    MountTameableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MountTameableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MountTameableDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
