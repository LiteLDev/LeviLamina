#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IObjectInspector.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IObjectInspector; }
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectInspector : public ::Scripting::IObjectInspector {
public:
    // prevent constructor by default
    ObjectInspector& operator=(ObjectInspector const&);
    ObjectInspector(ObjectInspector const&);
    ObjectInspector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ObjectInspector@QuickJS@Scripting@@UEAA@XZ
    virtual ~ObjectInspector() = default;

    // vIndex: 1, symbol: ?isSameObject@ObjectInspector@QuickJS@Scripting@@UEBA_NUObjectHandle@3@0@Z
    virtual bool isSameObject(struct Scripting::ObjectHandle, struct Scripting::ObjectHandle) const;

    // vIndex: 2, symbol: ?hasBooleanPropertyValue@ObjectInspector@QuickJS@Scripting@@UEBA_NUObjectHandle@3@PEBD_N@Z
    virtual bool hasBooleanPropertyValue(struct Scripting::ObjectHandle, char const*, bool) const;

    // vIndex: 3, symbol:
    // ?getPropertyValue@ObjectInspector@QuickJS@Scripting@@UEBA?AV?$optional@VResultAny@Scripting@@@std@@UObjectHandle@3@PEBDVmeta_type@entt@@@Z
    virtual std::optional<class Scripting::ResultAny>
    getPropertyValue(struct Scripting::ObjectHandle, char const*, entt::meta_type) const;

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
