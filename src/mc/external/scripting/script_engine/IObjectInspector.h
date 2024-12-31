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
    // prevent constructor by default
    IObjectInspector& operator=(IObjectInspector const&);
    IObjectInspector(IObjectInspector const&);
    IObjectInspector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IObjectInspector() = default;

    // vIndex: 1
    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const = 0;

    // vIndex: 2
    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const = 0;

    // vIndex: 3
    virtual ::std::optional<::Scripting::ResultAny>
    getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type) const = 0;

    // vIndex: 4
    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const = 0;

    // vIndex: 5
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const = 0;

    // vIndex: 6
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const = 0;
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
