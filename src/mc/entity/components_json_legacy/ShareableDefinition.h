#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShareableDefinition {
public:
    // prevent constructor by default
    ShareableDefinition& operator=(ShareableDefinition const&);
    ShareableDefinition(ShareableDefinition const&);

public:
    // NOLINTBEGIN
    MCAPI ShareableDefinition();

    MCAPI void addShareable(struct Shareable const& shareable);

    MCAPI void addShareableByName(std::string const& name);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ShareableDefinition>>&
            root
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
