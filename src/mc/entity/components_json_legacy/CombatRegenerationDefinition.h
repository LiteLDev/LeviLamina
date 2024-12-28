#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CombatRegenerationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdca501;
    ::ll::UntypedStorage<1, 1> mUnkb1819e;
    ::ll::UntypedStorage<1, 1> mUnkb99bf6;
    // NOLINTEND

public:
    // prevent constructor by default
    CombatRegenerationDefinition& operator=(CombatRegenerationDefinition const&);
    CombatRegenerationDefinition(CombatRegenerationDefinition const&);
    CombatRegenerationDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setRegenDuration(int const& duration);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CombatRegenerationDefinition>>&
            root
    );
    // NOLINTEND
};
