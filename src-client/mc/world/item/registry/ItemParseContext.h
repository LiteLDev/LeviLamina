#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/item/registry/ItemVersion.h"

// auto generated forward declare list
// clang-format off
class Item;
class SemVersion;
struct IPackLoadContext;
namespace Json { class Value; }
namespace PuvLoadData { struct LoadResultWithTiming; }
// clang-format on

struct ItemParseContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion> mItemVersion;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::PuvLoadData::LoadResultWithTiming(
            ::WeakPtr<::Item>&,
            ::Json::Value const&,
            ::SemVersion const&,
            ::JsonBetaState,
            ::IPackLoadContext&
        )>>
                                                                   mItemInitCallback;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mParsedDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>> mUnverifiedItemOverrideNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemParseContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
