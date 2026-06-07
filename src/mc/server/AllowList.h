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

#ifdef LL_PLAT_S
    MCFOLD ::std::vector<::AllowListEntry> const& getEntries() const;
#endif

    MCAPI bool isAllowed(
        ::mce::UUID const& uuid,
        ::std::string_view xuid,
        ::std::string_view psnId,
        ::std::string_view nsaId
    ) const;

    MCAPI bool isIgnoringPlayerLimit(::mce::UUID const& uuid, ::std::string_view xuid) const;

#ifdef LL_PLAT_S
    MCAPI bool removeByName(::std::string_view name);
#endif

    MCAPI bool removeByNsaId(::std::string_view nsaId);

    MCAPI bool removeByPsnId(::std::string_view psnId);

    MCAPI bool removeByXuid(::std::string_view xuid);

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
    MCAPI ::Json::Value $serialize() const;

    MCAPI void $deserialize(::Json::Value const& root);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
