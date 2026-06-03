#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/MemoryWriter.h"
#include "mc/external/bx/StaticMemoryBlock.h"

namespace bx {

class StaticMemoryBlockWriter : public ::bx::MemoryWriter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::bx::StaticMemoryBlock> m_smb;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticMemoryBlockWriter() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForWriterI();

    MCNAPI static void** $vftableForSeekerI();
    // NOLINTEND
};

} // namespace bx
