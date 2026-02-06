#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/resources/InvalidPacksFilterGroup.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
class ResourceLocation;
struct ContentItem;
// clang-format on

struct InvalidResourceSource : public ::ContentSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository*>         mResourceRepository;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>         mFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>> mInvalidPacks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvalidResourceSource() /*override*/ = default;

    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
