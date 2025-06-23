#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
class Dimension;
class GameEventListener;
// clang-format on

class GameEventDynamicRegistration {
public:
    // GameEventDynamicRegistration inner types declare
    // clang-format off
    struct RegistrationLocation;
    // clang-format on

    // GameEventDynamicRegistration inner types define
    struct RegistrationLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb13385;
        ::ll::UntypedStorage<4, 4> mUnk19607c;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegistrationLocation& operator=(RegistrationLocation const&);
        RegistrationLocation(RegistrationLocation const&);
        RegistrationLocation();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GameEventListener>>                        mListener;
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mRegistration;
    ::ll::TypedStorage<8, 24, ::std::optional<::GameEventDynamicRegistration::RegistrationLocation>>
        mRegistrationLocation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onActorChangedChunk(::BlockSource const& region, ::ChunkPos toChunkPos, ::DimensionType toDimensionId);
    // NOLINTEND
};
