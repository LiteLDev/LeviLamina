#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
class ICommandsContextProvider;
// clang-format on

struct MinecraftCommandsArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>            mContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry>&&> mRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommandsArguments& operator=(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments(MinecraftCommandsArguments const&);
    MinecraftCommandsArguments();
};
