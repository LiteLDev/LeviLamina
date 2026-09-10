#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptDebuggerMessages {

struct ScriptDebuggerPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke55e60;
    ::ll::UntypedStorage<8, 72> mUnkdf880f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerPacket& operator=(ScriptDebuggerPacket const&);
    ScriptDebuggerPacket(ScriptDebuggerPacket const&);
    ScriptDebuggerPacket();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool deserialize(::std::string const& rawData, ::cereal::ReflectionCtx const& cerealContext);

    MCNAPI ~ScriptDebuggerPacket();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
