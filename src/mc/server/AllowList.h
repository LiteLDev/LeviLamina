#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
class AllowListEntry;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AllowList : public ::IJsonSerializable {
public:
    // AllowList inner types declare
    // clang-format off
    struct AllowListEntryMatcher;
    // clang-format on

    // AllowList inner types define
    struct AllowListEntryMatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mName;
        ::ll::TypedStorage<8, 32, ::std::string> mXuid;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryMatcher();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AllowListEntryMatcher(::std::string name, ::std::string xuid);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string name, ::std::string xuid);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowListEntry>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>         mSyncCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void serialize(::Json::Value& root) /*override*/;

    virtual void deserialize(::Json::Value& root) /*override*/;

#ifdef LL_PLAT_S
    virtual ~AllowList() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AllowList() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C explicit AllowList(::std::function<void()> syncCallback);

    MCAPI bool isIgnoringPlayerLimit(::mce::UUID const& uuid, ::std::string const& xuid) const;

    MCAPI void tryUpdateEntries(::mce::UUID const& uuid, ::std::string const& xuid, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::std::function<void()> syncCallback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::Json::Value& root);

    MCAPI void $deserialize(::Json::Value& root);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
