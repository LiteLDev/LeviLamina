#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentParameterCacheHandle.h"

struct BlockCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 80, ::std::variant<::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle, ::cereal::DynamicValue>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentData(BlockCustomComponentData const&);
    BlockCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BlockCustomComponentData& operator=(::BlockCustomComponentData&&);

    MCAPI ::BlockCustomComponentData& operator=(::BlockCustomComponentData const&);

    MCAPI ~BlockCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
