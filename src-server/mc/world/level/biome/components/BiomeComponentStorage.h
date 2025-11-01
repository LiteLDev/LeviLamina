#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
struct BiomeComponentBase;
// clang-format on

class BiomeComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Bedrock::typeid_t<void>, ::std::unique_ptr<::BiomeComponentBase>>>> mComponentList;
    ::ll::TypedStorage<1, 1, bool> mAllowAddingComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _removeComponent(::Bedrock::typeid_t<void> typeId);

    MCAPI ~BiomeComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
