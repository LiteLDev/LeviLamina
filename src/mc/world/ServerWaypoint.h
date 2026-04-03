#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Waypoint.h"

// auto generated forward declare list
// clang-format off
class Player;
struct WorldPosition;
namespace mce { class Color; }
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
        ::ll::UntypedStorage<4, 4>  mUnk246422;
        ::ll::UntypedStorage<1, 2>  mUnk8af0b5;
        ::ll::UntypedStorage<4, 20> mUnk9beed6;
        ::ll::UntypedStorage<4, 8>  mUnk83526f;
        ::ll::UntypedStorage<4, 20> mUnk932122;
        ::ll::UntypedStorage<1, 2>  mUnkf327ad;
        ::ll::UntypedStorage<8, 16> mUnk396697;
        // NOLINTEND

    public:
        // prevent constructor by default
        Payload& operator=(Payload const&);
        Payload(Payload const&);
        Payload();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ServerWaypoint::Payload const&) const;
        // NOLINTEND
    };

    struct Texture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkb8c352;
        ::ll::UntypedStorage<4, 8> mUnk427f8f;
        ::ll::UntypedStorage<4, 4> mUnk3450de;
        // NOLINTEND

    public:
        // prevent constructor by default
        Texture& operator=(Texture const&);
        Texture(Texture const&);
        Texture();
    };

    struct TextureSelector {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk41affd;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureSelector& operator=(TextureSelector const&);
        TextureSelector(TextureSelector const&);
        TextureSelector();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TextureSelector();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkdcfcaa;
    ::ll::UntypedStorage<8, 24> mUnk51aadc;
    ::ll::UntypedStorage<4, 4>  mUnke862d1;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWaypoint& operator=(ServerWaypoint const&);
    ServerWaypoint(ServerWaypoint const&);
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
    MCNAPI ServerWaypoint(
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color,
        ::WorldPosition                          worldPosition
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerWaypoint::TextureSelector const& textureSelector,
        ::std::optional<::mce::Color> const&     color,
        ::WorldPosition                          worldPosition
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setWorldPosition(::WorldPosition const& worldPosition);

    MCNAPI void $setColor(::std::optional<::mce::Color> const& color);

    MCNAPI void $setIsVisible(bool isVisible);

    MCNAPI void $setClientPositionAuthority(bool clientPositionAuthority);

    MCNAPI void $setTextureId(::std::optional<uint> const& textureId);

    MCNAPI bool $isValid() const;

    MCNAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;

    MCNAPI void $update(::Player const& viewingPlayer);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
