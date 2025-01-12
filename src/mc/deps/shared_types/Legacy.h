#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ExpressionNode.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
// clang-format on

namespace SharedTypes::Legacy {
// functions
// NOLINTBEGIN
MCAPI ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::LevelSoundEvent>> const&
getLevelSoundEventInitializer();

MCFOLD bool
operator==(::SharedTypes::Legacy::ExpressionNode const& lhs, ::SharedTypes::Legacy::ExpressionNode const& rhs);

MCAPI bool operator==(
    ::SharedTypes::Legacy::ExpressionNode::StringRepresentation const& lhs,
    ::SharedTypes::Legacy::ExpressionNode::StringRepresentation const& rhs
);
// NOLINTEND

} // namespace SharedTypes::Legacy
