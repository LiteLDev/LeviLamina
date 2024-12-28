#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
namespace Scripting { struct TypeMapData; }
// clang-format on

namespace Scripting {

class TypeMapBuilder : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk6b7937;
    ::ll::UntypedStorage<8, 144> mUnk411221;
    ::ll::UntypedStorage<8, 80>  mUnkfd221a;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapBuilder& operator=(TypeMapBuilder const&);
    TypeMapBuilder(TypeMapBuilder const&);
    TypeMapBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TypeMapBuilder(
        ::std::string const& typeMapName_,
        ::std::string const& keyConstantName_,
        ::entt::meta_type    baseClassType_
    );

    MCAPI ::Scripting::TypeMapData build();

    MCAPI void mapping(
        ::std::string const&                       keyName,
        ::std::string const&                       className,
        ::std::vector<::Scripting::Release> const& classReleases,
        ::std::vector<::Scripting::Release> const& keyReleases
    );

    MCAPI ~TypeMapBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& typeMapName_, ::std::string const& keyConstantName_, ::entt::meta_type baseClassType_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
