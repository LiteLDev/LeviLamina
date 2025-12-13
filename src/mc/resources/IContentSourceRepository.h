#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackStack;
struct InvalidPacksFilterGroup;
struct PackInstanceId;
// clang-format on

class IContentSourceRepository {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentSourceRepository() = default;

    virtual void deletePackFiles(::ResourceLocation const&) = 0;

    virtual void postDeletePack(::ResourceLocation const&) = 0;

    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const = 0;

    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
