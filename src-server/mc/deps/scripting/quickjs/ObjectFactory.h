#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/script_engine/IObjectFactory.h"

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
    ::ll::UntypedStorage<8, 8> mUnk282d2d;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory(ObjectFactory const&);
    ObjectFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> makePromise() /*override*/;

    // vIndex: 2
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> makeDataBuffer(uchar const* data, uint64 size, ::entt::meta_type const& dataType) /*override*/;

    // vIndex: 0
    virtual ~ObjectFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> $makePromise();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType> $makeDataBuffer(uchar const* data, uint64 size, ::entt::meta_type const& dataType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
