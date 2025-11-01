#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class ResourceLocation;
class ResourceLocationPair;
// clang-format on

class AppResourceLoader : public ::ResourceLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool load(::ResourceLocation const&, ::std::string&) const /*override*/;

    // vIndex: 2
    virtual bool load(::ResourceLocation const&, ::std::string&, ::gsl::span<::std::string const>) const /*override*/;

    // vIndex: 1
    virtual bool load(::ResourceLocationPair const& resourceLocation, ::std::string& resourceStream, ::gsl::span<::std::string const> extensions) const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const /*override*/;

    // vIndex: 12
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const /*override*/;

    // vIndex: 0
    virtual ~AppResourceLoader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
