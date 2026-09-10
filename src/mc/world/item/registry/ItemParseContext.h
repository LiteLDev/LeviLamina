#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/registry/ItemVersion.h"

// auto generated forward declare list
// clang-format off
struct ItemIconInfo;
// clang-format on

struct ItemParseContext {
public:
    // ItemParseContext inner types define
    enum class LoadMode : int {
        Client = 0,
        Server = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                                  mItemVersion;
    ::ll::TypedStorage<4, 4, ::ItemParseContext::LoadMode>                                   mLoadMode;
    ::ll::TypedStorage<8, 8, ::std::optional<::ItemIconInfo> (*)(::std::string const&, int)> mItemIconFactory;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                           mParsedDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                 mUnverifiedItemOverrideNames;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ItemVersion>> mVanillaItemVersionMap;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ItemParseContext();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ItemParseContext(
        ::ItemVersion                itemVersion,
        ::ItemParseContext::LoadMode mode,
        ::std::optional<::ItemIconInfo> (*itemIconFactory)(::std::string const&, int)
    );

    MCAPI ::std::optional<::ItemVersion> getVanillaItemVersion(::HashedString const& itemName) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(
        ::ItemVersion                itemVersion,
        ::ItemParseContext::LoadMode mode,
        ::std::optional<::ItemIconInfo> (*itemIconFactory)(::std::string const&, int)
    );
#endif
    // NOLINTEND
};
