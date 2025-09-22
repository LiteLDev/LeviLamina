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
    ::ll::UntypedStorage<1, 2>  mUnk3634b1;
    ::ll::UntypedStorage<8, 40> mUnkd825b8;
    ::ll::UntypedStorage<8, 32> mUnkb0af5c;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessage(LogMessage const&);
    LogMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LogMessage(::Editor::LogMessage&&);

    MCNAPI ::Editor::LogMessage& operator=(::Editor::LogMessage const&);

    MCNAPI ::Editor::LogMessage& operator=(::Editor::LogMessage&&);

    MCNAPI ~LogMessage();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::LogMessage&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
