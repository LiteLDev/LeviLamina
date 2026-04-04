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

    virtual void queue(::BlockPos const& key, ::BlockPos const& pos, ::BlockPos const& boundingBox) = 0;

    virtual void dequeue(::BlockPos const& key) = 0;

    virtual bool isQueued(::BlockPos const& key) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
