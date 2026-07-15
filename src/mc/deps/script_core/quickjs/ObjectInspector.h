#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/script_engine/scripting/IObjectInspector.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectInspector : public ::Scripting::IObjectInspector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfcc24f;
    ::ll::UntypedStorage<8, 8>  mUnk78ab83;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectInspector& operator=(ObjectInspector const&);
    ObjectInspector(ObjectInspector const&);
    ObjectInspector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ObjectInspector() /*override*/ = default;

    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const /*override*/;

    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const /*override*/;

    virtual ::std::optional<::Scripting::ResultAny>
    getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const /*override*/;

    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const /*override*/;

    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const /*override*/;

    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::QuickJS
