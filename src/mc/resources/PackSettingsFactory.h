#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/puv/SlicedLoader.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
namespace SharedTypes::v1_21_100::PackSettingsDefinition { struct Document; }
namespace mce { class UUID; }
// clang-format on

class PackSettingsFactory {
public:
    // PackSettingsFactory inner types define
    using PackIdToSettingsMap = ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::cereal::ReflectionCtx> mReflectionCtx;
    ::ll::TypedStorage<
        8,
        192,
        ::Puv::SlicedLoader<::SharedTypes::v1_21_100::PackSettingsDefinition::Document, nullptr_t, nullptr_t>>
        mLoader;
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

    MCAPI ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>&
    _getPackSettingsMap(::std::string const& worldId);

    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
