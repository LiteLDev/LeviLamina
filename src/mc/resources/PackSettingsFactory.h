#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace SharedTypes::v1_21_100::PackSettingsDefinition { struct Document; }
namespace mce { class UUID; }
// clang-format on

class PackSettingsFactory {
public:
    // PackSettingsFactory inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // PackSettingsFactory inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkb937a5;
        ::ll::UntypedStorage<4, 4> mUnk914b4a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

    using PackIdToSettingsMap = ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::PackSettingsFactory::Stats> mStats;
    ::ll::TypedStorage<8, 120, ::cereal::ReflectionCtx>    mReflectionCtx;
    ::ll::TypedStorage<
        8,
        192,
        ::Puv::SlicedLoader<::SharedTypes::v1_21_100::PackSettingsDefinition::Document, nullptr_t, nullptr_t>>
        mLoader;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
        mOnChangePublisher;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>>>
        mPackSettingsByWorld;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>
        mLoadedSettingsDocByWorld;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackSettingsFactory();

    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);

    MCAPI bool loadPackSettingsFromFile(::std::string const& worldId, ::Core::Path const& worldPath);

    MCAPI ~PackSettingsFactory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& WORLD_BEHAVIOR_PACK_SETTINGS_FILENAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
