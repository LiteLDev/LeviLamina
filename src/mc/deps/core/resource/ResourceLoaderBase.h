#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourceLocationPair;
// clang-format on

class ResourceLoaderBase : public ::ResourceLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const /*override*/;

    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;
#endif


    // NOLINTEND
};
