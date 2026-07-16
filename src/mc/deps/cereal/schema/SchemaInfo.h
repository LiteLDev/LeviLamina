#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ReflectedType.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                               mId;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>> mType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mDescription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SchemaInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
