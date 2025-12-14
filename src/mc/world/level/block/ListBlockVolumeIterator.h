#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BaseBlockLocationIterator.h"

// auto generated forward declare list
// clang-format off
class ListBlockVolume;
// clang-format on

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ListBlockVolume const&> mListBlockVolume;
    ::ll::TypedStorage<8, 8, ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::BlockPos>>>>
        mCurrentIterator;
    ::ll::TypedStorage<8, 8, ::std::_List_const_iterator<::std::_List_val<::std::_List_simple_types<::BlockPos>>>>
                                     mEndIterator;
    ::ll::TypedStorage<8, 8, uint64> mChangeCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ListBlockVolumeIterator() /*override*/ = default;

    virtual ::BaseBlockLocationIterator& operator++() /*override*/;

    virtual bool isValid() const /*override*/;

    virtual void _begin() /*override*/;

    virtual void _end() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;

    MCAPI void $_begin();

    MCAPI void $_end();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
