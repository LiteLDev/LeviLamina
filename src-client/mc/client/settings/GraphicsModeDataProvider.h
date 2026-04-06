#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace Settings { struct OptionData; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class GraphicsModeDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OptionID>                                    mOptionId;
    ::ll::TypedStorage<8, 8, ::IOptions&>                                   mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>>        mDropdownOptions;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>               mInfo;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mResetSubscription;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                          mPendingValue;
    // NOLINTEND

public:
    // prevent constructor by default
    GraphicsModeDataProvider& operator=(GraphicsModeDataProvider const&);
    GraphicsModeDataProvider(GraphicsModeDataProvider const&);
    GraphicsModeDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int value) /*override*/;

    virtual ::std::optional<::std::string> const& getInfo() const /*override*/;

    virtual bool flush() /*override*/;

    virtual ~GraphicsModeDataProvider() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canModify() const;

    MCAPI ::gsl::span<::Settings::OptionData const> $getOptions() const;

    MCAPI int $getValue() const;

    MCAPI void $setValue(int value);

    MCFOLD ::std::optional<::std::string> const& $getInfo() const;

    MCAPI bool $flush();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
