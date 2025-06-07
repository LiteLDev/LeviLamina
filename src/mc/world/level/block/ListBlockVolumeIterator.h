#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BaseBlockLocationIterator.h"

class ListBlockVolumeIterator : public ::BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk32f57d;
    ::ll::UntypedStorage<8, 8> mUnkf4343d;
    ::ll::UntypedStorage<8, 8> mUnkeb63cd;
    ::ll::UntypedStorage<8, 8> mUnkf7eb1b;
    // NOLINTEND

public:
    // prevent constructor by default
    ListBlockVolumeIterator& operator=(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator(ListBlockVolumeIterator const&);
    ListBlockVolumeIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ListBlockVolumeIterator() /*override*/ = default;

    // vIndex: 3
    virtual ::BaseBlockLocationIterator& operator++() /*override*/;

    // vIndex: 4
    virtual bool isValid() const /*override*/;

    // vIndex: 5
    virtual void _begin() /*override*/;

    // vIndex: 6
    virtual void _end() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;

    MCNAPI void $_begin();

    MCNAPI void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
