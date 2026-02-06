#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/objects/ActorShadowRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ChunkRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ClientRenderData.h"
#include "mc/deps/minecraft_renderer/objects/CloudRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/CrackRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/NameTagRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/ParticleRenderObjectCollection.h"
#include "mc/deps/minecraft_renderer/objects/SkyRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/ViewRenderData.h"
#include "mc/deps/minecraft_renderer/objects/WeatherRenderObject.h"

struct ViewRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 140, ::ViewRenderData>                    mViewData;
    ::ll::TypedStorage<1, 1, ::ClientRenderData>                    mClientData;
    ::ll::TypedStorage<8, 72, ::CloudRenderObject>                  mCloudState;
    ::ll::TypedStorage<8, 1424, ::ChunkRenderObjectCollection>      mChunksState;
    ::ll::TypedStorage<8, 128, ::ActorShadowRenderObjectCollection> mEntityShadowsState;
    ::ll::TypedStorage<8, 144, ::ParticleRenderObjectCollection>    mParticleState;
    ::ll::TypedStorage<8, 288, ::SkyRenderObject>                   mSkyState;
    ::ll::TypedStorage<8, 10848, ::WeatherRenderObject>             mWeatherState;
    ::ll::TypedStorage<8, 72, ::CrackRenderObjectCollection>        mCrackState;
    ::ll::TypedStorage<8, 40, ::NameTagRenderObjectCollection>      mNameTagState;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewRenderObject& operator=(ViewRenderObject const&);
    ViewRenderObject(ViewRenderObject const&);
    ViewRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewRenderObject(::ViewRenderObject&&);

    MCAPI ViewRenderObject(
        ::ViewRenderData&&                    viewData,
        ::ClientRenderData&&                  clientData,
        ::CloudRenderObject&&                 cloudState,
        ::ChunkRenderObjectCollection&&       chunkCollection,
        ::ActorShadowRenderObjectCollection&& entityShadowsCollection,
        ::ParticleRenderObjectCollection&&    particleCollection,
        ::SkyRenderObject&&                   skyState,
        ::WeatherRenderObject&&               weatherState,
        ::CrackRenderObjectCollection&&       crackState,
        ::NameTagRenderObjectCollection&&     nameTagState
    );

    MCAPI ~ViewRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ViewRenderObject&&);

    MCAPI void* $ctor(
        ::ViewRenderData&&                    viewData,
        ::ClientRenderData&&                  clientData,
        ::CloudRenderObject&&                 cloudState,
        ::ChunkRenderObjectCollection&&       chunkCollection,
        ::ActorShadowRenderObjectCollection&& entityShadowsCollection,
        ::ParticleRenderObjectCollection&&    particleCollection,
        ::SkyRenderObject&&                   skyState,
        ::WeatherRenderObject&&               weatherState,
        ::CrackRenderObjectCollection&&       crackState,
        ::NameTagRenderObjectCollection&&     nameTagState
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
