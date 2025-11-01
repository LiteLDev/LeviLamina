#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
struct Shareable;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk757b5b;
    ::ll::UntypedStorage<1, 1> mUnk5fb624;
    ::ll::UntypedStorage<4, 4> mUnk3db088;
    ::ll::UntypedStorage<4, 4> mUnkc2f82b;
    ::ll::UntypedStorage<4, 4> mUnke24a76;
    ::ll::UntypedStorage<1, 1> mUnk9e52b9;
    // NOLINTEND

public:
    // prevent constructor by default
    ShareableDefinition& operator=(ShareableDefinition const&);
    ShareableDefinition(ShareableDefinition const&);
    ShareableDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addShareable(::Shareable const& shareable);

    MCNAPI void addShareableByName(::std::string const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ShareableDefinition>>& root);
    // NOLINTEND

};
