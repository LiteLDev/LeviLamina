#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
struct GameplayRelatedRenderData;
// clang-format on

class DataDrivenRendererV2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnka39496;
    ::ll::UntypedStorage<1, 1>  mUnkfd63fe;
    ::ll::UntypedStorage<1, 1>  mUnk148bd0;
    ::ll::UntypedStorage<8, 24> mUnk513695;
    ::ll::UntypedStorage<8, 24> mUnk7ff0e2;
    ::ll::UntypedStorage<8, 24> mUnkee45ef;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererV2& operator=(DataDrivenRendererV2 const&);
    DataDrivenRendererV2(DataDrivenRendererV2 const&);
    DataDrivenRendererV2();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint generateFrame(::GameplayRelatedRenderData const& renderData);

    MCNAPI void reserveActors(uint64 size);

    MCNAPI bool
    tryAddActor(::Actor& actor, ::std::shared_ptr<::ActorRenderer> const& renderer, ::ShadowContext shadowContext);

    MCNAPI ~DataDrivenRendererV2();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
