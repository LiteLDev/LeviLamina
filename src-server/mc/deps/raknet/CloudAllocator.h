#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudQueryRow; }
// clang-format on

namespace RakNet {

class CloudAllocator {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloudAllocator() = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
