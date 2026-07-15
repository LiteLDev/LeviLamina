#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

class TypeMapBuilder : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6418c;
    ::ll::UntypedStorage<8, 16> mUnk411221;
    ::ll::UntypedStorage<8, 80> mUnkfd221a;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapBuilder& operator=(TypeMapBuilder const&);
    TypeMapBuilder(TypeMapBuilder const&);
    TypeMapBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TypeMapBuilder(
        ::std::string const& typeMapName_,
        ::std::string const& keyConstantName_,
        ::entt::meta_type    baseClassType_
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& typeMapName_, ::std::string const& keyConstantName_, ::entt::meta_type baseClassType_);
    // NOLINTEND
};

} // namespace Scripting
