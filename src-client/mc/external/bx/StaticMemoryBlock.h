#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/MemoryBlockI.h"

namespace bx {

class StaticMemoryBlock : public ::bx::MemoryBlockI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> m_data;
    ::ll::TypedStorage<4, 4, uint>  m_size;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticMemoryBlock() = default;

    virtual void* more(uint _size) /*override*/;

    virtual uint getSize() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void* $more(uint _size);

    MCFOLD uint $getSize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bx
