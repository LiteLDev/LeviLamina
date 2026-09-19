#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class I18n;
class PackCapabilityRegistry;
class PackManifestFactory;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace PackManifestFactoryImpl {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::cereal::ReflectionCtx> createCerealContext();

MCNAPI ::std::unique_ptr<::PackManifestFactory>
createPackManifestFactory(::AppPlatform& platform, ::I18n& loc, ::PackCapabilityRegistry const& capabilities);
// NOLINTEND

} // namespace PackManifestFactoryImpl
