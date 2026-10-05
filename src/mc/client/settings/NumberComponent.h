#pragma once

#include "mc/_HeaderOutputPredefine.h"

#ifdef LL_PLAT_C
#include "mc/client/settings/Component.h"           // manual
#include "mc/client/settings/INumberDataProvider.h" // manual
#endif

namespace Settings {

#ifdef LL_PLAT_C
template <typename T0>
class NumberComponent : public ::Settings::Component<NumberComponent<T0>> {
public:
    // member variables (hand-restored from PDB layouts, 26.51)
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::INumberDataProvider<T0>>>       mDataProvider;
    ::ll::TypedStorage<4, 4, T0>                                                           mScaleFactor;
    ::ll::TypedStorage<4, 8, ::std::optional<T0>>                                          mStep;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(T0, T0, T0)>> mValueTextOverrideProvider;
};

// Layout guards for the hand-restored members (PDB, 26.51).
static_assert(sizeof(::Settings::NumberComponent<int>) == 0x238);
static_assert(offsetof(::Settings::NumberComponent<int>, mStep) == 0x1EC);
static_assert(sizeof(::Settings::NumberComponent<float>) == 0x238);
#else
template <typename T0>
class NumberComponent {};
#endif

} // namespace Settings
