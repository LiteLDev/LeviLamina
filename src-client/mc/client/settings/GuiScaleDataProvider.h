#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
namespace Settings { struct OptionData; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class GuiScaleDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>      mOptions;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetOptimalGuiScale;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetMaxGuiScale;
    ::ll::TypedStorage<8, 64, ::std::function<int()>> mGetClampedGuiScaleOffset;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                                                     mInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mGuiScaleSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mGuiAccessibilityScalingSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mSceneSizeChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>> mDropdownOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiScaleDataProvider& operator=(GuiScaleDataProvider const&);
    GuiScaleDataProvider(GuiScaleDataProvider const&);
    GuiScaleDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int value) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GuiScaleDataProvider(
        ::Settings::RegistryBuilder::IBuilderContext& context,
        ::std::function<float()>                      getOptimalGuiScale,
        ::std::function<float()>                      getMaxGuiScale
    );

    MCAPI void _updateInfo();

    MCAPI void _updateOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Settings::RegistryBuilder::IBuilderContext& context,
        ::std::function<float()>                      getOptimalGuiScale,
        ::std::function<float()>                      getMaxGuiScale
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCAPI void $setValue(int value);

    MCFOLD ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    $getInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
