#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentParameterCacheHandle.h"

struct ItemCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle, ::cereal::DynamicValue>>
        mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemCustomComponentData& operator=(ItemCustomComponentData const&);
    ItemCustomComponentData(ItemCustomComponentData const&);
    ItemCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ItemCustomComponentData& operator=(::ItemCustomComponentData&&);

    MCAPI ~ItemCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
