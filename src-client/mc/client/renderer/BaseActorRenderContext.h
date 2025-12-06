#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DataDrivenRenderer;
class HashedString;
class ScreenContext;
struct IClientInstance;
struct IMinecraftGame;
namespace mce { class TextureGroup; }
// clang-format on

class BaseActorRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk28862f;
    ::ll::UntypedStorage<4, 4>   mUnkdc17a2;
    ::ll::UntypedStorage<8, 8>   mUnk1cbbba;
    ::ll::UntypedStorage<8, 8>   mUnk630dbf;
    ::ll::UntypedStorage<8, 8>   mUnk5fa24e;
    ::ll::UntypedStorage<8, 8>   mUnk7a00ba;
    ::ll::UntypedStorage<8, 8>   mUnke970df;
    ::ll::UntypedStorage<8, 16>  mUnk628b75;
    ::ll::UntypedStorage<8, 8>   mUnk9ae890;
    ::ll::UntypedStorage<8, 8>   mUnk308efe;
    ::ll::UntypedStorage<8, 8>   mUnkc6e960;
    ::ll::UntypedStorage<8, 8>   mUnk82dcb0;
    ::ll::UntypedStorage<8, 8>   mUnk4d0f6e;
    ::ll::UntypedStorage<8, 8>   mUnkd55796;
    ::ll::UntypedStorage<8, 8>   mUnkb5dbb6;
    ::ll::UntypedStorage<1, 1>   mUnk1cb0b6;
    ::ll::UntypedStorage<8, 16>  mUnkabc0e6;
    ::ll::UntypedStorage<8, 48>  mUnkd9d5f7;
    ::ll::UntypedStorage<4, 12>  mUnk686fea;
    ::ll::UntypedStorage<4, 12>  mUnk7edc84;
    ::ll::UntypedStorage<4, 24>  mUnkd1bd3f;
    ::ll::UntypedStorage<4, 4>   mUnk396cc9;
    ::ll::UntypedStorage<4, 4>   mUnk86d3a6;
    ::ll::UntypedStorage<1, 1>   mUnk8f953d;
    ::ll::UntypedStorage<1, 1>   mUnk3d6352;
    ::ll::UntypedStorage<1, 1>   mUnkba8a1b;
    ::ll::UntypedStorage<1, 1>   mUnkef818f;
    ::ll::UntypedStorage<1, 1>   mUnk2468f7;
    ::ll::UntypedStorage<1, 1>   mUnkf93814;
    ::ll::UntypedStorage<8, 488> mUnk3b678e;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseActorRenderContext& operator=(BaseActorRenderContext const&);
    BaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseActorRenderContext();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseActorRenderContext(::BaseActorRenderContext const&);

    MCNAPI BaseActorRenderContext(
        ::ScreenContext&   screenContext,
        ::IClientInstance& clientInstance,
        ::IMinecraftGame&  minecraftGame
    );

    MCNAPI ::std::shared_ptr<::DataDrivenRenderer> getDataDrivenRenderer(::HashedString const& rendererName) const;

    MCNAPI float getFrameAlpha(::Actor const& actor) const;

    MCNAPI ::std::shared_ptr<::mce::TextureGroup> getTextureGroup();

    MCNAPI bool isDeferredUpscaling() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseActorRenderContext const&);

    MCNAPI void*
    $ctor(::ScreenContext& screenContext, ::IClientInstance& clientInstance, ::IMinecraftGame& minecraftGame);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
