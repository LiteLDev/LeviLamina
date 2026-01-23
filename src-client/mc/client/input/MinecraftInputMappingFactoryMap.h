#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMappingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class InputMappingFactory;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftInputMappingFactoryMap : public ::InputMappingFactoryMap {
public:
    // MinecraftInputMappingFactoryMap inner types declare
    // clang-format off
    struct NullInputMappingFactory;
    // clang-format on

    // MinecraftInputMappingFactoryMap inner types define
    struct NullInputMappingFactory {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const> const> mCIDToClientMap;
    ::ll::TypedStorage<8, 728, ::MinecraftInputMappingFactoryMap::NullInputMappingFactory> mNullInputMappingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMappingFactory& getInputMappingFactory(int controllerId) /*override*/;

    virtual ~MinecraftInputMappingFactoryMap() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InputMappingFactory& $getInputMappingFactory(int controllerId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
