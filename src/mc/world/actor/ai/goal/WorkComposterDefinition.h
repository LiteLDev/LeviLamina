#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/WorkDefinition.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class WorkComposterDefinition : public ::WorkDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk42e0e7;
    ::ll::UntypedStorage<4, 4> mUnke06973;
    ::ll::UntypedStorage<4, 4> mUnk5ff2d6;
    ::ll::UntypedStorage<4, 4> mUnka5527d;
    ::ll::UntypedStorage<1, 1> mUnk25298b;
    ::ll::UntypedStorage<1, 1> mUnk15a8f0;
    ::ll::UntypedStorage<4, 4> mUnk263aed;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkComposterDefinition& operator=(WorkComposterDefinition const&);
    WorkComposterDefinition(WorkComposterDefinition const&);
    WorkComposterDefinition();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorkComposterDefinition() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(
        ::std::string const&                                                                                    name,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::WorkComposterDefinition>>& root
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
