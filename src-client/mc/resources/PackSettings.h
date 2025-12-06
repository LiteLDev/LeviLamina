#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
struct PackSettingValueAndDefault;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct LabelSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct SliderSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct ToggleSetting; }
// clang-format on

class PackSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID const> mPackId;
    ::ll::TypedStorage<
        8,
        16,
        ::std::weak_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
                                                                                                 mOnChangePublisher;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackSettingValueAndDefault>> mNameValueMap;
    ::ll::TypedStorage<8, 8, uint64>                                                             mLastUsed;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSettings(
        ::mce::UUID const&                                                           packId,
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> const&  packSettingDef,
        ::std::map<::std::string, ::std::variant<float, bool, ::std::string>> const* userOverrides,
        ::std::weak_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>                                                                      publisher,
        uint64                                                                       lastUsed
    );

    MCNAPI void setValue(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&                                                           packId,
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> const&  packSettingDef,
        ::std::map<::std::string, ::std::variant<float, bool, ::std::string>> const* userOverrides,
        ::std::weak_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>                                                                      publisher,
        uint64                                                                       lastUsed
    );
    // NOLINTEND
};
