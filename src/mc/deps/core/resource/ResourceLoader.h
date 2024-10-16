#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ResourceLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ResourceLoader& operator=(ResourceLoader const&);
    ResourceLoader(ResourceLoader const&);
    ResourceLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourceLoader();

    // vIndex: 1
    virtual bool load(class ResourceLocation const& resourceLocation, std::string& resourceStream) const = 0;

    // vIndex: 2
    virtual bool load(
        class ResourceLocation const&   resourceLocation,
        std::string&                    resourceStream,
        std::vector<std::string> const& extensionList
    ) const = 0;

    // vIndex: 3
    virtual bool load(
        class ResourceLocationPair const& resourceLocation,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensions
    ) const;

    // vIndex: 4
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const& resourceLocation
    ) const = 0;

    // vIndex: 5
    virtual bool isInStreamableLocation(class ResourceLocation const& resourceLocation) const;

    // vIndex: 6
    virtual bool isInStreamableLocation(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    // vIndex: 7
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const& resourceLocation) const;

    // vIndex: 8
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensions) const;

    // vIndex: 9
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 10
    virtual class Core::PathBuffer<std::string> getPathContainingResource(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensions
    ) const;

    // vIndex: 11
    virtual std::pair<int, std::string const&> getPackStackIndexOfResource(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI std::pair<int, std::string const&> getPackStackIndexOfResource$(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    MCAPI class Core::PathBuffer<std::string> getPath$(class ResourceLocation const& resourceLocation) const;

    MCAPI class Core::PathBuffer<std::string>
    getPath$(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensions) const;

    MCAPI class Core::PathBuffer<std::string> getPathContainingResource$(class ResourceLocation const& resourceLocation
    ) const;

    MCAPI class Core::PathBuffer<std::string> getPathContainingResource$(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensions
    ) const;

    MCAPI bool isInStreamableLocation$(class ResourceLocation const& resourceLocation) const;

    MCAPI bool isInStreamableLocation$(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensions
    ) const;

    MCAPI bool load$(
        class ResourceLocationPair const& resourceLocation,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensions
    ) const;

    // NOLINTEND
};
