#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
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
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>               mInfo;
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

    virtual ::std::optional<::std::string> const& getInfo() const /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ~MultiplayerBroadcastDataProvider() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCFOLD void $setValue(int);

    MCFOLD ::std::optional<::std::string> const& $getInfo() const;

    MCFOLD bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
