#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class SimpleBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    SimpleBlockVolumeIterator& operator=(SimpleBlockVolumeIterator const&);
    SimpleBlockVolumeIterator(SimpleBlockVolumeIterator const&);
    SimpleBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimpleBlockVolumeIterator() = default;

    // vIndex: 2
    virtual bool isValid() const;

    MCAPI SimpleBlockVolumeIterator(class SimpleBlockVolume const& vol, bool begin);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool isValid$() const;

    // NOLINTEND
};
