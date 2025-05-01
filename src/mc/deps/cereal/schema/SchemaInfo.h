#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkad17fc;
    ::ll::UntypedStorage<4, 8>  mUnkc4eb0b;
    ::ll::UntypedStorage<8, 40> mUnk37a8cb;
    ::ll::UntypedStorage<8, 40> mUnk2b6504;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&);
    SchemaInfo(SchemaInfo const&);
    SchemaInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::SchemaInfo& operator=(::cereal::internal::SchemaInfo&&);

    MCNAPI ~SchemaInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
