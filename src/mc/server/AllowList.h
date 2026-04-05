#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
class AllowListEntry;
namespace Json { class Value; }
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
        ::ll::TypedStorage<8, 16, ::mce::UUID>   mUuid;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryMatcher();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AllowListEntryMatcher(::std::string name, ::std::string xuid, ::mce::UUID const& uuid);

#ifdef LL_PLAT_S
        MCAPI bool operator()(::AllowListEntry const& entry);
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string name, ::std::string xuid, ::mce::UUID const& uuid);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowListEntry>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>         mSyncCallback;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AllowList();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Json::Value serialize() const /*override*/;

    virtual void deserialize(::Json::Value const& root) /*override*/;

#ifdef LL_PLAT_S
    virtual ~AllowList() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AllowList() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit AllowList(::std::function<void()> syncCallback);
#endif

#ifdef LL_PLAT_S
    MCAPI bool addByName(::std::string const& name);
#endif

    MCAPI bool isIgnoringPlayerLimit(::mce::UUID const& uuid, ::std::string const& xuid) const;

#ifdef LL_PLAT_S
    MCAPI bool removeByName(::std::string const& name);
#endif

    MCAPI void tryUpdateEntries(::mce::UUID const& uuid, ::std::string const& xuid, ::std::string const& name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::function<void()> syncCallback);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Json::Value $serialize() const;

    MCAPI void $deserialize(::Json::Value const& root);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
