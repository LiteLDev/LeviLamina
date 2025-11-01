#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class Release; }
// clang-format on

namespace Scripting {

class TypeMapBuilder : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk6b7937;
    ::ll::UntypedStorage<8, 160> mUnk411221;
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
    MCNAPI TypeMapBuilder(
        ::std::string const& typeMapName_,
        ::std::string const& keyConstantName_,
        ::entt::meta_type    baseClassType_
    );

    MCNAPI void mapping(
        ::std::string const&                       keyName,
        ::std::string const&                       className,
        ::std::vector<::Scripting::Release> const& classReleases,
        ::std::vector<::Scripting::Release> const& keyReleases
    );

    MCNAPI ~TypeMapBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& typeMapName_, ::std::string const& keyConstantName_, ::entt::meta_type baseClassType_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
