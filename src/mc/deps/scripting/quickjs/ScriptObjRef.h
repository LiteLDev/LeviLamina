#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/IScriptRef.h"

// auto generated forward declare list
// clang-format off
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

class ScriptObjRef : public ::Scripting::IScriptRef {
public:
    // ScriptObjRef inner types declare
    // clang-format off
    struct GeneratorData;
    struct PromiseData;
    // clang-format on

    // ScriptObjRef inner types define
    struct GeneratorData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk2b5b0c;
        // NOLINTEND

    public:
        // prevent constructor by default
        GeneratorData& operator=(GeneratorData const&);
        GeneratorData(GeneratorData const&);
        GeneratorData();
    };

    struct PromiseData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk71b30f;
        ::ll::UntypedStorage<8, 16> mUnk1c1bd6;
        // NOLINTEND

    public:
        // prevent constructor by default
        PromiseData& operator=(PromiseData const&);
        PromiseData(PromiseData const&);
        PromiseData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk60fd4e;
    ::ll::UntypedStorage<8, 16> mUnke0e095;
    ::ll::UntypedStorage<8, 40> mUnk50ff94;
    ::ll::UntypedStorage<1, 1>  mUnke9ae49;
    ::ll::UntypedStorage<1, 1>  mUnk7fb67c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObjRef& operator=(ScriptObjRef const&);
    ScriptObjRef(ScriptObjRef const&);
    ScriptObjRef();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptObjRef() /*override*/ = default;

    // vIndex: 1
    virtual void onReduceToSingleOwner() /*override*/;

    // vIndex: 2
    virtual void onPromoteToMultipleOwners() /*override*/;

    // vIndex: 3
    virtual void onFinalize() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void pin();

    MCNAPI ::std::array<::JSValue, 3> release();

    MCNAPI void unpin();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReduceToSingleOwner();

    MCNAPI void $onPromoteToMultipleOwners();

    MCNAPI void $onFinalize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
