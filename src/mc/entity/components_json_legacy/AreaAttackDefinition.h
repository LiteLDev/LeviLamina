#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AreaAttackDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf11d58;
    ::ll::UntypedStorage<4, 4>  mUnk66251f;
    ::ll::UntypedStorage<4, 4>  mUnk70bae4;
    ::ll::UntypedStorage<8, 64> mUnkf298ab;
    ::ll::UntypedStorage<4, 4>  mUnkfc8483;
    ::ll::UntypedStorage<1, 1>  mUnke25e9e;
    // NOLINTEND

public:
    // prevent constructor by default
    AreaAttackDefinition& operator=(AreaAttackDefinition const&);
    AreaAttackDefinition(AreaAttackDefinition const&);
    AreaAttackDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setDamageCause(::std::string const& cause);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AreaAttackDefinition>>& root
    );
    // NOLINTEND
};
