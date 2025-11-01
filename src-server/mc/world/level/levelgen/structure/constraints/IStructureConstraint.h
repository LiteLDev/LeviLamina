#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class IStructureConstraint {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IStructureConstraint() = default;

    // vIndex: 1
    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
