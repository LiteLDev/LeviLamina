#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BaseBlockLocationIterator.h"

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ListBlockVolumeIterator@@UEAA@XZ
    virtual ~ListBlockVolumeIterator() = default;

    // vIndex: 1, symbol: ??EListBlockVolumeIterator@@UEAAAEAVBaseBlockLocationIterator@@XZ
    virtual class BaseBlockLocationIterator& operator++();

    // vIndex: 2, symbol: ?isValid@ListBlockVolumeIterator@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 3, symbol: ?_begin@ListBlockVolumeIterator@@EEAAXXZ
    virtual void _begin();

    // vIndex: 4, symbol: ?_end@ListBlockVolumeIterator@@EEAAXXZ
    virtual void _end();

    // symbol:
    // ??0ListBlockVolumeIterator@@QEAA@AEBVListBlockVolume@@AEBV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@VBlockPos@@@std@@@std@@@std@@1_N@Z
    MCAPI ListBlockVolumeIterator(
        class ListBlockVolume const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<class BlockPos>>> const&,
        bool
    );

    // NOLINTEND
};
