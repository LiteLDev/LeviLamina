#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BoundingBox;
class ChunkPos;
// clang-format on

class BlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockVolumeBase();

    virtual ::BoundingBox getBoundingBox() const = 0;

    virtual ::BlockPos getMin() const = 0;

    virtual ::BlockPos getMax() const = 0;

    virtual ::glm::ivec3 getSpan() const = 0;

    virtual int getCapacity() const = 0;

    virtual bool isInside(::BlockPos const&) const = 0;

    virtual void translate(::BlockPos const&) = 0;

    virtual void forEach(::std::function<bool(::BlockPos const&)>) const = 0;

    virtual ::std::set<::ChunkPos> getChunks() const = 0;

    virtual ::std::unordered_set<::BlockPos> getFlattenedBlockPositions() const = 0;

    virtual ::std::unique_ptr<::BaseBlockLocationIterator> getIterator() const = 0;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
