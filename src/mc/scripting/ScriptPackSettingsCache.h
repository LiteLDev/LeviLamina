#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
struct PackSettingValueAndDefault;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class UUID; }
// clang-format on

class ScriptPackSettingsCache {
public:
    // ScriptPackSettingsCache inner types declare
    // clang-format off
    struct CachedSettingsByPackId;
    // clang-format on

    // ScriptPackSettingsCache inner types define
    struct CachedSettingsByPackId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk7a2899;
        ::ll::UntypedStorage<8, 64>  mUnke76e71;
        ::ll::UntypedStorage<8, 128> mUnkae0db6;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedSettingsByPackId& operator=(CachedSettingsByPackId const&);
        CachedSettingsByPackId(CachedSettingsByPackId const&);
        CachedSettingsByPackId();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CachedSettingsByPackId(
            ::mce::UUID                                                       packId,
            ::std::unordered_map<::std::string, ::PackSettingValueAndDefault> values
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::mce::UUID packId, ::std::unordered_map<::std::string, ::PackSettingValueAndDefault> values);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk46e21e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPackSettingsCache& operator=(ScriptPackSettingsCache const&);
    ScriptPackSettingsCache(ScriptPackSettingsCache const&);
    ScriptPackSettingsCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
        ::mce::UUID                                                                                    packId,
        ::std::function<void(::std::string const&, ::std::variant<float, bool, ::std::string> const&)> callback
    );
    // NOLINTEND
};
