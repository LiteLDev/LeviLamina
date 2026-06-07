#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ObjectFactory : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk695cd0;
    ::ll::UntypedStorage<8, 16> mUnkac19c1;
    ::ll::UntypedStorage<8, 16> mUnkf51b36;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
    ObjectFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ObjectFactory(::Scripting::ObjectFactory const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ObjectFactory const&);
    // NOLINTEND
};

} // namespace Scripting
