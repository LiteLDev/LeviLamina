#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStackRequestAction;
class ReadOnlyBinaryStream;
struct ItemStackRequestIdTag;
// clang-format on

class ItemStackRequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackRequestId>                                       mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>                                 mStringsToFilterOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ItemStackRequestAction>>> mActions;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestData& operator=(ItemStackRequestData const&);
    ItemStackRequestData(ItemStackRequestData const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ItemStackRequestData();

    MCNAPI ItemStackRequestData(::ItemStackRequestData&&);

    MCNAPI explicit ItemStackRequestData(::ItemStackRequestId const& clientRequestId);

    MCNAPI void addAction(::std::unique_ptr<::ItemStackRequestAction> requestAction);

    MCNAPI int addStringToFilter(::std::string const& stringToFilter, ::TextProcessingEventOrigin origin);
#endif

    MCNAPI ::std::vector<::std::unique_ptr<::ItemStackRequestAction>> const& getActions() const;

    MCNAPI ::ItemStackRequestId const& getRequestId() const;

    MCNAPI ::std::vector<::std::string> const& getStringsToFilter() const;

    MCNAPI ::TextProcessingEventOrigin const& getStringsToFilterOrigin() const;

#ifdef LL_PLAT_C
    MCNAPI ::ItemStackRequestData& operator=(::ItemStackRequestData&&);
#endif

    MCNAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide);

    MCNAPI ::ItemStackRequestAction const* tryFindAction(::ItemStackRequestActionType type) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~ItemStackRequestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::std::unique_ptr<::ItemStackRequestData>> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ItemStackRequestData&&);

    MCNAPI void* $ctor(::ItemStackRequestId const& clientRequestId);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
