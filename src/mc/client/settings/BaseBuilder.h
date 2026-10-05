#pragma once

#include "mc/_HeaderOutputPredefine.h"

#ifdef LL_PLAT_C
#include "mc/client/settings/ComponentState.h"   // manual
#include "mc/client/settings/ComponentVariant.h" // manual
#include "mc/options/option_types/OptionID.h"    // manual
#endif

namespace Settings {
template <typename T0>
class Builder;
} // namespace Settings

class IOptionRegistry; // manual

namespace Settings {

template <typename T0, typename T1>
class BaseBuilder {
public:
#ifdef LL_PLAT_C
    // member variables
    ::ll::TypedStorage<8, 32, ::std::string>                  mId;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDescription;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::function<::std::optional<::std::string>(T1 const&)>>>
        mOptNameProvider;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::function<::std::optional<::std::string>(T1 const&)>>>
        mOptDescriptionProvider;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::function<::Settings::ComponentState(T1 const&, ::Settings::ComponentState)>>>
                                                                                         mOptStateOverrideProvider;
    ::ll::TypedStorage<8, 16, ::std::set<::OptionID>>                                    mOptionDependencies;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry*>                                         mOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<ComponentVariant>>> mSettingsDependencies;
    ::ll::TypedStorage<1, 1, bool>                                                       mIsPIIData;
    ::ll::TypedStorage<1, 1, bool>                                                       mCheckForNameOverrides;

    BaseBuilder(::std::string_view id, ::std::string_view name)
    : mId(id),
      mName(name),
      mOptions(nullptr),
      mIsPIIData(false),
      mCheckForNameOverrides(false) {}
#else
    BaseBuilder(::std::string_view id, ::std::string_view name);
#endif
};

} // namespace Settings

#ifdef LL_PLAT_C
namespace Settings {

static_assert(
    sizeof(::Settings::BaseBuilder<::Settings::Builder<::Settings::ActionComponent>, ::Settings::ActionComponent>)
    == 0x178
);

} // namespace Settings
#endif
