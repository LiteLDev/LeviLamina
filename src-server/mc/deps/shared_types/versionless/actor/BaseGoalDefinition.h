#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct BaseGoalDefinition {
public:
    // BaseGoalDefinition inner types define
    enum class Flag : int {
        // bitfield representation
        None = 0,
        Move = 1 << 0,
        Look = 1 << 1,
        Jump = 1 << 2,
        EnttEnumAsBitmask = Move | Jump,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf31ef4;
    ::ll::UntypedStorage<4, 4> mUnkac36cf;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGoalDefinition& operator=(BaseGoalDefinition const&);
    BaseGoalDefinition(BaseGoalDefinition const&);
    BaseGoalDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::SharedTypes::BaseGoalDefinition::Flag> flagsVec() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
