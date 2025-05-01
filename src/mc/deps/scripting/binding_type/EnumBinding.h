#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ConstantFactory; }
// clang-format on

namespace Scripting {

struct EnumBinding : public ::Scripting::TaggedBinding {
public:
    // EnumBinding inner types declare
    // clang-format off
    struct EnumValue;
    // clang-format on

    // EnumBinding inner types define
    struct EnumValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnkcdb13f;
        ::ll::UntypedStorage<8, 32>  mUnk1082a9;
        ::ll::UntypedStorage<8, 192> mUnka386bd;
        // NOLINTEND

    public:
        // prevent constructor by default
        EnumValue& operator=(EnumValue const&);
        EnumValue(EnumValue const&);
        EnumValue();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EnumValue();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk34df93;
    ::ll::UntypedStorage<8, 144> mUnkf0e553;
    ::ll::UntypedStorage<1, 1>   mUnk4e5d4f;
    ::ll::UntypedStorage<8, 24>  mUnk2cdc0c;
    ::ll::UntypedStorage<8, 24>  mUnk274594;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumBinding& operator=(EnumBinding const&);
    EnumBinding(EnumBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnumBinding();

    MCNAPI EnumBinding(::Scripting::EnumBinding&&);

    MCNAPI EnumBinding(
        ::std::string                                      name_,
        ::entt::meta_type                                  type_,
        bool                                               isStringEnum_,
        ::std::vector<::Scripting::ConstantFactory>        constants_,
        ::std::vector<::Scripting::EnumBinding::EnumValue> valueMap_
    );

    MCNAPI ~EnumBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::EnumBinding&&);

    MCNAPI void* $ctor(
        ::std::string                                      name_,
        ::entt::meta_type                                  type_,
        bool                                               isStringEnum_,
        ::std::vector<::Scripting::ConstantFactory>        constants_,
        ::std::vector<::Scripting::EnumBinding::EnumValue> valueMap_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
