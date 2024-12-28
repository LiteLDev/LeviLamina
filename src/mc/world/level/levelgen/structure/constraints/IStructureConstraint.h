#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class IStructureConstraint {
public:
    // prevent constructor by default
    IStructureConstraint& operator=(IStructureConstraint const&);
    IStructureConstraint(IStructureConstraint const&);
    IStructureConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IStructureConstraint();

    // vIndex: 1
    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
