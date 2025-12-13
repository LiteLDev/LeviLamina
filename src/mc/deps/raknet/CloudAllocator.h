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
    virtual ~CloudAllocator() = default;

    virtual ::RakNet::CloudQueryRow* AllocateCloudQueryRow();

    virtual void DeallocateCloudQueryRow(::RakNet::CloudQueryRow*);

    virtual uchar* AllocateRowData(uint);

    virtual void DeallocateRowData(void*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
