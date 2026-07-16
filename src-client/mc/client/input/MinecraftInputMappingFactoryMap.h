#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/InputMappingFactory.h"
#include "mc/deps/input/InputMappingFactoryMap.h"

// auto generated forward declare list
// clang-format off
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftInputMappingFactoryMap : public ::InputMappingFactoryMap {
public:
    // MinecraftInputMappingFactoryMap inner types declare
    // clang-format off
    class NullInputMappingFactory;
    // clang-format on

    // MinecraftInputMappingFactoryMap inner types define
    class NullInputMappingFactory : public ::InputMappingFactory {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 720, ::InputMapping const> mEmptyInputMapping;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::InputMapping const* getMapping(::std::string const&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const> const> mCIDToClientMap;
    ::ll::TypedStorage<8, 728, ::MinecraftInputMappingFactoryMap::NullInputMappingFactory> mNullInputMappingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMappingFactory& getInputMappingFactory(int) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
