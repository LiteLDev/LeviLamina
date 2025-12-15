#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class ConstantBufferConstantsBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2df460;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantBufferConstantsBase& operator=(ConstantBufferConstantsBase const&);
    ConstantBufferConstantsBase(ConstantBufferConstantsBase const&);
    ConstantBufferConstantsBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConstantBufferConstantsBase() = default;

    virtual void init() = 0;
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
