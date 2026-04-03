#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/TaggedBinding.h"

namespace Scripting {

struct TypeMapData : public ::Scripting::TaggedBinding {
public:
    // TypeMapData inner types declare
    // clang-format off
    struct Mapping;
    // clang-format on

    // TypeMapData inner types define
    struct Mapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk3735b5;
        ::ll::UntypedStorage<8, 32> mUnk677d72;
        ::ll::UntypedStorage<8, 24> mUnkd9ce6c;
        ::ll::UntypedStorage<8, 24> mUnkd8b88b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Mapping& operator=(Mapping const&);
        Mapping(Mapping const&);
        Mapping();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Mapping();
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
    ::ll::UntypedStorage<8, 32> mUnk6495ca;
    ::ll::UntypedStorage<8, 24> mUnk20f3b5;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeMapData& operator=(TypeMapData const&);
    TypeMapData(TypeMapData const&);
    TypeMapData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TypeMapData(::std::string name_, ::std::vector<::Scripting::TypeMapData::Mapping> mappings_);

    MCNAPI ~TypeMapData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name_, ::std::vector<::Scripting::TypeMapData::Mapping> mappings_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
