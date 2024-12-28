#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CelebrateHuntDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk7cdf5c;
    ::ll::UntypedStorage<4, 4>  mUnk356da3;
    ::ll::UntypedStorage<4, 4>  mUnk432f14;
    ::ll::UntypedStorage<8, 64> mUnk4af63c;
    ::ll::UntypedStorage<8, 32> mUnk22cbdd;
    ::ll::UntypedStorage<4, 8>  mUnkdaef53;
    // NOLINTEND

public:
    // prevent constructor by default
    CelebrateHuntDefinition& operator=(CelebrateHuntDefinition const&);
    CelebrateHuntDefinition(CelebrateHuntDefinition const&);
    CelebrateHuntDefinition();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CelebrateHuntDefinition>>& root
    );
    // NOLINTEND
};
