#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct IteratorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk1afcd4;
    ::ll::UntypedStorage<8, 16>  mUnkb3a8f1;
    ::ll::UntypedStorage<8, 16>  mUnk6d4a21;
    ::ll::UntypedStorage<8, 16>  mUnk947f9a;
    ::ll::UntypedStorage<8, 144> mUnk5f052a;
    ::ll::UntypedStorage<8, 8>   mUnkcaebdd;
    ::ll::UntypedStorage<8, 16>  mUnk54998d;
    ::ll::UntypedStorage<8, 32>  mUnk2f9c97;
    // NOLINTEND

public:
    // prevent constructor by default
    IteratorBinding& operator=(IteratorBinding const&);
    IteratorBinding(IteratorBinding const&);
    IteratorBinding();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IteratorBinding();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IteratorBinding(
        ::std::string                                         iteratorClassName,
        ::std::shared_ptr<::Scripting::Reflection::IFunction> nextCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string iteratorClassName, ::std::shared_ptr<::Scripting::Reflection::IFunction> nextCallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
