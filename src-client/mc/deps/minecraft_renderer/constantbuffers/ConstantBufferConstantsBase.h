#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/constant_buffers/AlignmentAllocator.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
// clang-format on

namespace mce {

class ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> constantBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantBufferConstantsBase() = default;

    virtual void init() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<uchar, ::mce::AlignmentHelper::AlignmentAllocator<uchar, 16>> const& getBuffer() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
