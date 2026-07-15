#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
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
    ::ll::UntypedStorage<4, 8>  mUnk793c6c;
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

    MCNAPI ~ScriptNetModuleConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
