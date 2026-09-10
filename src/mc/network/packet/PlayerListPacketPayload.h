#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/PlayerListPacketType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class PlayerListEntry;
// clang-format on

struct PlayerListPacketPayload {
public:
    // PlayerListPacketPayload inner types declare
    // clang-format off
    struct AddEntry;
    struct RemoveEntry;
    // clang-format on

    // PlayerListPacketPayload inner types define
    struct AddEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>        mId;
        ::ll::TypedStorage<8, 32, ::std::string>         mName;
        ::ll::TypedStorage<8, 32, ::std::string>         mXUID;
        ::ll::TypedStorage<8, 32, ::std::string>         mPlatformOnlineId;
        ::ll::TypedStorage<4, 4, ::BuildPlatform>        mBuildPlatform;
        ::ll::TypedStorage<8, 16, ::SerializedSkinRef>   mSkin;
        ::ll::TypedStorage<1, 1, bool>                   mIsTeacher;
        ::ll::TypedStorage<1, 1, bool>                   mIsHost;
        ::ll::TypedStorage<1, 1, bool>                   mIsSubClient;
        ::ll::TypedStorage<4, 16, ::mce::Color>          mColor;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AddEntry(::PlayerListPacketPayload::AddEntry const&);

        MCAPI ::PlayerListPacketPayload::AddEntry& operator=(::PlayerListPacketPayload::AddEntry&&);

        MCAPI ::PlayerListPacketPayload::AddEntry& operator=(::PlayerListPacketPayload::AddEntry const&);

        MCAPI bool operator==(::PlayerListPacketPayload::AddEntry const& other) const;

#ifdef LL_PLAT_C
        MCAPI ::PlayerListEntry toPlayerListEntry() const;
#endif

        MCAPI ~AddEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::PlayerListPacketPayload::AddEntry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RemoveEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PlayerListPacketType> mAction;
        ::ll::TypedStorage<8, 16, ::mce::UUID>           mUUID;
        // NOLINTEND
    };

    using Entry = ::std::variant<::PlayerListPacketPayload::RemoveEntry, ::PlayerListPacketPayload::AddEntry>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<::PlayerListPacketPayload::RemoveEntry, ::PlayerListPacketPayload::AddEntry>>>
        mEntries;
    // NOLINTEND
};
