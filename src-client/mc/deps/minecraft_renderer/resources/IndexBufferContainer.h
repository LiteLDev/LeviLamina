#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct BufferResourceService; }
// clang-format on

namespace mce {

class IndexBufferContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4020f2;
    ::ll::UntypedStorage<4, 4>  mUnke8c3a1;
    ::ll::UntypedStorage<4, 4>  mUnkcdebe6;
    ::ll::UntypedStorage<4, 4>  mUnk22efce;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexBufferContainer& operator=(IndexBufferContainer const&);
    IndexBufferContainer(IndexBufferContainer const&);
    IndexBufferContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadIndexBuffer(
        ::mce::BufferResourceService& bufferResourceService,
        uint                          stride,
        uchar const* const            data,
        uint                          count,
        ::std::string_view            debugName
    );

    MCNAPI ~IndexBufferContainer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
