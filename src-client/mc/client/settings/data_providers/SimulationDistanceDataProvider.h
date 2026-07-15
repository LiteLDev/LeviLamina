#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IOptionsDataProvider.h"
#include "mc/client/settings/LocStringData.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class LevelDataWrapper;
namespace Settings { struct OptionData; }
// clang-format on

namespace Settings {

class SimulationDistanceDataProvider : public ::Settings::IOptionsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelDataWrapper&> mLevelData;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                                                              mInfo;
    ::ll::TypedStorage<8, 128, ::BidirectionalUnorderedMap<int, uint>>        mIndexValueMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::Settings::OptionData>>          mLabels;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mLevelChangedSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mLevelDataSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    SimulationDistanceDataProvider& operator=(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider(SimulationDistanceDataProvider const&);
    SimulationDistanceDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canModify() const /*override*/;

    virtual ::gsl::span<::Settings::OptionData const> getOptions() const /*override*/;

    virtual int getValue() const /*override*/;

    virtual void setValue(int) /*override*/;

    virtual ::std::optional<
        ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>> const&
    getInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimulationDistanceDataProvider(
        ::LevelDataWrapper& levelData,
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelDataWrapper& levelData,
        ::std::function<::Bedrock::PubSub::Subscription(::std::function<void(::LevelDataWrapper&)>)>
            registerLevelChangeCallback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Settings
