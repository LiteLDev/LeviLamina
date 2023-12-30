#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

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
    // vIndex: 0, symbol: __gen_??1ObjectFactory@QuickJS@Scripting@@UEAA@XZ
    virtual ~ObjectFactory() = default;

    // vIndex: 1, symbol:
    // ?makePromise@ObjectFactory@QuickJS@Scripting@@UEAA?AV?$StrongTypedObjectHandle@UPromiseType@Scripting@@@3@XZ
    virtual class Scripting::StrongTypedObjectHandle<struct Scripting::PromiseType> makePromise();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
