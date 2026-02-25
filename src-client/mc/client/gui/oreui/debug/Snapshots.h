#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/debug/MemorySnapshot.h"
#include "mc/client/gui/oreui/debug/SystemCacheSnapshot.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct BufferSnapshot; }
namespace OreUI { struct ViewCacheSnapshot; }
// clang-format on

namespace OreUI {

struct Snapshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::MemorySnapshot>                  mMemory;
    ::ll::TypedStorage<4, 16, ::OreUI::SystemCacheSnapshot>              mSystemCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::ViewCacheSnapshot>> mViewCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::BufferSnapshot>>    mVertexBuffers;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::BufferSnapshot>>    mIndexBuffers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Snapshots();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
