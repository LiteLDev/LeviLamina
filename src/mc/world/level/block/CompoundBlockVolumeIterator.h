#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class CompoundBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    CompoundBlockVolumeIterator& operator=(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator(CompoundBlockVolumeIterator const&);
    CompoundBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompoundBlockVolumeIterator() = default;

    // vIndex: 1
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2
    virtual bool isValid() const;

    // vIndex: 3
    virtual void _begin();

    // vIndex: 4
    virtual void _end();

    MCAPI CompoundBlockVolumeIterator(class CompoundBlockVolume const& vol, bool begin);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _begin$();

    MCAPI void _end$();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
