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
    // vIndex: 0
    virtual ~ResourceLoader() /*override*/;

    // vIndex: 3
    virtual bool load(::ResourceLocation const&, ::std::string&) const = 0;

    // vIndex: 2
    virtual bool load(::ResourceLocation const&, ::std::string&, ::gsl::span<::std::string const>) const = 0;

    // vIndex: 1
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const;

    // vIndex: 4
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const = 0;

    // vIndex: 6
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    // vIndex: 5
    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    // vIndex: 8
    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const;

    // vIndex: 7
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const;

    // vIndex: 10
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(::ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    // vIndex: 11
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

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCNAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(::ResourceLocation const& resourceLocation
    ) const;

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
