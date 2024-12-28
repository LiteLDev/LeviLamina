#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class DropItemForGoal;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DropItemForDefinition : public ::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk67be66;
    ::ll::UntypedStorage<4, 4>   mUnkc71221;
    ::ll::UntypedStorage<4, 4>   mUnk5174ac;
    ::ll::UntypedStorage<4, 4>   mUnk119df8;
    ::ll::UntypedStorage<4, 4>   mUnkfb8560;
    ::ll::UntypedStorage<4, 4>   mUnkeae76b;
    ::ll::UntypedStorage<8, 32>  mUnk84e2e5;
    ::ll::UntypedStorage<8, 104> mUnk851417;
    ::ll::UntypedStorage<4, 8>   mUnk4e495e;
    ::ll::UntypedStorage<4, 12>  mUnk17d251;
    ::ll::UntypedStorage<4, 12>  mUnk2e0d55;
    ::ll::UntypedStorage<8, 24>  mUnkf803a0;
    ::ll::UntypedStorage<4, 4>   mUnk8209d6;
    ::ll::UntypedStorage<4, 4>   mUnk702c2a;
    ::ll::UntypedStorage<4, 4>   mUnk54b877;
    ::ll::UntypedStorage<4, 4>   mUnk48efb2;
    ::ll::UntypedStorage<4, 4>   mUnk33da71;
    // NOLINTEND

public:
    // prevent constructor by default
    DropItemForDefinition& operator=(DropItemForDefinition const&);
    DropItemForDefinition(DropItemForDefinition const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DropItemForDefinition() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DropItemForDefinition();

    MCAPI void initialize(::EntityContext& entity, ::DropItemForGoal& goal) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::string const&                                                                                  name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DropItemForDefinition>>& root
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
