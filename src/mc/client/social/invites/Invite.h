#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Invites {

struct Invite {
public:
    // Invite inner types declare
    // clang-format off
    struct InvitationStatusOreUI;
    struct InvitationTypeOreUI;
    // clang-format on

    // Invite inner types define
    enum class InvitationStatus : int {
        Active   = 0,
        Accepted = 1,
        Rejected = 2,
        Expired  = 3,
    };

    enum class InvitationType : int {
        None   = 0,
        Realms = 1,
        Game   = 2,
    };

    enum class State : int {
        Uninitialized = 0,
        Accepted      = 1,
        Declined      = 2,
    };

    enum class InvitationStatusstruct : uint {};

    enum class InvitationTypestruct : uint {};

    struct InvitationStatusOreUI {
    public:
        // InvitationStatusOreUI inner types declare
        // clang-format off
        struct InboxFacet;
        // clang-format on

        // InvitationStatusOreUI inner types define
        struct InboxFacet {
        public:
            // InboxFacet inner types define
            enum class InboxMessageData : uint {};
        };
    };

    struct InvitationTypeOreUI {
    public:
        // InvitationTypeOreUI inner types declare
        // clang-format off
        struct InboxFacet;
        // clang-format on

        // InvitationTypeOreUI inner types define
        struct InboxFacet {
        public:
            // InboxFacet inner types define
            enum class InboxMessageData : uint {};
        };
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9d568f;
    ::ll::UntypedStorage<8, 32> mUnkf59ece;
    ::ll::UntypedStorage<4, 4>  mUnkbac056;
    ::ll::UntypedStorage<8, 32> mUnkb3d768;
    ::ll::UntypedStorage<8, 32> mUnkf28c69;
    ::ll::UntypedStorage<8, 32> mUnk8c97c0;
    ::ll::UntypedStorage<8, 32> mUnkc6c2d1;
    ::ll::UntypedStorage<8, 32> mUnka78911;
    ::ll::UntypedStorage<4, 4>  mUnkad5dfb;
    ::ll::UntypedStorage<4, 4>  mUnk77bca4;
    ::ll::UntypedStorage<8, 8>  mUnkc9bf84;
    ::ll::UntypedStorage<8, 8>  mUnk799b57;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Invite();

    MCNAPI_C Invite(::Invites::Invite&&);

    MCNAPI_C Invite(::Invites::Invite const&);

    MCNAPI_C ::Invites::Invite& operator=(::Invites::Invite&&);

    MCNAPI_C ::Invites::Invite& operator=(::Invites::Invite const&);

    MCNAPI_C ~Invite();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Invites::Invite fromJson(::Json::Value const& json);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::Invites::Invite&&);

    MCNAPI_C void* $ctor(::Invites::Invite const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Invites
