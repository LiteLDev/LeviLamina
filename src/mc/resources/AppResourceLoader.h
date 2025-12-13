#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class ResourceLocation;
class ResourceLocationPair;
namespace mce { struct Image; }
// clang-format on

class AppResourceLoader : public ::ResourceLoader {
public:
    // prevent constructor by default
    AppResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;

    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual bool load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const /*override*/;

    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const
        /*override*/;

    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const /*override*/;

#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const /*override*/;

#endif
    virtual ~AppResourceLoader() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit AppResourceLoader(::std::function<::Core::PathBuffer<::std::string>()> getPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::function<::Core::PathBuffer<::std::string>()> getPath);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCNAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI bool $load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const& resourceLocation) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
