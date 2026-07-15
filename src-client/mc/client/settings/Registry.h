#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ActionComponent.h"
#include "mc/client/settings/BannerComponent.h"
#include "mc/client/settings/BooleanComponent.h"
#include "mc/client/settings/GroupInfoComponent.h"
#include "mc/client/settings/IRegistry.h"
#include "mc/client/settings/NumberComponent.h"
#include "mc/client/settings/OptionComponent.h"
#include "mc/client/settings/StringComponent.h"
#include "mc/client/settings/TextComponent.h"

namespace Settings {

class Registry : public ::Settings::IRegistry {
public:
    // Registry inner types define
    using SettingsFactory = ::std::function<::std::vector<::std::unique_ptr<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::function<::std::vector<::std::unique_ptr<::std::variant<
                ::Settings::BooleanComponent,
                ::Settings::NumberComponent<int>,
                ::Settings::NumberComponent<float>,
                ::Settings::OptionComponent,
                ::Settings::StringComponent,
                ::Settings::ActionComponent,
                ::Settings::TextComponent,
                ::Settings::GroupInfoComponent,
                ::Settings::BannerComponent>>>()>>>
        mSettingsFactories;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::vector<::std::unique_ptr<::std::variant<
                ::Settings::BooleanComponent,
                ::Settings::NumberComponent<int>,
                ::Settings::NumberComponent<float>,
                ::Settings::OptionComponent,
                ::Settings::StringComponent,
                ::Settings::ActionComponent,
                ::Settings::TextComponent,
                ::Settings::GroupInfoComponent,
                ::Settings::BannerComponent>>>>>
        mSettingsMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Registry() /*override*/ = default;

    virtual ::std::vector<::std::string_view> getSettingsGroups() const /*override*/;

    virtual ::std::optional<::std::vector<::Settings::IRegistry::SettingId>>
        getSettingsGroup(::std::string_view) /*override*/;

    virtual ::std::optional<::std::reference_wrapper<::std::variant<
        ::Settings::BooleanComponent,
        ::Settings::NumberComponent<int>,
        ::Settings::NumberComponent<float>,
        ::Settings::OptionComponent,
        ::Settings::StringComponent,
        ::Settings::ActionComponent,
        ::Settings::TextComponent,
        ::Settings::GroupInfoComponent,
        ::Settings::BannerComponent>>>
        getSetting(::std::string_view) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerSettingsFactory(
        ::std::string_view                      key,
        ::std::function<::std::vector<::std::unique_ptr<::std::variant<
            ::Settings::BooleanComponent,
            ::Settings::NumberComponent<int>,
            ::Settings::NumberComponent<float>,
            ::Settings::OptionComponent,
            ::Settings::StringComponent,
            ::Settings::ActionComponent,
            ::Settings::TextComponent,
            ::Settings::GroupInfoComponent,
            ::Settings::BannerComponent>>>()>&& factory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
