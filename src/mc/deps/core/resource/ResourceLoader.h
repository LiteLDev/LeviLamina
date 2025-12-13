#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class ResourceLocation;
class ResourceLocationPair;
namespace mce { struct Image; }
// clang-format on

class ResourceLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk41e959;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoader& operator=(ResourceLoader const&);
    ResourceLoader(ResourceLoader const&);
    ResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceLoader() /*override*/;

    virtual bool load(::ResourceLocation const&, ::std::string&) const = 0;

    virtual bool load(::ResourceLocation const&, ::std::string&, ::gsl::span<::std::string const>) const = 0;

    virtual bool load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const;

    virtual bool loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const = 0;

#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const&) const = 0;

#endif
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const;

    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const;

    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI bool $loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCNAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
