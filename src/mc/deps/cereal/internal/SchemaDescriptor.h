#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd93b95;
    ::ll::UntypedStorage<8, 8>  mUnkdaef2a;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaDescriptor& operator=(SchemaDescriptor const&);
    SchemaDescriptor(SchemaDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchemaDescriptor();

    MCAPI SchemaDescriptor(::cereal::internal::SchemaDescriptor&&);

    MCAPI ~SchemaDescriptor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::cereal::internal::SchemaDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
