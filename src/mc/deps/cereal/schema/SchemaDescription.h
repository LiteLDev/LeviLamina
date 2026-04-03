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
namespace cereal::internal { struct EnumValue; }
namespace cereal::internal { struct Member; }
// clang-format on

namespace cereal {

struct SchemaDescription : public ::cereal::internal::SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 456> mUnk9dbec0;
    ::ll::UntypedStorage<8, 32>  mUnk887506;
    ::ll::UntypedStorage<8, 32>  mUnk1fbc13;
    ::ll::UntypedStorage<8, 32>  mUnkfd64a2;
    ::ll::UntypedStorage<8, 24>  mUnke56e24;
    ::ll::UntypedStorage<8, 24>  mUnkca1ec7;
    ::ll::UntypedStorage<8, 16>  mUnk109302;
    ::ll::UntypedStorage<8, 16>  mUnk1a97ca;
    ::ll::UntypedStorage<8, 16>  mUnkd3bebd;
    ::ll::UntypedStorage<8, 24>  mUnk31cfac;
    ::ll::UntypedStorage<4, 8>   mUnkbfd93c;
    ::ll::UntypedStorage<4, 8>   mUnke044de;
    ::ll::UntypedStorage<1, 2>   mUnk493455;
    ::ll::UntypedStorage<1, 2>   mUnkfcbed6;
    ::ll::UntypedStorage<8, 40>  mUnk708860;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchemaDescription(::cereal::SchemaDescription&&);

    MCNAPI SchemaDescription(::cereal::SchemaDescription const&);

    MCNAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription&&);

    MCNAPI ::cereal::SchemaDescription& operator=(::cereal::SchemaDescription const&);

    MCNAPI ~SchemaDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::SchemaDescription&&);

    MCNAPI void* $ctor(::cereal::SchemaDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
