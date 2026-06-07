#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
struct ContentItem;
struct PackManagerContentSourceArgs;
namespace Realms { struct Content; }
// clang-format on

namespace Realms {

class RealmsWorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Realms::RealmId const>                 mRealmId;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::Content> const> mServiceAppliedContent;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsWorldPackManagerContentSource(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        ::Realms::RealmId                                         realmId,
        ::std::vector<::Realms::Content>&&                        serviceContent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        ::Realms::RealmId                                         realmId,
        ::std::vector<::Realms::Content>&&                        serviceContent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
