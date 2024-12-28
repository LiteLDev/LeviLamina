#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/cereal/schema/SchemaInfo.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
namespace cereal::internal { struct Member; }
// clang-format on

namespace cereal {

struct SchemaDescription : public ::cereal::internal::SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnk9dbec0;
    ::ll::UntypedStorage<8, 24>  mUnk1c3f11;
    ::ll::UntypedStorage<8, 32>  mUnkd4aea8;
    ::ll::UntypedStorage<8, 32>  mUnk702fe6;
    ::ll::UntypedStorage<8, 24>  mUnkef7750;
    ::ll::UntypedStorage<8, 16>  mUnk109302;
    ::ll::UntypedStorage<8, 16>  mUnk1a97ca;
    ::ll::UntypedStorage<8, 16>  mUnkd3bebd;
    ::ll::UntypedStorage<8, 24>  mUnk1a6731;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchemaDescription(::cereal::SchemaDescription&&);

    MCAPI SchemaDescription(::cereal::SchemaDescription const&);

    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription&&);

    MCAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription const&);

    MCAPI ~SchemaDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::SchemaDescription&&);

    MCAPI void* $ctor(::cereal::SchemaDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
