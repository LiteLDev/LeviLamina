#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/dimension/DimensionIdType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

class DimensionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DimensionRegistry inner types define
    using size_type = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::DimensionIdType, ::OwnerPtr<::Dimension>>> mDimensions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DimensionRegistry();

    MCAPI ::WeakRef<::Dimension> registerDimension(::DimensionIdType id, ::OwnerPtr<::Dimension> dimension);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
