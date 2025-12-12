#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class IObjectInspector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IObjectInspector() = default;

    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const = 0;

    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const = 0;

    virtual ::std::optional<::Scripting::ResultAny>
    getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const = 0;

    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const = 0;

    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const = 0;

    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
