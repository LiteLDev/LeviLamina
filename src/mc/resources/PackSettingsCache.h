#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class UUID; }
// clang-format on

class PackSettingsCache {
public:
    // PackSettingsCache inner types declare
    // clang-format off
    struct CachedSettingsByPackId;
    // clang-format on

    // PackSettingsCache inner types define
    struct CachedSettingsByPackId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk907771;
        ::ll::UntypedStorage<8, 64>  mUnk3f607f;
        ::ll::UntypedStorage<8, 128> mUnkcf9cbe;
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
            ::mce::UUID                                                                     packId,
            ::std::unordered_map<::std::string, ::std::variant<float, bool, ::std::string>> values
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::mce::UUID                                                                     packId,
            ::std::unordered_map<::std::string, ::std::variant<float, bool, ::std::string>> values
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkde9b2a;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsCache& operator=(PackSettingsCache const&);
    PackSettingsCache(PackSettingsCache const&);
    PackSettingsCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
        ::mce::UUID                                                                                    packId,
        ::std::function<void(::std::string const&, ::std::variant<float, bool, ::std::string> const&)> callback
    );

    MCNAPI void updatePackSetting(
        ::mce::UUID                                       packId,
        ::std::string const&                              name,
        ::std::variant<float, bool, ::std::string> const& value
    );
    // NOLINTEND
};
