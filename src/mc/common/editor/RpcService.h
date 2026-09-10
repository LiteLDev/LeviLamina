#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Rpc { struct RpcRejection; }
namespace Scripting { struct ModuleBinding; }
namespace cereal { class BasicLoader; }
namespace cereal { class BasicSaver; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
// clang-format on

namespace Editor::Rpc {

class RpcService {
public:
    // RpcService inner types declare
    // clang-format off
    struct DispatchTarget;
    // clang-format on

    // RpcService inner types define
    struct DispatchTarget {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb6d958;
        ::ll::UntypedStorage<8, 16> mUnk6ecac0;
        // NOLINTEND

    public:
        // prevent constructor by default
        DispatchTarget& operator=(DispatchTarget const&);
        DispatchTarget(DispatchTarget const&);
        DispatchTarget();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk8d364d;
    ::ll::UntypedStorage<8, 24> mUnk7903ba;
    ::ll::UntypedStorage<8, 64> mUnkb11d2c;
    ::ll::UntypedStorage<8, 64> mUnk7d645e;
    ::ll::UntypedStorage<8, 8>  mUnka1c91e;
    ::ll::UntypedStorage<8, 64> mUnkb36584;
    ::ll::UntypedStorage<8, 64> mUnka0d980;
    ::ll::UntypedStorage<8, 64> mUnkcc85d1;
    ::ll::UntypedStorage<8, 64> mUnka827e5;
    ::ll::UntypedStorage<8, 64> mUnkc0de0a;
    ::ll::UntypedStorage<8, 8>  mUnkc59500;
    ::ll::UntypedStorage<8, 16> mUnka96cf8;
    ::ll::UntypedStorage<8, 16> mUnk83af5a;
    ::ll::UntypedStorage<8, 16> mUnkc3345e;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcService& operator=(RpcService const&);
    RpcService(RpcService const&);
    RpcService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RpcService(::Editor::ServiceProviderCollection& serviceProviders);

    MCNAPI bool _saveResult(
        ::entt::meta_type       type,
        ::cereal::BasicSaver&   saver,
        ::cereal::SchemaWriter& writer,
        ::entt::meta_any const& any
    ) const;

    MCNAPI void callWithCallback(
        ::std::string const&                                              className,
        ::std::string const&                                              methodName,
        ::std::string const&                                              serializedArgs,
        ::std::function<void(::Editor::Rpc::RpcRejection, ::std::string)> callback
    );

    MCNAPI void registerModule(::Scripting::ModuleBinding&& moduleBinding, ::std::string subsystem);

    MCNAPI void shutdown();

    MCNAPI ~RpcService();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Rpc
