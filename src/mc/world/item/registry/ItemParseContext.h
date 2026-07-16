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
};
