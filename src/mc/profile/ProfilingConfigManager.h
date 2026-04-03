#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::Threading { class Mutex; }
namespace Core::Profile { class ProfileGroupManager; }
// clang-format on

class ProfilingConfigManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ProfilingConfigManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // ProfilingConfigManager inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk53d76a;
        ::ll::UntypedStorage<1, 1>  mUnk232378;
        ::ll::UntypedStorage<8, 64> mUnkf8bb1c;
        ::ll::UntypedStorage<8, 80> mUnk272e6e;
        ::ll::UntypedStorage<8, 16> mUnkd2661b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void init(
            ::Core::Profile::ProfileGroupManager&    profileGroupManager,
            ::Bedrock::JSONObject::ObjectNode const& profileObject
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdd6a6c;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilingConfigManager& operator=(ProfilingConfigManager const&);
    ProfilingConfigManager(ProfilingConfigManager const&);
    ProfilingConfigManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfilingConfigManager() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Bedrock::JSONObject::ObjectNode const* getProfileObjectFromBootstrapConfig();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
