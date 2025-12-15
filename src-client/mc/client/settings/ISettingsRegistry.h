#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/SettingsNumberComponent.h"

// auto generated forward declare list
// clang-format off
struct SettingsActionComponent;
struct SettingsBooleanComponent;
struct SettingsGroupInfoComponent;
struct SettingsOptionComponent;
struct SettingsTextComponent;
// clang-format on

class ISettingsRegistry {
public:
    // ISettingsRegistry inner types declare
    // clang-format off
    struct SettingId;
    // clang-format on

    // ISettingsRegistry inner types define
    struct SettingId {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISettingsRegistry() = default;

    virtual ::std::vector<::std::string_view> getSettingsGroups() const = 0;

    virtual ::std::optional<::std::vector<::ISettingsRegistry::SettingId>> getSettingsGroup(::std::string_view) = 0;

    virtual ::std::optional<::std::reference_wrapper<::std::variant<
        ::SettingsBooleanComponent,
        ::SettingsNumberComponent<int>,
        ::SettingsNumberComponent<float>,
        ::SettingsOptionComponent,
        ::SettingsActionComponent,
        ::SettingsTextComponent,
        ::SettingsGroupInfoComponent>>>
        getSetting(::std::string_view) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
