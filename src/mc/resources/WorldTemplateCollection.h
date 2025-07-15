#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
struct WorldTemplateData;
struct WorldTemplateInfo;
struct WorldTemplateMutableInfo;
namespace mce { class UUID; }
// clang-format on

class WorldTemplateCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8c6f65;
    ::ll::UntypedStorage<8, 64> mUnkb4d91e;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateCollection& operator=(WorldTemplateCollection const&);
    WorldTemplateCollection(WorldTemplateCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateCollection();

    MCNAPI ::WorldTemplateCollectionView createView(::mce::UUID const& toView) const;

    MCNAPI void erase(uint64 index);

    MCNAPI ::WorldTemplateCollection& operator=(::WorldTemplateCollection&&);

    MCNAPI void push_back(::WorldTemplateData&& data, ::WorldTemplateMutableInfo&& mutableInfo);

    MCNAPI void sort(
        ::brstd::function_ref<bool(
            ::std::unique_ptr<::WorldTemplateInfo const> const&,
            ::std::unique_ptr<::WorldTemplateInfo const> const&
        )> const& sorter
    );

    MCNAPI ::WorldTemplateInfo const* tryGet(uint64 index) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
