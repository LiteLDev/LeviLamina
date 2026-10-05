#pragma once

#include "mc/_HeaderOutputPredefine.h"

#ifdef LL_PLAT_C
#include "mc/client/settings/ActionComponent.h"    // manual
#include "mc/client/settings/BannerComponent.h"    // manual
#include "mc/client/settings/BooleanComponent.h"   // manual
#include "mc/client/settings/GroupInfoComponent.h" // manual
#include "mc/client/settings/NumberComponent.h"    // manual
#include "mc/client/settings/OptionComponent.h"    // manual
#include "mc/client/settings/StringComponent.h"    // manual
#include "mc/client/settings/TextComponent.h"      // manual
#endif

namespace Settings {

#ifdef LL_PLAT_C
using ComponentVariant = ::std::variant<
    ::Settings::BooleanComponent,
    ::Settings::NumberComponent<int>,
    ::Settings::NumberComponent<float>,
    ::Settings::OptionComponent,
    ::Settings::StringComponent,
    ::Settings::ActionComponent,
    ::Settings::TextComponent,
    ::Settings::GroupInfoComponent,
    ::Settings::BannerComponent>;

using ComponentList = ::std::vector<::std::unique_ptr<ComponentVariant>>;

static_assert(sizeof(ComponentVariant) == 0x3D0);
static_assert(::std::is_same_v<::std::variant_alternative_t<0, ComponentVariant>, ::Settings::BooleanComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<1, ComponentVariant>, ::Settings::NumberComponent<int>>);
static_assert(::std::is_same_v<::std::variant_alternative_t<2, ComponentVariant>, ::Settings::NumberComponent<float>>);
static_assert(::std::is_same_v<::std::variant_alternative_t<3, ComponentVariant>, ::Settings::OptionComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<4, ComponentVariant>, ::Settings::StringComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<5, ComponentVariant>, ::Settings::ActionComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<6, ComponentVariant>, ::Settings::TextComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<7, ComponentVariant>, ::Settings::GroupInfoComponent>);
static_assert(::std::is_same_v<::std::variant_alternative_t<8, ComponentVariant>, ::Settings::BannerComponent>);

template <typename T, typename... Args>
::std::unique_ptr<ComponentVariant> makeComponent(Args&&... args) {
    return ::std::make_unique<ComponentVariant>(::std::in_place_type<T>, ::std::forward<Args>(args)...);
}
#endif

} // namespace Settings
