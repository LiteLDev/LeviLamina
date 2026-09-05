#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IWorldTemplateManager;
struct ContentItem;
// clang-format on

struct WorldTemplateSource : public ::ContentSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>> mWorldTemplateManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateSource() /*override*/ = default;

    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCFOLD void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
