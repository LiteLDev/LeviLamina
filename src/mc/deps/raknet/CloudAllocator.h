#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudQueryRow; }
// clang-format on

namespace RakNet {

class CloudAllocator {
public:
    // prevent constructor by default
    CloudAllocator& operator=(CloudAllocator const&);
    CloudAllocator(CloudAllocator const&);
    CloudAllocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloudAllocator();

    // vIndex: 1
    virtual ::RakNet::CloudQueryRow* AllocateCloudQueryRow();

    // vIndex: 2
    virtual void DeallocateCloudQueryRow(::RakNet::CloudQueryRow*);

    // vIndex: 3
    virtual uchar* AllocateRowData(uint);

    // vIndex: 4
    virtual void DeallocateRowData(void*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::RakNet::CloudQueryRow* $AllocateCloudQueryRow();

    MCAPI void $DeallocateCloudQueryRow(::RakNet::CloudQueryRow*);

    MCAPI uchar* $AllocateRowData(uint);

    MCAPI void $DeallocateRowData(void*);
    // NOLINTEND
};

} // namespace RakNet
