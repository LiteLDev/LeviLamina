#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PackManagerContentSourceImpl.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentSourceRepository;
struct CachedHostPackIdProvider;
struct PackManagerContentSourceArgs;
struct PackManagerContentSourceData;
struct PackModel;
// clang-format on

struct WorldPackManagerContentSource : public ::PackManagerContentSourceImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                               mWorldId;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>           mWorldPath;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldPackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load() /*override*/;

    virtual void _createSelectedPackContentItems(
        ::PackManagerContentSourceData& packData,
        ::std::vector<::PackModel>&     selected
    ) /*override*/;

    virtual void _createAvailablePackContentItems(
        ::PackManagerContentSourceData& packData,
        ::std::vector<::PackModel>&     available
    ) /*override*/;

    virtual ~WorldPackManagerContentSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldPackManagerContentSource(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        ::std::string                                             worldId,
        ::Core::PathBuffer<::std::string>                         worldPath,
        ::std::weak_ptr<::CachedHostPackIdProvider>               provider
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackManagerContentSourceArgs&&                          args,
        ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> contentSourceRepository,
        ::std::string                                             worldId,
        ::Core::PathBuffer<::std::string>                         worldPath,
        ::std::weak_ptr<::CachedHostPackIdProvider>               provider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void
    $_createSelectedPackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& selected);

    MCAPI void
    $_createAvailablePackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& available);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
