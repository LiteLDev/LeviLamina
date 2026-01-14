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
    // ResourceLoader inner types define
    using ResourceFileExtensionSetType = ::gsl::span<::std::string const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::Core::PathBuffer<::std::string>()>> mGetPath;
    // NOLINTEND

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
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCFOLD bool $loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCFOLD bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCFOLD bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCFOLD ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const;

    MCFOLD ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;

    MCFOLD ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
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
