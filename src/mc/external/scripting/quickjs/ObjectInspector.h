#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/script_engine/IObjectInspector.h"

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
    // vIndex: 0
    virtual ~ObjectInspector() = default;

    // vIndex: 1
    virtual bool isSameObject(struct Scripting::ObjectHandle handleA, struct Scripting::ObjectHandle handleB) const;

    // vIndex: 2
    virtual bool
    hasBooleanPropertyValue(struct Scripting::ObjectHandle handle, char const* name, bool expectedValue) const;

    // vIndex: 3
    virtual std::optional<class Scripting::ResultAny>
    getPropertyValue(struct Scripting::ObjectHandle handle, char const* name, entt::meta_type expectedType) const;

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
