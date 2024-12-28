#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

class LogMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9428fd;
    ::ll::UntypedStorage<1, 1>  mUnke3dd3f;
    ::ll::UntypedStorage<1, 1>  mUnk7ceb69;
    ::ll::UntypedStorage<8, 24> mUnke63c1b;
    ::ll::UntypedStorage<8, 32> mUnkb0af5c;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Editor::LogMessage& operator=(::Editor::LogMessage const&);

    MCAPI ::Editor::LogMessage& operator=(::Editor::LogMessage&&);

    MCAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
