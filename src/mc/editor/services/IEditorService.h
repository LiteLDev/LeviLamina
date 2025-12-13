#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    virtual ~IEditorService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() = 0;

    virtual ::Scripting::Result_deprecated<void> ready();

    virtual ::Scripting::Result_deprecated<void> quit() = 0;

    virtual ::std::string_view getServiceName() const = 0;

    virtual bool isServiceInitialized() const;

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
    MCNAPI ::Scripting::Result_deprecated<void> $ready();

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
