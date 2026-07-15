#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/IObjectFactory.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct DataBufferHandleType; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectFactory : public ::Scripting::IObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7c0899;
    ::ll::UntypedStorage<8, 8>  mUnk282d2d;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory(ObjectFactory const&);
    ObjectFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> makePromise() /*override*/;

    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType>
    makeDataBuffer(uchar const*, uint64, ::entt::meta_type const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::QuickJS
