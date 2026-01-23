#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IStructureWireframeQueue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructureWireframeQueue() = default;

    virtual void queue(::BlockPos const&, ::BlockPos const&, ::BlockPos const&) = 0;

    virtual void dequeue(::BlockPos const&) = 0;

    virtual bool isQueued(::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
