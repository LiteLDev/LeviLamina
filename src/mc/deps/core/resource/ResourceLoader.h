#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
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
    // prevent constructor by default
    ResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceLoader() /*override*/ = default;

    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const = 0;

#ifdef LL_PLAT_S
    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const = 0;
#else // LL_PLAT_C
    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const = 0;
#endif

#ifdef LL_PLAT_S
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const = 0;
#else // LL_PLAT_C
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensions
    ) const = 0;

    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const = 0;
#endif

    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const = 0;

#ifdef LL_PLAT_S
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const = 0;
#else // LL_PLAT_C
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensions) const = 0;
#endif

    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const = 0;

#ifdef LL_PLAT_S
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const = 0;
#else // LL_PLAT_C
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const = 0;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourceLoader(::std::function<::Core::PathBuffer<::std::string>()> getPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::Core::PathBuffer<::std::string>()> getPath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
