#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/runtime/Result.h"

namespace Editor::Services {

class IEditorService : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IEditorService inner types define
    enum class State : int {
        Uninitialized = 0,
        Initialized   = 1,
        Ready         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc8874b;
    ::ll::UntypedStorage<4, 4> mUnk93c97e;
    // NOLINTEND

public:
    // prevent constructor by default
    IEditorService& operator=(IEditorService const&);
    IEditorService(IEditorService const&);
    IEditorService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEditorService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() = 0;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready();

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() = 0;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const = 0;

    // vIndex: 5
    virtual bool isServiceInitialized() const;

    // vIndex: 6
    virtual bool isServiceReady() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $ready();

    MCNAPI bool $isServiceInitialized() const;

    MCNAPI bool $isServiceReady() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
