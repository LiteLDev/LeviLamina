#pragma once

#include "mc/_HeaderOutputPredefine.h"

// manual includes (hand-restored layout; template classes are not auto-generated)
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

#ifdef LL_PLAT_C
#include "mc/client/settings/ComponentState.h" // manual
#include "mc/client/settings/SettingsType.h"   // manual
#endif

namespace Settings {

template <typename T0>
class Component {
#ifdef LL_PLAT_C
public:
    virtual ~Component() = default;

    virtual ::Settings::ComponentState getDefaultState() const;

public:
    // member variables
    ::ll::TypedStorage<8, 32, ::std::string>                                              mId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mName;
    ::ll::TypedStorage<4, 4, ::Settings::SettingsType>                                    mSettingsType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                             mDescription;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(T0 const&)>> mNameOverrideProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(T0 const&)>> mDescriptionOverrideProvider;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::function<::Settings::ComponentState(T0 const&, ::Settings::ComponentState)>>>
        mStateOverrideProvider;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                              mSettingsChangedPublisher;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSecondarySubscriptions;
    ::ll::TypedStorage<1, 1, bool>                                            mIsPIIData;
    ::ll::TypedStorage<1, 1, bool>                                            mCheckForNameOverrides;
#endif
};

} // namespace Settings
