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
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowListEntry>> mEntries;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>         mSyncCallback;
    ::ll::TypedStorage<1, 1, bool>                             mIsEnabled;
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

#ifdef LL_PLAT_S
    virtual void deserialize(::Json::Value const&) /*override*/;
#else // LL_PLAT_C
    virtual void deserialize(::Json::Value const& root) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit AllowList(::std::function<void()> syncCallback);
#endif

#ifdef LL_PLAT_S
    MCAPI bool addByName(::std::string_view name);
#endif

    MCAPI bool addByNsaId(::std::string_view nsaId);

    MCAPI bool addByPsnId(::std::string_view psnId);

    MCAPI bool addByXuid(::std::string_view xuid);

    MCAPI bool isAllowed(
        ::mce::UUID const& uuid,
        ::std::string_view xuid,
        ::std::string_view psnId,
        ::std::string_view nsaId
    ) const;

#ifdef LL_PLAT_S
    MCAPI bool removeByName(::std::string_view name);
#endif

    MCAPI void tryUpdateEntries(
        ::std::string_view name,
        ::std::string_view xuid,
        ::std::string_view psnId,
        ::std::string_view nsaId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::function<void()> syncCallback);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::Json::Value $serialize() const;

    MCAPI void $deserialize(::Json::Value const& root);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
