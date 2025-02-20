#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkPos;
// clang-format on

class BlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockVolumeBase();

    // vIndex: 1
    virtual ::BoundingBox getBoundingBox() const = 0;

    // vIndex: 2
    virtual ::BlockPos getMin() const = 0;

    // vIndex: 3
    virtual ::BlockPos getMax() const = 0;

    // vIndex: 4
    virtual ::glm::ivec3 getSpan() const = 0;

    // vIndex: 5
    virtual int getCapacity() const = 0;

    // vIndex: 6
    virtual bool isInside(::BlockPos const&) const = 0;

    // vIndex: 7
    virtual void translate(::BlockPos const&) = 0;

    // vIndex: 8
    virtual void forEach(::std::function<bool(::BlockPos const&)>) const = 0;

    // vIndex: 9
    virtual ::std::set<::ChunkPos> getChunks() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
