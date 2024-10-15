#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ListBlockVolumeIterator() = default;

    // vIndex: 1
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2
    virtual bool isValid() const;

    // vIndex: 3
    virtual void _begin();

    // vIndex: 4
    virtual void _end();

    MCAPI ListBlockVolumeIterator(
        class ListBlockVolume const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        bool
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ListBlockVolume const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        bool
    );

    MCAPI void _begin$();

    MCAPI void _end$();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
