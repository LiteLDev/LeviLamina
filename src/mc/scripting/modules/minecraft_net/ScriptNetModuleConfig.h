#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetModuleConfig {
public:
    // ScriptNetModuleConfig inner types define
    enum class NetType : int {
        Http      = 0,
        WebSocket = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca2a65;
    ::ll::UntypedStorage<1, 2>  mUnka8f2de;
    ::ll::UntypedStorage<4, 8>  mUnk6d2d69;
    ::ll::UntypedStorage<4, 8>  mUnk68ca5d;
    ::ll::UntypedStorage<2, 4>  mUnke6462e;
    ::ll::UntypedStorage<8, 72> mUnk369b95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetModuleConfig& operator=(ScriptNetModuleConfig const&);
    ScriptNetModuleConfig(ScriptNetModuleConfig const&);
    ScriptNetModuleConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetModuleConfig&
    operator=(::ScriptModuleMinecraftNet::ScriptNetModuleConfig&&);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
        ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
        ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>
    validateUriWithConfig(
        ::std::string const&                                       uri,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig::NetType type
    ) const;

    MCNAPI ~ScriptNetModuleConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::nonstd::expected<::ScriptModuleMinecraftNet::ScriptNetModuleConfig, ::std::string>
    fromJson(::Json::Value data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
