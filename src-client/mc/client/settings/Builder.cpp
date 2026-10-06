#include "mc/client/settings/Builder.h"

Settings::Builder<Settings::StringComponent>::Builder(::std::string_view id, ::std::string_view name)
: BaseBuilder(id, name) {}

Settings::Builder<Settings::NumberComponent<int>>::Builder(::std::string_view id, ::std::string_view name)
: BaseBuilder(id, name),
  mScaleFactor(0) {}

Settings::Builder<Settings::NumberComponent<float>>::Builder(::std::string_view id, ::std::string_view name)
: BaseBuilder(id, name),
  mScaleFactor(0.0f) {}

Settings::Builder<Settings::BannerComponent>::Builder(::std::string_view id, ::std::string_view name)
: BaseBuilder(id, name),
  mBannerType(::Settings::BannerType::Neutral) {}
