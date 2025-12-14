#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/BindingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftBindingFactoryMap : public ::BindingFactoryMap {
public:
    // MinecraftBindingFactoryMap inner types declare
    // clang-format off
    struct NullBindingFactory;
    // clang-format on

    // MinecraftBindingFactoryMap inner types define
    struct NullBindingFactory {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const>> mCIDToClientMap;
    ::ll::TypedStorage<1, 8, ::MinecraftBindingFactoryMap::NullBindingFactory const>          mNullBindingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BindingFactory const& getBindingFactory(int controllerId) const /*override*/;

    virtual ~MinecraftBindingFactoryMap() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BindingFactory const& $getBindingFactory(int controllerId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
