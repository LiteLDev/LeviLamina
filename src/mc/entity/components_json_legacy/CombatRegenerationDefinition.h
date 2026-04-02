#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CombatRegenerationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EffectDuration> mRegenerationDuration;
    ::ll::TypedStorage<1, 1, bool>             mApplyToSelf;
    ::ll::TypedStorage<1, 1, bool>             mApplyToFamily;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setRegenDuration(int const& duration);

    MCAPI void setRegenDurationWithInfiniteString(::std::string const& duration);
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
