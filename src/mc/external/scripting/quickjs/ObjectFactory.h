#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectFactory {
public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory(ObjectFactory const&);
    ObjectFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ObjectFactory() = default;

    // vIndex: 1
    virtual class Scripting::StrongTypedObjectHandle<struct Scripting::PromiseType> makePromise();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
