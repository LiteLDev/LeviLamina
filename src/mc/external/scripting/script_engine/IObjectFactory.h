#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct DataBufferHandleType; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting {

class IObjectFactory {
public:
    // prevent constructor by default
    IObjectFactory& operator=(IObjectFactory const&);
    IObjectFactory(IObjectFactory const&);
    IObjectFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IObjectFactory() = default;

    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> makePromise() = 0;

    // vIndex: 2
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType>
    makeDataBuffer(uchar const*, uint64, ::entt::meta_type) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
