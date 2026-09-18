#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackStack;
struct InvalidPack;
struct InvalidPacksFilterGroup;
struct PackInstanceId;
// clang-format on

class IContentSourceRepository {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentSourceRepository() = default;

    virtual void deletePackFiles(::ResourceLocation const& packLocation, ::std::string_view deletionReason) = 0;

    virtual void postDeletePack(::ResourceLocation const& packLocation) = 0;

    virtual ::std::vector<::InvalidPack> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const = 0;

    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const& identities) = 0;
    // NOLINTEND
};
