#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"

namespace SharedTypes::Legacy {

struct DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                         mEvent;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject>   mTarget;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode> mCondition;
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
