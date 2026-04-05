#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/Waypoint.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class ServerWaypoint : public ::Waypoint {
public:
    // ServerWaypoint inner types declare
    // clang-format off
    struct Payload;
    struct Texture;
    struct TextureSelector;
    // clang-format on

    // ServerWaypoint inner types define
    enum class UpdateFlags : uint {
        // bitfield representation
        Position                = 1u << 0,
        Visibility              = 1u << 1,
        TextureId               = 1u << 2,
        Color                   = 1u << 3,
        ClientPositionAuthority = 1u << 4,
        All                     = Position | Visibility | TextureId | Color | ClientPositionAuthority,
    };

    struct Payload {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                              mUpdateFlag;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mIsVisible;
        ::ll::TypedStorage<4, 20, ::std::optional<::WorldPosition>> mWorldPosition;
        ::ll::TypedStorage<4, 8, ::std::optional<uint>>             mTextureId;
        ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>    mColor;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mClientPositionAuthority;
        ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mActorID;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::ServerWaypoint::Payload const&) const;
        // NOLINTEND
    };

    struct Texture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                  mLowerBound;
        ::ll::TypedStorage<4, 8, ::std::optional<int>> mUpperBound;
        ::ll::TypedStorage<4, 4, uint>                 mTextureId;
        // NOLINTEND
    };

    struct TextureSelector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::ServerWaypoint::Texture>> mTextures;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TextureSelector();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsEnabled;
    ::ll::TypedStorage<8, 24, ::ServerWaypoint::TextureSelector> mTextureSelector;
    ::ll::TypedStorage<4, 4, uint>                               mUpdateFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setWorldPosition(::WorldPosition const& worldPosition) /*override*/;

    virtual void setColor(::std::optional<::mce::Color> const& color) /*override*/;

    virtual void setIsVisible(bool isVisible) /*override*/;

    virtual void setClientPositionAuthority(bool clientPositionAuthority) /*override*/;

    virtual void setTextureId(::std::optional<uint> const& textureId) /*override*/;

    virtual bool isValid() const;

    virtual bool calculateIsVisible(::Player const& viewingPlayer) const;

    virtual void update(::Player const& viewingPlayer) /*override*/;

    virtual ~ServerWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerWaypoint(
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color,
        ::WorldPosition                          worldPosition
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color,
        ::WorldPosition                          worldPosition
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setWorldPosition(::WorldPosition const& worldPosition);

    MCAPI void $setColor(::std::optional<::mce::Color> const& color);

    MCAPI void $setIsVisible(bool isVisible);

    MCAPI void $setClientPositionAuthority(bool clientPositionAuthority);

    MCAPI void $setTextureId(::std::optional<uint> const& textureId);

    MCFOLD bool $isValid() const;

    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;

    MCAPI void $update(::Player const& viewingPlayer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
