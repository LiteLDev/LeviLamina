#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/ILifetimeObjectListener.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCounter : public ::Scripting::ILifetimeObjectListener {
public:
    // HandleCounter inner types declare
    // clang-format off
    struct TypeStats;
    // clang-format on

    // HandleCounter inner types define
    struct TypeStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk937371;
        ::ll::UntypedStorage<4, 4> mUnkdecf81;
        ::ll::UntypedStorage<4, 4> mUnk6fa479;
        ::ll::UntypedStorage<4, 4> mUnk4ffda2;
        ::ll::UntypedStorage<8, 8> mUnk745a02;
        ::ll::UntypedStorage<8, 8> mUnk273bf2;
        // NOLINTEND

    public:
        // prevent constructor by default
        TypeStats& operator=(TypeStats const&);
        TypeStats(TypeStats const&);
        TypeStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1aeee9;
    ::ll::UntypedStorage<8, 24> mUnk1d5b48;
    // NOLINTEND

public:
    // prevent constructor by default
    HandleCounter& operator=(HandleCounter const&);
    HandleCounter(HandleCounter const&);
    HandleCounter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onMakeObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    virtual void onDestroyObject(
        ::Scripting::LifetimeRegistry&,
        ::Scripting::ObjectHandle,
        ::entt::meta_type const&,
        uint
    ) /*override*/;

    virtual ~HandleCounter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting
