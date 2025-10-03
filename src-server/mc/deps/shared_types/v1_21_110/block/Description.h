#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkeae628;
    ::ll::UntypedStorage<8, 256> mUnk6ca56c;
    ::ll::UntypedStorage<8, 56>  mUnk385ede;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::Description&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::Description&&);

    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::Description&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::Description const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
