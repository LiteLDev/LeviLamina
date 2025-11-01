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
    // vIndex: 0
    virtual ~IContentSourceRepository() = default;

    // vIndex: 1
    virtual void deletePackFiles(::ResourceLocation const&) = 0;

    // vIndex: 2
    virtual void postDeletePack(::ResourceLocation const&) = 0;

    // vIndex: 3
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const = 0;

    // vIndex: 4
    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
