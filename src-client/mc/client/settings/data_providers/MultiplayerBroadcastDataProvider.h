#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/client/settings/data_providers/MultiplayerBroadcastStateInfo.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct OptionData; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class MultiplayerBroadcastDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 128, ::Settings::MultiplayerBroadcastStateInfo>   mStateInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>>        mDropdownOptions;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
        mInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerBroadcastDataProvider& operator=(MultiplayerBroadcastDataProvider const&);
    MultiplayerBroadcastDataProvider(MultiplayerBroadcastDataProvider const&);
    MultiplayerBroadcastDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;

    virtual bool canModify() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MultiplayerBroadcastDataProvider(
        ::Settings::RegistryBuilder::IBuilderContext& context,
        ::Settings::MultiplayerBroadcastStateInfo     stateInfo
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Settings::RegistryBuilder::IBuilderContext& context, ::Settings::MultiplayerBroadcastStateInfo stateInfo);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
