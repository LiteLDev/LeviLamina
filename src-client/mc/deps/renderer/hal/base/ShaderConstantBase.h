#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/ShaderPrimitiveTypes.h"

namespace mce {

class ShaderConstantBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>              name;
    ::ll::TypedStorage<4, 4, uint>                        numberOfElements;
    ::ll::TypedStorage<4, 4, uint>                        byteOffset;
    ::ll::TypedStorage<1, 1, ::mce::ShaderPrimitiveTypes> shaderPrimitiveType;
    ::ll::TypedStorage<1, 1, bool>                        dirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShaderConstantBase();

    virtual void syncUniform(int uniformLocation, int elementCount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $syncUniform(int uniformLocation, int elementCount);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
