#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
struct PackSettingValueAndDefault;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace SharedTypes::v1_21_100::PackSettingsDefinition { struct Document; }
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
        ::ll::UntypedStorage<4, 4> mUnk458fcb;
        ::ll::UntypedStorage<4, 4> mUnk3d0772;
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
    ::ll::TypedStorage<8, 8, uint64 const>                       mMaxGlobalPackSettingEntriesPerFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mGlobalPackSettingsPath;
    ::ll::TypedStorage<4, 16, ::PackSettingsFactory::Stats>      mStats;
    ::ll::TypedStorage<8, 128, ::cereal::ReflectionCtx>          mReflectionCtx;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_100::PackSettingsDefinition::Document,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>
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
        8,
        ::std::unique_ptr<::std::unordered_map<
            ::mce::UUID,
            ::std::unique_ptr<::PackSettings, ::std::default_delete<::PackSettings>>>>>
        mGlobalPackSettings;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>>>
        mWorldPackSettings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>
        mGlobalUserOverrides;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::std::unique_ptr<::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>>
        mPerWorldUserOverrides;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSettingsFactory() = default;

    virtual uint64 getAccessTimestamp() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PackSettingsFactory(uint64 maxGlobalPackSettingEntriesPerFile, ::std::optional<::Core::PathView> globalPathRoot);

    MCAPI ::PackSettings* _getGlobalPackSettings(::PackManifest const& manifest);

    MCAPI ::PackSettings* _getWorldPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);

    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);

    MCAPI bool loadPerWorldUserOverrides(::std::string const& worldId, ::Core::Path const& worldPath);

#ifdef LL_PLAT_C
    MCAPI bool saveGlobalUserOverrides();

    MCAPI bool savePerWorldUserOverrides(::std::string const& worldId, ::Core::Path const& worldPath);

    MCAPI ::std::string serializePackSettingsNameValueMap(
        ::std::unordered_map<::std::string, ::PackSettingValueAndDefault> const& packSettingsNameValueMap
    ) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint64 maxGlobalPackSettingEntriesPerFile, ::std::optional<::Core::PathView> globalPathRoot);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
