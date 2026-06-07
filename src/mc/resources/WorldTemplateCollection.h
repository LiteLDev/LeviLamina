#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateData;
struct WorldTemplateInfo;
struct WorldTemplateMutableInfo;
namespace mce { class UUID; }
// clang-format on

class WorldTemplateCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke6f53b;
    ::ll::UntypedStorage<8, 64> mUnkb4d91e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateCollection& operator=(WorldTemplateCollection const&);
    WorldTemplateCollection(WorldTemplateCollection const&);
    WorldTemplateCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear();

    MCNAPI void erase(uint64 index);

    MCNAPI void push_back(::WorldTemplateData&& data, ::WorldTemplateMutableInfo&& mutableInfo);

    MCNAPI ::WorldTemplateInfo const* tryFindInstalledWorldByTemplateId(::gsl::span<::mce::UUID const> ids) const;

    MCNAPI ~WorldTemplateCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
